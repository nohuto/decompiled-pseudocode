/*
 * XREFs of CmpInsertCallbackInListByAltitude @ 0x1409F0994
 * Callers:
 *     CmpRegisterCallbackInternal @ 0x1409F085C (CmpRegisterCallbackInternal.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x140478810 (RtlCompareAltitudes.c)
 *     CmpLockCallbackListExclusive @ 0x140773A48 (CmpLockCallbackListExclusive.c)
 *     CmpUnlockCallbackList @ 0x1409F0B40 (CmpUnlockCallbackList.c)
 */

__int64 __fastcall CmpInsertCallbackInListByAltitude(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // bp
  unsigned int v6; // ebx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *Flink; // rcx
  LONG v10; // eax

  v4 = a2;
  v6 = 0;
  CmpLockCallbackListExclusive(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 24) = ++CmpContextListLock.QuantumTarget;
  Blink = CmpContextListLock.Header.WaitListHead.Blink;
  if ( (struct _LIST_ENTRY **)CmpContextListLock.Header.WaitListHead.Blink != &CmpContextListLock.Header.WaitListHead.Blink )
  {
    do
    {
      v10 = RtlCompareAltitudes((PCUNICODE_STRING)&Blink[3], (PCUNICODE_STRING)(a1 + 48));
      if ( v10 )
      {
        if ( v10 < 0 )
          goto LABEL_2;
      }
      else if ( !v4 )
      {
        goto LABEL_15;
      }
      Blink = Blink->Flink;
    }
    while ( Blink != (struct _LIST_ENTRY *)&CmpContextListLock.Header.WaitListHead.Blink );
    if ( !v10 && !v4 )
    {
LABEL_15:
      v6 = -1071906799;
      goto LABEL_8;
    }
  }
LABEL_2:
  v8 = Blink->Blink;
  Flink = v8->Flink;
  if ( v8->Flink->Blink != v8 )
    __fastfail(3u);
  *(_QWORD *)a1 = Flink;
  *(_QWORD *)(a1 + 8) = v8;
  Flink->Blink = (struct _LIST_ENTRY *)a1;
  v8->Flink = (struct _LIST_ENTRY *)a1;
  _InterlockedIncrement((_DWORD *)&WheapPfaLock.StateSaveArea + 1);
LABEL_8:
  CmpUnlockCallbackList();
  return v6;
}
