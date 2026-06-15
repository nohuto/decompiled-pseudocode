/*
 * XREFs of sub_1400AD610 @ 0x1400AD610
 * Callers:
 *     sub_1400AD7C8 @ 0x1400AD7C8 (sub_1400AD7C8.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

NTSTATUS __fastcall sub_1400AD610(__int64 a1, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v6[10]; // [rsp+70h] [rbp-68h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    memset(v6, 0, 0x48uLL);
    v6[2] = 48LL;
    *a3 = 0LL;
    *(_QWORD *)((char *)v6 + 4) = 12LL;
    WORD2(v6[1]) = 257;
    return NtAlpcConnectPort(a3, &DestinationString, 0LL, v6, 0x20000, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
