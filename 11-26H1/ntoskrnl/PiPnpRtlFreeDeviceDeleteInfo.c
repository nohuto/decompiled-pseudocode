/*
 * XREFs of PiPnpRtlFreeDeviceDeleteInfo @ 0x140B50F70
 * Callers:
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140777048 (PiPnpRtlGatherDeviceDeleteInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeDeviceDeleteInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x47706E50u);
}
