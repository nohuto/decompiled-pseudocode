/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x1409A6638
 * Callers:
 *     ExEnumerateSystemFirmwareTables @ 0x1408389C0 (ExEnumerateSystemFirmwareTables.c)
 *     ExGetSystemFirmwareTable @ 0x140838AC0 (ExGetSystemFirmwareTable.c)
 *     ExpGetSystemFlushInformation @ 0x140AFBD40 (ExpGetSystemFlushInformation.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x140B6B030 (ExpGetSystemPlatformBinary.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PsIsProcessAppContainer @ 0x1409A7110 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B48CF8 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(char *Src, char a2, unsigned int a3, _DWORD *a4)
{
  size_t v5; // r14
  int v8; // edi
  _DWORD *v9; // rbx
  _DWORD *v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _SINGLE_LIST_ENTRY *Next; // r14
  struct _SINGLE_LIST_ENTRY *i; // rcx
  struct _SINGLE_LIST_ENTRY *v14; // rdx
  int v15; // eax
  _DWORD *Pool2; // rax
  PVOID P; // [rsp+30h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-78h] BYREF
  PVOID *p_P; // [rsp+60h] [rbp-58h]
  __int64 v21; // [rsp+68h] [rbp-50h]

  v5 = a3;
  v8 = 0;
  v9 = 0LL;
  P = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v8 = -1073741820;
    goto LABEL_18;
  }
  v10 = Src;
  if ( !a2 )
    goto LABEL_3;
  Pool2 = (_DWORD *)ExAllocatePool2(0x101uLL);
  v9 = Pool2;
  P = Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741670;
    goto LABEL_18;
  }
  RtlCopyFromUser(Pool2, Src, v5);
  v10 = v9;
  if ( !(unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process)
    || *v9 == 1381190978 && (unsigned __int8)ExpFirmwareAccessAppContainerCheck(0LL) )
  {
LABEL_3:
    v10[3] = v5 - 16;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&ExpSysDbgLock.PriorityFloorCounts[24], 1u);
    Next = 0LL;
    for ( i = ExpSysDbgLock.IoSelfBoostsEntry.Next - 3; ; i = v14->Next - 3 )
    {
      v14 = i + 3;
      if ( &ExpSysDbgLock.IoSelfBoostsEntry == &i[3] )
        break;
      if ( LODWORD(i->Next) == *v10 )
      {
        Next = i[1].Next;
        break;
      }
    }
    if ( Next )
      v8 = guard_dispatch_icall_no_overrides((__int64)v10, (__int64)v14);
    ExReleaseResourceLite((PERESOURCE)&ExpSysDbgLock.PriorityFloorCounts[24]);
    KeLeaveCriticalRegion();
    if ( Next )
    {
      if ( a2 )
      {
        if ( v8 >= 0 )
          RtlCopyToUser(Src + 16, v9 + 4, (unsigned int)v9[3]);
        if ( (int)(v8 + 0x80000000) < 0 || v8 == -1073741789 )
          RtlWriteULongToUser((_DWORD *)Src + 3, v9[3]);
        v15 = v9[3];
      }
      else
      {
        v15 = v10[3];
      }
      *a4 = v15 + 16;
    }
    else
    {
      v8 = -1073741822;
    }
  }
  else
  {
    v8 = -1073741790;
    if ( (unsigned int)dword_140E06DC8 > 5 && tlgKeywordOn((__int64)&dword_140E06DC8, 0x200000000000LL) )
    {
      LODWORD(P) = *v9;
      p_P = &P;
      v21 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06DC8,
        (unsigned __int8 *)byte_140055FC1,
        0LL,
        0LL,
        3u,
        &v19);
    }
  }
LABEL_18:
  if ( v9 )
    ExFreePoolWithTag(v9, 0x54465241u);
  return (unsigned int)v8;
}
