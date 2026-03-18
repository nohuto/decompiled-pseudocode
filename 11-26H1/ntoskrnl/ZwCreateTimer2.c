/*
 * XREFs of ZwCreateTimer2 @ 0x140724D70
 * Callers:
 *     DifZwCreateTimer2Wrapper @ 0x1406A25F0 (DifZwCreateTimer2Wrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateTimer2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
