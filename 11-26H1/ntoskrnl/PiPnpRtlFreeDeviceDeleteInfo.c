/*
 * XREFs of PiPnpRtlFreeDeviceDeleteInfo @ 0x140B53808
 * Callers:
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140779EF0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeDeviceDeleteInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x47706E50u);
}
