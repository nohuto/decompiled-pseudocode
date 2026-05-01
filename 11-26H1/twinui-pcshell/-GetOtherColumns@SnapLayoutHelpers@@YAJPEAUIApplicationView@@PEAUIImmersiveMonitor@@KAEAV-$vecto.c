/*
 * XREFs of ?GetOtherColumns@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AC1D4
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18022B940 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1802199B4 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AC6CC (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutHelpers::GetOtherColumns(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int128 *v9; // r8
  __int128 *v10; // rdx
  const char *v11; // r9
  __int64 result; // rax
  void **v13; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v13 = &SnapLayoutHelpers::ColumnSmartFillSolver::`vftable';
    if ( (unsigned int)Mirror_IsThreadRTL() )
    {
      v14 = 0LL;
      v15 = 0LL;
      SnapLayoutHelpers::SpanningSmartFillSolverBase::GetOtherRects(&v13, a1, a2);
      v7 = *((_QWORD *)&v14 + 1);
      v8 = v14;
      while ( v7 != v8 )
      {
        v9 = (__int128 *)(v7 - 16);
        v7 -= 16LL;
        v10 = (__int128 *)a4[1];
        if ( v10 == (__int128 *)a4[2] )
        {
          std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(a4, (__int64)v10, v9);
        }
        else
        {
          *v10 = *v9;
          a4[1] += 16LL;
        }
      }
      std::vector<Geometry::CRect>::_Tidy((__int64 *)&v14);
    }
    else
    {
      SnapLayoutHelpers::SpanningSmartFillSolverBase::GetOtherRects(&v13, a1, a2);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA10,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
                           v11);
  }
  return result;
}
