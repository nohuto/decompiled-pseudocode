/*
 * XREFs of DllGetActivationFactory @ 0x1801693F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DllGetActivationFactory(HSTRING a1, void **a2)
{
  return WINRT_GetActivationFactory(a1, a2);
}
