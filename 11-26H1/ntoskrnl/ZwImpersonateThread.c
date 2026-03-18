/*
 * XREFs of ZwImpersonateThread @ 0x1407254B0
 * Callers:
 *     DifZwImpersonateThreadWrapper @ 0x1406A84C0 (DifZwImpersonateThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwImpersonateThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
