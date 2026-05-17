/*
 * XREFs of _RtlpRemovePendingDeleteLanguages @ 0x18014EF30
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x18014E7F8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     LdrpOpenKey @ 0x1800DC350 (LdrpOpenKey.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtEnumerateKey @ 0x18015F580 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpRemovePendingDeleteLanguages(__int64 a1, __int16 a2)
{
  unsigned int v5; // ebx
  int v6; // esi
  __int64 v7; // rdx
  __int16 v8[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[12]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+5Ch] [rbp-A4h]
  wchar_t v14[248]; // [rsp+60h] [rbp-A0h] BYREF

  Handle = 0LL;
  v9 = 0;
  v8[0] = -1;
  DestinationString = 0LL;
  if ( !a1 )
    return 3221225485LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages\\PendingDelete");
  if ( (int)LdrpOpenKey((__int64)&DestinationString, 0LL, 0x20019u, &Handle) >= 0 )
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v6 = NtEnumerateKey(Handle, v5, 0LL, v12, 512, &v9);
        if ( v6 < 0 )
          break;
        if ( (unsigned __int64)v13 + 24 >= 0x1FE )
          break;
        v14[(unsigned __int64)v13 >> 1] = 0;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(a1, v14, 0, v8) < 0 || v8[0] == -1 || v8[0] == a2 )
          break;
        v7 = 28LL * v8[0];
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v7) &= ~0x20u;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v7) |= 0x8000u;
        ++v5;
      }
      ++v5;
    }
    while ( v6 != -2147483622 );
    if ( Handle )
      NtClose(Handle);
  }
  return 0LL;
}
