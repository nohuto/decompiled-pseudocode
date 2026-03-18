/*
 * XREFs of ?ImmediateUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x180297870
 * Callers:
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180218658 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18012BDF4 (-_Tidy@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@AEAPEAUIDXGIResource@@@Z @ 0x180295F50 (--$emplace_back@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_pol.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::ImmediateUnpinResources(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  __int128 v9; // kr00_16
  unsigned int v10; // eax
  int v11; // edi
  __int64 v12; // rdi
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v16; // [rsp+78h] [rbp+38h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF

  v2 = (__int64 *)a2[1];
  v3 = *a2;
  v13 = 0LL;
  v14 = 0LL;
  v5 = v2;
  v6 = &v2[v3];
  if ( v2 != v6 )
  {
    do
    {
      v7 = *v5;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v5 + 16) + 56LL))(*v5 + 16) )
      {
        v8 = *(_QWORD *)(v7 + 16);
        v16 = 0;
        v17 = (*(__int64 (__fastcall **)(__int64, int *))(v8 + 40))(v7 + 16, &v16);
        if ( v17 )
          std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<IDXGIResource * &>(
            (__int64)&v13,
            &v17);
      }
      ++v5;
    }
    while ( v5 != v6 );
  }
  v9 = v13;
  if ( (_QWORD)v13 != *((_QWORD *)&v13 + 1) )
  {
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    {
      McTemplateU0t_EventWriteTransfer(
        Microsoft_Windows_Dwm_Compositor_Context,
        &UnPinning_Start,
        (__int64)(*((_QWORD *)&v13 + 1) - v13) >> 3);
      v9 = v13;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 536) + 32LL))(
            *(_QWORD *)(a1 + 536),
            v9,
            (__int64)(*((_QWORD *)&v9 + 1) - v9) >> 3);
    v11 = v10;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &UnPinning_Stop, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1122LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v11);
  }
  while ( v2 != v6 )
  {
    v12 = *v2;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*v2 + 16) + 56LL))(*v2 + 16) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 72LL))(v12 + 16);
    ++v2;
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy((__int64)&v13);
}
