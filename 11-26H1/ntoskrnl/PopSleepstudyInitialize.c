/*
 * XREFs of PopSleepstudyInitialize @ 0x140D0FD08
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404E6CF0 (SleepstudyHelperCreateLibraryEx.c)
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopSleepstudySendSessionChangeWnf @ 0x140B13DBC (PopSleepstudySendSessionChangeWnf.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140B66F90 (SleepstudyHelperCreateBlockerData.c)
 */

char __fastcall PopSleepstudyInitialize(int a1)
{
  __int64 v1; // rbx
  int Library; // eax
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+34h] [rbp-8Dh] BYREF
  __int64 v10; // [rsp+3Ch] [rbp-85h]
  GUID v11; // [rsp+48h] [rbp-79h] BYREF
  _WORD v12[2]; // [rsp+58h] [rbp-69h] BYREF
  int v13; // [rsp+5Ch] [rbp-65h]
  const wchar_t *v14; // [rsp+60h] [rbp-61h]
  void *v15; // [rsp+68h] [rbp-59h]
  NTSTATUS (__fastcall *v16)(unsigned int *, UNICODE_STRING *); // [rsp+70h] [rbp-51h]
  __int64 v17; // [rsp+78h] [rbp-49h]
  const wchar_t *v18; // [rsp+80h] [rbp-41h]
  void *v19; // [rsp+88h] [rbp-39h]
  NTSTATUS (__fastcall *v20)(_QWORD *, UNICODE_STRING *); // [rsp+90h] [rbp-31h]
  __int64 v21; // [rsp+98h] [rbp-29h]
  const wchar_t *v22; // [rsp+A0h] [rbp-21h]
  void *v23; // [rsp+A8h] [rbp-19h]
  NTSTATUS (__fastcall *v24)(unsigned int *, UNICODE_STRING *); // [rsp+B0h] [rbp-11h]
  __int64 v25; // [rsp+B8h] [rbp-9h]
  const wchar_t *v26; // [rsp+C0h] [rbp-1h]
  void *v27; // [rsp+C8h] [rbp+7h]
  NTSTATUS (__fastcall *v28)(_QWORD *, UNICODE_STRING *); // [rsp+D0h] [rbp+Fh]
  __int64 v29; // [rsp+D8h] [rbp+17h]
  const wchar_t *v30; // [rsp+E0h] [rbp+1Fh]
  void *v31; // [rsp+E8h] [rbp+27h]
  NTSTATUS (__fastcall *v32)(unsigned int *, UNICODE_STRING *); // [rsp+F0h] [rbp+2Fh]

  v1 = 15LL * (unsigned int)dword_140F0EFC8;
  if ( a1 )
  {
    PopSleepstudySendSessionChangeWnf(
      PopSleepstudySessionContext[v1 + 27],
      PopSleepstudySessionContext[v1 + 26],
      PopSleepstudySessionContext[v1 + 30]);
    v10 = 1145918291LL;
    PerformanceCounter.HighPart = 1;
    Library = SleepstudyHelperCreateLibraryEx(&PerformanceCounter.HighPart, &PopSleepstudyMetadataLibraryHandle);
    if ( Library < 0 )
    {
      PopSleepstudyMetadataLibraryHandle = 0LL;
    }
    else
    {
      v13 = 0;
      v14 = L"Settings.IdleWakeSkipPolicy";
      v3 = 2 * wcslen(L"Settings.IdleWakeSkipPolicy");
      v16 = PopSleepstudyUlongFormatter;
      v17 = 0LL;
      v18 = L"Info.TotalWcmEngagedTime";
      if ( v3 >= 0xFFFE )
        LOWORD(v3) = -4;
      v12[0] = v3;
      v12[1] = v3 + 2;
      v15 = &unk_140F0F960;
      v4 = 2 * wcslen(L"Info.TotalWcmEngagedTime");
      v20 = PopSleepstudyUlong64Formatter;
      if ( v4 >= 0xFFFE )
        LOWORD(v4) = -4;
      LOWORD(v17) = v4;
      WORD1(v17) = v4 + 2;
      v21 = 0LL;
      v19 = &unk_140F0F968;
      v22 = L"Info.TotalWcmEngagedCount";
      v5 = 2 * wcslen(L"Info.TotalWcmEngagedCount");
      v24 = PopSleepstudyUlongFormatter;
      if ( v5 >= 0xFFFE )
        LOWORD(v5) = -4;
      LOWORD(v21) = v5;
      WORD1(v21) = v5 + 2;
      v25 = 0LL;
      v23 = &unk_140F0F970;
      v26 = L"Info.TotalNqmEngagedTime";
      v6 = 2 * wcslen(L"Info.TotalNqmEngagedTime");
      v28 = PopSleepstudyUlong64Formatter;
      if ( v6 >= 0xFFFE )
        LOWORD(v6) = -4;
      LOWORD(v25) = v6;
      WORD1(v25) = v6 + 2;
      v29 = 0LL;
      v27 = &unk_140F0F978;
      v30 = L"Info.TotalNqmEngagedCount";
      v7 = 2 * wcslen(L"Info.TotalNqmEngagedCount");
      v32 = PopSleepstudyUlongFormatter;
      v11 = GUID_SPR_SESSION_METADATA_CONTAINER;
      if ( v7 >= 0xFFFE )
        LOWORD(v7) = -4;
      LOWORD(v29) = v7;
      WORD1(v29) = v7 + 2;
      v31 = &unk_140F0F980;
      LOBYTE(Library) = SleepstudyHelperCreateBlockerData(
                          PopSleepstudyMetadataLibraryHandle,
                          (__int128 *)&v11,
                          5u,
                          (__int64)v12,
                          (__int64 *)((char *)&PerformanceCounter.QuadPart + 4));
    }
  }
  else
  {
    qword_140F0F398 = 0LL;
    PopSleepstudySessionLock = 0LL;
    qword_140F0EF08 = (__int64)PopSleepstudySessionContext;
    PopSleepstudySessionContext[0] = (__int64)PopSleepstudySessionContext;
    BYTE3(PopSleepstudySessionContext[v1 + 30]) = 0;
    LODWORD(PopSleepstudySessionContext[v1 + 30]) &= 0xFF000000;
    LODWORD(PopSleepstudySessionContext[v1 + 26]) = 0;
    PopSleepstudySessionContext[v1 + 28] = RtlGetInterruptTimePrecise((PLARGE_INTEGER)((char *)&PerformanceCounter.QuadPart
                                                                                     + 4)).QuadPart;
    stru_140F0EFA8.Parameter = 0LL;
    stru_140F0EFA8.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
    stru_140F0EFA8.List.Flink = 0LL;
    word_140F0EF22 = 0;
    LOBYTE(Library) = KiInitializeTimer2(
                        (unsigned __int64)&unk_140F0EF20,
                        (__int64)PopSleepstudyScenarioStopTimerCallback,
                        0LL,
                        8);
  }
  return Library;
}
