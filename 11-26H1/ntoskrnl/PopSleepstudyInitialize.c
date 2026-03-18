/*
 * XREFs of PopSleepstudyInitialize @ 0x140D09A38
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x140456EEC (KiInitializeTimer2.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404ED710 (SleepstudyHelperCreateLibraryEx.c)
 *     wcslen @ 0x1405380A0 (wcslen.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopSleepstudySendSessionChangeWnf @ 0x140B1203C (PopSleepstudySendSessionChangeWnf.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140B63EF0 (SleepstudyHelperCreateBlockerData.c)
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
  __int64 v9[2]; // [rsp+34h] [rbp-8Dh] BYREF
  GUID v10; // [rsp+48h] [rbp-79h] BYREF
  _WORD v11[2]; // [rsp+58h] [rbp-69h] BYREF
  int v12; // [rsp+5Ch] [rbp-65h]
  const wchar_t *v13; // [rsp+60h] [rbp-61h]
  void *v14; // [rsp+68h] [rbp-59h]
  NTSTATUS (__fastcall *v15)(unsigned int *, UNICODE_STRING *); // [rsp+70h] [rbp-51h]
  __int64 v16; // [rsp+78h] [rbp-49h]
  const wchar_t *v17; // [rsp+80h] [rbp-41h]
  void *v18; // [rsp+88h] [rbp-39h]
  NTSTATUS (__fastcall *v19)(_QWORD *, UNICODE_STRING *); // [rsp+90h] [rbp-31h]
  __int64 v20; // [rsp+98h] [rbp-29h]
  const wchar_t *v21; // [rsp+A0h] [rbp-21h]
  void *v22; // [rsp+A8h] [rbp-19h]
  NTSTATUS (__fastcall *v23)(unsigned int *, UNICODE_STRING *); // [rsp+B0h] [rbp-11h]
  __int64 v24; // [rsp+B8h] [rbp-9h]
  const wchar_t *v25; // [rsp+C0h] [rbp-1h]
  void *v26; // [rsp+C8h] [rbp+7h]
  NTSTATUS (__fastcall *v27)(_QWORD *, UNICODE_STRING *); // [rsp+D0h] [rbp+Fh]
  __int64 v28; // [rsp+D8h] [rbp+17h]
  const wchar_t *v29; // [rsp+E0h] [rbp+1Fh]
  void *v30; // [rsp+E8h] [rbp+27h]
  NTSTATUS (__fastcall *v31)(unsigned int *, UNICODE_STRING *); // [rsp+F0h] [rbp+2Fh]

  v1 = 15LL * (unsigned int)dword_140F0EBC8;
  if ( a1 )
  {
    PopSleepstudySendSessionChangeWnf(
      PopSleepstudySessionContext[v1 + 27],
      PopSleepstudySessionContext[v1 + 26],
      PopSleepstudySessionContext[v1 + 30]);
    v9[1] = 1145918291LL;
    HIDWORD(v9[0]) = 1;
    Library = SleepstudyHelperCreateLibraryEx((_DWORD *)v9 + 1, &PopSleepstudyMetadataLibraryHandle);
    if ( Library < 0 )
    {
      PopSleepstudyMetadataLibraryHandle = 0LL;
    }
    else
    {
      v12 = 0;
      v13 = L"Settings.IdleWakeSkipPolicy";
      v3 = 2 * wcslen(L"Settings.IdleWakeSkipPolicy");
      v15 = PopSleepstudyUlongFormatter;
      v16 = 0LL;
      v17 = L"Info.TotalWcmEngagedTime";
      if ( v3 >= 0xFFFE )
        LOWORD(v3) = -4;
      v11[0] = v3;
      v11[1] = v3 + 2;
      v14 = &unk_140F0F540;
      v4 = 2 * wcslen(L"Info.TotalWcmEngagedTime");
      v19 = PopSleepstudyUlong64Formatter;
      if ( v4 >= 0xFFFE )
        LOWORD(v4) = -4;
      LOWORD(v16) = v4;
      WORD1(v16) = v4 + 2;
      v20 = 0LL;
      v18 = &unk_140F0F548;
      v21 = L"Info.TotalWcmEngagedCount";
      v5 = 2 * wcslen(L"Info.TotalWcmEngagedCount");
      v23 = PopSleepstudyUlongFormatter;
      if ( v5 >= 0xFFFE )
        LOWORD(v5) = -4;
      LOWORD(v20) = v5;
      WORD1(v20) = v5 + 2;
      v24 = 0LL;
      v22 = &unk_140F0F550;
      v25 = L"Info.TotalNqmEngagedTime";
      v6 = 2 * wcslen(L"Info.TotalNqmEngagedTime");
      v27 = PopSleepstudyUlong64Formatter;
      if ( v6 >= 0xFFFE )
        LOWORD(v6) = -4;
      LOWORD(v24) = v6;
      WORD1(v24) = v6 + 2;
      v28 = 0LL;
      v26 = &unk_140F0F558;
      v29 = L"Info.TotalNqmEngagedCount";
      v7 = 2 * wcslen(L"Info.TotalNqmEngagedCount");
      v31 = PopSleepstudyUlongFormatter;
      v10 = GUID_SPR_SESSION_METADATA_CONTAINER;
      if ( v7 >= 0xFFFE )
        LOWORD(v7) = -4;
      LOWORD(v28) = v7;
      WORD1(v28) = v7 + 2;
      v30 = &unk_140F0F560;
      LOBYTE(Library) = SleepstudyHelperCreateBlockerData(
                          PopSleepstudyMetadataLibraryHandle,
                          (__int128 *)&v10,
                          5u,
                          (__int64)v11,
                          (__int64 *)((char *)v9 + 4));
    }
  }
  else
  {
    PopSleepstudySessionLock.Header.WaitListHead.Flink = 0LL;
    *(_QWORD *)&PopSleepstudySessionLock.Header.Lock = 0LL;
    qword_140F0EB08 = (__int64)PopSleepstudySessionContext;
    PopSleepstudySessionContext[0] = (__int64)PopSleepstudySessionContext;
    BYTE3(PopSleepstudySessionContext[v1 + 30]) = 0;
    LODWORD(PopSleepstudySessionContext[v1 + 30]) &= 0xFF000000;
    LODWORD(PopSleepstudySessionContext[v1 + 26]) = 0;
    PopSleepstudySessionContext[v1 + 28] = RtlGetInterruptTimePrecise((unsigned __int64 *)((char *)v9 + 4));
    stru_140F0EBA8.Parameter = 0LL;
    stru_140F0EBA8.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
    stru_140F0EBA8.List.Flink = 0LL;
    word_140F0EB22 = 0;
    LOBYTE(Library) = KiInitializeTimer2(
                        (unsigned __int64)&unk_140F0EB20,
                        (__int64)PopSleepstudyScenarioStopTimerCallback,
                        0LL,
                        8);
  }
  return Library;
}
