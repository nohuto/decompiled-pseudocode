/*
 * XREFs of MiFlushAllFilesystemPages @ 0x1405343FC
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14029F764 (MiInPageSingleKernelStack.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTablePte @ 0x14032A730 (MiGetNextPageTablePte.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     CcForEachPartition @ 0x140259934 (CcForEachPartition.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiEmptyAllWorkingSets @ 0x1406FC690 (MiEmptyAllWorkingSets.c)
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
          result = (unsigned int)_InterlockedIncrement(&stru_140E2ED08.Timer.Header.LockNV);
          if ( (_DWORD)result != 1 )
            return result;
          MiEmptyAllWorkingSets(&MiSystemPartition);
        }
        _InterlockedIncrement((volatile signed __int32 *)&stru_140E37F48.SchedulerApc.SpareLong0);
        result = qword_140E3D9E0;
        if ( qword_140E3D910 != qword_140E3D9E0 )
        {
          Process_high = HIDWORD(stru_140E37F48.Process);
          for ( i = 0; i < 0xFF; ++i )
          {
            KeSetEvent((PRKEVENT)&stru_140E37F48.SchedulerApcFill5[8], 0, 0);
            CcForEachPartition((__int64)CcNotifyWriteBehindHelper, 2LL, 0, 0);
            result = qword_140E3D9E0;
            if ( qword_140E3D910 == qword_140E3D9E0 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
            result = HIDWORD(stru_140E37F48.Process);
            if ( Process_high != HIDWORD(stru_140E37F48.Process) )
              i = -1;
            if ( Process_high == HIDWORD(stru_140E37F48.Process) )
              result = Process_high;
            Process_high = result;
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)&stru_140E37F48.SchedulerApc.SpareLong0);
      }
    }
  }
  return result;
}
