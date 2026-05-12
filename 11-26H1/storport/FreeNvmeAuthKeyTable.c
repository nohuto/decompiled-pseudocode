/*
 * XREFs of FreeNvmeAuthKeyTable @ 0x140074FEC
 * Callers:
 *     DllUnload @ 0x1400ADF30 (DllUnload.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

_DWORD *FreeNvmeAuthKeyTable()
{
  _DWORD *result; // rax
  _BYTE Buffer[4]; // [rsp+20h] [rbp-338h] BYREF
  int v2; // [rsp+24h] [rbp-334h]

  memset_0(Buffer, 0, 0x314uLL);
  while ( 1 )
  {
    result = RtlEnumerateGenericTable(&NvmeAuthKeyTable, 1u);
    if ( !result )
      break;
    v2 = result[1];
    RtlDeleteElementGenericTable(&NvmeAuthKeyTable, Buffer);
  }
  return result;
}
