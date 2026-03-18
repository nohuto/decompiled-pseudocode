/*
 * XREFs of _DxgkCddPresentOnScreen_::_46_::ENSURE_FREE_MEMORY::_ENSURE_FREE_MEMORY @ 0x140194BB0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkCddPresentOnScreen_::_46_::ENSURE_FREE_MEMORY::_ENSURE_FREE_MEMORY(PVOID *a1)
{
  struct _LOOKASIDE_LIST_EX *Global; // rax

  Global = (struct _LOOKASIDE_LIST_EX *)DXGGLOBAL::GetGlobal();
  ExFreeToLookasideListEx(Global + 13, *a1);
}
