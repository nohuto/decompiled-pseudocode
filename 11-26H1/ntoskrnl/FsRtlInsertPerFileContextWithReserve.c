/*
 * XREFs of FsRtlInsertPerFileContextWithReserve @ 0x140488BE0
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x1405B80A0 (FsRtlInsertPerFileContext.c)
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x14021AF74 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x14021B11C (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlInsertPerFileContextWithReserve(volatile signed __int64 *a1, struct _LIST_ENTRY *a2, int a3)
{
  char v3; // bp
  struct _KTHREAD *v7; // rbx
  struct _KTHREAD *Pool2; // rax
  struct _LIST_ENTRY **p_Blink; // rax
  signed __int64 v10; // rsi
  struct _LIST_ENTRY **v12; // rax
  struct _LIST_ENTRY *Blink; // rcx

  v3 = 0;
  if ( !a1 )
    return 3221225488LL;
  v7 = (struct _KTHREAD *)*a1;
  if ( *a1 )
    goto LABEL_7;
  Pool2 = (struct _KTHREAD *)ExAllocatePool2(0x42uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    Pool2->Header.WaitListHead.Flink = 0LL;
    *(_QWORD *)&Pool2->Header.Lock = 0LL;
    p_Blink = &Pool2->Header.WaitListHead.Blink;
    p_Blink[1] = (struct _LIST_ENTRY *)p_Blink;
    *p_Blink = (struct _LIST_ENTRY *)p_Blink;
    v7->QuantumTarget = 0LL;
    if ( !a3 )
    {
      if ( p_Blink[1] != (struct _LIST_ENTRY *)p_Blink )
        goto FatalListEntryError_4;
      a2->Flink = (struct _LIST_ENTRY *)p_Blink;
      v3 = 1;
      a2->Blink = (struct _LIST_ENTRY *)p_Blink;
      p_Blink[1] = a2;
      *p_Blink = a2;
    }
    v10 = _InterlockedCompareExchange64(a1, (signed __int64)v7, 0LL);
    if ( v10 )
    {
      v3 = 0;
      ExFreePoolWithTag(v7, 0x63665346u);
      v7 = (struct _KTHREAD *)v10;
    }
LABEL_7:
    if ( a3 )
    {
      v7->QuantumTarget = (unsigned __int64)a2;
      return 0LL;
    }
    if ( v3 )
      return 0LL;
    FsRtlAcquireAutoExpandPushLockExclusive((__int64)v7);
    v12 = &v7->Header.WaitListHead.Blink;
    Blink = v7->Header.WaitListHead.Blink;
    if ( (struct _LIST_ENTRY **)Blink->Blink == &v7->Header.WaitListHead.Blink )
    {
      a2->Flink = Blink;
      a2->Blink = (struct _LIST_ENTRY *)v12;
      Blink->Blink = a2;
      *v12 = a2;
      FsRtlReleaseAutoExpandPushLockExclusive(v7);
      return 0LL;
    }
FatalListEntryError_4:
    __fastfail(3u);
  }
  return 3221225626LL;
}
