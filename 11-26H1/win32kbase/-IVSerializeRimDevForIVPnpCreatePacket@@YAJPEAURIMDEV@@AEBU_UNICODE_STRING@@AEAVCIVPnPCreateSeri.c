/*
 * XREFs of ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAVCIVPnPCreateSerializer@@@Z @ 0x14021E74C
 * Callers:
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x140221C60 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z @ 0x140226580 (-Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x14022663C (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1402266D4 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

int __fastcall IVSerializeRimDevForIVPnpCreatePacket(
        struct RIMDEV *a1,
        const struct _UNICODE_STRING *a2,
        struct CIVPnPCreateSerializer *a3)
{
  __int64 v3; // rbx
  int result; // eax
  _DWORD *v8; // rcx
  int v9; // ecx
  int v10; // ecx

  v3 = *((_QWORD *)a3 + 2);
  *(_DWORD *)v3 = 1;
  result = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 8), (const struct _UNICODE_STRING *)a1 + 12, 0);
  if ( result < 0 )
    return result;
  *(_DWORD *)(v3 + 24) = *((_DWORD *)a1 + 12);
  *(_DWORD *)(v3 + 28) = -__CFSHR__(*((_DWORD *)a1 + 42), 14);
  *(_DWORD *)(v3 + 32) = -__CFSHR__(*((_DWORD *)a1 + 42), 15);
  *(_DWORD *)(v3 + 36) = -__CFSHR__(*((_DWORD *)a1 + 42), 16);
  *(_DWORD *)(v3 + 40) = -__CFSHR__(*((_DWORD *)a1 + 42), 12);
  *(_DWORD *)(v3 + 44) = -__CFSHR__(*((_DWORD *)a1 + 42), 13);
  *(_DWORD *)(v3 + 48) = -__CFSHR__(*((_DWORD *)a1 + 42), 17);
  *(_DWORD *)(v3 + 56) = -__CFSHR__(*((_DWORD *)a1 + 42), 28);
  *(_DWORD *)(v3 + 60) = (*((_DWORD *)a1 + 46) & 0x40u) >> 6;
  *(_DWORD *)(v3 + 64) = (*((_DWORD *)a1 + 46) & 0x80u) >> 7;
  *(_DWORD *)(v3 + 68) = (*((_DWORD *)a1 + 46) & 0x200u) >> 9;
  result = CIVSerializer::Serialize(a3, (void **)(v3 + 72), *((void *const *)a1 + 38), *((unsigned int *)a1 + 78), 0);
  if ( result < 0 )
    return result;
  *(_DWORD *)(v3 + 80) = *((_DWORD *)a1 + 108);
  v8 = (_DWORD *)*((_QWORD *)a1 + 4);
  *(_DWORD *)(v3 + 1336) = v8[112];
  *(_DWORD *)(v3 + 1340) = v8[113];
  *(_DWORD *)(v3 + 1348) = v8[115];
  if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 )
  {
    *(_QWORD *)(v3 + 1368) = *(_QWORD *)((char *)a1 + 1860);
    *(_DWORD *)(v3 + 1376) = *((_DWORD *)a1 + 468);
  }
  v9 = *((_DWORD *)a1 + 12);
  if ( !v9 )
  {
    *(_WORD *)(v3 + 88) = *((_WORD *)a1 + 220);
    *(_WORD *)(v3 + 92) = *((_WORD *)a1 + 221);
    *(_WORD *)(v3 + 96) = *((_WORD *)a1 + 222);
    *(_DWORD *)(v3 + 100) = *((_DWORD *)a1 + 112);
    *(_WORD *)(v3 + 104) = *((_WORD *)a1 + 432);
    *(_WORD *)(v3 + 108) = *((_WORD *)a1 + 433);
    *(_WORD *)(v3 + 112) = *((_WORD *)a1 + 434);
    *(_DWORD *)(v3 + 116) = -(*((_DWORD *)a1 + 222) & 1);
    return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 0);
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_BYTE *)(v3 + 88) = *((_BYTE *)a1 + 440);
    *(_BYTE *)(v3 + 92) = *((_BYTE *)a1 + 441);
    *(_WORD *)(v3 + 96) = *((_WORD *)a1 + 221);
    *(_WORD *)(v3 + 100) = *((_WORD *)a1 + 222);
    *(_WORD *)(v3 + 104) = *((_WORD *)a1 + 223);
    *(_WORD *)(v3 + 108) = *((_WORD *)a1 + 224);
    *(_DWORD *)(v3 + 112) = *((_DWORD *)a1 + 113);
    *(_WORD *)(v3 + 116) = *((_WORD *)a1 + 228);
    *(_WORD *)(v3 + 120) = *((_WORD *)a1 + 229);
    *(_WORD *)(v3 + 124) = *((_WORD *)a1 + 230);
    *(_WORD *)(v3 + 128) = *((_WORD *)a1 + 231);
    *(_WORD *)(v3 + 132) = *((_WORD *)a1 + 232);
    *(_WORD *)(v3 + 136) = *((_WORD *)a1 + 233);
    *(_DWORD *)(v3 + 140) = *((_DWORD *)a1 + 117);
    *(_DWORD *)(v3 + 144) = *((_DWORD *)a1 + 118);
    *(_DWORD *)(v3 + 148) = -(*((_DWORD *)a1 + 119) & 1);
    return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 0);
  }
  if ( v10 != 1 )
    return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 0);
  result = CIVPnPCreateSerializer::Serialize(
             a3,
             (struct _IV_HID_DEVICE_INFO *)(v3 + 88),
             (struct RIMDEV *)((char *)a1 + 440),
             0);
  if ( result >= 0 )
    return CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v3 + 1352), a2, 0);
  return result;
}
