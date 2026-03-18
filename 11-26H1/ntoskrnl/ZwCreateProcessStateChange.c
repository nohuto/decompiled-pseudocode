/*
 * XREFs of ZwCreateProcessStateChange @ 0x140724C10
 * Callers:
 *     DifZwCreateProcessStateChangeWrapper @ 0x1406A0F10 (DifZwCreateProcessStateChangeWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateProcessStateChange(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
