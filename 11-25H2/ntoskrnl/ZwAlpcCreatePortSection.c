/*
 * XREFs of ZwAlpcCreatePortSection @ 0x14069C100
 * Callers:
 *     DifZwAlpcCreatePortSectionWrapper @ 0x14062FE80 (DifZwAlpcCreatePortSectionWrapper.c)
 *     CmFcpCreateAlpcSectionView @ 0x140ABCEFC (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePortSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
