/*
 * XREFs of EPATHOBJ_vCloseAllFigures @ 0x14000EE70
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseAllFigures@PATH_CORE@@QEAAKXZ @ 0x140010080 (-CloseAllFigures@PATH_CORE@@QEAAKXZ.c)
 */

unsigned int __fastcall EPATHOBJ_vCloseAllFigures(__int64 a1)
{
  unsigned int result; // eax

  result = PATH_CORE::CloseAllFigures((PATH_CORE *)(*(_QWORD *)(a1 + 8) + 24LL));
  *(_DWORD *)(a1 + 4) += result;
  return result;
}
