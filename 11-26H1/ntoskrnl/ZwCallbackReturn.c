/*
 * XREFs of ZwCallbackReturn @ 0x140723490
 * Callers:
 *     DifZwCallbackReturnWrapper @ 0x14069C4E0 (DifZwCallbackReturnWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCallbackReturn(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
