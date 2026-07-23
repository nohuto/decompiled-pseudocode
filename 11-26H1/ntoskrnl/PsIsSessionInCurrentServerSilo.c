/*
 * XREFs of PsIsSessionInCurrentServerSilo @ 0x140424C54
 * Callers:
 *     PopGetSettingNotificationName @ 0x1409F6CE4 (PopGetSettingNotificationName.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     PsGetCurrentProcessSessionId @ 0x1404261F0 (PsGetCurrentProcessSessionId.c)
 */

char __fastcall PsIsSessionInCurrentServerSilo(unsigned int a1)
{
  bool v2; // bl
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v5; // rbp
  _QWORD *SparePtr; // rcx

  if ( (unsigned int)PsGetCurrentProcessSessionId() == a1 )
    return 1;
  v2 = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentServerSilo;
  PspLockProcessListExclusive((__int64)CurrentThread);
  SparePtr = NormalizationListLock.WaitBlock[0].SparePtr;
  while ( SparePtr )
  {
    if ( a1 > *((_DWORD *)SparePtr - 22) )
    {
      SparePtr = (_QWORD *)SparePtr[1];
    }
    else
    {
      if ( a1 >= *((_DWORD *)SparePtr - 22) )
        break;
      SparePtr = (_QWORD *)*SparePtr;
    }
  }
  if ( SparePtr && SparePtr[8] == v5 && *((_DWORD *)SparePtr - 22) == a1 && (*((_DWORD *)SparePtr - 23) & 2) == 0 )
    v2 = *(SparePtr - 10) != (_QWORD)(SparePtr - 10);
  PspUnlockProcessListExclusive(CurrentThread);
  return v2;
}
