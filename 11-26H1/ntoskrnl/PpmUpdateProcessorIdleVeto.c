/*
 * XREFs of PpmUpdateProcessorIdleVeto @ 0x140606310
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmUpdateIdleVeto @ 0x140421540 (PpmUpdateIdleVeto.c)
 *     PpmEventProcessorVetoRequest @ 0x140611CF0 (PpmEventProcessorVetoRequest.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmUpdateProcessorIdleVeto(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // r14d
  struct _KPRCB *Prcb; // rsi
  int updated; // ebx
  KIRQL v5; // al
  _PPM_IDLE_STATES *IdleStates; // rdx
  KIRQL v7; // bp
  __int64 v9; // rax
  __int64 v10; // r9
  _BYTE v11[16]; // [rsp+20h] [rbp-148h] BYREF
  __int64 v12; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v13[264]; // [rsp+38h] [rbp-130h] BYREF

  v11[0] = 0;
  memset_0(v13, 0, 0x100uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  Prcb = (struct _KPRCB *)KeGetPrcb(ProcessorIndexFromNumber);
  if ( ProcessorIndexFromNumber == -1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    IdleStates = Prcb->PowerState.IdleStates;
    v7 = v5;
    if ( IdleStates )
    {
      v9 = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)v9 < IdleStates->ProcessorIdleCount )
      {
        updated = PpmUpdateIdleVeto(
                    *(_BYTE *)(a1 + 16),
                    *(_DWORD *)(a1 + 12),
                    (__int64)&IdleStates->State[v9].VetoAccounting,
                    v11);
        if ( updated >= 0 )
        {
          LOBYTE(v10) = *(_BYTE *)(a1 + 16);
          PpmEventProcessorVetoRequest(Prcb, *(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 12), v10);
          if ( v11[0] )
          {
            if ( Prcb != KeGetCurrentPrcb() )
            {
              KeReleaseSpinLock(&PpmIdleVetoLock, v7);
              v12 = 2097153LL;
              memset_0(v13, 0, 0x100uLL);
              KeAddProcessorAffinityEx((unsigned __int16 *)&v12, ProcessorIndexFromNumber);
              PopExecuteOnTargetProcessors((__int64)&v12, (__int64)HalSystemVectorDispatchEntry, 0LL, 0LL);
              return (unsigned int)updated;
            }
          }
        }
      }
      else
      {
        updated = -1073741811;
      }
    }
    else
    {
      updated = -1073741637;
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, v7);
  }
  return (unsigned int)updated;
}
