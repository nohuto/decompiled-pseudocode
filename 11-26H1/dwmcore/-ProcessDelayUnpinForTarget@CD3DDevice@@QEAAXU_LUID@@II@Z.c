/*
 * XREFs of ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x180205098
 * Callers:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x180204EA4 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ?ProcessDelayUnpin@CLegacyRenderTarget@@UEAAXXZ @ 0x180253270 (-ProcessDelayUnpin@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ?ProcessDelayUnpin@CDDisplayRenderTarget@@UEAAXXZ @ 0x180254110 (-ProcessDelayUnpin@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x18029A3D8 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?erase@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@2@V?$basic_iterator@$$CBVCDelayUnpin@CD3DDevice@@@2@@Z @ 0x1800D7E08 (-erase@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vl.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18012BDF4 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x180238DF0 (--$emplace_back@V-$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector.c)
 *     ??$emplace_back@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@AEAPEAUIDXGIResource@@@Z @ 0x180295F50 (--$emplace_back@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_pol.c)
 *     McTemplateU0txqqxqx_EventWriteTransfer @ 0x1802998F8 (McTemplateU0txqqxqx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::ProcessDelayUnpinForTarget(CD3DDevice *this, struct _LUID a2, __int64 a3, unsigned int a4)
{
  char *v4; // r12
  _QWORD *v5; // rbx
  unsigned __int8 v9; // si
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  char v11; // r13
  char v12; // r12
  _DWORD *v13; // rax
  _QWORD **v14; // rax
  __int128 v15; // kr00_16
  unsigned int v16; // eax
  int v17; // ebx
  __int64 *v18; // rbx
  __int64 *v19; // rdi
  int v20; // [rsp+28h] [rbp-49h]
  char v21[8]; // [rsp+58h] [rbp-19h] BYREF
  char v22[8]; // [rsp+60h] [rbp-11h] BYREF
  __int128 v23; // [rsp+68h] [rbp-9h] BYREF
  __int64 v24; // [rsp+78h] [rbp+7h]
  __int128 v25; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  _QWORD *v28; // [rsp+D8h] [rbp+67h] BYREF
  struct _LUID v29; // [rsp+E0h] [rbp+6Fh]
  unsigned int v30; // [rsp+E8h] [rbp+77h]

  v30 = a3;
  v29 = a2;
  v26 = 0LL;
  v4 = (char *)this + 1232;
  v24 = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 154);
  v25 = 0LL;
  v23 = 0LL;
  while ( v5 != *((_QWORD **)this + 155) )
  {
    v9 = 0;
    if ( *((_DWORD *)v5 + 2) != a2.LowPart || *(_QWORD *)((char *)v5 + 12) != __PAIR64__(a3, a2.HighPart) )
      goto LABEL_18;
    if ( a4 >= *((_DWORD *)v5 + 5) || !a4 )
      v9 = 1;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    {
      v10 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v5;
      v11 = 0;
      v28 = 0LL;
      v12 = -1;
      if ( (**v10)(v10, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, (__int64 *)&v28) >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v28 + 88LL))(v28);
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v28 + 248LL))(v28);
      }
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      {
        v13 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v5 + 24LL))(*v5, v21);
        McTemplateU0txqqxqx_EventWriteTransfer(*v13, *v13, v9, a2.LowPart, v30, a4, *v13, v12, v11);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
      a3 = v30;
      v4 = (char *)this + 1232;
    }
    if ( v9 )
    {
      v28 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 40LL))(*v5, 0LL, a3);
      if ( v28 )
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<IDXGIResource * &>(
          &v25,
          &v28);
      std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>(
        &v23,
        v5);
      v28 = v5;
      v14 = (_QWORD **)detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::erase(
                         (__int64)v4,
                         (__int64)v22,
                         (__int64 *)&v28);
      a3 = v30;
      v5 = *v14;
    }
    else
    {
LABEL_18:
      v5 += 3;
    }
  }
  v15 = v25;
  if ( (_QWORD)v25 != *((_QWORD *)&v25 + 1) )
  {
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    {
      McTemplateU0t_EventWriteTransfer(
        Microsoft_Windows_Dwm_Compositor_Context,
        &UnPinning_Start,
        (__int64)(*((_QWORD *)&v25 + 1) - v25) >> 3);
      v15 = v25;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 67) + 32LL))(
            *((_QWORD *)this + 67),
            v15,
            (__int64)(*((_QWORD *)&v15 + 1) - v15) >> 3);
    v17 = v16;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &UnPinning_Stop, v16);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C0,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v17,
        v20);
  }
  v19 = (__int64 *)*((_QWORD *)&v23 + 1);
  v18 = (__int64 *)v23;
  if ( (_QWORD)v23 != *((_QWORD *)&v23 + 1) )
  {
    do
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v18 + 72LL))(*v18);
      ++v18;
    }
    while ( v18 != v19 );
    v19 = (__int64 *)*((_QWORD *)&v23 + 1);
    v18 = (__int64 *)v23;
  }
  if ( v18 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(v18, v19);
    std::_Deallocate<16>((void *)v23, (v24 - v23) & 0xFFFFFFFFFFFFFFF8uLL);
    v24 = 0LL;
    v23 = 0LL;
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((__int64)&v25);
}
