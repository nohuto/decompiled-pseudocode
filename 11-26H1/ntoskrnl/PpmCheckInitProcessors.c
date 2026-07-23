/*
 * XREFs of PpmCheckInitProcessors @ 0x140AEB890
 * Callers:
 *     PopNewProcessorCallback @ 0x1407CB5A0 (PopNewProcessorCallback.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x14047DCB0 (KeQueryActiveProcessorAffinity2.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B5534 (PpmCheckApplyParkConstraints.c)
 *     PpmParkRegisterParking @ 0x1406130BC (PpmParkRegisterParking.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmAllocatePerfCheck @ 0x1407D9270 (PpmAllocatePerfCheck.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AEBAB8 (PpmHvEnableQosEnlightenment.c)
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 *     PpmUpdateProcessorPolicy @ 0x140AF0768 (PpmUpdateProcessorPolicy.c)
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
    PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v4, v5);
    KeQueryActiveProcessorAffinity2((__int64)&v15);
    if ( !(unsigned __int8)RtlSubtractAffinityEx(&v15, &PpmCheckRegistered, (__int64)&v15) )
      return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  }
  RtlOrAffinityEx(&PpmCheckRegistered, &v15, (__int64)&PpmCheckRegistered);
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
    PpmAllowedActions |= 0x400u;
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
    return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  }
LABEL_24:
  PpmCheckReInit();
  PpmCheckApplyParkConstraints();
  return PpmHvEnableQosEnlightenment();
}
