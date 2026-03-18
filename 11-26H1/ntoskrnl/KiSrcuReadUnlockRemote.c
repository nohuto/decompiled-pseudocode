/*
 * XREFs of KiSrcuReadUnlockRemote @ 0x1405F5A1C
 * Callers:
 *     KeSrcuReadUnlock @ 0x1405F51C0 (KeSrcuReadUnlock.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargets @ 0x14025220C (KiIpiStallOnPacketTargets.c)
 *     KiIpiSendPacket @ 0x140497DF4 (KiIpiSendPacket.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeSrcuReadUnlock @ 0x1405F51C0 (KeSrcuReadUnlock.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall KiSrcuReadUnlockRemote(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ebp
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // rcx
  __int64 result; // rax

  v3 = (unsigned __int16)*a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->Number == v3 )
  {
    KeSrcuReadUnlock(a1, a2);
  }
  else
  {
    *(_QWORD *)&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
    memset_0(&CurrentPrcb->StaticAffinity.KeRcuAffinity.8, 0, sizeof(CurrentPrcb->StaticAffinity.KeRcuAffinity.8));
    KeAddProcessorAffinityEx(&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count, v3);
    KiIpiSendPacket(0, (char *)&CurrentPrcb->StaticAffinity, (__int64)KiSrcuReadUnlockIpi, a1, (__int64)a2, 0LL);
    KiIpiStallOnPacketTargets(v7);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
