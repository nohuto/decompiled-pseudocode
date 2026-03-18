/*
 * XREFs of VslResetKernelShadowStack @ 0x140AE48AC
 * Callers:
 *     MmDeleteKernelStack @ 0x1404162AC (MmDeleteKernelStack.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslResetKernelShadowStack(int a1, __int64 *a2)
{
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  int v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  v7 = *a2;
  v6 = a1;
  result = VslpEnterIumSecureMode(2u, 0xE9u, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a2 = v7;
  return result;
}
