/*
 * XREFs of ?BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AAFA8
 * Callers:
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AC6CC (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SpaceForTwoRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@SA_NKKI@Z @ 0x1805AD5A0 (-SpaceForTwoRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@SA_NKKI@Z.c)
 *     ?push_back@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@Geometry@@@Z @ 0x1805ADC98 (-push_back@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX$$QEAUCRect@.c)
 *     ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1805ADCC0 (-reserve@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  bool v13; // al
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int *v16; // rax
  int v17; // edx
  int v18; // ecx
  int *v19; // rax
  int v21; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+44h] [rbp-34h]
  int v23; // [rsp+48h] [rbp-30h]
  int v24; // [rsp+4Ch] [rbp-2Ch]
  _BYTE v25[16]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a3 - a2;
  v13 = SnapLayoutHelpers::SpanningSmartFillSolverBase::SpaceForTwoRegions(a1, a3 - a2, a6);
  v14 = (__int64)(a8[1] - *a8) >> 4;
  if ( v13 )
  {
    v15 = v8 / 2 + a2;
    std::vector<Geometry::CRect>::reserve(a8, v14 + 2);
    v16 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                   a1,
                   v25,
                   a2,
                   v15,
                   a4,
                   a5);
    v17 = v16[2];
    v21 = *v16;
    v18 = v16[1];
    LODWORD(v16) = v16[3];
    v22 = v18;
    v23 = v17;
    v24 = (int)v16;
    std::vector<Geometry::CRect>::push_back(a8, &v21);
    v19 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                   a1,
                   v25,
                   v15,
                   a3,
                   a4,
                   a5);
  }
  else
  {
    std::vector<Geometry::CRect>::reserve(a8, v14 + 1);
    v19 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 16LL))(
                   a1,
                   v25,
                   a2,
                   a3,
                   a4,
                   a5);
  }
  v21 = *v19;
  v22 = v19[1];
  v23 = v19[2];
  v24 = v19[3];
  return std::vector<Geometry::CRect>::push_back(a8, &v21);
}
