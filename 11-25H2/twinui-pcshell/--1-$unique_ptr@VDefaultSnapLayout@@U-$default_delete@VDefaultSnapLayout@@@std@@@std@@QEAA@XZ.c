/*
 * XREFs of ??1?$unique_ptr@VDefaultSnapLayout@@U?$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ @ 0x180591B08
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1801BBCE0 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 *     _anonymous_namespace_::CreateDefaultLayout @ 0x180592210 (_anonymous_namespace_--CreateDefaultLayout.c)
 * Callees:
 *     ??_ESnapLayoutBase@@UEAAPEAXI@Z @ 0x18022B2E0 (--_ESnapLayoutBase@@UEAAPEAXI@Z.c)
 */

SnapLayoutBase *__fastcall std::unique_ptr<DefaultSnapLayout>::~unique_ptr<DefaultSnapLayout>(SnapLayoutBase **a1)
{
  SnapLayoutBase *v1; // rcx
  SnapLayoutBase *result; // rax

  v1 = *a1;
  if ( v1 )
    return SnapLayoutBase::`vector deleting destructor'(v1, 1);
  return result;
}
