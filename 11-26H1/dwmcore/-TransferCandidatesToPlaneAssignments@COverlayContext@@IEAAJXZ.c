/*
 * XREFs of ?TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ @ 0x18023DDF8
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x1801B0D5C (-ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800CDBA0 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x180176D68 (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180177280 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x180199F30 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::TransferCandidatesToPlaneAssignments(COverlayContext *this)
{
  __int64 *v1; // r14
  __int64 *v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r12
  __int64 v8; // rdx
  unsigned int i; // esi
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-48h] BYREF

  v1 = (__int64 *)((char *)this + 12688);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 1586);
  v3 = (__int64 *)((char *)this + 96);
  if ( *((_QWORD *)this + 13) != *((_QWORD *)this + 12) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 280LL))(*((_QWORD *)this + 7));
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 256LL))(*((_QWORD *)this + 7));
    v6 = *((_QWORD *)this + 13);
    v7 = v5;
    v8 = *v3;
    for ( i = 0; i < 438261969 * (unsigned int)((v6 - *((_QWORD *)this + 12)) >> 3); v8 = *v3 )
    {
      v10 = 392LL * i;
      v11 = v10 + v8;
      if ( !*(_BYTE *)(v10 + v8 + 362) )
      {
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v11 + 16) + 264LL))(
               *(_QWORD *)(v11 + 16),
               *(_QWORD *)(v11 + 24),
               v4) < 0 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            McTemplateU0xq_EventWriteTransfer(
              *(unsigned int *)(*(_QWORD *)(v11 + 16) + 40LL),
              &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
              *(unsigned int *)(*(_QWORD *)(v11 + 16) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 40LL)) << 32),
              10);
          v15 = v10 + *v3;
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
            (_QWORD *)this + 12,
            &v16,
            &v15);
          goto LABEL_7;
        }
        COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v11, (__int64)v17, v7 + 136);
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 7) + 304LL))(*((_QWORD *)this + 7), v17);
        v12 = *(_QWORD *)(v11 + 16);
        LOBYTE(v13) = 1;
        *(_WORD *)(v11 + 362) = 257;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 464LL))(v12, 2LL, v13);
      }
      ++i;
LABEL_7:
      v6 = *((_QWORD *)this + 13);
    }
    if ( v6 != v8 )
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
        v1,
        (__int64 *)this + 12);
  }
  return 0LL;
}
