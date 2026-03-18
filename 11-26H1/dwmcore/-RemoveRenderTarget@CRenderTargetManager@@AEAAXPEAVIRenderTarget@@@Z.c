/*
 * XREFs of ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x180148EAC
 * Callers:
 *     ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180148E64 (-RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180148D70 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18014A03C (-clear_region@-$vector_facade@PEAVIRenderTarget@@V-$buffer_impl@PEAVIRenderTarget@@$03$00Vlibera.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 *     ??$emplace_back@AEAPEAVCCompositionSurfaceInfo@@@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18022953C (--$emplace_back@AEAPEAVCCompositionSurfaceInfo@@@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct IRenderTarget *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 trivial_8; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  struct IRenderTarget **j; // rbx
  struct IRenderTarget *v11; // rcx
  _QWORD *i; // rdx
  CComposition *v13; // rcx
  int v14; // r8d
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  struct IRenderTarget *v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v16 = a2;
  v4 = *((_QWORD *)this + 18);
  v5 = *((_QWORD *)this + 17);
  if ( v5 == v4 || (trivial_8 = _std_find_trivial_8(v5, v4, a2), v7 = *((_QWORD *)this + 18), trivial_8 == v7) )
  {
    if ( *((_BYTE *)this + 744) )
    {
      std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::emplace_back<CCompositionSurfaceInfo * &>(
        (char *)this + 160,
        &v16);
    }
    else
    {
      v15 = 0LL;
      v8 = (**(__int64 (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))a2)(
             a2,
             &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
             &v15);
      v9 = v15;
      if ( v8 >= 0 )
      {
        for ( i = (_QWORD *)*((_QWORD *)this + 3); i != *((_QWORD **)this + 4); ++i )
        {
          if ( *i == v15 )
          {
            v13 = g_pComposition;
            v14 = CCommonRegistryData::m_compositorClockPolicy;
            if ( *i == *(_QWORD *)this )
            {
              *(_QWORD *)this = 0LL;
              if ( !v14 )
                *((_BYTE *)v13 + 6460) = 1;
            }
            if ( *i == *((_QWORD *)this + 1) )
            {
              *((_QWORD *)this + 1) = 0LL;
              if ( v14 == 1 )
                *((_BYTE *)v13 + 6460) = 1;
            }
            *((_BYTE *)this + 745) = 1;
            *((_BYTE *)this + 750) = 1;
            detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
              (__int64 *)this + 3,
              ((__int64)i - *((_QWORD *)this + 3)) >> 3,
              1LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
            return;
          }
        }
      }
      else
      {
        for ( j = (struct IRenderTarget **)*((_QWORD *)this + 10); j != *((struct IRenderTarget ***)this + 11); ++j )
        {
          if ( *j == a2 )
          {
            v11 = *j;
            v17 = 0LL;
            if ( (**(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))v11)(
                   v11,
                   &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e,
                   &v17) >= 0 )
              *((_BYTE *)this + 750) = 1;
            detail::vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
              (char *)this + 80,
              ((__int64)j - *((_QWORD *)this + 10)) >> 3,
              1LL);
            if ( v17 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            v9 = v15;
            break;
          }
        }
      }
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
      (void *)(trivial_8 + 8),
      v7,
      (void *)trivial_8);
    *((_QWORD *)this + 18) -= 8LL;
  }
}
