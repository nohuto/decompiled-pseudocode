/*
 * XREFs of ??$_Assign_counted_range@PEBUtagRECT@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXPEBUtagRECT@@_K@Z @ 0x1805A5A7C
 * Callers:
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805A8550 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1801F9A20 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Buy_raw@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1802856B0 (-_Buy_raw@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_copy_n@PEBUtagRECT@@V?$allocator@UCRect@Geometry@@@std@@@std@@YAPEAUCRect@Geometry@@PEBUtagRECT@@_KPEAU12@AEAV?$allocator@UCRect@Geometry@@@0@@Z @ 0x1805A5DD4 (--$_Uninitialized_copy_n@PEBUtagRECT@@V-$allocator@UCRect@Geometry@@@std@@@std@@YAPEAUCRect@Geom.c)
 */

void __fastcall std::vector<Geometry::CRect>::_Assign_counted_range<tagRECT const *>(
        __int64 *a1,
        _DWORD *a2,
        unsigned __int64 a3)
{
  char *v3; // r10
  unsigned __int64 v4; // rbx
  _DWORD *v5; // rsi
  unsigned __int64 v7; // rbp
  void *v8; // r10
  __int64 v9; // r11
  char *v10; // r8
  unsigned __int64 v11; // r9
  char *v12; // r9
  int *v13; // rsi
  int v14; // ecx
  int v15; // edx
  int v16; // r8d
  int v17; // eax
  int v18; // r8d
  int v19; // ecx
  int v20; // edx

  v3 = (char *)*a1;
  v4 = a3;
  v5 = a2;
  if ( a3 > (a1[2] - *a1) >> 4 )
  {
    if ( a3 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    v7 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, a3);
    if ( v8 )
    {
      std::_Deallocate<16>(v8, (struct std::nothrow_t *)(16 * v9));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    std::vector<Windows::Foundation::Rect>::_Buy_raw(a1, v7);
    v10 = (char *)*a1;
    goto LABEL_15;
  }
  v10 = (char *)a1[1];
  v11 = (v10 - v3) >> 4;
  if ( v4 > v11 )
  {
    while ( v3 != v10 )
    {
      v18 = v5[3];
      v19 = v5[1];
      v20 = v5[2];
      *(_DWORD *)v3 = *v5;
      *((_DWORD *)v3 + 1) = v19;
      *((_DWORD *)v3 + 2) = v20;
      *((_DWORD *)v3 + 3) = v18;
      v3 += 16;
      v10 = (char *)a1[1];
      v5 += 4;
    }
    v4 -= v11;
LABEL_15:
    a1[1] = std::_Uninitialized_copy_n<tagRECT const *>(v5, v4, v10);
    return;
  }
  v12 = &v3[16 * v4];
  if ( v4 )
  {
    v13 = a2 + 2;
    do
    {
      v14 = *(v13 - 1);
      v15 = *v13;
      v16 = v13[1];
      v17 = *(v13 - 2);
      v13 += 4;
      *(_DWORD *)v3 = v17;
      *((_DWORD *)v3 + 1) = v14;
      *((_DWORD *)v3 + 2) = v15;
      *((_DWORD *)v3 + 3) = v16;
      v3 += 16;
      --v4;
    }
    while ( v4 );
  }
  a1[1] = (__int64)v12;
}
