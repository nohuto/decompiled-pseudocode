/*
 * XREFs of ?IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1403F58AC
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1403419E8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x14004B14C (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline @ 0x140064E78 (Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DED8C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1403F5984 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 */

char __fastcall IsHdrSourceModePinned(const struct DXGADAPTER *a1, const struct DMMVIDPNSOURCEMODESET *a2)
{
  int PreferredHdrPixelFormat; // eax
  __int64 v4; // rbx
  int v5; // r14d
  char v6; // di
  __int64 v7; // rbx
  const struct DMMVIDPNSOURCEMODESET *v8; // rcx
  const struct DMMVIDPNSOURCEMODE *NextMode; // rsi
  __int64 v10; // rax

  PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(*((_QWORD *)a1 + 395));
  v4 = *((_QWORD *)a2 + 18);
  v5 = PreferredHdrPixelFormat;
  if ( !v4 )
    return 0;
  v6 = 1;
  if ( !(unsigned int)Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = *(_QWORD *)(v4 + 76);
    v8 = (const struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 6);
    NextMode = 0LL;
    if ( v8 != (const struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 48) )
      NextMode = (const struct DMMVIDPNSOURCEMODESET *)((char *)v8 - 8);
    while ( NextMode )
    {
      v10 = *(_QWORD *)((char *)NextMode + 76);
      if ( __PAIR64__(v7, 1) == __PAIR64__(v10, *((_DWORD *)NextMode + 18))
        && HIDWORD(v7) == HIDWORD(v10)
        && BmlPixelFormatMatchHdrPixelFormat(*((_DWORD *)NextMode + 24), v5, 0) )
      {
        return v6;
      }
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a2, NextMode);
    }
    return 0;
  }
  if ( *(_DWORD *)(v4 + 72) != 1 || !BmlPixelFormatMatchHdrPixelFormat(*(_DWORD *)(v4 + 96), v5, 0) )
    return 0;
  return v6;
}
