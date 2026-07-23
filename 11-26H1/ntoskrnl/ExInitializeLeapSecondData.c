/*
 * XREFs of ExInitializeLeapSecondData @ 0x14083B934
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmSizeOfMdl @ 0x140481EB0 (MmSizeOfMdl.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateSection @ 0x140728900 (ZwCreateSection.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpReadLeapSecondData @ 0x14083C19C (ExpReadLeapSecondData.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSessionSpace @ 0x140988210 (MmMapViewInSessionSpace.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 ExInitializeLeapSecondData()
{
  int v0; // ebx
  PVOID v1; // r15
  size_t v2; // rsi
  __int64 Pool2; // rax
  struct _MDL *v4; // rdi
  __int16 v5; // dx
  __int16 v6; // cx
  _KWAIT_BLOCK *v7; // rdi
  LARGE_INTEGER MaximumSize; // [rsp+40h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+90h] [rbp+40h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+58h] BYREF

  MaximumSize.QuadPart = 4096LL;
  SectionHandle = 0LL;
  v0 = ZwCreateSection(&SectionHandle, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v0 >= 0 )
  {
    Object = 0LL;
    v0 = ObReferenceObjectByHandle(SectionHandle, 6u, MmSectionObjectType, 0, &Object, 0LL);
    if ( v0 >= 0 )
    {
      v1 = Object;
      MappedBase = 0LL;
      ViewSize = 0LL;
      v0 = MmMapViewInSessionSpace(Object, &MappedBase, &ViewSize);
      if ( v0 >= 0 )
      {
        v2 = ViewSize;
        MmSizeOfMdl(MappedBase, ViewSize);
        Pool2 = ExAllocatePool2(0x40uLL);
        v4 = (struct _MDL *)Pool2;
        if ( !Pool2 )
        {
LABEL_5:
          v0 = -1073741801;
          goto LABEL_9;
        }
        v5 = (__int16)MappedBase;
        v6 = (__int16)MappedBase;
        *(_QWORD *)Pool2 = 0LL;
        *(_WORD *)(Pool2 + 10) = 0;
        *(_DWORD *)(Pool2 + 40) = v2;
        *(_DWORD *)(Pool2 + 44) = v5 & 0xFFF;
        *(_WORD *)(Pool2 + 8) = 8 * (((v2 + (v6 & 0xFFF) + 4095LL) >> 12) + 6);
        *(_QWORD *)(Pool2 + 32) = (unsigned __int64)MappedBase & 0xFFFFFFFFFFFFF000uLL;
        v0 = MmProbeAndLockPagesEx(Pool2, 2uLL);
        if ( v0 >= 0 )
        {
          v7 = (_KWAIT_BLOCK *)MmMapLockedPagesSpecifyCache(v4, 0, MmCached, 0LL, 0, 0x40000010u);
          if ( !v7 )
            goto LABEL_5;
          MiRemoveFromSystemSpace((ULONG_PTR)MappedBase);
          *(_QWORD *)&PspSiloMonitorLock.ReservedPreviousReadyTimeValue = 0LL;
          PspSiloMonitorLock.SchedulerAssistLastYieldBoostTime = (__int64)v1;
          v0 = 0;
          memset_0(v7, 0, v2);
          ExpReadLeapSecondData(v7, 0LL);
          ExpSysDbgLock.WaitBlockList = v7;
        }
      }
    }
  }
LABEL_9:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  return (unsigned int)v0;
}
