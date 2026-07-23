/*
 * XREFs of KiIpiTargetCall @ 0x1405FE1E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargets @ 0x140253B6C (KiIpiStallOnPacketTargets.c)
 *     KiIpiSendPacket @ 0x140491944 (KiIpiSendPacket.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiIpiTargetCall(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-148h] BYREF
  __int64 v11; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v12[264]; // [rsp+48h] [rbp-130h] BYREF

  v10 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 12LL;
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  if ( KeGetCurrentPrcb()->Number == a1 )
  {
    v10 = guard_dispatch_icall_no_overrides(a3, v7);
  }
  else
  {
    memset_0(v12, 0, 0x100uLL);
    v11 = 2097153LL;
    memset_0(v12, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&v11, a1);
    KiIpiSendPacket(0, (char *)&v11, (__int64)KiIpiTargetCallIpi, a2, a3, (__int64)&v10);
    KiIpiStallOnPacketTargets(v8);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v10;
}
