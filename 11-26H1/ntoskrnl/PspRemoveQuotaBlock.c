/*
 * XREFs of PspRemoveQuotaBlock @ 0x1409B9030
 * Callers:
 *     PspDereferenceQuotaBlock @ 0x1408FFC10 (PspDereferenceQuotaBlock.c)
 *     PsReturnSharedPoolQuota @ 0x1409B8E10 (PsReturnSharedPoolQuota.c)
 * Callees:
 *     PspLockQuotaListExclusive @ 0x1404FE6B4 (PspLockQuotaListExclusive.c)
 *     PspUnlockQuotaListExclusive @ 0x140502E10 (PspUnlockQuotaListExclusive.c)
 */

__int64 __fastcall PspRemoveQuotaBlock(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v5; // rdi
  struct _LIST_ENTRY *Blink; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 **v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (__int64 *)(a1 + 520);
  Blink = PspSiloMonitorLock.WaitListEntry.Blink;
  v8 = *(_QWORD *)(a1 + 520);
  PspLockQuotaListExclusive((__int64)CurrentThread, (unsigned __int64 *)PspSiloMonitorLock.WaitListEntry.Blink, a3, a4);
  if ( v8 == 1 )
  {
    if ( a1 == PspSiloMonitorLock.NpxState )
      PspSiloMonitorLock.NpxState = 0LL;
  }
  else
  {
    v9 = *v5;
    if ( *v5 )
    {
      if ( *(__int64 **)(v9 + 8) != v5 || (v10 = (__int64 **)v5[1], *v10 != v5) )
        __fastfail(3u);
      *v10 = (__int64 *)v9;
      *(_QWORD *)(v9 + 8) = v10;
    }
  }
  return PspUnlockQuotaListExclusive((__int64)CurrentThread, (volatile signed __int64 *)Blink);
}
