/*
 * XREFs of ?StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x180293FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Buy_raw@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1802856B0 (-_Buy_raw@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$StartGuidedSnapAssist@AEAI@CSnapComponentTelemetry@@SAXAEAI@Z @ 0x1802940C8 (--$StartGuidedSnapAssist@AEAI@CSnapComponentTelemetry@@SAXAEAI@Z.c)
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18029410C (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 *     ??1?$_Tidy_guard@V?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@@std@@QEAA@XZ @ 0x18046893C (--1-$_Tidy_guard@V-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistControllerBase::StartGuidedSnapAssist(
        CSnapAssistControllerBase *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  unsigned int i; // r10d
  __int64 v9; // r9
  float v10; // xmm2_4
  float v11; // xmm0_4
  int v12; // ecx
  __int64 v13; // rdx
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]
  unsigned int v17; // [rsp+68h] [rbp+28h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v17 = a2;
  CSnapComponentTelemetry::StartGuidedSnapAssist<unsigned int &>(&v17);
  v6 = a2;
  v15 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    std::vector<Windows::Foundation::Rect>::_Buy_raw((__int64 *)&v15, a2);
    v7 = (_QWORD *)v15;
    do
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      v7 += 2;
      --v6;
    }
    while ( v6 );
    *((_QWORD *)&v15 + 1) = v7;
    v18 = 0LL;
    std::_Tidy_guard<std::vector<Windows::Foundation::Rect>>::~_Tidy_guard<std::vector<Windows::Foundation::Rect>>(&v18);
  }
  for ( i = 0; i < a2; ++i )
  {
    v9 = 2LL * i;
    v10 = *((float *)a3 + 4 * i + 1);
    v11 = v10 + *((float *)a3 + 4 * i + 3);
    v12 = (int)(float)(*((float *)a3 + 4 * i) + *((float *)a3 + 4 * i + 2));
    v13 = v15;
    *(_DWORD *)(v15 + 8 * v9) = (int)*((float *)a3 + 4 * i);
    *(_DWORD *)(v13 + 8 * v9 + 4) = (int)v10;
    *(_DWORD *)(v13 + 8 * v9 + 8) = v12;
    *(_DWORD *)(v13 + 8 * v9 + 12) = (int)v11;
  }
  CSnapAssistControllerBase::SetGuidedSnapAssistRegions<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Geometry::CRect>>>>(
    (char *)this - 40,
    v15);
  *((_DWORD *)this + 60) = 0;
  if ( (_QWORD)v15 )
    std::_Deallocate<16>((void *)v15, (struct std::nothrow_t *)((v16 - v15) & 0xFFFFFFFFFFFFFFF0uLL));
  return 0LL;
}
