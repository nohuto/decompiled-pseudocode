/*
 * XREFs of CmpInsertCallbackInListByAltitude @ 0x140A051A4
 * Callers:
 *     CmpRegisterCallbackInternal @ 0x140A0506C (CmpRegisterCallbackInternal.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x14047EEA0 (RtlCompareAltitudes.c)
 *     CmpLockCallbackListExclusive @ 0x140770A48 (CmpLockCallbackListExclusive.c)
 *     CmpUnlockCallbackList @ 0x140A05350 (CmpUnlockCallbackList.c)
 */

__int64 __fastcall CmpInsertCallbackInListByAltitude(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // bp
  unsigned int v6; // ebx
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v9; // rcx
  LONG v10; // eax

  v4 = a2;
  v6 = 0;
  CmpLockCallbackListExclusive(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 24) = ++CmpCallbackListLock.InitialStack;
  Flink = CmpCallbackListLock.Header.WaitListHead.Flink;
  if ( CmpCallbackListLock.Header.WaitListHead.Flink != &CmpCallbackListLock.Header.WaitListHead )
  {
    do
    {
      v10 = RtlCompareAltitudes((PCUNICODE_STRING)&Flink[3], (PCUNICODE_STRING)(a1 + 48));
      if ( v10 )
      {
        if ( v10 < 0 )
          goto LABEL_2;
      }
      else if ( !v4 )
      {
        goto LABEL_15;
      }
      Flink = Flink->Flink;
    }
    while ( Flink != &CmpCallbackListLock.Header.WaitListHead );
    if ( !v10 && !v4 )
    {
LABEL_15:
      v6 = -1071906799;
      goto LABEL_8;
    }
  }
LABEL_2:
  Blink = Flink->Blink;
  v9 = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    __fastfail(3u);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = Blink;
  v9->Blink = (struct _LIST_ENTRY *)a1;
  Blink->Flink = (struct _LIST_ENTRY *)a1;
  _InterlockedIncrement((volatile signed __int32 *)&WheapPfaLock.ExpectedRunTime);
LABEL_8:
  CmpUnlockCallbackList();
  return v6;
}
