/*
 * XREFs of PopPowerRequestNotifyUserSessionAttributed @ 0x140B640B4
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1407E65B8 (TtmNotifySessionPowerRequestPresent.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 */

char __fastcall PopPowerRequestNotifyUserSessionAttributed(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v5; // rbx
  char v6; // di
  unsigned __int64 i; // rax
  char result; // al
  int v11; // [rsp+28h] [rbp-20h]

  v5 = 0LL;
  v6 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20, a2, a3, a4);
  for ( i = stru_140F12D20.QuantumTarget; (unsigned __int64 *)i != &stru_140F12D20.QuantumTarget; i = *(_QWORD *)i )
  {
    v5 = i;
    if ( *(_DWORD *)(i + 104) == a1 && *(_QWORD *)(i + 112) == a2 )
    {
      *(_QWORD *)(i + 120) = a3;
      v6 = 1;
      break;
    }
  }
  result = PopReleaseRwLock(&stru_140F12D20);
  if ( v6 )
  {
    result = TtmIsEnabled();
    if ( result )
      return TtmNotifySessionPowerRequestPresent(
               *(_DWORD *)(v5 + 16),
               *(_DWORD *)(v5 + 36),
               *(_DWORD *)(v5 + 104),
               *(_QWORD *)(v5 + 112),
               *(_QWORD *)(v5 + 120),
               v11,
               1);
  }
  return result;
}
