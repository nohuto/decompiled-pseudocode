/*
 * XREFs of ZwAlpcCreateSectionView @ 0x14069C140
 * Callers:
 *     DifZwAlpcCreateSectionViewWrapper @ 0x140630340 (DifZwAlpcCreateSectionViewWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140ABCEFC (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreateSectionView(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
