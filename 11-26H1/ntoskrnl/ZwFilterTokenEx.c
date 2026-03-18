/*
 * XREFs of ZwFilterTokenEx @ 0x1407251B0
 * Callers:
 *     DifZwFilterTokenExWrapper @ 0x1406A5E10 (DifZwFilterTokenExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterTokenEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
