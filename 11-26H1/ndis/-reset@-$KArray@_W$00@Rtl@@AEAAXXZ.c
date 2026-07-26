/*
 * XREFs of ?reset@?$KArray@_W$00@Rtl@@AEAAXXZ @ 0x140001C00
 * Callers:
 *     ndisEtwCaptureMiniportEventLog @ 0x1400987A4 (ndisEtwCaptureMiniportEventLog.c)
 *     ndisEtwCaptureMiniportFilterList @ 0x1400988D4 (ndisEtwCaptureMiniportFilterList.c)
 *     ndisEtwCaptureMiniportMatchingHardwareId @ 0x140098A78 (ndisEtwCaptureMiniportMatchingHardwareId.c)
 *     ndisEtwCaptureMiniportProtocolList @ 0x140098BD0 (ndisEtwCaptureMiniportProtocolList.c)
 *     ndisEtwWriteMiniportRundown @ 0x140099298 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall Rtl::KArray<wchar_t,1>::reset(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    a1[1] = 0LL;
    *a1 = 0LL;
  }
}
