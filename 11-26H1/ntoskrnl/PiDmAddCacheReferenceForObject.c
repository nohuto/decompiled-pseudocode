/*
 * XREFs of PiDmAddCacheReferenceForObject @ 0x1409A9E30
 * Callers:
 *     PiPnpRtlEnsureObjectCached @ 0x1407A9DA8 (PiPnpRtlEnsureObjectCached.c)
 *     PiDmListInitEnumCallback @ 0x1407AA160 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140B43844 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x1403C2E00 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1404144B0 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409A9F94 (PiDmObjectManagerReleaseLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1409A9FC0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmInitializeComparisonObject @ 0x1409AA040 (PiDmInitializeComparisonObject.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409AA1AC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmObjectCreate @ 0x1409AB728 (PiDmObjectCreate.c)
 */

__int64 __fastcall PiDmAddCacheReferenceForObject(unsigned int a1, __int64 a2, _QWORD *a3)
{
  PVOID v6; // rbx
  _RTL_AVL_TABLE *ObjectManagerForObjectType; // r15
  int v8; // edi
  PVOID *v9; // rax
  PVOID P; // [rsp+30h] [rbp-79h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-71h] BYREF
  PVOID NodeOrParent; // [rsp+40h] [rbp-69h] BYREF
  _BYTE *Buffer; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v15[112]; // [rsp+50h] [rbp-59h] BYREF

  memset_0(v15, 0, sizeof(v15));
  NodeOrParent = 0LL;
  v6 = 0LL;
  Buffer = v15;
  SearchResult = TableEmptyTree;
  P = 0LL;
  ObjectManagerForObjectType = (_RTL_AVL_TABLE *)PiDmGetObjectManagerForObjectType(a1);
  PiDmObjectManagerAcquireExclusiveLock(ObjectManagerForObjectType);
  v8 = PiDmInitializeComparisonObject(a2, a1, v15);
  if ( v8 >= 0 )
  {
    v9 = (PVOID *)RtlLookupElementGenericTableFullAvl(
                    ObjectManagerForObjectType + 1,
                    &Buffer,
                    &NodeOrParent,
                    &SearchResult);
    if ( v9 && (v6 = *v9, (P = v6) != 0LL) )
    {
      ++*((_DWORD *)v6 + 3);
    }
    else
    {
      v8 = PiDmObjectCreate(a1, a2, &P);
      if ( v8 >= 0 )
      {
        if ( RtlInsertElementGenericTableFullAvl(
               ObjectManagerForObjectType + 1,
               &P,
               8u,
               0LL,
               NodeOrParent,
               SearchResult) )
        {
          v6 = P;
          *((_DWORD *)P + 3) = 1;
        }
        else
        {
          PiDmObjectRelease((unsigned int *)P);
          v6 = 0LL;
          v8 = -1073741670;
        }
      }
      else
      {
        v6 = P;
      }
    }
  }
  if ( a3 )
  {
    *a3 = v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  }
  PiDmObjectManagerReleaseLock(ObjectManagerForObjectType);
  return (unsigned int)v8;
}
