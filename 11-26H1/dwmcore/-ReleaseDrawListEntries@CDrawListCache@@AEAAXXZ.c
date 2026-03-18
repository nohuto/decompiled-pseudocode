/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18006CCA0
 * Callers:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x18001CA4C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18001D270 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18002C040 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18002D3C0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?size@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18000E770 (-size@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSurf.c)
 *     ??$move@V?$move_iterator@PEAPEAVIRenderTarget@@@std@@V?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@V?$move_iterator@PEAPEAVIRenderTarget@@@0@0V12@@Z @ 0x18014A184 (--$move@V-$move_iterator@PEAPEAVIRenderTarget@@@std@@V-$checked_array_iterator@PEAPEAVIRenderTar.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this)
{
  __int64 v1; // rdx
  __int64 *v2; // rsi
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int128 v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h]
  __int128 v27; // [rsp+40h] [rbp-38h] BYREF
  __int64 v28; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *((_QWORD *)this + 5);
  v2 = (__int64 *)((char *)this + 40);
  v3 = 0LL;
  v4 = v1 & 3;
  v5 = 1LL;
  v6 = *((_DWORD *)this + 10) & 3;
  if ( (v1 & 3) == 0 )
  {
LABEL_41:
    v9 = v2;
    if ( (v1 & 3) == 0 )
    {
LABEL_44:
      v10 = (unsigned __int64)v2;
      if ( (v1 & 3) == 0 )
      {
        v11 = 1LL;
        goto LABEL_10;
      }
      v24 = v4 - 1;
      if ( v24 )
      {
        if ( (unsigned __int64)(v24 - 1) >= 2 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        goto LABEL_6;
      }
LABEL_9:
      v11 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_10;
    }
    if ( v4 != 1 )
    {
      if ( v4 == 2 )
        goto LABEL_5;
      goto LABEL_44;
    }
LABEL_8:
    v10 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_9;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
    goto LABEL_8;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_41;
  }
  v9 = 0LL;
LABEL_5:
  v10 = 0LL;
LABEL_6:
  v11 = 0LL;
LABEL_10:
  v12 = (_QWORD *)(v10 + 8 * v11);
  while ( v9 != v12 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
    ++v9;
  }
  v13 = *v2;
  v14 = *v2 & 3;
  if ( v14 )
  {
    if ( (*(_DWORD *)v2 & 3) == 1LL )
    {
      v15 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_21;
    }
    if ( (*(_DWORD *)v2 & 3) == 2LL )
    {
      v15 = 0LL;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)v2 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v15 = (unsigned __int64)v2;
  if ( v14 )
  {
    if ( v14 != 1 )
    {
      if ( (unsigned __int64)(v14 - 2) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_17:
      v5 = 0LL;
      v16 = v14 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          v18 = 0LL;
          goto LABEL_23;
        }
        if ( v17 != 1 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        goto LABEL_53;
      }
LABEL_22:
      v18 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_23;
    }
LABEL_21:
    v5 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    goto LABEL_22;
  }
LABEL_53:
  v18 = (unsigned __int64)v2;
LABEL_23:
  v19 = (__int64)(v15 + 8 * v5 - v18) >> 3;
  if ( !v19 )
    return;
  v20 = detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::size(v2);
  if ( v19 <= v20 )
  {
    if ( (*v2 & 3) != 0 )
    {
      if ( (*v2 & 3) == 1 )
      {
        v3 = *v2 & 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_31;
      }
      if ( (*v2 & 3) == 2 )
        goto LABEL_31;
      if ( (*v2 & 3) != 3 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v3 = (unsigned __int64)v2;
LABEL_31:
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v27, v3, v20);
    if ( v19 == v20 )
      goto LABEL_32;
    goto LABEL_62;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_62:
  v25 = v27;
  v26 = v28;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v25, 0LL);
  v27 = v25;
  v28 = v26;
  std::move<std::move_iterator<IRenderTarget * *>,stdext::checked_array_iterator<IRenderTarget * *>>(
    &v25,
    v3 + 8 * v19,
    v3 + 8 * v20,
    &v27);
LABEL_32:
  v21 = *v2 & 3;
  if ( v21 == 1 )
  {
    v23 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v2);
    *(_QWORD *)(v23 - 16) -= v19;
  }
  else
  {
    if ( !v21 )
      goto LABEL_37;
    v22 = v21 - 2;
    if ( v22 )
    {
      if ( v22 != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      if ( v19 != -1LL )
LABEL_37:
        *v2 = 2LL;
    }
  }
}
