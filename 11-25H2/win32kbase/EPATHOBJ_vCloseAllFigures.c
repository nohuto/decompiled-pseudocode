/*
 * XREFs of EPATHOBJ_vCloseAllFigures @ 0x140095E70
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseAllFigures@PATH_CORE@@QEAAKXZ @ 0x140096B20 (-CloseAllFigures@PATH_CORE@@QEAAKXZ.c)
 */

unsigned int __fastcall EPATHOBJ_vCloseAllFigures(__int64 a1)
{
  unsigned int result; // eax

  result = PATH_CORE::CloseAllFigures((PATH_CORE *)(*(_QWORD *)(a1 + 8) + 24LL));
  *(_DWORD *)(a1 + 4) += result;
  return result;
}
