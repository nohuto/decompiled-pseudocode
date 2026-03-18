/*
 * XREFs of ?PinResources@CD3DDevice@@QEAAJV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x180297DD8
 * Callers:
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18021779C (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?erase@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@2@V?$basic_iterator@$$CBVCDelayUnpin@CD3DDevice@@@2@@Z @ 0x1800D7E08 (-erase@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vl.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18012BDF4 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ??$emplace_back@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@AEAPEAUIDXGIResource@@@Z @ 0x180295F50 (--$emplace_back@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_pol.c)
 *     ??$emplace_back@AEAPEAVISwapChainRealization@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVISwapChainRealization@@@Z @ 0x180295F9C (--$emplace_back@AEAPEAVISwapChainRealization@@@-$vector@V-$com_ptr_t@VIOverlayPlaneResource@@Uer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::PinResources(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rbx
  int v4; // edi
  __int64 *v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // r13
  __int128 v8; // kr00_16
  int v9; // eax
  _QWORD *i; // rax
  _QWORD *j; // rbx
  _QWORD *v12; // rsi
  unsigned int v13; // ebx
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h]
  _QWORD *v19; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+58h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  if ( *(_DWORD *)(a1 + 1124) )
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25B8, 2u, -2003304307, 0x3FFu, 0LL);
  }
  else
  {
    v3 = (__int64 *)a2[1];
    v4 = 0;
    v5 = v3;
    v6 = &v3[*a2];
    if ( v3 != v6 )
    {
      do
      {
        v7 = *v5;
        v21 = v7;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 16) + 56LL))(v7 + 16) )
        {
          LODWORD(v19) = 0;
          v20 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)(v7 + 16) + 40LL))(v7 + 16, &v19);
          if ( v20 )
          {
            if ( !(_DWORD)v19 )
            {
              std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<IDXGIResource * &>(
                (__int64)&v17,
                &v20);
              std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::emplace_back<ISwapChainRealization * &>(
                (__int64 **)&v15,
                &v21);
            }
          }
        }
        ++v5;
      }
      while ( v5 != v6 );
    }
    v8 = v17;
    if ( (_QWORD)v17 == *((_QWORD *)&v17 + 1) )
      goto LABEL_25;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    {
      McTemplateU0t_EventWriteTransfer(
        Microsoft_Windows_Dwm_Compositor_Context,
        &Pinning_Start,
        (__int64)(*((_QWORD *)&v17 + 1) - v17) >> 3);
      v8 = v17;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 536) + 24LL))(
           *(_QWORD *)(a1 + 536),
           v8,
           (__int64)(*((_QWORD *)&v8 + 1) - v8) >> 3);
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A25B8, 2u, v9, 0x415u, 0LL);
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &Pinning_Stop, (unsigned int)v4);
    if ( v4 >= 0 )
    {
LABEL_25:
      while ( v3 != v6 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v3 + 16) + 56LL))(*v3 + 16) )
        {
          for ( i = *(_QWORD **)(a1 + 1232); i != *(_QWORD **)(a1 + 1240); i += 3 )
          {
            if ( *i == ((*v3 + 16) & -(__int64)(*v3 != 0)) )
            {
              v19 = i;
              detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::erase(
                a1 + 1232,
                (__int64)&v20,
                (__int64 *)&v19);
              break;
            }
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(*v3 + 16) + 64LL))(*v3 + 16);
        }
        ++v3;
      }
      v12 = (_QWORD *)*((_QWORD *)&v15 + 1);
      for ( j = (_QWORD *)v15; j != v12; ++j )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 64LL))(*j);
    }
  }
  v13 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v4, 0xEu);
  if ( (_QWORD)v15 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
      (__int64 *)v15,
      *((__int64 **)&v15 + 1));
    std::_Deallocate<16>((void *)v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF8uLL);
    v16 = 0LL;
    v15 = 0LL;
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((__int64)&v17);
  return v13;
}
