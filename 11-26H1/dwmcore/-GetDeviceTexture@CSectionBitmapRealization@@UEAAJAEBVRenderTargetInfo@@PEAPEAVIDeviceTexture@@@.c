/*
 * XREFs of ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012CAE0
 * Callers:
 *     ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AA8D0 (-GetDeviceTexture@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealizatio.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18012D3C0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetDeviceTexture(
        CSectionBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  char *v3; // rsi
  int v7; // eax
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rdx
  int BitmapInternal; // eax
  CComposition *v13; // rcx
  int v14; // ebx
  struct IBitmapResource *StockBlackBitmap; // rbx
  __int64 (__fastcall *v17)(struct IBitmapResource *, __int64 *); // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // [rsp+60h] [rbp+30h] BYREF
  struct IDeviceTexture *v21; // [rsp+70h] [rbp+40h] BYREF

  v3 = (char *)this - 80;
  *a3 = 0LL;
  v7 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 72LL))(v3);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F55F8, 2u, v7, 0x32u, 0LL);
    return v9;
  }
  if ( !*((_QWORD *)this + 33) )
    return (unsigned int)-2003292412;
  *a3 = 0LL;
  LOBYTE(v8) = *((_BYTE *)a2 + 20);
  v10 = *((unsigned int *)a2 + 2);
  v11 = *(_QWORD *)a2;
  LOBYTE(v20) = 0;
  v21 = 0LL;
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(v3, v11, v10, v8, &v21, &v20);
  v14 = BitmapInternal;
  v9 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapInternal, 0x64u, 0LL);
  }
  else
  {
    if ( !(_BYTE)v20 )
    {
      *a3 = v21;
      return v9;
    }
    v20 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v13);
    v17 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v18 = v17(StockBlackBitmap, &v20);
    v14 = v18;
    if ( v18 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v20 + 104LL))(
              v20,
              a2,
              a3);
      v14 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x6Eu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x6Cu, 0LL);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  if ( v21 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v21 + 16LL))(v21);
  v9 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F55F8, 2u, v14, 0x36u, 0LL);
  return v9;
}
