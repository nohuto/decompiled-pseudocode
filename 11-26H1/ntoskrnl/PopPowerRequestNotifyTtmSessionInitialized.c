/*
 * XREFs of PopPowerRequestNotifyTtmSessionInitialized @ 0x140B5CCEC
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404EF380 (PopPowerRequestUnrevokeRequests.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1407E65B8 (TtmNotifySessionPowerRequestPresent.c)
 */

__int64 __fastcall PopPowerRequestNotifyTtmSessionInitialized(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 i; // rbx
  int v5; // r8d
  __int64 v6; // r9
  int v8; // [rsp+28h] [rbp-20h]

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20, a2, a3, a4);
  for ( i = stru_140F12D20.QuantumTarget; (unsigned __int64 *)i != &stru_140F12D20.QuantumTarget; i = *(_QWORD *)i )
  {
    v5 = *(_DWORD *)(i + 104);
    if ( v5 )
    {
      v6 = *(_QWORD *)(i + 112);
      if ( v6 )
        TtmNotifySessionPowerRequestPresent(
          *(_DWORD *)(i + 16),
          *(_DWORD *)(i + 36),
          v5,
          v6,
          *(_QWORD *)(i + 120),
          v8,
          0);
    }
  }
  PopPowerRequestUnrevokeRequests(1);
  return PopReleaseRwLock(&stru_140F12D20);
}
