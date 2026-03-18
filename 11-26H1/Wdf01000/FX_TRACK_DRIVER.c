/*
 * XREFs of FX_TRACK_DRIVER @ 0x140058B50
 * Callers:
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1400586A8 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1400587F0 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_QWORD *)((unsigned int)(unk_1400C9080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C9070) = FxDriverGlobals;
}
