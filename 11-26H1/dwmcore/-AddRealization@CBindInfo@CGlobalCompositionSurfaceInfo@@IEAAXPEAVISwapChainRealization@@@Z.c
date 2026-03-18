/*
 * XREFs of ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x18012A278
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x18012976C (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@@Z @ 0x180266430 (-CreateAndAddSingleBuffer@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTE.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18012A33C (--$_Emplace_reallocate@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct ISwapChainRealization *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdx
  struct ISwapChainRealization *v6; // rcx
  struct ISwapChainRealization *v7; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(struct ISwapChainRealization *, __int64))(*(_QWORD *)a2 + 72LL))(
    a2,
    (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL));
  v4 = *(_QWORD *)a2;
  v7 = a2;
  (*(void (__fastcall **)(struct ISwapChainRealization *))(v4 + 8))(a2);
  v5 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v5 == *((_QWORD **)this + 11) )
  {
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>(
      (char *)this + 72,
      v5,
      &v7);
    v6 = v7;
  }
  else
  {
    v6 = 0LL;
    *v5 = a2;
    *((_QWORD *)this + 10) += 8LL;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( *((_QWORD *)this + 10) - *((_QWORD *)this + 9) == 8LL )
    *(_QWORD *)((char *)this + 36) = *(_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct ISwapChainRealization **))(*(_QWORD *)a2 + 64LL))(
                                                  a2,
                                                  &v7);
}
