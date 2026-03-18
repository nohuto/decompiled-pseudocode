/*
 * XREFs of ZwAlpcDeleteSectionView @ 0x140724470
 * Callers:
 *     DifZwAlpcDeleteSectionViewWrapper @ 0x14069AFF0 (DifZwAlpcDeleteSectionViewWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcDeleteSectionView(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
