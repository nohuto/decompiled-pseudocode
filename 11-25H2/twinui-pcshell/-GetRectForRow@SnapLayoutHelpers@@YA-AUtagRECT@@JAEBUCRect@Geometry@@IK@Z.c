/*
 * XREFs of ?GetRectForRow@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x180588ABC
 * Callers:
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x18058A9C4 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?CalculateSnapRegion@RowSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x180591E00 (-CalculateSnapRegion@RowSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapReg.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetDefaultRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUtagRECT@@JIKAEBUCRect@Geometry@@@Z @ 0x1805879DC (-GetDefaultRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA-AUtagRECT@@JIKAEBUCRect@Geom.c)
 */

struct tagRECT *__fastcall SnapLayoutHelpers::GetRectForRow(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        const struct Geometry::CRect *a3,
        const struct Geometry::CRect *a4)
{
  struct tagRECT v5; // xmm0
  struct tagRECT *result; // rax
  unsigned int v7; // [rsp+20h] [rbp-38h]
  void **v8; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v9; // [rsp+38h] [rbp-20h] BYREF

  v8 = &SnapLayoutHelpers::RowSmartFillSolver::`vftable';
  v5 = *SnapLayoutHelpers::SpanningSmartFillSolverBase::GetDefaultRect(
          (SnapLayoutHelpers::SpanningSmartFillSolverBase *)&v8,
          &v9,
          (unsigned int)retstr,
          (unsigned int)a4,
          v7,
          a3);
  result = this;
  *this = v5;
  return result;
}
