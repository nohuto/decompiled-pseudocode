/*
 * XREFs of PpmPerfRegisterHvPerfStateCounters @ 0x1407E6DF0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1402F31A0 (HvlGetLpIndexFromProcessorIndex.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1405C1DC4 (HvlRegisterPerfFeedbackCounters.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 */

__int64 __fastcall PpmPerfRegisterHvPerfStateCounters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned int v5; // r15d
  unsigned int i; // edi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // edx
  int LpIndexFromProcessorIndex; // ebx
  unsigned int v12; // esi
  int v13; // ebx

  if ( (HvlEnlightenments & 0x400) == 0 )
    return (unsigned int)-1073741637;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(v3 + 16);
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  for ( i = 0; i < v5; ++i )
  {
    v7 = *(_QWORD *)(v3 + 576);
    v8 = 0LL;
    v9 = 32LL * i;
    v10 = *(_DWORD *)(v9 + v7 + 28);
    if ( v10 == 1 )
    {
      LpIndexFromProcessorIndex = *(_DWORD *)(v9 + v7);
    }
    else
    {
      if ( v10 == 2 )
        continue;
      v12 = *(_DWORD *)(v9 + v7);
      if ( v12 == -1 )
      {
        v13 = -1073741811;
LABEL_16:
        PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
        return (unsigned int)v13;
      }
      LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(v12);
      v8 = KeGetPrcb(v12) + 34880;
    }
    if ( v4 )
    {
      if ( LpIndexFromProcessorIndex != -1 )
      {
        v13 = HvlRegisterPerfFeedbackCounters(LpIndexFromProcessorIndex, v4 + 104LL * i);
        if ( v13 < 0 )
          goto LABEL_16;
      }
    }
    if ( v8 )
      *(_DWORD *)(v8 + 240) = 3;
  }
  return (unsigned int)PpmRegisterPerfStates(v3, 1);
}
