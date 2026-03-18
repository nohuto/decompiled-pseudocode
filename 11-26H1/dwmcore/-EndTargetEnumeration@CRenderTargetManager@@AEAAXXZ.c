/*
 * XREFs of ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180031B70
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x180030310 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180031700 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x180032890 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?ForceFullDirty@CRenderTargetManager@@QEAAXXZ @ 0x1801C52B8 (-ForceFullDirty@CRenderTargetManager@@QEAAXXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ @ 0x1801CD4D0 (-UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1801D200C (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ @ 0x1801D9EE4 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ.c)
 *     ?CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z @ 0x18022DB98 (-CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180148D70 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18014A03C (-clear_region@-$vector_facade@PEAVIRenderTarget@@V-$buffer_impl@PEAVIRenderTarget@@$03$00Vlibera.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 *     ??$emplace_back@AEAPEAVCCompositionSurfaceInfo@@@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18022953C (--$emplace_back@AEAPEAVCCompositionSurfaceInfo@@@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::EndTargetEnumeration(CRenderTargetManager *this)
{
  _QWORD *v1; // rdi
  int (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rbp
  int (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // r15
  __int64 trivial_8; // rax
  __int64 v9; // rdx
  int (__fastcall ****i)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v11; // rcx
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v13; // rdx
  CComposition *v14; // rcx
  int v15; // r8d
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_QWORD *)((char *)this + 160);
  *((_BYTE *)this + 744) = 0;
  v3 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 21);
  v4 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 20);
  if ( v4 != v3 )
  {
    do
    {
      v5 = *((_QWORD *)this + 18);
      v6 = *((_QWORD *)this + 17);
      v7 = *v4;
      v16 = *v4;
      if ( v6 == v5 || (trivial_8 = _std_find_trivial_8(v6, v5, v7), v9 = *((_QWORD *)this + 18), trivial_8 == v9) )
      {
        if ( *((_BYTE *)this + 744) )
        {
          std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::emplace_back<CCompositionSurfaceInfo * &>(
            v1,
            &v16);
        }
        else
        {
          v16 = 0LL;
          if ( (**v7)(v7, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, (__int64 *)&v16) >= 0 )
          {
            v13 = (_QWORD *)*((_QWORD *)this + 3);
            v11 = (__int64)v16;
            while ( v13 != *((_QWORD **)this + 4) )
            {
              if ( (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v13 == v16 )
              {
                v14 = g_pComposition;
                v15 = CCommonRegistryData::m_compositorClockPolicy;
                if ( *v13 == *(_QWORD *)this )
                {
                  *(_QWORD *)this = 0LL;
                  if ( !v15 )
                    *((_BYTE *)v14 + 6460) = 1;
                }
                if ( *v13 == *((_QWORD *)this + 1) )
                {
                  *((_QWORD *)this + 1) = 0LL;
                  if ( v15 == 1 )
                    *((_BYTE *)v14 + 6460) = 1;
                }
                *((_BYTE *)this + 745) = 1;
                *((_BYTE *)this + 750) = 1;
                detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
                  (char *)this + 24,
                  ((__int64)v13 - *((_QWORD *)this + 3)) >> 3,
                  1LL);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
                goto LABEL_7;
              }
              ++v13;
            }
          }
          else
          {
            for ( i = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 10);
                  i != *((int (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 11);
                  ++i )
            {
              if ( *i == v7 )
              {
                v12 = *i;
                v17 = 0LL;
                if ( (**v12)(v12, &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e, &v17) >= 0 )
                  *((_BYTE *)this + 750) = 1;
                detail::vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
                  (char *)this + 80,
                  ((__int64)i - *((_QWORD *)this + 10)) >> 3,
                  1LL);
                if ( v17 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                break;
              }
            }
            v11 = (__int64)v16;
          }
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      else
      {
        std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
          (void *)(trivial_8 + 8),
          v9,
          (void *)trivial_8);
        *((_QWORD *)this + 18) -= 8LL;
      }
LABEL_7:
      ++v4;
    }
    while ( v4 != v3 );
    v1 = (_QWORD *)((char *)this + 160);
  }
  if ( *v1 != v1[1] )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>();
    v1[1] = *v1;
  }
}
