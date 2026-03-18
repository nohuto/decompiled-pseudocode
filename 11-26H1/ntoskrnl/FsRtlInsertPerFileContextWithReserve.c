/*
 * XREFs of FsRtlInsertPerFileContextWithReserve @ 0x14048F0A0
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x1405B5890 (FsRtlInsertPerFileContext.c)
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x140449634 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1404497DC (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlInsertPerFileContextWithReserve(
        volatile signed __int64 *a1,
        struct _LIST_ENTRY *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  char v4; // bp
  int v5; // r14d
  struct _KTHREAD *v8; // rbx
  struct _KTHREAD *Pool2; // rax
  struct _LIST_ENTRY **p_Blink; // rax
  signed __int64 v11; // rsi
  struct _LIST_ENTRY **v13; // rax
  struct _LIST_ENTRY *Blink; // rcx

  v4 = 0;
  v5 = a3;
  if ( !a1 )
    return 3221225488LL;
  v8 = (struct _KTHREAD *)*a1;
  if ( *a1 )
    goto LABEL_7;
  Pool2 = (struct _KTHREAD *)ExAllocatePool2(0x42uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    Pool2->Header.WaitListHead.Flink = 0LL;
    *(_QWORD *)&Pool2->Header.Lock = 0LL;
    p_Blink = &Pool2->Header.WaitListHead.Blink;
    p_Blink[1] = (struct _LIST_ENTRY *)p_Blink;
    *p_Blink = (struct _LIST_ENTRY *)p_Blink;
    v8->QuantumTarget = 0LL;
    if ( !v5 )
    {
      if ( p_Blink[1] != (struct _LIST_ENTRY *)p_Blink )
        goto FatalListEntryError_4;
      a2->Flink = (struct _LIST_ENTRY *)p_Blink;
      v4 = 1;
      a2->Blink = (struct _LIST_ENTRY *)p_Blink;
      p_Blink[1] = a2;
      *p_Blink = a2;
    }
    v11 = _InterlockedCompareExchange64(a1, (signed __int64)v8, 0LL);
    if ( v11 )
    {
      v4 = 0;
      ExFreePoolWithTag(v8, 0x63665346u);
      v8 = (struct _KTHREAD *)v11;
    }
LABEL_7:
    if ( v5 )
    {
      v8->QuantumTarget = (unsigned __int64)a2;
      return 0LL;
    }
    if ( v4 )
      return 0LL;
    FsRtlAcquireAutoExpandPushLockExclusive((__int64)v8, (__int64)a2, a3, a4);
    v13 = &v8->Header.WaitListHead.Blink;
    Blink = v8->Header.WaitListHead.Blink;
    if ( (struct _LIST_ENTRY **)Blink->Blink == &v8->Header.WaitListHead.Blink )
    {
      a2->Flink = Blink;
      a2->Blink = (struct _LIST_ENTRY *)v13;
      Blink->Blink = a2;
      *v13 = a2;
      FsRtlReleaseAutoExpandPushLockExclusive(v8);
      return 0LL;
    }
FatalListEntryError_4:
    __fastfail(3u);
  }
  return 3221225626LL;
}
