/*
 * XREFs of ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180177280
 * Callers:
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180030B2C (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??1?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180176D44 (--1-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverlayC.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1801E62F8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020A23C (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?PushCandidates@COverlayContext@@IEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023D53C (-PushCandidates@COverlayContext@@IEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ @ 0x18023DDF8 (-TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *a1;
  result = 0x7D6343EB1A1F58D1LL;
  v4 = 0x7D6343EB1A1F58D1LL * ((a1[1] - *a1) >> 3);
  if ( v4 )
  {
    v5 = 8 * ((a1[1] - *a1) >> 3);
    v6 = v5 + v1;
    for ( result = (__int64)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v8, v1, v4);
          v1 != v6;
          v1 += 392LL )
    {
      v7 = *(_QWORD *)(v1 + 16);
      if ( v7 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    a1[1] -= v5;
  }
  return result;
}
