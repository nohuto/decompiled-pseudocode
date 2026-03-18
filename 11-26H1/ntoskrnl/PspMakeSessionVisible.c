/*
 * XREFs of PspMakeSessionVisible @ 0x140B550DC
 * Callers:
 *     PsSessionCreate @ 0x1409638D4 (PsSessionCreate.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140215F5C (PspUnlockProcessListExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14030CA60 (RtlAvlInsertNodeEx.c)
 */

__int64 __fastcall PspMakeSessionVisible(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *Object; // rcx
  _QWORD *v4; // rax
  bool v5; // r8
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockProcessListExclusive((__int64)CurrentThread);
  *(_DWORD *)(a1 + 4) |= 1u;
  Object = PsAltSystemCallRegistrationLock.WaitBlock[1].Object;
  v4 = (_QWORD *)(a1 + 80);
  if ( *(struct _KTHREAD **)PsAltSystemCallRegistrationLock.WaitBlock[1].Object != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[72] )
    __fastfail(3u);
  *v4 = &PsAltSystemCallRegistrationLock.WaitBlock[1].Thread;
  v5 = 0;
  *(_QWORD *)(a1 + 88) = Object;
  *Object = v4;
  Blink = NormalizationListLock.WaitBlock[1].WaitListEntry.Blink;
  PsAltSystemCallRegistrationLock.WaitBlock[1].Object = (PVOID)(a1 + 80);
  if ( NormalizationListLock.WaitBlock[1].WaitListEntry.Blink )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 8) >= LODWORD(Blink[-6].Blink) )
      {
        Flink = Blink->Blink;
        if ( !Flink )
        {
          v5 = 1;
          break;
        }
      }
      else
      {
        Flink = Blink->Flink;
        if ( !Blink->Flink )
          break;
      }
      Blink = Flink;
    }
  }
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&NormalizationListLock.WaitBlock[1].WaitListEntry.Blink,
    (unsigned __int64)Blink,
    v5,
    (_QWORD *)(a1 + 96));
  return PspUnlockProcessListExclusive(CurrentThread);
}
