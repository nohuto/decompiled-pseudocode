/*
 * XREFs of RtlCheckHeldCriticalSections @ 0x1800E4590
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x1800E4560 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpGetStackTraceAddressEx @ 0x180067F60 (RtlpGetStackTraceAddressEx.c)
 *     RtlApplicationVerifierStop @ 0x180138180 (RtlApplicationVerifierStop.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 */

void __fastcall RtlCheckHeldCriticalSections(HANDLE ThreadHandle, _QWORD *a2)
{
  void *UniqueThread; // rsi
  char *i; // r15
  char *v6; // r14
  __int64 v7; // r12
  _QWORD *j; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-128h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-118h]
  __int128 ThreadInformation; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD *v14; // [rsp+80h] [rbp-D8h]
  void **v15; // [rsp+88h] [rbp-D0h]
  __int128 v16; // [rsp+90h] [rbp-C8h]
  __int128 v17; // [rsp+A0h] [rbp-B8h]
  __int64 v18; // [rsp+B0h] [rbp-A8h]
  __int128 v19; // [rsp+B8h] [rbp-A0h]
  __int128 v20; // [rsp+C8h] [rbp-90h]
  __int128 v21; // [rsp+D8h] [rbp-80h]
  __int128 v22; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v23; // [rsp+F8h] [rbp-60h]
  __int64 v24; // [rsp+108h] [rbp-50h]
  int v25; // [rsp+110h] [rbp-48h]
  int v26; // [rsp+170h] [rbp+18h] BYREF
  void *v27; // [rsp+178h] [rbp+20h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v26 = 0;
  ThreadInformation = 0LL;
  if ( RtlpCriticalSectionVerifier && !RtlpCsVerifyDoNotBreak && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
    {
      if ( !NtCurrentTeb()->CountOfOwnedCriticalSections )
        return;
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    }
    else
    {
      *(_QWORD *)&ThreadInformation = &v26;
      *((_QWORD *)&ThreadInformation + 1) = 0x40000006CLL;
      if ( ZwQueryInformationThread(ThreadHandle, ThreadTebInformation, &ThreadInformation, 0x10u, 0LL) < 0
        || !v26
        || ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, &v22, 0x30u, 0LL) < 0 )
      {
        return;
      }
      UniqueThread = (void *)*((_QWORD *)&v23 + 1);
    }
    v27 = UniqueThread;
    RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
    for ( i = (char *)RtlCriticalSectionList; ; i = (char *)*v15 )
    {
      v15 = (void **)i;
      if ( i == (char *)&RtlCriticalSectionList )
        break;
      v6 = i - 16;
      v7 = *((_QWORD *)i - 1);
      if ( a2 )
      {
        for ( j = a2; ; ++j )
        {
          v14 = j;
          v9 = *j;
          if ( !*j )
            break;
          if ( v7 == v9 )
          {
            if ( v9 )
              goto LABEL_24;
            break;
          }
        }
      }
      v16 = *(_OWORD *)v7;
      v17 = *(_OWORD *)(v7 + 16);
      v18 = *(_QWORD *)(v7 + 32);
      if ( (char *)v16 == v6 )
      {
        if ( (void *)v17 == UniqueThread )
        {
          StackTraceAddress = RtlpGetStackTraceAddressEx(*((_WORD *)v6 + 1), *((_WORD *)v6 + 22));
          RtlApplicationVerifierStop(
            512,
            (unsigned int)"Thread is in a state in which it cannot own a critical section",
            (_DWORD)UniqueThread,
            (unsigned int)"Thread identifier",
            v7,
            (__int64)"Critical section address",
            (__int64)(i - 16),
            (__int64)"Critical section debug info address",
            StackTraceAddress,
            (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
        }
      }
      else
      {
        v19 = *(_OWORD *)v16;
        v20 = *(_OWORD *)(v16 + 16);
        v21 = *(_OWORD *)(v16 + 32);
        v10 = RtlpGetStackTraceAddressEx(WORD1(v19), WORD6(v21));
        v11 = RtlpGetStackTraceAddressEx(*((_WORD *)i - 7), *((_WORD *)i + 14));
        RtlApplicationVerifierStop(
          515,
          (unsigned int)"double initialized or corrupted critical section",
          v7,
          (unsigned int)"Critical section address.",
          (__int64)(i - 16),
          (__int64)"Address of the debug info found in the active list.",
          v11,
          (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
          v10,
          (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
      }
LABEL_24:
      ;
    }
    RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  }
}
