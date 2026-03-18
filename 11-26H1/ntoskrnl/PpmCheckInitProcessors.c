/*
 * XREFs of PpmCheckInitProcessors @ 0x140A9CBF0
 * Callers:
 *     PopNewProcessorCallback @ 0x1407C8540 (PopNewProcessorCallback.c)
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     RtlOrAffinityEx @ 0x14025A978 (RtlOrAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140428780 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x140484340 (KeQueryActiveProcessorAffinity2.c)
 *     PpmCheckApplyParkConstraints @ 0x1404BBD54 (PpmCheckApplyParkConstraints.c)
 *     PpmParkRegisterParking @ 0x14060FE58 (PpmParkRegisterParking.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PpmAllocatePerfCheck @ 0x1407D60C0 (PpmAllocatePerfCheck.c)
 *     PpmHvEnableQosEnlightenment @ 0x140A9CE18 (PpmHvEnableQosEnlightenment.c)
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 *     PpmUpdateProcessorPolicy @ 0x140A9D7C8 (PpmUpdateProcessorPolicy.c)
 */

LONG __fastcall PpmCheckInitProcessors(int a1, int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r8d
  unsigned __int16 Count; // dx
  unsigned __int16 i; // cx
  unsigned __int16 j; // cx
  unsigned __int16 k; // cx
  __int64 Prcb; // rax
  unsigned int v12; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h]
  struct _KAFFINITY_EX v15; // [rsp+48h] [rbp-C0h] BYREF

  v14 = 0LL;
  v12 = 0;
  v13 = 0LL;
  memset_0(&v15.8, 0, sizeof(v15.8));
  *(_QWORD *)&v15.Count = 2097153LL;
  memset_0(&v15.8, 0, sizeof(v15.8));
  if ( !a1 )
  {
    PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, v4, v5);
    KeQueryActiveProcessorAffinity2((__int64)&v15);
    if ( !(unsigned __int8)RtlSubtractAffinityEx(&v15, (struct _KAFFINITY_EX *)PpmCheckRegistered, (__int64)&v15) )
      return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  }
  RtlOrAffinityEx((struct _KAFFINITY_EX *)PpmCheckRegistered, &v15, (__int64)PpmCheckRegistered);
  Count = v15.Count;
  for ( i = 0; i < v15.Count; ++i )
  {
    if ( v15.Bitmap[i] )
    {
      *((_QWORD *)&v13 + 1) = v15.Bitmap[0];
      *(_QWORD *)&v13 = &v15;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v12, (unsigned __int16 **)&v13) )
      {
        Prcb = KeGetPrcb(v12);
        PpmAllocatePerfCheck(Prcb + 35264);
      }
      PopExecuteOnTargetProcessors((__int64)&v15, (__int64)PpmCheckProcessorInit, 0LL, 0LL);
      Count = v15.Count;
      break;
    }
  }
  for ( j = 0; j < Count; ++j )
  {
    if ( v15.Bitmap[j] )
      goto LABEL_23;
  }
  if ( !a2 )
    goto LABEL_11;
LABEL_23:
  PpmParkRegisterParking();
LABEL_11:
  if ( _bittest64((const signed __int64 *)&KeGetCurrentPrcb()->FeatureBits, 0x27u) )
  {
    stru_140F11D08.SchedulerAssistPriorityFloor |= 0x400u;
    v12 = 1024;
    PpmUpdateProcessorPolicy(&v12, 0LL);
  }
  for ( k = 0; k < v15.Count; ++k )
  {
    if ( v15.Bitmap[k] )
      goto LABEL_24;
  }
  if ( !a2 )
  {
    PpmHvEnableQosEnlightenment();
    return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  }
LABEL_24:
  PpmCheckReInit();
  PpmCheckApplyParkConstraints();
  return PpmHvEnableQosEnlightenment();
}
