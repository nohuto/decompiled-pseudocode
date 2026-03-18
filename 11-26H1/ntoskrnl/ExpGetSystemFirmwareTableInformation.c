/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x1409D5658
 * Callers:
 *     ExEnumerateSystemFirmwareTables @ 0x140832780 (ExEnumerateSystemFirmwareTables.c)
 *     ExGetSystemFirmwareTable @ 0x140832880 (ExGetSystemFirmwareTable.c)
 *     ExpGetSystemFlushInformation @ 0x140AF98B4 (ExpGetSystemFlushInformation.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x140B680A0 (ExpGetSystemPlatformBinary.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     PsIsProcessAppContainer @ 0x1409D6220 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B46CC8 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(char *Src, char a2, unsigned int a3, _DWORD *a4)
{
  size_t v5; // r14
  int v8; // edi
  _DWORD *v9; // rbx
  _DWORD *v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *v12; // r14
  struct _LIST_ENTRY **i; // rcx
  _QWORD *v14; // rdx
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
    ExAcquireResourceSharedLite((PERESOURCE)&ExpSysDbgLock.792, 1u);
    v12 = 0LL;
    for ( i = &ExpSysDbgLock.ThreadListEntry.Flink[-2].Blink; ; i = (struct _LIST_ENTRY **)(*v14 - 24LL) )
    {
      v14 = i + 3;
      if ( &ExpSysDbgLock.ThreadListEntry == (_LIST_ENTRY *)(i + 3) )
        break;
      if ( *(_DWORD *)i == *v10 )
      {
        v12 = i[1];
        break;
      }
    }
    if ( v12 )
      v8 = guard_dispatch_icall_no_overrides((__int64)v10, (__int64)v14);
    ExReleaseResourceLite((PERESOURCE)&ExpSysDbgLock.792);
    KeLeaveCriticalRegion();
    if ( v12 )
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
        (unsigned __int8 *)&word_140054FCE,
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
