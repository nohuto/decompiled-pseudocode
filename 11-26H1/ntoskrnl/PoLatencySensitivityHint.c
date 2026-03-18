/*
 * XREFs of PoLatencySensitivityHint @ 0x140530410
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A9CFA0 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1404891E8 (PpmInterlockedUpdateTimeNoFence.c)
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 *     PpmTryAcquireLock @ 0x1404C8FF4 (PpmTryAcquireLock.c)
 *     PpmEventTraceLatencySensitivityHint @ 0x1404CBF64 (PpmEventTraceLatencySensitivityHint.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  unsigned int v2; // eax
  __int64 *v3; // r9
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // r11
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  _KTRAP_FRAME *v8; // [rsp+38h] [rbp+10h] BYREF
  _KTRAP_FRAME *v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( a1 != 4 || !LOBYTE(stru_140F11D08.UserWaitTime) )
  {
    v2 = 0;
    v3 = &PpmCurrentProfile[89 * dword_140F106CC];
    while ( v2 < 3 )
    {
      if ( *((_BYTE *)v3 + v2 + 177) || *((_DWORD *)v3 + v2 + 45) )
      {
        PpmEventTraceLatencySensitivityHint(a1);
        v9 = 0LL;
        v6 = PpmInterlockedUpdateTimeNoFence(
               (volatile signed __int64 *)stru_140F11D08.Spare35,
               (unsigned __int64)PopSleepstudySessionLock.FirstArgument + MEMORY[0xFFFFF78000000008],
               (unsigned __int64 *)&v8) != 0;
        if ( a1 == 4
          && PpmInterlockedUpdateTimeNoFence(
               (volatile signed __int64 *)&stru_140F11D08.KernelShadowStack,
               v4,
               (unsigned __int64 *)&v9)
          || v6 )
        {
          _InterlockedOr(v7, 0);
          if ( a1 == 4 && v9 <= PopSleepstudySessionLock.TrapFrame || v8 <= PopSleepstudySessionLock.TrapFrame )
          {
            if ( PpmTryAcquireLock(v5) )
            {
              PpmCheckCustomRun(3LL);
            }
            else if ( !_InterlockedExchange((_DWORD *)&stru_140F11D08.UserWaitTime + 1, 1) )
            {
              ExQueueWorkItem(
                (PWORK_QUEUE_ITEM)&stru_140F11D08.KernelShadowStackBase,
                CustomPriorityWorkQueue|NormalWorkQueue|0x18);
            }
          }
        }
        return;
      }
      ++v2;
    }
  }
}
