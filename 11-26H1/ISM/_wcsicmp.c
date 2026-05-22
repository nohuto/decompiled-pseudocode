/*
 * XREFs of _wcsicmp @ 0x18009AAF4
 * Callers:
 *     ?WaitCallback@GameInputWatcher@@AEAAXXZ @ 0x180062D20 (-WaitCallback@GameInputWatcher@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  return _o__wcsicmp(String1, String2);
}
