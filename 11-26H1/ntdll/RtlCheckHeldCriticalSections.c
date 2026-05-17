/*
 * XREFs of RtlCheckHeldCriticalSections @ 0x1800E6380
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x1800E6350 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpGetStackTraceAddressEx @ 0x180079740 (RtlpGetStackTraceAddressEx.c)
 *     RtlApplicationVerifierStop @ 0x180138410 (RtlApplicationVerifierStop.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 */

struct _TEB *__fastcall RtlCheckHeldCriticalSections(__int64 a1, _QWORD *a2)
{
  struct _TEB *result; // rax
  void *UniqueThread; // rsi
  char *i; // r15
  char *v7; // r14
  __int64 v8; // r12
  _QWORD *j; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-128h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-118h]
  __int128 v14; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD *v15; // [rsp+80h] [rbp-D8h]
  void **v16; // [rsp+88h] [rbp-D0h]
  __int128 v17; // [rsp+90h] [rbp-C8h]
  __int128 v18; // [rsp+A0h] [rbp-B8h]
  __int64 v19; // [rsp+B0h] [rbp-A8h]
  __int128 v20; // [rsp+B8h] [rbp-A0h]
  __int128 v21; // [rsp+C8h] [rbp-90h]
  __int128 v22; // [rsp+D8h] [rbp-80h]
  __int128 v23; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v24; // [rsp+F8h] [rbp-60h]
  __int64 v25; // [rsp+108h] [rbp-50h]
  int v26; // [rsp+110h] [rbp-48h]
  int v27; // [rsp+170h] [rbp+18h] BYREF
  void *v28; // [rsp+178h] [rbp+20h]

  result = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v20 = 0LL;
  v22 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v27 = 0;
  v14 = 0LL;
  if ( RtlpCriticalSectionVerifier )
  {
    if ( !RtlpCsVerifyDoNotBreak )
    {
      result = (struct _TEB *)NtCurrentPeb();
      if ( !*((_BYTE *)result->NtTib.SubSystemTib + 72) )
      {
        if ( a1 == -2 )
        {
          result = NtCurrentTeb();
          if ( !result->CountOfOwnedCriticalSections )
            return result;
          UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        }
        else
        {
          *(_QWORD *)&v14 = &v27;
          *((_QWORD *)&v14 + 1) = 0x40000006CLL;
          result = (struct _TEB *)ZwQueryInformationThread(a1, 26LL, &v14, 16LL, 0LL);
          if ( (int)result < 0 )
            return result;
          if ( !v27 )
            return result;
          result = (struct _TEB *)ZwQueryInformationThread(a1, 0LL, &v23, 48LL, 0LL);
          if ( (int)result < 0 )
            return result;
          UniqueThread = (void *)*((_QWORD *)&v24 + 1);
        }
        v28 = UniqueThread;
        RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
        for ( i = (char *)RtlCriticalSectionList; ; i = (char *)*v16 )
        {
          v16 = (void **)i;
          if ( i == (char *)&RtlCriticalSectionList )
            break;
          v7 = i - 16;
          v8 = *((_QWORD *)i - 1);
          if ( a2 )
          {
            for ( j = a2; ; ++j )
            {
              v15 = j;
              v10 = *j;
              if ( !*j )
                break;
              if ( v8 == v10 )
              {
                if ( v10 )
                  goto LABEL_24;
                break;
              }
            }
          }
          v17 = *(_OWORD *)v8;
          v18 = *(_OWORD *)(v8 + 16);
          v19 = *(_QWORD *)(v8 + 32);
          if ( (char *)v17 == v7 )
          {
            if ( (void *)v18 == UniqueThread )
            {
              StackTraceAddress = RtlpGetStackTraceAddressEx(*((_WORD *)v7 + 1), *((_WORD *)v7 + 22));
              RtlApplicationVerifierStop(
                512,
                (unsigned int)"Thread is in a state in which it cannot own a critical section",
                (_DWORD)UniqueThread,
                (unsigned int)"Thread identifier",
                v8,
                (__int64)"Critical section address",
                (__int64)(i - 16),
                (__int64)"Critical section debug info address",
                StackTraceAddress,
                (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
            }
          }
          else
          {
            v20 = *(_OWORD *)v17;
            v21 = *(_OWORD *)(v17 + 16);
            v22 = *(_OWORD *)(v17 + 32);
            v11 = RtlpGetStackTraceAddressEx(WORD1(v20), WORD6(v22));
            v12 = RtlpGetStackTraceAddressEx(*((_WORD *)i - 7), *((_WORD *)i + 14));
            RtlApplicationVerifierStop(
              515,
              (unsigned int)"double initialized or corrupted critical section",
              v8,
              (unsigned int)"Critical section address.",
              (__int64)(i - 16),
              (__int64)"Address of the debug info found in the active list.",
              v12,
              (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
              v11,
              (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
          }
LABEL_24:
          ;
        }
        return RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
      }
    }
  }
  return result;
}
