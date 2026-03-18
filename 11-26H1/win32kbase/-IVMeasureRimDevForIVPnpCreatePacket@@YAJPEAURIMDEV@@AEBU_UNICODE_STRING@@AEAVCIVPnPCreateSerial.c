/*
 * XREFs of ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x14021E468
 * Callers:
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x140221C60 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z @ 0x140226580 (-Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x14022663C (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1402266D4 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

int __fastcall IVMeasureRimDevForIVPnpCreatePacket(
        struct RIMDEV *a1,
        const struct _UNICODE_STRING *a2,
        struct CIVPnPCreateSerializer *a3)
{
  __int64 v3; // rsi
  int result; // eax

  v3 = *((_QWORD *)a3 + 2);
  result = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 8), (const struct _UNICODE_STRING *)a1 + 12, 1);
  if ( result >= 0 )
  {
    result = CIVSerializer::Serialize(a3, (void **)(v3 + 72), *((void *const *)a1 + 38), *((unsigned int *)a1 + 78), 1);
    if ( result >= 0 )
    {
      if ( *((_DWORD *)a1 + 12) != 2 )
        return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 1);
      result = CIVPnPCreateSerializer::Serialize(
                 a3,
                 (struct _IV_HID_DEVICE_INFO *)(v3 + 88),
                 (struct RIMDEV *)((char *)a1 + 440),
                 1);
      if ( result >= 0 )
        return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 1);
    }
  }
  return result;
}
