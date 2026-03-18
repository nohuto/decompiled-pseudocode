/*
 * XREFs of ZwAlpcQueryInformationMessage @ 0x140724570
 * Callers:
 *     DifZwAlpcQueryInformationMessageWrapper @ 0x14069B7D0 (DifZwAlpcQueryInformationMessageWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcQueryInformationMessage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
