/*
 * XREFs of RaForwardPowerIrp @ 0x140091D40
 * Callers:
 *     RaidAdapterPowerIrp @ 0x14002E3C0 (RaidAdapterPowerIrp.c)
 *     NvmeAdapterPowerIrp @ 0x1400DAD68 (NvmeAdapterPowerIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 */

NTSTATUS __fastcall RaForwardPowerIrp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  PoStartNextPowerIrp(a2);
  return RaForwardIrp(a1, a2);
}
