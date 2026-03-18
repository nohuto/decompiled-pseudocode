/*
 * XREFs of PpmParkUnblockIdle @ 0x1404A1F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlCountSetBitsAffinityEx @ 0x140251920 (RtlCountSetBitsAffinityEx.c)
 *     PpmCheckQueuePhaseActions @ 0x140252698 (PpmCheckQueuePhaseActions.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void PpmParkUnblockIdle()
{
  unsigned __int64 v0; // rdi
  __int64 v1; // rbx
  unsigned __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rsi
  unsigned int v5; // r8d

  if ( PopModernStandbyStateNotify.ReadyTime )
  {
    v0 = qword_140E0BB18;
    LOWORD(v1) = 0;
    while ( 1 )
    {
      while ( v0 )
      {
        _BitScanForward64(&v2, v0);
        v3 = (unsigned __int16)v1 << 6;
        v0 &= ~(1LL << v2);
        v4 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
             + (unsigned int)(unsigned __int8)v2
             + v3);
        if ( !*(_BYTE *)(KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                                   + (unsigned int)(unsigned __int8)v2
                                   + v3))
                       + 34969) )
        {
          v5 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * v4);
          if ( LOWORD(PpmPerfNewUnparkedMask[0]) > v5 >> 6 )
            PpmPerfNewUnparkedMask[(v5 >> 6) + 1] &= ~(1LL << (v5 & 0x3F));
        }
      }
      v1 = (unsigned __int16)(v1 + 1);
      if ( (unsigned int)v1 >= LOWORD(PpmPerfNewUnparkedMask[0]) )
        break;
      v0 = PpmPerfNewUnparkedMask[v1 + 1];
    }
    if ( (unsigned int)RtlCountSetBitsAffinityEx((unsigned __int16 *)PpmPerfNewUnparkedMask) )
    {
      PpmCheckQueuePhaseActions((__int64)PpmPerfNewUnparkedMask, 6);
      PpmPerfNewUnparkedMask[0] = 2097153LL;
      memset_0(&qword_140E0BB18, 0, 0x100uLL);
    }
  }
}
