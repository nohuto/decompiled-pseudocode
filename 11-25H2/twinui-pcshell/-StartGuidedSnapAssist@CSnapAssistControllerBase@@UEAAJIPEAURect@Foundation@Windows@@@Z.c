/*
 * XREFs of ?StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x18029C290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1800A982C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??$StartGuidedSnapAssist@AEAI@CSnapComponentTelemetry@@SAXAEAI@Z @ 0x18029C3A0 (--$StartGuidedSnapAssist@AEAI@CSnapComponentTelemetry@@SAXAEAI@Z.c)
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18029C3E4 (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 *     ?_Buy_raw@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1802C3180 (-_Buy_raw@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@.c)
 *     ??1?$_Tidy_guard@V?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@@std@@QEAA@XZ @ 0x18045C5A0 (--1-$_Tidy_guard@V-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistControllerBase::StartGuidedSnapAssist(
        CSnapAssistControllerBase *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  __int64 v6; // rbx
  _DWORD *v7; // rax
  unsigned int i; // r8d
  __int64 v9; // rdx
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  unsigned int v18; // [rsp+68h] [rbp+28h] BYREF
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF

  v18 = a2;
  CSnapComponentTelemetry::StartGuidedSnapAssist<unsigned int &>(&v18);
  v6 = a2;
  v16 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    std::vector<Windows::Foundation::Rect>::_Buy_raw(&v16);
    v7 = (_DWORD *)v16;
    do
    {
      *v7 = 0;
      v7[1] = 0;
      v7[2] = 0;
      v7[3] = 0;
      v7 += 4;
      --v6;
    }
    while ( v6 );
    *((_QWORD *)&v16 + 1) = v7;
    v19 = 0LL;
    std::_Tidy_guard<std::vector<Windows::Foundation::Rect>>::~_Tidy_guard<std::vector<Windows::Foundation::Rect>>(&v19);
  }
  for ( i = 0; i < a2; ++i )
  {
    v9 = 2LL * i;
    v10 = *((float *)a3 + 4 * i + 3);
    v11 = *((float *)a3 + 4 * i + 1);
    v12 = *((float *)a3 + 4 * i + 2);
    v13 = *((float *)a3 + 4 * i);
    v14 = v16;
    *(_DWORD *)(v16 + 8 * v9) = (int)v13;
    *(_DWORD *)(v14 + 8 * v9 + 4) = (int)v11;
    *(_DWORD *)(v14 + 8 * v9 + 8) = (int)(float)(v13 + v12);
    *(_DWORD *)(v14 + 8 * v9 + 12) = (int)(float)(v11 + v10);
  }
  CSnapAssistControllerBase::SetGuidedSnapAssistRegions<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Geometry::CRect>>>>(
    (char *)this - 40,
    v16,
    *((_QWORD *)&v16 + 1));
  *((_DWORD *)this + 60) = 0;
  std::vector<Geometry::CRect>::_Tidy((__int64)&v16);
  return 0LL;
}
