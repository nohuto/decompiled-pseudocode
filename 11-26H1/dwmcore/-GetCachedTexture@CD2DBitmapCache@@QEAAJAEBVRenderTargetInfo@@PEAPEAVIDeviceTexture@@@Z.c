/*
 * XREFs of ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012D250
 * Callers:
 *     ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012C260 (-GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AEC10 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18012D3C0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmapCache::GetCachedTexture(
        CD2DBitmapCache *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  __int64 v4; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax
  CComposition *v9; // rcx
  unsigned int v10; // ebx
  struct IBitmapResource *StockBlackBitmap; // rbx
  __int64 (__fastcall *v12)(struct IBitmapResource *, __int64 *); // rbp
  int v13; // eax
  int v14; // eax
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  struct IDeviceTexture *v16; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = *((unsigned __int8 *)a2 + 20);
  v6 = *((unsigned int *)a2 + 2);
  v7 = *(_QWORD *)a2;
  LOBYTE(v15) = 0;
  v16 = 0LL;
  LODWORD(result) = CD2DBitmapCache::GetBitmapInternal(this, v7, v6, v4, &v16, &v15);
  v10 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x64u, 0LL);
  }
  else
  {
    if ( !(_BYTE)v15 )
    {
      *a3 = v16;
      return (unsigned int)result;
    }
    v15 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v9);
    v12 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v13 = v12(StockBlackBitmap, &v15);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v15 + 104LL))(
              v15,
              a2,
              a3);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x6Eu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x6Cu, 0LL);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v16 + 16LL))(v16);
  return v10;
}
