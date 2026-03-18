/*
 * XREFs of ZwImpersonateClientOfPort @ 0x1407237D0
 * Callers:
 *     DifZwImpersonateClientOfPortWrapper @ 0x1406A8350 (DifZwImpersonateClientOfPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwImpersonateClientOfPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
