/*
 * XREFs of ?AddClippedOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@_N@Z @ 0x18024F880
 * Callers:
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@@Z @ 0x1802048E8 (-CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800900E0 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?resize@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016B5B8 (-resize@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COcclusionContext::AddClippedOcclusionRect(__int64 a1, FLOAT *a2, __int64 *a3, char a4)
{
  __int64 v8; // rax
  const char *v9; // r9
  float *v10; // rbx
  float *i; // rdi
  struct D2D_RECT_F *v12; // rcx
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  const struct D2D_RECT_F *v16; // rcx
  unsigned int v17[4]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE *v18; // [rsp+30h] [rbp-39h] BYREF
  float *v19; // [rsp+38h] [rbp-31h]
  char *v20; // [rsp+40h] [rbp-29h]
  _BYTE v21[64]; // [rsp+48h] [rbp-21h] BYREF
  char v22; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !*(_DWORD *)(a1 + 1272) )
  {
    v8 = *a3;
    v17[0] = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned int *))(v8 + 64))(a3, v17) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3F4,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\occlusioncontext.cpp",
        v9);
    if ( v17[0] )
    {
      v18 = v21;
      v19 = (float *)v21;
      v20 = &v22;
      detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::resize(
        (__int64 *)&v18,
        v17[0]);
      (*(void (__fastcall **)(__int64 *, _BYTE *, _QWORD))(*a3 + 80))(a3, v18, v17[0]);
      v10 = v19;
      for ( i = (float *)(v18 + 8); ; i += 4 )
      {
        v12 = (struct D2D_RECT_F *)(i - 2);
        if ( i - 2 == v10 )
          break;
        if ( *a2 > v12->left )
          v12->left = *a2;
        v13 = a2[1];
        if ( v13 > *(i - 1) )
          *(i - 1) = v13;
        v14 = a2[2];
        if ( *i > v14 )
          *i = v14;
        v15 = a2[3];
        if ( i[1] > v15 )
          i[1] = v15;
        if ( IsEmpty(v12) )
        {
          *(_QWORD *)i = 0LL;
          *(i - 1) = 0.0;
          v16->left = 0.0;
        }
        COcclusionContext::CollectRectangleForOcclusion(a1, v16, a4);
      }
      detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64 *)&v18);
    }
  }
}
