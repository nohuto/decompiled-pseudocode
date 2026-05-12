/*
 * XREFs of sub_14006E0D4 @ 0x14006E0D4
 * Callers:
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

_DWORD *sub_14006E0D4()
{
  _DWORD *result; // rax
  _BYTE Dst[4]; // [rsp+20h] [rbp-338h] BYREF
  int v2; // [rsp+24h] [rbp-334h]

  memset_0(Dst, 0, 0x314uLL);
  while ( 1 )
  {
    result = RtlEnumerateGenericTable(&Table, 1u);
    if ( !result )
      break;
    v2 = result[1];
    RtlDeleteElementGenericTable(&Table, Dst);
  }
  return result;
}
