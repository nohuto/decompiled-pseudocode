/*
 * XREFs of ZwCreateToken @ 0x140724D90
 * Callers:
 *     DifZwCreateTokenWrapper @ 0x1406A2BE0 (DifZwCreateTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
