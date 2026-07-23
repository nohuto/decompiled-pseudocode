/*
 * XREFs of IommupDeviceRegisterFaultCallback @ 0x1405A2DB0
 * Callers:
 *     IommuSetDeviceFaultReportingEx @ 0x1405A21F0 (IommuSetDeviceFaultReportingEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IommupDeviceRegisterFaultCallback(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  unsigned __int8 CurrentIrql; // bl

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 416));
  if ( *(_QWORD *)(a1 + 96) )
  {
    v4 = -1073740008;
  }
  else if ( *a2 )
  {
    *(_QWORD *)(a1 + 96) = *a2;
    *(_QWORD *)(a1 + 104) = a2[1];
  }
  else
  {
    v4 = -1073741584;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 416));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v4;
}
