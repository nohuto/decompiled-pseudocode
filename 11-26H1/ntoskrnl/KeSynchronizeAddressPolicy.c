/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x1404C5F18
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1409E7AE4 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140253150 (KiIpiStallOnPacketTargetsPrcb.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1404C60E0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall KeSynchronizeAddressPolicy(__int64 a1)
{
  void *result; // rax
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int16 Count; // dx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  int v10; // edi
  $B38C3B1372D6E954799962D5DD404846 *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h]
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-B8h]
  struct _KAFFINITY_EX v17; // [rsp+50h] [rbp-B0h] BYREF

  result = memset_0(&v17.8, 0, sizeof(v17.8));
  if ( *(_BYTE *)(a1 + 352) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 12 )
      __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v3, 12LL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    *(_QWORD *)&v17.Count = 2097153LL;
    memset_0(&v17.8, 0, sizeof(v17.8));
    RtlpCopyAffinityEx(&v17, 0x20u, *(struct _KAFFINITY_EX **)(a1 + 128));
    Count = v17.Count;
    v7 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + CurrentPrcb->Number) >> 6;
    if ( v17.Count > (unsigned int)v7 )
    {
      v8 = (unsigned int)v7;
      v9 = v17.Bitmap[v7];
      _bittestandreset64(
        (__int64 *)&v9,
        *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + CurrentPrcb->Number) & 0x3F);
      v17.Bitmap[v8] = v9;
      Count = v17.Count;
    }
    v10 = 0;
    if ( Count )
    {
      v11 = &v17.8;
      v12 = Count;
      do
      {
        v10 += __popcnt(v11->Bitmap[0]);
        v11 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v11 + 8);
        --v12;
      }
      while ( v12 );
    }
    KiSynchronizeAddressPolicyTarget(0LL, 0LL, 0LL, 0LL);
    if ( v10 )
    {
      v14 = 1LL;
      v16 = KiSynchronizeAddressPolicyTarget;
      v15 = 0LL;
      KiIpiSendRequest((__int64)KeGetCurrentPrcb(), 0LL, (char *)&v17, &v14, 5LL);
      KiIpiStallOnPacketTargetsPrcb(v13, (__int64)CurrentPrcb);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = (void *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
