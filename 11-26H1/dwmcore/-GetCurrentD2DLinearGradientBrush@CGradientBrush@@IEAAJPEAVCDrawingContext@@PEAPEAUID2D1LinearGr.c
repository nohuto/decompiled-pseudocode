/*
 * XREFs of ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180103E5C
 * Callers:
 *     ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x180103C70 (-GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180103FE0 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180104380 (-clear@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V-$buffe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentD2DLinearGradientBrush(
        CGradientBrush *this,
        struct CDrawingContext *a2,
        struct ID2D1LinearGradientBrush **a3)
{
  struct CD3DDevice *v3; // r12
  _QWORD *v5; // rbp
  unsigned int v7; // r14d
  _QWORD **v8; // rsi
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  struct ID2D1LinearGradientBrush *v11; // rbx
  struct ID2D1LinearGradientBrush *v12; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  struct ID2D1LinearGradientBrush *v20; // [rsp+70h] [rbp+8h] BYREF

  v3 = (struct CD3DDevice *)*((_QWORD *)a2 + 4);
  v19[1] = &v20;
  v5 = (_QWORD *)((char *)this + 152);
  v7 = 0;
  v20 = 0LL;
  v19[0] = 0LL;
  if ( *((_BYTE *)this + 240) )
  {
    v8 = (_QWORD **)((char *)this + 176);
  }
  else
  {
    v15 = (__int64 *)((char *)this + 168);
    v16 = v5[2];
    if ( v16 )
    {
      *(_QWORD *)(v16 + 32) = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v15);
    }
    v8 = (_QWORD **)(v5 + 3);
    v17 = (_QWORD *)v5[3];
    v18 = (_QWORD *)v5[4];
    while ( v17 != v18 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v17 + 80LL))(
        *v17,
        (unsigned __int64)(v5 + 1) & -(__int64)(v5 != 0LL));
      ++v17;
    }
    detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v5 + 3);
  }
  v9 = *v8;
  v10 = (_QWORD *)v5[4];
  while ( v9 != v10 )
  {
    if ( (struct CD3DDevice *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 40LL))(*v9) == v3 )
    {
      v11 = *(struct ID2D1LinearGradientBrush **)(*v9 + 72LL);
      (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_7:
      v12 = 0LL;
      *a3 = v11;
      goto LABEL_8;
    }
    ++v9;
  }
  v14 = CGradientBrush::Generate(this, v3, (const struct CGradientSource::RetrievalParams *)v19);
  v7 = v14;
  if ( v14 >= 0 )
  {
    v11 = v20;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x160u, 0LL);
  v12 = v20;
LABEL_8:
  if ( v12 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v7;
}
