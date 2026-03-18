/*
 * XREFs of ZwAlpcCreateSectionView @ 0x1407243F0
 * Callers:
 *     DifZwAlpcCreateSectionViewWrapper @ 0x14069ACF0 (DifZwAlpcCreateSectionViewWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140B39034 (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSectionView(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
