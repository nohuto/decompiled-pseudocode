/*
 * XREFs of ZwCreateTokenEx @ 0x140724DB0
 * Callers:
 *     DifZwCreateTokenExWrapper @ 0x1406A2920 (DifZwCreateTokenExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateTokenEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
