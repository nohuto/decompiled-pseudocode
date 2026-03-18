/*
 * XREFs of ZwAlpcCreatePortSection @ 0x1407243B0
 * Callers:
 *     DifZwAlpcCreatePortSectionWrapper @ 0x14069A830 (DifZwAlpcCreatePortSectionWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140B39034 (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePortSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
