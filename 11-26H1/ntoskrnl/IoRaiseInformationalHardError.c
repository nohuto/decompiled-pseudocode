/*
 * XREFs of IoRaiseInformationalHardError @ 0x1404DFC20
 * Callers:
 *     MiCauseOverCommitPopup @ 0x1404BC9D4 (MiCauseOverCommitPopup.c)
 *     DifIoRaiseInformationalHardErrorWrapper @ 0x14065D900 (DifIoRaiseInformationalHardErrorWrapper.c)
 *     FsRtlLogCcFlushError @ 0x140B57700 (FsRtlLogCcFlushError.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AD90 (KeInsertQueueApc.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoRaiseInformationalHardError(NTSTATUS ErrorStatus, PUNICODE_STRING String, PKTHREAD Thread)
{
  bool v6; // zf
  __int64 Pool2; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  void *v11; // rax
  void *v12; // rcx
  KIRQL v13; // si
  const void *v14; // rcx
  __int64 i; // rdi
  const void *v16; // rcx
  _QWORD *v17; // rax

  if ( !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  v6 = Thread
     ? (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) == 0
     : (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10) == 0;
  if ( !v6
    || ErrorStatus == 1073741848
    || ErrorStatus == -1073741283
    || ErrorStatus == -1073741500
    || !Thread && dword_140F853BC >= 25 )
  {
    return 0;
  }
  if ( dword_140F853DC > 25 )
    return 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  v9 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 0;
  *(_DWORD *)(Pool2 + 16) = ErrorStatus;
  if ( String && String->Length )
  {
    v11 = (void *)ExAllocatePool2(0x40uLL);
    if ( !v11 )
    {
LABEL_41:
      ExFreePoolWithTag(v9, 0);
      return 0;
    }
    *((_WORD *)v9 + 12) = String->Length;
    *((_WORD *)v9 + 13) = String->Length;
    v9[4] = v11;
    memmove(v11, String->Buffer, String->Length);
  }
  if ( !Thread )
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_140F853B0);
    if ( dword_140F853BC < 25
      && (!IopCurrentHardError
       || *((_DWORD *)v9 + 4) != *(_DWORD *)(IopCurrentHardError + 16)
       || ((v14 = (const void *)v9[4]) != 0LL || *(_QWORD *)(IopCurrentHardError + 32))
       && (*((_WORD *)v9 + 12) != *(_WORD *)(IopCurrentHardError + 24)
        || memcmp(v14, *(const void **)(IopCurrentHardError + 32), *((unsigned __int16 *)v9 + 12)))) )
    {
      for ( i = qword_140F853A0; (__int64 *)i != &qword_140F853A0; i = *(_QWORD *)i )
      {
        if ( *((_DWORD *)v9 + 4) == *(_DWORD *)(i + 16) )
        {
          v16 = (const void *)v9[4];
          if ( !v16 && !*(_QWORD *)(i + 32) )
            goto LABEL_40;
          if ( *((_WORD *)v9 + 12) == *(_WORD *)(i + 24)
            && !memcmp(v16, *(const void **)(i + 32), *((unsigned __int16 *)v9 + 12)) )
          {
            goto LABEL_40;
          }
        }
      }
      v17 = (_QWORD *)qword_140F853A8;
      if ( *(__int64 **)qword_140F853A8 != &qword_140F853A0 )
        __fastfail(3u);
      *v9 = &qword_140F853A0;
      v9[1] = v17;
      *v17 = v9;
      qword_140F853A8 = (__int64)v9;
      KeReleaseSemaphore(&byte_140F853B8, 0, 1, 0);
      if ( !byte_140F853D8 )
      {
        byte_140F853D8 = 1;
        ExQueueWorkItem(&qword_140F85380, DelayedWorkQueue);
      }
      KeReleaseSpinLock(&qword_140F853B0, v13);
      return 1;
    }
LABEL_40:
    KeReleaseSpinLock(&qword_140F853B0, v13);
    goto LABEL_23;
  }
  v10 = ExAllocatePool2(0x40uLL);
  if ( !v10 )
  {
LABEL_23:
    v12 = (void *)v9[4];
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_41;
  }
  _InterlockedIncrement(&dword_140F853DC);
  *(_WORD *)v10 = 18;
  *(_QWORD *)(v10 + 32) = PspUserApcKernelRoutine;
  *(_BYTE *)(v10 + 2) = 88;
  *(_QWORD *)(v10 + 48) = IopRaiseInformationalHardError;
  *(_WORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 8) = Thread;
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_QWORD *)(v10 + 56) = v9;
  *(_BYTE *)(v10 + 82) = 0;
  KeInsertQueueApc(v10, 0LL, 0LL, 0);
  return 1;
}
