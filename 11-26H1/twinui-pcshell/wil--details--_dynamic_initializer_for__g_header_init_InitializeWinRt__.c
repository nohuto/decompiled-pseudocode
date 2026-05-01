/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeWinRt__ @ 0x180219380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall __noreturn *wil::details::_dynamic_initializer_for__g_header_init_InitializeWinRt__())(wil::details *this, const struct wil::FailureInfo *a2, const wchar_t *a3)
{
  void (__fastcall __noreturn *result)(wil::details *, const struct wil::FailureInfo *, const wchar_t *); // rax

  g_pfnResultFromCaughtException_WinRt = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))wil::details::ResultFromCaughtException_WinRt;
  result = wil::details::ThrowPlatformException;
  g_pfnThrowPlatformException = (__int64)wil::details::ThrowPlatformException;
  return result;
}
