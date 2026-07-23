/*
 * XREFs of KeSynchronizeSecurityDomain @ 0x1404D6B28
 * Callers:
 *     PspCombineSecurityDomains @ 0x14091CFB8 (PspCombineSecurityDomains.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140253150 (KiIpiStallOnPacketTargetsPrcb.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSynchronizeSecurityDomainTarget @ 0x1405FBFE0 (KiSynchronizeSecurityDomainTarget.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeSynchronizeSecurityDomain(_KPROCESS *a1)
{
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int16 Count; // dx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // edi
  $B38C3B1372D6E954799962D5DD404846 *v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h]
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-B8h]
  struct _KAFFINITY_EX v17; // [rsp+50h] [rbp-B0h] BYREF

  memset_0(&v17.8, 0, sizeof(v17.8));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v2, 12LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)&v17.Count = 2097153LL;
  memset_0(&v17.8, 0, sizeof(v17.8));
  RtlpCopyAffinityEx(&v17, 0x20u, (struct _KAFFINITY_EX *)a1->ActiveProcessors);
  Count = v17.Count;
  v6 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + CurrentPrcb->Number) >> 6;
  if ( v17.Count > (unsigned int)v6 )
  {
    v7 = (unsigned int)v6;
    v8 = v17.Bitmap[v6];
    _bittestandreset64(
      (__int64 *)&v8,
      *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + CurrentPrcb->Number) & 0x3F);
    v17.Bitmap[v7] = v8;
    Count = v17.Count;
  }
  v9 = 0;
  if ( Count )
  {
    v10 = &v17.8;
    v11 = Count;
    do
    {
      v9 += __popcnt(v10->Bitmap[0]);
      v10 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v10 + 8);
      --v11;
    }
    while ( v11 );
  }
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
    KiSynchronizeSecurityDomainTarget(0LL, 0LL, 0LL, 0LL);
  if ( v9 )
  {
    v14 = 1LL;
    v16 = KiSynchronizeSecurityDomainTarget;
    v15 = 0LL;
    KiIpiSendRequest((__int64)KeGetCurrentPrcb(), 0LL, (char *)&v17, &v14, 5LL);
    KiIpiStallOnPacketTargetsPrcb(v13, (__int64)CurrentPrcb);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
