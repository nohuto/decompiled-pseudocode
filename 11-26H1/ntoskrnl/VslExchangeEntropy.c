/*
 * XREFs of VslExchangeEntropy @ 0x1404E88C0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslExchangeEntropy(void *a1)
{
  int v2; // ebx
  _BYTE v4[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE Src[96]; // [rsp+30h] [rbp-78h] BYREF

  memset_0(v4, 0, 0x68uLL);
  memmove(Src, a1, 0x40uLL);
  v2 = VslpEnterIumSecureMode(2u, 0x23u, 0, (__int64)v4);
  if ( v2 >= 0 )
    memmove(a1, Src, 0x40uLL);
  return (unsigned int)v2;
}
