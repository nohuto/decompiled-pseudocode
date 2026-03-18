/*
 * XREFs of ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x180176BF0
 * Callers:
 *     ?PushCandidates@COverlayContext@@IEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023D53C (-PushCandidates@COverlayContext@@IEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180030BA8 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

char __fastcall detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v2; // r9
  __int64 *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 i; // rbx
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // r10

  v2 = a1;
  v3 = a2;
  v4 = (__int64)(a1 + 3);
  v5 = *v2;
  v6 = v3 + 3;
  if ( *v2 != v4 )
  {
    v8 = *v3;
    if ( (__int64 *)*v3 != v6 )
    {
      *v2 = v8;
      *v3 = v5;
      v9 = v2[1];
      v2[1] = v3[1];
      v3[1] = v9;
      v10 = v2[2];
      v2[2] = v3[2];
      v3[2] = v10;
      return 1;
    }
    v12 = v3[1];
    if ( (unsigned __int64)(0x7D6343EB1A1F58D1LL * ((v12 - v8) >> 3)) <= 0x10 )
    {
      for ( i = v4; v8 != v12; v8 = v15 + v16 )
      {
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v4, v8);
        v4 = v15 + v14;
      }
      *v3 = *v2;
      v3[1] = v2[1];
      v3[2] = v2[2];
      v2[2] = (__int64)(v2 + 787);
      *v2 = i;
      v2[1] = v4;
      return 1;
    }
  }
  if ( (__int64 *)*v3 == v6 || v5 != v4 || (unsigned __int64)(0x7D6343EB1A1F58D1LL * ((v2[1] - v5) >> 3)) > 0x10 )
    return 0;
  v11 = (__int64)(v3 + 3);
  if ( v5 != v2[1] )
  {
    do
    {
      COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v11, v5);
      v11 = v18 + v17;
      v5 = v18 + v19;
    }
    while ( v5 != v20 );
  }
  *v2 = *v3;
  v2[1] = v3[1];
  v2[2] = v3[2];
  v3[2] = (__int64)(v3 + 787);
  *v3 = (__int64)v6;
  v3[1] = v11;
  return 1;
}
