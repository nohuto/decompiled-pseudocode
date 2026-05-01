/*
 * XREFs of ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x180581648
 * Callers:
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805846D0 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1800D973C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180210544 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B6A4C (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ResizeSnapRegion@CSnapAssistControllerBase@@IEBA?AUCRect@Geometry@@AEBW4SnapRegion@@AEBU23@11@Z @ 0x1805838F0 (-ResizeSnapRegion@CSnapAssistControllerBase@@IEBA-AUCRect@Geometry@@AEBW4SnapRegion@@AEBU23@11@Z.c)
 *     ?erase@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@2@0@Z @ 0x18058540C (-erase@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAA-AV-$_Vector_iter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSnapAssistControllerBase::AdjustRegionsForInitialSnapPosition<std::vector<Geometry::CRect>>(
        __int64 a1,
        HWND a2,
        const struct tagRECT **a3,
        SnapRectHelpers *a4)
{
  __int64 v7; // rax
  int v8; // eax
  struct IImmersiveMonitor *v9; // rdx
  int v10; // eax
  int SnapRegionAnchorLocations; // eax
  const struct tagRECT *v12; // rbx
  const struct tagRECT *v13; // rdx
  const struct tagRECT *v14; // rdx
  __int64 v15; // rcx
  const struct tagRECT *v16; // r11
  struct tagRECT *v17; // rax
  struct tagRECT *v18; // r11
  struct tagRECT *v19; // r9
  struct tagRECT *i; // r8
  struct tagRECT *j; // rdx
  int v23; // [rsp+20h] [rbp-50h]
  int v24; // [rsp+30h] [rbp-40h] BYREF
  char v25[16]; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT pvAttribute; // [rsp+48h] [rbp-28h] BYREF
  __int128 v27; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u) < 0 )
    GetWindowRect(a2, &pvAttribute);
  v7 = *(_QWORD *)a4;
  v27 = 0LL;
  v8 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(v7 + 88))(a4, &v27);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x88,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v8,
      v23);
  v10 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a4, v9);
  SnapRegionAnchorLocations = SnapLayoutHelpers::GetSnapRegionAnchorLocations(&pvAttribute, &v27, v10);
  v12 = a3[1];
  v13 = *a3;
  v24 = dword_180762440[SnapRegionAnchorLocations];
  while ( v13 != v12 )
  {
    if ( Geometry::CRect::Intersects((Geometry::CRect *)&pvAttribute, v13) )
    {
      while ( v16 != v12 )
      {
        v17 = (struct tagRECT *)((__int64 (__fastcall *)(__int64, char *, int *, __int128 *, struct tagRECT *, const struct tagRECT *))CSnapAssistControllerBase::ResizeSnapRegion)(
                                  v15,
                                  v25,
                                  &v24,
                                  &v27,
                                  &pvAttribute,
                                  v16);
        *v18 = *v17;
        v16 = v18 + 1;
      }
      break;
    }
    v13 = v14 + 1;
  }
  v19 = (struct tagRECT *)a3[1];
  for ( i = (struct tagRECT *)*a3;
        i != v19 && (unsigned int)(i->bottom - i->top) >= 0xC8 && (unsigned int)(i->right - i->left) >= 0xC8;
        ++i )
  {
    ;
  }
  if ( i != v19 )
  {
    for ( j = i + 1; j != v19; ++j )
    {
      if ( (unsigned int)(j->bottom - j->top) >= 0xC8 && (unsigned int)(j->right - j->left) >= 0xC8 )
        *i++ = *j;
    }
  }
  return std::vector<Geometry::CRect>::erase(a3, &v24, i, v19);
}
