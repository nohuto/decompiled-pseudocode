/*
 * XREFs of VslNotifyShutdown @ 0x1405C5F30
 * Callers:
 *     ExRebootSystemForRecovery @ 0x1406CF57C (ExRebootSystemForRecovery.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140C04024 (PopShutdownSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  v1 = a1;
  memset_0(v3, 0, 0x68uLL);
  v4 = v1;
  return VslpEnterIumSecureMode(2u, 0x119u, 0, (__int64)v3);
}
