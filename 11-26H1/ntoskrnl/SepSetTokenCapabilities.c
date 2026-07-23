/*
 * XREFs of SepSetTokenCapabilities @ 0x1409E2C54
 * Callers:
 *     SepGetAnonymousToken @ 0x1403B321C (SepGetAnonymousToken.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140406710 (RtlSidHashInitialize.c)
 *     SepFreeTokenCapabilities @ 0x1404A0930 (SepFreeTokenCapabilities.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409E43BC (SepInsertOrReferenceSharedSidEntries.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409E4888 (RtlIsParentOfChildAppContainer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenCapabilities(__int64 a1, void *a2, __int64 a3, ULONG a4)
{
  __int64 Pool2; // rax
  void *v8; // r15
  int v9; // ebp
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rax
  _SID_AND_ATTRIBUTES *v13; // rbx
  int v14; // eax
  unsigned int v15; // ebp
  void *v16; // rcx

  if ( *(_QWORD *)(a1 + 792) )
  {
    if ( !a2 )
      return 3221225506LL;
    v16 = *(void **)(a1 + 784);
    if ( v16 )
    {
      if ( !RtlIsParentOfChildAppContainer(v16, a2) )
        return 3221225506LL;
    }
  }
  if ( a4 )
  {
    if ( a4 > 0x1000 )
      return 3221225485LL;
    if ( BYTE1(RtlpBootStatHandleLock.Queue) )
    {
      v9 = 32 * a4;
      goto LABEL_9;
    }
    Pool2 = ExAllocatePool2(0x100uLL);
    v8 = (void *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v9 = 0;
    v10 = SeCaptureSidAndAttributesArray(a3, a4, 0LL, Pool2, 8);
    ExFreePoolWithTag(v8, 0);
    result = 0LL;
    if ( v10 != -1073741789 )
      result = v10;
    if ( (int)result >= 0 )
    {
LABEL_9:
      v12 = ExAllocatePool2(0x100uLL);
      v13 = (_SID_AND_ATTRIBUTES *)v12;
      if ( v12 )
      {
        if ( BYTE1(RtlpBootStatHandleLock.Queue) )
          v14 = SepInsertOrReferenceSharedSidEntries(a3, v12, a4);
        else
          v14 = SeCaptureSidAndAttributesArray(a3, a4, 0LL, v12, v9);
        v15 = v14;
        if ( v14 < 0 )
        {
          ExFreePoolWithTag(v13, 0);
        }
        else
        {
          if ( *(_QWORD *)(a1 + 792) )
            SepFreeTokenCapabilities(a1);
          *(_QWORD *)(a1 + 792) = v13;
          *(_DWORD *)(a1 + 800) = a4;
          RtlSidHashInitialize(v13, a4, (PSID_AND_ATTRIBUTES_HASH)(a1 + 808));
        }
        return v15;
      }
      return 3221225626LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 792) )
      SepFreeTokenCapabilities(a1);
    *(_QWORD *)(a1 + 792) = 0LL;
    *(_DWORD *)(a1 + 800) = 0;
    memset_0((void *)(a1 + 808), 0, 0x110uLL);
    return 0LL;
  }
  return result;
}
