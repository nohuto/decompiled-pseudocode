/*
 * XREFs of WerpEscalationIsDisabled @ 0x18013AEEC
 * Callers:
 *     WerEscalationLazyInit @ 0x1800D6160 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800D6DA4 (WerpEscalationReadUlongFromKey.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 */

__int64 WerpEscalationIsDisabled()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v2; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v5[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+4Ch] [rbp-14h]
  __int128 v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+70h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+18h] BYREF

  v0 = 0;
  v5[1] = 0;
  v9 = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  v1 = 0;
  v11 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Windows Error Reporting\\Escalation");
  v5[0] = 48;
  p_DestinationString = &DestinationString;
  v6 = 0LL;
  v8 = 64;
  v10 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, v5) >= 0 )
  {
    v2 = WerpEscalationReadUlongFromKey((__int64)Handle, L"DisableEscalation", &v11);
    v1 = v11;
    if ( v2 < 0 )
      v1 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  LOBYTE(v0) = v1 != 0;
  return v0;
}
