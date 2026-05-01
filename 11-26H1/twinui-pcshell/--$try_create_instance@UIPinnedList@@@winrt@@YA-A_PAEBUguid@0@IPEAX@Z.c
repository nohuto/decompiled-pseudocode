/*
 * XREFs of ??$try_create_instance@UIPinnedList@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x18068BA7C
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     CoCreateInstance_0 @ 0x1802CA570 (CoCreateInstance_0.c)
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
