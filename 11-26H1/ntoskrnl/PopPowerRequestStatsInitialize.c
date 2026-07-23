/*
 * XREFs of PopPowerRequestStatsInitialize @ 0x140CDCEA8
 * Callers:
 *     PopPowerRequestInitialize @ 0x140CD69F8 (PopPowerRequestInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404E6CF0 (SleepstudyHelperCreateLibraryEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A90314 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 */

__int64 PopPowerRequestStatsInitialize()
{
  unsigned int v0; // ebx
  _KPROCESS **p_Process; // rsi
  __int64 v2; // rdi
  __int64 result; // rax
  PCWSTR SourceString; // [rsp+20h] [rbp-68h] BYREF
  const wchar_t *v5; // [rsp+28h] [rbp-60h]
  _BYTE v6[4]; // [rsp+30h] [rbp-58h] BYREF
  int v7; // [rsp+34h] [rbp-54h]
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF

  SourceString = (PCWSTR)0x5451575000000001LL;
  v7 = 0;
  LODWORD(v5) = 4;
  if ( (int)SleepstudyHelperCreateLibraryEx(&SourceString, &PopDirectedDripsDiagLock.SavedApcState.ApcListHead[1].Flink) < 0 )
    PopDirectedDripsDiagLock.SavedApcState.ApcListHead[1].Flink = 0LL;
  memset_0(v6, 0, 0x40uLL);
  v0 = 0;
  SourceString = L"Audio Active";
  p_Process = &PopDirectedDripsDiagLock.SavedApcState.Process;
  v5 = L"Mobile Hotspot";
  v2 = 0LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, (&SourceString)[v2]);
    result = PopPowerRequestStatsCreateSleepstudyBlocker((__int64)v6, 8 - (unsigned int)(v0 != 0), (__int64)p_Process);
    if ( (int)result < 0 )
      *(struct _LIST_ENTRY **)((char *)&PopDirectedDripsDiagLock.SavedApcState.ApcListHead[2].Flink + v2 * 8) = 0LL;
    ++v0;
    ++p_Process;
    ++v2;
  }
  while ( v0 < 2 );
  return result;
}
