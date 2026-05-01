/*
 * XREFs of ?WithRule@FillCandidate@SnapLayoutHelpers@@QEAA?AU12@W4FillRule@2@@Z @ 0x180589688
 * Callers:
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x1805874CC (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV-$CCoSimpleArray@V-.c)
 * Callees:
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::FillCandidate::WithRule(__int64 a1, __int64 a2, int a3)
{
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    (_QWORD *)a2,
    *(_QWORD *)a1);
  *(_DWORD *)(a2 + 8) = a3;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  return a2;
}
