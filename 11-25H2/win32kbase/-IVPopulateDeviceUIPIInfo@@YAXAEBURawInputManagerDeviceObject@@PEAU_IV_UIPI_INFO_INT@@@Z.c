/*
 * XREFs of ?IVPopulateDeviceUIPIInfo@@YAXAEBURawInputManagerDeviceObject@@PEAU_IV_UIPI_INFO_INT@@@Z @ 0x140219AD0
 * Callers:
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x140219E04 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSeri.c)
 * Callees:
 *     <none>
 */

void __fastcall IVPopulateDeviceUIPIInfo(const struct RawInputManagerDeviceObject *a1, struct _IV_UIPI_INFO_INT *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)a1 + 112);
  *((_DWORD *)a2 + 1) = *((_DWORD *)a1 + 113);
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 115);
}
