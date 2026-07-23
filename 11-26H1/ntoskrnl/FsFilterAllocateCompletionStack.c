/*
 * XREFs of FsFilterAllocateCompletionStack @ 0x140454D68
 * Callers:
 *     FsFilterCtrlInit @ 0x140454CD0 (FsFilterCtrlInit.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall FsFilterAllocateCompletionStack(__int64 a1, char a2)
{
  _QWORD *v4; // rdi
  unsigned int *p_SchedulerAssistYieldCounter; // rsi
  __int64 Pool2; // rbp
  __int64 result; // rax

  v4 = 0LL;
  p_SchedulerAssistYieldCounter = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
    goto LABEL_2;
  if ( !a2 )
  {
    if ( *(unsigned __int8 *)(a1 + 4) != 250 )
    {
      if ( *(unsigned __int8 *)(a1 + 4) == 251 )
        goto LABEL_11;
      if ( *(unsigned __int8 *)(a1 + 4) != 252 )
      {
        if ( *(unsigned __int8 *)(a1 + 4) == 253 )
          goto LABEL_11;
        if ( *(unsigned __int8 *)(a1 + 4) != 254 )
        {
          if ( *(unsigned __int8 *)(a1 + 4) != 255 )
          {
LABEL_13:
            KeWaitForSingleObject(p_SchedulerAssistYieldCounter, Executive, 0, 0, 0LL);
            Pool2 = (__int64)(v4 + 1);
            *v4 = KeGetCurrentThread();
            memset_0(v4 + 1, 0, 0x3C8uLL);
            *(_DWORD *)(a1 + 64) |= 2u;
LABEL_2:
            *(_DWORD *)(a1 + 64) |= 1u;
            result = 0LL;
            *(_QWORD *)(a1 + 80) = Pool2;
            return result;
          }
LABEL_11:
          v4 = AcquireOpsReservePool;
          p_SchedulerAssistYieldCounter = (unsigned int *)&VslpReservedTransferLock.Padding[2];
          goto LABEL_13;
        }
      }
    }
    v4 = (_QWORD *)VslpReservedTransferLock.Padding[1];
    p_SchedulerAssistYieldCounter = &VslpReservedTransferLock.SchedulerAssistYieldCounter;
    goto LABEL_13;
  }
  return 3221225626LL;
}
