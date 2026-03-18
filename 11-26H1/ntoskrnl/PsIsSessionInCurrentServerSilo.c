/*
 * XREFs of PsIsSessionInCurrentServerSilo @ 0x140435678
 * Callers:
 *     PopGetSettingNotificationName @ 0x140A3B2C4 (PopGetSettingNotificationName.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140215F5C (PspUnlockProcessListExclusive.c)
 *     PsGetCurrentProcessSessionId @ 0x140437260 (PsGetCurrentProcessSessionId.c)
 */

char __fastcall PsIsSessionInCurrentServerSilo(unsigned int a1)
{
  bool v2; // bl
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rsi
  struct _LIST_ENTRY *v5; // rbp
  struct _LIST_ENTRY *Blink; // rcx

  if ( (unsigned int)PsGetCurrentProcessSessionId() == a1 )
    return 1;
  v2 = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  CurrentThread = KeGetCurrentThread();
  v5 = (struct _LIST_ENTRY *)CurrentServerSilo;
  PspLockProcessListExclusive((__int64)CurrentThread);
  Blink = NormalizationListLock.WaitBlock[1].WaitListEntry.Blink;
  while ( Blink )
  {
    if ( a1 > LODWORD(Blink[-6].Blink) )
    {
      Blink = Blink->Blink;
    }
    else
    {
      if ( a1 >= LODWORD(Blink[-6].Blink) )
        break;
      Blink = Blink->Flink;
    }
  }
  if ( Blink && Blink[4].Flink == v5 && LODWORD(Blink[-6].Blink) == a1 && (HIDWORD(Blink[-6].Flink) & 2) == 0 )
    v2 = Blink[-5].Flink != Blink - 5;
  PspUnlockProcessListExclusive(CurrentThread);
  return v2;
}
