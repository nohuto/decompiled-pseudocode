/*
 * XREFs of MiFlushAllFilesystemPages @ 0x140531F5C
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1402A0214 (MiInPageSingleKernelStack.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTablePte @ 0x140328700 (MiGetNextPageTablePte.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiReadPagefilePage @ 0x1406E4AA0 (MiReadPagefilePage.c)
 *     MiShutdownSystem @ 0x140C0025C (MiShutdownSystem.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     CcForEachPartition @ 0x140258154 (CcForEachPartition.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiEmptyAllWorkingSets @ 0x1406F79C4 (MiEmptyAllWorkingSets.c)
 */

unsigned __int64 __fastcall MiFlushAllFilesystemPages(int a1)
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int Process_high; // edi
  unsigned int i; // ebx

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x1000) == 0 )
    {
      result = (unsigned __int64)CurrentThread[1].ApcState.ApcListHead[0].Blink;
      if ( (__int64 (__fastcall *)(__int64 *, __int64, __int64, struct _KLOCK_ENTRIES *))result != MiModifiedPageWriter
        && (__int64 (__fastcall *)(__int64))result != MiMappedPageWriter )
      {
        if ( a1 == 1 )
        {
          result = (unsigned int)_InterlockedIncrement(&stru_140E2EB88.Timer.Header.LockNV);
          if ( (_DWORD)result != 1 )
            return result;
          MiEmptyAllWorkingSets(&MiSystemPartition);
        }
        _InterlockedIncrement((volatile signed __int32 *)&stru_140E37DC8.SchedulerApc.SpareLong0);
        result = qword_140E3D860;
        if ( qword_140E3D790 != qword_140E3D860 )
        {
          Process_high = HIDWORD(stru_140E37DC8.Process);
          for ( i = 0; i < 0xFF; ++i )
          {
            KeSetEvent((PRKEVENT)&stru_140E37DC8.SchedulerApcFill5[8], 0, 0);
            CcForEachPartition((__int64)CcNotifyWriteBehindHelper, 2LL, 0, 0);
            result = qword_140E3D860;
            if ( qword_140E3D790 == qword_140E3D860 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
            result = HIDWORD(stru_140E37DC8.Process);
            if ( Process_high != HIDWORD(stru_140E37DC8.Process) )
              i = -1;
            if ( Process_high == HIDWORD(stru_140E37DC8.Process) )
              result = Process_high;
            Process_high = result;
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)&stru_140E37DC8.SchedulerApc.SpareLong0);
      }
    }
  }
  return result;
}
