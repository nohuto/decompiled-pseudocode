/*
 * XREFs of ZwOpenThreadToken @ 0x140723870
 * Callers:
 *     DifZwOpenThreadTokenWrapper @ 0x1406ADC40 (DifZwOpenThreadTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenThreadToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
