/*
 * XREFs of KiAddProcessorToSoftwareInterruptBatch @ 0x140247840
 * Callers:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021FEA0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAddProcessorToSoftwareInterruptBatch(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // r10d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8

  result = *(unsigned __int8 *)(a1 + 1);
  if ( !(_BYTE)result )
  {
    *(_BYTE *)(a1 + 1) = 1;
    result = *(unsigned int *)(a2 + 36);
    *(_DWORD *)(a1 + 4) = result;
    return result;
  }
  if ( (_BYTE)result != 1 )
    goto LABEL_8;
  result = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)result == *(_DWORD *)(a2 + 36) )
    return result;
  *(_BYTE *)(a1 + 1) = 2;
  v4 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + (unsigned int)result) & 0x3F;
  v5 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + (unsigned int)result) >> 6;
  if ( *(unsigned __int16 *)(a1 + 8) <= (unsigned int)v5 )
  {
    result = *(unsigned __int16 *)(a1 + 10);
    if ( (unsigned int)result <= (unsigned int)v5 )
      goto LABEL_8;
    *(_WORD *)(a1 + 8) = v5 + 1;
  }
  v6 = a1 + 8 * v5;
  result = v4;
  v7 = *(_QWORD *)(v6 + 16);
  _bittestandset64(&v7, v4);
  *(_QWORD *)(v6 + 16) = v7;
LABEL_8:
  v8 = *(unsigned __int8 *)(a2 + 208);
  v9 = *(_QWORD *)(a2 + 200);
  if ( *(_WORD *)(a1 + 8) > (unsigned __int16)v8 )
  {
LABEL_9:
    *(_QWORD *)(a1 + 8 * v8 + 16) |= v9;
    return result;
  }
  if ( *(_WORD *)(a1 + 10) > (unsigned __int16)v8 )
  {
    result = (unsigned int)(v8 + 1);
    *(_WORD *)(a1 + 8) = v8 + 1;
    goto LABEL_9;
  }
  return result;
}
