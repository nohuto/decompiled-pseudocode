/*
 * XREFs of PoExecuteIdleCheck @ 0x1404F04E4
 * Callers:
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     HalRequestIpi @ 0x1403EC520 (HalRequestIpi.c)
 *     PpmGetIdleConstrainedMask @ 0x140523230 (PpmGetIdleConstrainedMask.c)
 *     PpmEventAffinityMask @ 0x14060DE10 (PpmEventAffinityMask.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PoExecuteIdleCheck(_KAFFINITY_EX *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v5; // rdx
  unsigned int v6; // r14d
  struct _KPRCB *Prcb; // rax
  unsigned __int16 j; // cx
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v10[33]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v12[33]; // [rsp+150h] [rbp+48h] BYREF

  memset_0(v12, 0, 0x100uLL);
  memset_0(v10, 0, 0x100uLL);
  v11 = 2097153LL;
  result = (__int64)memset_0(v12, 0, 0x100uLL);
  if ( PpmIdleDurationExpirationTimeout )
  {
    if ( (char *)stru_140FC01F0.Affinity + PpmIdleDurationExpirationTimeout < (char *)a1 )
    {
      result = PpmGetIdleConstrainedMask(&v11);
      if ( (_BYTE)result )
      {
        stru_140FC01F0.Affinity = a1;
        v9 = 2097153LL;
        memset_0(v10, 0, 0x100uLL);
        v3 = v12[0];
        for ( i = 0; ; v3 = v12[i] )
        {
          while ( v3 )
          {
            _BitScanForward64(&v5, v3);
            v3 &= ~(1LL << v5);
            v6 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                 + 64 * i
                 + (unsigned __int8)v5);
            Prcb = (struct _KPRCB *)KeGetPrcb(v6);
            if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= (unsigned __int64)a1 )
              KeAddProcessorAffinityEx((unsigned __int16 *)&v9, v6);
          }
          result = ++i;
          if ( i >= (unsigned int)(unsigned __int16)v11 )
            break;
        }
        for ( j = 0; j < (unsigned __int16)v9; ++j )
        {
          result = j;
          if ( v10[j] )
          {
            PpmEventAffinityMask(&PPM_ETW_IDLE_DURATION_EXPIRATION);
            return HalRequestIpi(0, (__int64)&v9);
          }
        }
      }
    }
  }
  return result;
}
