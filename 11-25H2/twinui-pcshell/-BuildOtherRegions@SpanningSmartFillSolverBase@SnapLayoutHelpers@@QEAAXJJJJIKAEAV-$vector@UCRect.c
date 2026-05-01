/*
 * XREFs of ?BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180587044
 * Callers:
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180588654 (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?SpaceForTwoRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@SA_NKKI@Z @ 0x180589530 (-SpaceForTwoRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@SA_NKKI@Z.c)
 *     ?push_back@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@Geometry@@@Z @ 0x180589C0C (-push_back@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@.c)
 *     ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x180589C34 (-reserve@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::BuildOtherRegions(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        _QWORD *a8)
{
  int v8; // ebx
  unsigned int v13; // ebx
  int *v14; // rax
  int v15; // ecx
  int *v16; // rax
  int v18; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+44h] [rbp-34h]
  int v20; // [rsp+48h] [rbp-30h]
  int v21; // [rsp+4Ch] [rbp-2Ch]
  _BYTE v22[16]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a3 - a2;
  if ( SnapLayoutHelpers::SpanningSmartFillSolverBase::SpaceForTwoRegions(a1, a3 - a2, a6) )
  {
    v13 = a2 + v8 / 2;
    std::vector<Geometry::CRect>::reserve(a8, ((__int64)(a8[1] - *a8) >> 4) + 2);
    v14 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                   a1,
                   v22,
                   a2,
                   v13,
                   a4,
                   a5);
    v18 = *v14;
    v19 = v14[1];
    v15 = v14[2];
    LODWORD(v14) = v14[3];
    v20 = v15;
    v21 = (int)v14;
    std::vector<Geometry::CRect>::push_back(a8, &v18);
    v16 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                   a1,
                   v22,
                   v13,
                   a3,
                   a4,
                   a5);
  }
  else
  {
    std::vector<Geometry::CRect>::reserve(a8, ((__int64)(a8[1] - *a8) >> 4) + 1);
    v16 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                   a1,
                   v22,
                   a2,
                   a3,
                   a4,
                   a5);
  }
  v18 = *v16;
  v19 = v16[1];
  v20 = v16[2];
  v21 = v16[3];
  return std::vector<Geometry::CRect>::push_back(a8, &v18);
}
