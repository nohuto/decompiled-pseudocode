/*
 * XREFs of ??$try_create_instance@UIPinnedList@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1806653A0
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     CoCreateInstance_0 @ 0x1802D3650 (CoCreateInstance_0.c)
 */

LPVOID *__fastcall winrt::try_create_instance<IPinnedList>(LPVOID *a1, const IID *a2)
{
  LPVOID *result; // rax
  LPVOID ppv; // [rsp+38h] [rbp-20h] BYREF

  ppv = 0LL;
  CoCreateInstance_0(a2, 0LL, 1u, &winrt::impl::guid_v<IPinnedList>, &ppv);
  result = a1;
  *a1 = ppv;
  return result;
}
