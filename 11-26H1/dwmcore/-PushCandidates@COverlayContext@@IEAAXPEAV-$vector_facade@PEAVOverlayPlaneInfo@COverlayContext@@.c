/*
 * XREFs of ?PushCandidates@COverlayContext@@IEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023D53C
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x1801B0D5C (-ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180030B2C (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x180176BF0 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 *     ??$emplace_back@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXVOverlayPlaneInfo@COverlayContext@@@Z @ 0x180176CA0 (--$emplace_back@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayCo.c)
 *     ??1?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180176D44 (--1-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverlayC.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180177280 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?erase@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@QEAVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x180184314 (-erase@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x180197194 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x180199F30 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 */

int __fastcall COverlayContext::PushCandidates(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r14
  const struct COverlayContext::OverlayPlaneInfo **v5; // rbx
  COverlayContext::OverlayPlaneInfo *v6; // rax
  const struct COverlayContext::OverlayPlaneInfo **v8; // [rsp+20h] [rbp-E0h] BYREF
  void *v9; // [rsp+28h] [rbp-D8h] BYREF
  char v10[392]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v11; // [rsp+1B8h] [rbp+B8h] BYREF
  const struct COverlayContext::OverlayPlaneInfo **v12; // [rsp+1C0h] [rbp+C0h]
  __int64 *v13; // [rsp+1C8h] [rbp+C8h]
  _BYTE v14[6272]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v15; // [rsp+1A50h] [rbp+1950h] BYREF

  v2 = (__int64 *)(a1 + 6392);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)(a1 + 6392));
  if ( !a2 )
    return detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
             v2,
             (__int64 *)(a1 + 96));
  v5 = (const struct COverlayContext::OverlayPlaneInfo **)*a2;
  v11 = v14;
  v12 = (const struct COverlayContext::OverlayPlaneInfo **)v14;
  v13 = &v15;
  while ( v5 != (const struct COverlayContext::OverlayPlaneInfo **)a2[1] )
  {
    if ( *(_QWORD *)*v5 == a1 )
    {
      v6 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo((COverlayContext::OverlayPlaneInfo *)v10, *v5);
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext::OverlayPlaneInfo>(
        (__int64)&v11,
        (__int64)v6);
      v8 = v5;
      v5 = (const struct COverlayContext::OverlayPlaneInfo **)*detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::erase(
                                                                 a2,
                                                                 &v9,
                                                                 &v8);
    }
    else
    {
      ++v5;
    }
  }
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
    v2,
    (__int64 *)(a1 + 96));
  if ( &v11 != (_BYTE **)(a1 + 96) )
  {
    if ( detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(
           (__int64 *)(a1 + 96),
           (__int64 *)&v11) )
    {
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)&v11);
    }
    else
    {
      v8 = v12;
      v9 = v11;
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::assign<std::move_iterator<detail::basic_iterator<COverlayContext::OverlayPlaneInfo>>,void>(
        a1 + 96,
        (__int64 *)&v9,
        (__int64 *)&v8);
    }
  }
  return detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>((void **)&v11);
}
