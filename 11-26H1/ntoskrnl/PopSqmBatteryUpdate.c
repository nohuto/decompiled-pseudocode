/*
 * XREFs of PopSqmBatteryUpdate @ 0x1409C1F4C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     PopSqmAddToStream @ 0x1404DBF74 (PopSqmAddToStream.c)
 *     PopSqmCreateDwordStreamEntry @ 0x1404F9238 (PopSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int8 PopSqmBatteryUpdate()
{
  unsigned __int8 result; // al
  int v1; // ecx
  int v2; // r11d
  int v3; // r8d
  int v4; // r10d
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v11[4]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF

  result = SSHSupportIsPlatformAoAc();
  if ( result )
  {
    PopSqmCreateDwordStreamEntry(v9, v1);
    PopSqmCreateDwordStreamEntry(v10, v2);
    LOBYTE(v4) = v3 == 0;
    PopSqmCreateDwordStreamEntry(v11, v4);
    PopSqmCreateDwordStreamEntry(v12, v5);
    return PopSqmAddToStream(v7, v6, v8, (__int64)v9);
  }
  return result;
}
