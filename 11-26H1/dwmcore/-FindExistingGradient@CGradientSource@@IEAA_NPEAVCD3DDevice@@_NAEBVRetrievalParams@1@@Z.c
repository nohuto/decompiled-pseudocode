/*
 * XREFs of ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x180104240
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180104138 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180104380 (-clear@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V-$buffe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGradientSource::FindExistingGradient(
        CGradientSource *this,
        struct CD3DDevice *a2,
        char a3,
        const struct CGradientSource::RetrievalParams *a4)
{
  char v7; // r12
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rdi
  char *v16; // rdx

  v7 = 1;
  if ( a3 )
  {
    v13 = *((_QWORD *)this + 2);
    if ( v13 )
    {
      *(_QWORD *)(v13 + 32) = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
    }
    v14 = (_QWORD *)*((_QWORD *)this + 3);
    v15 = (_QWORD *)*((_QWORD *)this + 4);
    while ( v14 != v15 )
    {
      v16 = (char *)this + 8;
      if ( !this )
        v16 = 0LL;
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v14 + 80LL))(*v14, v16);
      ++v14;
    }
    detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear((char *)this + 24);
  }
  if ( *(_QWORD *)a4 )
  {
    v12 = *((_QWORD *)this + 2);
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      **(_QWORD **)a4 = *((_QWORD *)this + 2);
    }
    else
    {
      v7 = 0;
    }
  }
  if ( !*((_QWORD *)a4 + 1) )
    return v7;
  v8 = (_QWORD *)*((_QWORD *)this + 3);
  v9 = (_QWORD *)*((_QWORD *)this + 4);
  while ( v8 != v9 )
  {
    if ( (struct CD3DDevice *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 40LL))(*v8) == a2 )
    {
      v10 = *(_QWORD *)(*v8 + 72LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      **((_QWORD **)a4 + 1) = v10;
      return v7;
    }
    ++v8;
  }
  return 0;
}
