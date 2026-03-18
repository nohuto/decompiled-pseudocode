/*
 * XREFs of VslNotifyShutdown @ 0x14058A224
 * Callers:
 *     ExRebootSystemForRecovery @ 0x140647A6C (ExRebootSystemForRecovery.c)
 *     PopShutdownSystem @ 0x140B4FF14 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  v1 = a1;
  memset_0(v3, 0, 0x68uLL);
  v4 = v1;
  return VslpEnterIumSecureMode(2u, 0x10Au, 0, (__int64)v3);
}
