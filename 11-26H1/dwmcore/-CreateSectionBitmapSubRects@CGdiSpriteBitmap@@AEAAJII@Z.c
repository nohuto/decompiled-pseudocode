/*
 * XREFs of ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18020D8C8
 * Callers:
 *     ?NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z @ 0x18018E560 (-NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1801585AC (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801B56D8 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$emplace_back@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x180208720 (--$emplace_back@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x18020C9F4 (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 *     ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1802AAE34 (-Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmapSubRects(CGdiSpriteBitmap *this)
{
  char *v1; // rdi
  int v2; // ebx
  __int64 *v3; // rdx
  unsigned int v5; // r14d
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  int v8; // r12d
  unsigned int i; // r15d
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  struct IBitmapRealization *v14; // rbx
  int v15; // eax
  int v16; // eax
  __int64 *v17; // rdx
  struct CBitmapResource *v19; // [rsp+40h] [rbp-30h] BYREF
  struct IBitmapRealization *v20; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v21[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+68h] [rbp-8h]
  int v24; // [rsp+6Ch] [rbp-4h]
  struct IBitmapRealization *v25; // [rsp+B0h] [rbp+40h] BYREF
  struct IBitmapRealization *v26; // [rsp+C8h] [rbp+58h] BYREF

  v1 = (char *)this + 456;
  v2 = 0;
  v3 = (__int64 *)*((_QWORD *)this + 58);
  if ( *((__int64 **)this + 57) != v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(*(__int64 **)v1, v3);
    *((_QWORD *)v1 + 1) = *(_QWORD *)v1;
  }
  v5 = 0;
  v23 = *((_DWORD *)this + 108);
  v24 = *((_DWORD *)this + 109);
  v22 = 0LL;
LABEL_4:
  v6 = *((_DWORD *)this + 108);
  if ( v5 >= v6 )
  {
    if ( v2 >= 0 )
      return (unsigned int)v2;
  }
  else
  {
    v7 = v6 - v5;
    v8 = 2048;
    if ( v7 < 0x800 )
      v8 = v7;
    for ( i = 0; ; i += 2048 )
    {
      v10 = *((_DWORD *)this + 109);
      if ( i >= v10 )
      {
        v5 += 2048;
        goto LABEL_4;
      }
      v11 = v10 - i;
      v19 = 0LL;
      v26 = 0LL;
      v12 = 2048;
      v21[0] = v5;
      if ( v11 < 0x800 )
        v12 = v11;
      v21[1] = i;
      v25 = 0LL;
      v21[2] = v8 + v5;
      v21[3] = v12 + i;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v25);
      v13 = CGDISubSectionBitmapRealization::Create(
              *((_QWORD *)this + 46),
              (unsigned int)&v22,
              (unsigned int)v21,
              *((_DWORD *)this + 110),
              *((_DWORD *)this + 34),
              *((_DWORD *)this + 35),
              (__int64)&v25);
      v2 = v13;
      if ( v13 < 0 )
        break;
      v14 = v25;
      (*(void (__fastcall **)(struct IBitmapRealization *, char *))(*(_QWORD *)v25 + 128LL))(v25, (char *)this + 88);
      if ( *((_BYTE *)this + 155) )
      {
        v20 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v20);
        v15 = CColorKeyBitmapRealization::Create(v14, (CGdiSpriteBitmap *)((char *)this + 376), &v20);
        v2 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x18Fu, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
          goto LABEL_22;
        }
        wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=((__int64 *)&v26, (__int64 *)&v20);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
      }
      else
      {
        v25 = 0LL;
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
          (__int64 *)&v26,
          (__int64)v14);
      }
      v16 = CBitmapResource::Create(*((struct CComposition **)this + 3), v26, &v19);
      v2 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x199u, 0LL);
        goto LABEL_22;
      }
      std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>(
        (__int64 **)v1,
        (__int64 *)&v19);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x181u, 0LL);
LABEL_22:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  }
  v17 = (__int64 *)*((_QWORD *)v1 + 1);
  if ( *(__int64 **)v1 != v17 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(*(__int64 **)v1, v17);
    *((_QWORD *)v1 + 1) = *(_QWORD *)v1;
  }
  return (unsigned int)v2;
}
