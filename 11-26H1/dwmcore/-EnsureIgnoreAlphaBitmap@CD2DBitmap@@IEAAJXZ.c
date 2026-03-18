/*
 * XREFs of ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1802A977C
 * Callers:
 *     ?GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801026C0 (-GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x180102760 (-GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801027F8 (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180102AC0 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801B1E84 (-reset@-$com_ptr_t@UIDXGIResource1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::EnsureIgnoreAlphaBitmap(CD2DBitmap *this)
{
  __int64 *v1; // rsi
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // r9d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  __int128 v10; // xmm1
  __int64 (__fastcall *v11)(CD2DBitmap *); // rax
  CD2DContext *v12; // rbx
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-30h]
  D2D1_BITMAP_PROPERTIES1 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+70h] [rbp+20h] BYREF
  struct IDXGISurface *v18; // [rsp+78h] [rbp+28h] BYREF

  v1 = (__int64 *)((char *)this + 136);
  if ( *((_QWORD *)this + 17) )
    return 0;
  if ( !*((_QWORD *)this + 13) )
  {
    v3 = -2003292412;
    v5 = -2003292412;
    v15 = 529;
    goto LABEL_20;
  }
  if ( (*((_DWORD *)this + 44) & 0x400000) != 0 )
  {
    v4 = CD2DBitmap::EnsureBitmap(this);
    v3 = v4;
    if ( v4 >= 0 )
      return v3;
    v15 = 524;
LABEL_8:
    v5 = v4;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, v15, 0LL);
    return v3;
  }
  if ( *((_DWORD *)this + 49) == 3 )
  {
    v4 = CD2DBitmap::EnsureBitmap(this);
    v3 = v4;
    if ( v4 >= 0 )
      return v3;
    v15 = 502;
    goto LABEL_8;
  }
  v17 = 0LL;
  wil::com_ptr_t<IDXGIResource1,wil::err_returncode_policy>::reset((__int64 *)&v17);
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 13))(
         *((_QWORD *)this + 13),
         &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
         &v17);
  v3 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1FBu, 0LL);
  }
  else
  {
    v7 = *((unsigned int *)this + 58);
    v8 = *v17;
    v18 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IDXGISurface **))(v8 + 96))(v17, v7, &v18);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1FFu, 0LL);
    }
    else
    {
      v10 = *((_OWORD *)this + 13);
      v11 = *(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)this + 40LL);
      *(_OWORD *)&v16.pixelFormat.format = *((_OWORD *)this + 12);
      v16.pixelFormat.alphaMode = D2D1_ALPHA_MODE_IGNORE;
      *(_OWORD *)&v16.bitmapOptions = v10;
      v12 = (CD2DContext *)(v11(this) + 16);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
      v13 = CD2DContext::CreateD2DBitmapFromDxgiSurface(v12, v18, &v16, (struct ID2D1Bitmap1 **)v1);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x206u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v3;
}
