/*
 * XREFs of _anonymous_namespace_::CreateRowLayout @ 0x1805B624C
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1800E2B1C (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VDefaultSnapLayout@@U?$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ @ 0x1805B5AC8 (--1-$unique_ptr@VDefaultSnapLayout@@U-$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ.c)
 */

SnapLayoutBase *__fastcall anonymous_namespace_::CreateRowLayout(SnapLayoutBase *a1)
{
  _QWORD *v2; // rax
  SnapLayoutBase *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v2 = operator new(8uLL);
  v4 = 0LL;
  *v2 = &RowSnapLayout::`vftable';
  *(_QWORD *)a1 = v2;
  std::unique_ptr<DefaultSnapLayout>::~unique_ptr<DefaultSnapLayout>(&v4);
  return a1;
}
