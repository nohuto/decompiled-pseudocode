/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012CCE0
 * Callers:
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801B8630 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 *     ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802ABC20 (-GetDeviceTexture@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealizati.c)
 *     ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AF6C0 (-GetDeviceTexture@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBi_ea_1802AF6C0.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18012D3C0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        CDxHandleBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  char *v3; // rsi
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  int BitmapInternal; // eax
  CComposition *v11; // rcx
  struct IBitmapResource *StockBlackBitmap; // rbx
  __int64 (__fastcall *v13)(struct IBitmapResource *, __int64 *); // rsi
  int v14; // eax
  int v16; // eax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  struct IDeviceTexture *v18; // [rsp+60h] [rbp+18h] BYREF

  v3 = (char *)this - 80;
  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 72LL))(v3);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xA2u, 0LL);
    return (unsigned int)v6;
  }
  *a3 = 0LL;
  v7 = *((unsigned __int8 *)a2 + 20);
  v8 = *((unsigned int *)a2 + 2);
  v9 = *(_QWORD *)a2;
  LOBYTE(v17) = 0;
  v18 = 0LL;
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(v3, v9, v8, v7, &v18, &v17);
  v6 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapInternal, 0x64u, 0LL);
  }
  else
  {
    if ( !(_BYTE)v17 )
    {
      *a3 = v18;
      return (unsigned int)v6;
    }
    v17 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v11);
    v13 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v14 = v13(StockBlackBitmap, &v17);
    v6 = v14;
    if ( v14 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v17 + 104LL))(
              v17,
              a2,
              a3);
      v6 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x6Eu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x6Cu, 0LL);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  if ( v18 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xA4u, 0LL);
  return (unsigned int)v6;
}
