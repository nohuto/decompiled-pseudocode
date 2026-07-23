/*
 * XREFs of VslSwapHiberShadowStacks @ 0x1405C6A00
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140735650 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall VslSwapHiberShadowStacks(__int64 a1)
{
  void *result; // rax
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  result = memset_0(v3, 0, 0x68uLL);
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v4 = a1;
    return (void *)VslpEnterIumSecureMode(2u, 0x118u, 0, (__int64)v3);
  }
  return result;
}
