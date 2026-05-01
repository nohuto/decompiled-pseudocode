/*
 * XREFs of ?GetOtherQuadrants@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180588234
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18023AE30 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x1800A00B0 (Mirror_IsThreadRTL.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1800D973C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B6A4C (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?push_back@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@Geometry@@@Z @ 0x180589C0C (-push_back@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall SnapLayoutHelpers::GetOtherQuadrants(__int64 a1, SnapRectHelpers *a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  struct IImmersiveMonitor *v10; // rdx
  unsigned int v11; // edi
  int v12; // eax
  int SnapRegionAnchorLocations; // edi
  int IsThreadRTL; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  __int128 v20; // [rsp+28h] [rbp-50h] BYREF
  __int128 v21; // [rsp+38h] [rbp-40h] BYREF
  __int128 v22; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v21 = 0LL;
  v6 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v21);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98F,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v20 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 128LL))(a1, &v20);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x992,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v9);
    return v11;
  }
  v12 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a2, v10);
  SnapRegionAnchorLocations = SnapLayoutHelpers::GetSnapRegionAnchorLocations(&v20, &v21, v12);
  IsThreadRTL = Mirror_IsThreadRTL();
  switch ( SnapRegionAnchorLocations )
  {
    case 3:
      LODWORD(v22) = DWORD2(v20);
      *(_QWORD *)((char *)&v22 + 4) = *(_QWORD *)((char *)&v21 + 4);
      HIDWORD(v22) = HIDWORD(v20);
      if ( !IsThreadRTL )
      {
        std::vector<Geometry::CRect>::push_back(a3, &v22);
        *(_QWORD *)&v22 = __PAIR64__(HIDWORD(v20), v21);
        *((_QWORD *)&v22 + 1) = __PAIR64__(HIDWORD(v21), DWORD2(v20));
        std::vector<Geometry::CRect>::push_back(a3, &v22);
        *(_QWORD *)&v22 = *((_QWORD *)&v20 + 1);
        *((_QWORD *)&v22 + 1) = *((_QWORD *)&v21 + 1);
        std::vector<Geometry::CRect>::push_back(a3, &v22);
        return 0LL;
      }
      std::vector<Geometry::CRect>::push_back(a3, &v22);
      *(_QWORD *)&v22 = *((_QWORD *)&v20 + 1);
      *((_QWORD *)&v22 + 1) = *((_QWORD *)&v21 + 1);
      std::vector<Geometry::CRect>::push_back(a3, &v22);
      *(_QWORD *)&v22 = __PAIR64__(HIDWORD(v20), v21);
      v17 = DWORD2(v20);
      goto LABEL_24;
    case 6:
      if ( IsThreadRTL )
      {
        LODWORD(v22) = DWORD2(v20);
        *(_QWORD *)((char *)&v22 + 4) = *(_QWORD *)((char *)&v21 + 4);
        HIDWORD(v22) = DWORD1(v20);
        std::vector<Geometry::CRect>::push_back(a3, &v22);
        *(_QWORD *)&v22 = v21;
        v19 = DWORD2(v20);
      }
      else
      {
        *(_QWORD *)&v22 = v21;
        *((_QWORD *)&v22 + 1) = __PAIR64__(DWORD1(v20), DWORD2(v20));
        std::vector<Geometry::CRect>::push_back(a3, &v22);
        *(_QWORD *)&v22 = __PAIR64__(DWORD1(v21), DWORD2(v20));
        v19 = DWORD2(v21);
      }
      *((_QWORD *)&v22 + 1) = __PAIR64__(DWORD1(v20), v19);
      std::vector<Geometry::CRect>::push_back(a3, &v22);
      LODWORD(v22) = DWORD2(v20);
      v18 = DWORD1(v20);
      goto LABEL_17;
    case 9:
      *(_QWORD *)&v22 = v21;
      *((_QWORD *)&v22 + 1) = __PAIR64__(HIDWORD(v20), v20);
      if ( IsThreadRTL )
      {
        std::vector<Geometry::CRect>::push_back(a3, &v22);
        *(_QWORD *)&v22 = __PAIR64__(HIDWORD(v20), v20);
        *((_QWORD *)&v22 + 1) = *((_QWORD *)&v21 + 1);
        std::vector<Geometry::CRect>::push_back(a3, &v22);
        LODWORD(v22) = v21;
        v16 = HIDWORD(v20);
LABEL_13:
        DWORD1(v22) = v16;
        v17 = v20;
LABEL_24:
        *((_QWORD *)&v22 + 1) = __PAIR64__(HIDWORD(v21), v17);
        std::vector<Geometry::CRect>::push_back(a3, &v22);
        return 0LL;
      }
      std::vector<Geometry::CRect>::push_back(a3, &v22);
      *(_QWORD *)&v22 = __PAIR64__(HIDWORD(v20), v21);
      *((_QWORD *)&v22 + 1) = __PAIR64__(HIDWORD(v21), v20);
      std::vector<Geometry::CRect>::push_back(a3, &v22);
      LODWORD(v22) = v20;
      v18 = HIDWORD(v20);
LABEL_17:
      DWORD1(v22) = v18;
      v17 = DWORD2(v21);
      goto LABEL_24;
    case 12:
      if ( IsThreadRTL )
      {
        LODWORD(v22) = v20;
        *(_QWORD *)((char *)&v22 + 4) = *(_QWORD *)((char *)&v21 + 4);
        HIDWORD(v22) = DWORD1(v20);
        std::vector<Geometry::CRect>::push_back(a3, &v22);
        *(_QWORD *)&v22 = v21;
        v15 = v20;
      }
      else
      {
        *(_QWORD *)&v22 = v21;
        *((_QWORD *)&v22 + 1) = v20;
        std::vector<Geometry::CRect>::push_back(a3, &v22);
        *(_QWORD *)&v22 = __PAIR64__(DWORD1(v21), v20);
        v15 = DWORD2(v21);
      }
      *((_QWORD *)&v22 + 1) = __PAIR64__(DWORD1(v20), v15);
      std::vector<Geometry::CRect>::push_back(a3, &v22);
      LODWORD(v22) = v21;
      v16 = DWORD1(v20);
      goto LABEL_13;
  }
  return 0LL;
}
