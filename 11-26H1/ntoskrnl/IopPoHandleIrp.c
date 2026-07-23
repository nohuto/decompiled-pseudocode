/*
 * XREFs of IopPoHandleIrp @ 0x140480478
 * Callers:
 *     IopfCallDriver @ 0x140264B50 (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x1404804CC (PoHandleIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopPoHandleIrp(IRP *a1)
{
  if ( (unsigned __int8)PoHandleIrp(a1) )
    return 0LL;
  else
    return guard_dispatch_icall_no_overrides(a1->Tail.Overlay.CurrentStackLocation->DeviceObject, a1);
}
