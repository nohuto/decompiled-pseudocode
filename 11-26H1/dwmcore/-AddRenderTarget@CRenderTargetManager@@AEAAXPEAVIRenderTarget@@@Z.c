/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x18014ABB0
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180031700 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x18014AB68 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x1800FCA84 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct IRenderTarget *a2)
{
  CComposition *CurrentFrameId; // rax
  int (__fastcall ***v5)(struct IRenderTarget *, GUID *, __int64 *); // rdx
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  struct IRenderTarget *v14; // [rsp+38h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v14 = a2;
  if ( *((_BYTE *)this + 744) || (CurrentFrameId = GetCurrentFrameId(), *((CComposition **)this + 92) == CurrentFrameId) )
  {
    v10 = (_QWORD *)((char *)this + 136);
    v11 = (_QWORD *)v10[1];
    if ( v11 == (_QWORD *)v10[2] )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        v10,
        (__int64)v11,
        (__int64 *)&v14);
    }
    else
    {
      *v11 = a2;
      v10[1] += 8LL;
    }
  }
  else
  {
    v13 = 0LL;
    if ( (**v5)(a2, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v13) < 0 )
    {
      v15 = 0LL;
      if ( (**(int (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))a2)(
             a2,
             &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e,
             &v15) >= 0 )
        *((_BYTE *)this + 750) = 1;
      *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   (__int64 *)this + 10,
                   (__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) >> 3,
                   v12) = a2;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else
    {
      v7 = (__int64 *)((char *)this + 24);
      *((_BYTE *)this + 745) = 1;
      *((_BYTE *)this + 750) = 1;
      v8 = *((_QWORD *)this + 4) - *((_QWORD *)this + 3);
      v9 = v13;
      *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   v7,
                   v8 >> 3,
                   v6) = v9;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
