/*
 * XREFs of ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180013320
 * Callers:
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AF390 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTe.c)
 * Callees:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800133E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012CEA0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDeviceTexture(
        CDxHandleYUVBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CDxHandleYUVBitmapRealization *v4; // rcx
  int v7; // eax
  unsigned int DeviceTexture; // ebx
  int v9; // r9d
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v12)(struct IBitmapResource *, __int64 *); // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = (CDxHandleYUVBitmapRealization *)((char *)this - 80);
  if ( *((_BYTE *)v4 + 393) )
  {
    v7 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(v4);
    DeviceTexture = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x197u, 0LL);
      return DeviceTexture;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 26) + 136LL) )
    {
      DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(
                        (CRenderTargetBitmap *)(*((_QWORD *)this + 26) + 88LL),
                        a2,
                        a3);
      v9 = DeviceTexture;
      if ( (DeviceTexture & 0x80000000) == 0 )
        return DeviceTexture;
    }
    else
    {
      DeviceTexture = -2003292412;
      *a3 = 0LL;
      v9 = -2003292412;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x199u, 0LL);
    return DeviceTexture;
  }
  v15 = 0LL;
  StockBlackBitmap = CComposition::GetStockBlackBitmap(v4);
  v12 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v15);
  v13 = v12(StockBlackBitmap, &v15);
  DeviceTexture = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1A0u, 0LL);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v15 + 104LL))(
            v15,
            a2,
            a3);
    DeviceTexture = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1A2u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
  return DeviceTexture;
}
