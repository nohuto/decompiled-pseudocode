/*
 * XREFs of PpmInitIdlePolicy @ 0x140CCFE78
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1403E63A8 (PpmConvertTimeFrom.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
 */

__int64 PpmInitIdlePolicy()
{
  ULONGLONG v0; // rax
  __int64 *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // r11
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+58h] [rbp+18h] BYREF
  int v12; // [rsp+60h] [rbp+20h]

  dword_140F0B204 = 50000;
  dword_140F0B4CC = 50000;
  v12 = 0;
  v0 = 2 * PopQpcFrequency;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  v11 = 0;
  DestinationString = 0LL;
  word_140F0B200 = 0;
  word_140F0B4C8 = 0;
  word_140F0B209 = 60;
  word_140F0B4D1 = 60;
  byte_140F0B208 = 40;
  byte_140F0B4D0 = 40;
  if ( !KdPitchDebugger )
    v0 = 90 * PopQpcFrequency;
  stru_140FC01F0.WaitBlock[1].Object = (PVOID)v0;
  if ( dword_140F12D10 )
    qword_140F12D18 = PpmConvertTimeFrom((unsigned int)dword_140F12D10, 1000000LL);
  v1 = (__int64 *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1 )
    {
      v4 = PpmConvertTimeFrom(v3, 10000000LL);
      *v1 = v4;
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  v5 = (__int64 *)&PpmPackageIdleIntervalLimits;
  v6 = 37LL;
  do
  {
    v7 = v5[1];
    if ( v7 != -1 )
    {
      v8 = PpmConvertTimeFrom(v7, 10000000LL);
      *v5 = v8;
    }
    v5 += 3;
    --v6;
  }
  while ( v6 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  return ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v11);
}
