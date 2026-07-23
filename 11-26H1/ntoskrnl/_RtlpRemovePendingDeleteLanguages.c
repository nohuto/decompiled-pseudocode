/*
 * XREFs of _RtlpRemovePendingDeleteLanguages @ 0x140725134
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1408B0A68 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     LdrpOpenKey @ 0x14080BE68 (LdrpOpenKey.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1408AED58 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 */

__int64 __fastcall RtlpRemovePendingDeleteLanguages(__int64 a1, __int16 a2)
{
  __int64 v5; // r8
  ULONG v6; // ebx
  NTSTATUS v7; // esi
  __int64 v8; // r8
  __int16 v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+5Ch] [rbp-A4h]
  _WORD v15[248]; // [rsp+60h] [rbp-A0h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  v9[0] = -1;
  DestinationString = 0LL;
  if ( !a1 )
    return 3221225485LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages\\PendingDelete");
  if ( (int)LdrpOpenKey(&DestinationString, 0LL, v5, &KeyHandle) >= 0 )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = ZwEnumerateKey(KeyHandle, v6, KeyBasicInformation, KeyInformation, 0x200u, &ResultLength);
        if ( v7 < 0 )
          break;
        if ( (unsigned __int64)v14 + 24 >= 0x1FE )
          break;
        v15[(unsigned __int64)v14 >> 1] = 0;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(a1, v15, v8, v9) < 0 || v9[0] == -1 || v9[0] == a2 )
          break;
        *(_WORD *)(28LL * v9[0] + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)) &= ~0x20u;
        *(_WORD *)(28LL * v9[0] + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)) |= 0x8000u;
        ++v6;
      }
      ++v6;
    }
    while ( v7 != -2147483622 );
    if ( KeyHandle )
      NtClose(KeyHandle);
  }
  return 0LL;
}
