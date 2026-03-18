/*
 * XREFs of ?GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012C950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18012D3C0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapRealization::GetDeviceTexture(
        CWICBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  __int64 v5; // r8
  __int64 v7; // rdx
  int BitmapInternal; // eax
  CComposition *v9; // rcx
  unsigned int v10; // ebx
  struct IBitmapResource *StockBlackBitmap; // rbx
  __int64 (__fastcall *v12)(struct IBitmapResource *, __int64 *); // rsi
  int v13; // eax
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF
  struct IDeviceTexture *v17; // [rsp+58h] [rbp+28h] BYREF

  *a3 = 0LL;
  LOBYTE(a4) = *((_BYTE *)a2 + 20);
  v5 = *((unsigned int *)a2 + 2);
  v7 = *(_QWORD *)a2;
  LOBYTE(v16) = 0;
  v17 = 0LL;
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal((char *)this - 80, v7, v5, a4, &v17, &v16);
  v10 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapInternal, 0x64u, 0LL);
  }
  else
  {
    if ( !(_BYTE)v16 )
    {
      *a3 = v17;
      return v10;
    }
    v16 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v9);
    v12 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v13 = v12(StockBlackBitmap, &v16);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v16 + 104LL))(
              v16,
              a2,
              a3);
      v10 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x6Eu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x6Cu, 0LL);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  if ( v17 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v17 + 16LL))(v17);
  return v10;
}
