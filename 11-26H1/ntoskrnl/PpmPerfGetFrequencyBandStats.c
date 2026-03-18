/*
 * XREFs of PpmPerfGetFrequencyBandStats @ 0x140AC9B88
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 */

__int64 __fastcall PpmPerfGetFrequencyBandStats(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 Prcb; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r9
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r8

  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  v4 = 0;
  if ( a1 )
  {
    v5 = qword_140E0B638[0];
    LOWORD(v6) = 0;
    while ( 1 )
    {
      while ( v5 )
      {
        _BitScanForward64(&v7, v5);
        v5 &= ~(1LL << v7);
        Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                         + 64 * (unsigned __int16)v6
                         + (unsigned int)(unsigned __int8)v7));
        v9 = *(_QWORD *)(Prcb + 35280);
        if ( v9 )
        {
          v10 = 48LL;
          v11 = 1152LL * (*(_BYTE *)(Prcb + 35352) != 0);
          v12 = v9 - v11 - a1;
          v13 = (_QWORD *)(v11 + a1);
          do
          {
            v14 = v13;
            v15 = 3LL;
            do
            {
              *v14 += *(_QWORD *)((char *)v14 + v12 + 248);
              v14 += 48;
              --v15;
            }
            while ( v15 );
            ++v13;
            --v10;
          }
          while ( v10 );
        }
      }
      v6 = (unsigned __int16)(v6 + 1);
      if ( (unsigned int)v6 >= LOWORD(PpmCheckRegistered[0]) )
        break;
      v5 = qword_140E0B638[v6];
    }
  }
  else
  {
    v4 = -1073741811;
  }
  PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  return v4;
}
