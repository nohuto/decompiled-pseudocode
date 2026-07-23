/*
 * XREFs of PpmInitIdlePolicy @ 0x140CD6020
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1402F3288 (PpmConvertTimeFrom.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 */

NTSTATUS PpmInitIdlePolicy()
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
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultDataSize; // [rsp+50h] [rbp+10h] BYREF
  ULONG Type; // [rsp+58h] [rbp+18h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF

  dword_140F0B5C4 = 50000;
  dword_140F0B88C = 50000;
  Data = 0;
  v0 = 2 * PopQpcFrequency;
  ResultDataSize = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  Type = 0;
  DestinationString = 0LL;
  word_140F0B5C0 = 0;
  word_140F0B888 = 0;
  word_140F0B5C9 = 60;
  word_140F0B891 = 60;
  byte_140F0B5C8 = 40;
  byte_140F0B890 = 40;
  if ( !KdPitchDebugger )
    v0 = 90 * PopQpcFrequency;
  stru_140FC11F0.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)v0;
  if ( *(_DWORD *)&stru_140F12EA0.WaitBlockFill11[120] )
    *(_QWORD *)&stru_140F12EA0.WaitBlockFill11[112] = PpmConvertTimeFrom(
                                                        *(unsigned int *)&stru_140F12EA0.WaitBlockFill11[120],
                                                        1000000LL);
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
  result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
  if ( result >= 0 && ResultDataSize == 4 && Type == 4 )
    PpmIdleRespectIdleStateMax = Data != 0;
  return result;
}
