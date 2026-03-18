/*
 * XREFs of PopPowerRequestStatsInitialize @ 0x140CD6B54
 * Callers:
 *     PopPowerRequestInitialize @ 0x140CD0850 (PopPowerRequestInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404ED710 (SleepstudyHelperCreateLibraryEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A89424 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 */

__int64 PopPowerRequestStatsInitialize()
{
  unsigned int v0; // ebx
  unsigned __int64 *v1; // rsi
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
  if ( (int)SleepstudyHelperCreateLibraryEx(&SourceString, &PopDirectedDripsUmLock.SchedulerAssistLastYieldBoostTime) < 0 )
    PopDirectedDripsUmLock.SchedulerAssistLastYieldBoostTime = 0LL;
  memset_0(v6, 0, 0x40uLL);
  v0 = 0;
  SourceString = L"Audio Active";
  v1 = &PopDirectedDripsUmLock.Padding[1];
  v5 = L"Mobile Hotspot";
  v2 = 0LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, (&SourceString)[v2]);
    result = PopPowerRequestStatsCreateSleepstudyBlocker((__int64)v6, 8 - (unsigned int)(v0 != 0), (__int64)v1);
    if ( (int)result < 0 )
      PopDirectedDripsUmLock.Padding[v2 + 1] = 0LL;
    ++v0;
    ++v1;
    ++v2;
  }
  while ( v0 < 2 );
  return result;
}
