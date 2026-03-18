/*
 * XREFs of ZwContinueEx @ 0x140724890
 * Callers:
 *     DifZwContinueExWrapper @ 0x14069DBB0 (DifZwContinueExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwContinueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
