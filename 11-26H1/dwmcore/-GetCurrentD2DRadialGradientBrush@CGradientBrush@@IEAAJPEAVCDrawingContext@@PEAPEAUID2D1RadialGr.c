/*
 * XREFs of ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x180103A28
 * Callers:
 *     ?GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x18027F010 (-GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180103FE0 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180104380 (-clear@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V-$buffe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentD2DRadialGradientBrush(
        CGradientBrush *this,
        struct CDrawingContext *a2,
        struct ID2D1RadialGradientBrush **a3)
{
  unsigned int v4; // r14d
  struct CD3DDevice *v7; // r12
  _QWORD **v8; // rsi
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  struct ID2D1RadialGradientBrush *v11; // rbx
  __int64 v12; // rcx
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  struct ID2D1RadialGradientBrush *v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = 0LL;
  v4 = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  v7 = (struct CD3DDevice *)*((_QWORD *)a2 + 4);
  v18[1] = &v19;
  v18[0] = 0LL;
  if ( *((_BYTE *)this + 240) )
  {
    v8 = (_QWORD **)((char *)this + 176);
  }
  else
  {
    v15 = *((_QWORD *)this + 21);
    if ( v15 )
    {
      *(_QWORD *)(v15 + 32) = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 21);
    }
    v8 = (_QWORD **)((char *)this + 176);
    v16 = (_QWORD *)*((_QWORD *)this + 22);
    v17 = (_QWORD *)*((_QWORD *)this + 23);
    while ( v16 != v17 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v16 + 80LL))(
        *v16,
        ((unsigned __int64)this + 160) & -(__int64)((CGradientBrush *)((char *)this + 152) != 0LL));
      ++v16;
    }
    detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear((char *)this + 176);
  }
  v9 = *v8;
  v10 = (_QWORD *)*((_QWORD *)this + 23);
  while ( v9 != v10 )
  {
    if ( (struct CD3DDevice *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 40LL))(*v9) == v7 )
    {
      v11 = *(struct ID2D1RadialGradientBrush **)(*v9 + 72LL);
      (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_7:
      v12 = 0LL;
      *a3 = v11;
      goto LABEL_8;
    }
    ++v9;
  }
  v14 = CGradientBrush::Generate(this, v7, (const struct CGradientSource::RetrievalParams *)v18);
  v4 = v14;
  if ( v14 >= 0 )
  {
    v11 = v19;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x17Bu, 0LL);
  v12 = (__int64)v19;
LABEL_8:
  if ( v12 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v4;
}
