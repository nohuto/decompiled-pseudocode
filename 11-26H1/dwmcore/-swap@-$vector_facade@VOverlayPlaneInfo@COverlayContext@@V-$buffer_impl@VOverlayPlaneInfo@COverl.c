/*
 * XREFs of ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x180199F30
 * Callers:
 *     ?PushCandidates@COverlayContext@@IEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023D53C (-PushCandidates@COverlayContext@@IEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ @ 0x18023DDF8 (-TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ.c)
 * Callees:
 *     ??$swap_generic@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x180030764 (--$swap_generic@V-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180030BA8 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 *v5; // r9
  __int64 *v6; // rdi
  __int64 result; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 i; // rcx
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // r10

  if ( a2 != a1 )
  {
    v2 = a2;
    v3 = a1 + 3;
    v4 = *a1;
    v5 = a1;
    v6 = v2 + 3;
    if ( (__int64 *)*a1 == a1 + 3 )
      goto LABEL_9;
    v8 = *v2;
    if ( (__int64 *)*v2 != v6 )
    {
      *a1 = v8;
      *v2 = v4;
      v9 = a1[1];
      v5[1] = v2[1];
      v2[1] = v9;
      result = v2[2];
      v10 = v5[2];
      v5[2] = result;
      v2[2] = v10;
      return result;
    }
    v12 = v2[1];
    if ( (unsigned __int64)(0x7D6343EB1A1F58D1LL * ((v12 - v8) >> 3)) > 0x10 )
    {
LABEL_9:
      if ( (__int64 *)*v2 == v6
        || (__int64 *)v4 != v3
        || (unsigned __int64)(0x7D6343EB1A1F58D1LL * ((a1[1] - v4) >> 3)) > 0x10 )
      {
        return detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap_generic<detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>>(
                 a1,
                 v2);
      }
      else
      {
        v11 = (__int64)(v2 + 3);
        if ( v4 != v5[1] )
        {
          do
          {
            COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v11, v4);
            v11 = v18 + v17;
            v4 = v18 + v19;
          }
          while ( v4 != v20 );
        }
        *v5 = *v2;
        v5[1] = v2[1];
        v5[2] = v2[2];
        result = (__int64)(v2 + 787);
        v2[2] = (__int64)(v2 + 787);
        *v2 = (__int64)v6;
        v2[1] = v11;
      }
    }
    else
    {
      for ( i = (__int64)(a1 + 3); v8 != v12; v8 = v15 + v16 )
      {
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(i, v8);
        i = v15 + v14;
      }
      *v2 = *v5;
      v2[1] = v5[1];
      v2[2] = v5[2];
      result = (__int64)(v5 + 787);
      v5[2] = (__int64)(v5 + 787);
      *v5 = (__int64)v3;
      v5[1] = i;
    }
  }
  return result;
}
