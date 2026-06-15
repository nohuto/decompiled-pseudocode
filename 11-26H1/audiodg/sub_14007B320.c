/*
 * XREFs of sub_14007B320 @ 0x14007B320
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400383F4 @ 0x1400383F4 (sub_1400383F4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall sub_14007B320(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]

  v5 = 0LL;
  sub_1400383F4(&hstringHeader, L"Windows.Foundation.Diagnostics.AsyncCausalityTracer", 0x34u, 0x33u);
  return (int)RoGetActivationFactory(v5, &unk_1400C9888, &qword_1400E8978) >= 0;
}
