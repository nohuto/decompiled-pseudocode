/*
 * XREFs of CmpTryToLockHashEntryExclusive @ 0x140AE3518
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 */

char __fastcall CmpTryToLockHashEntryExclusive(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rbx
  char v6; // di
  struct _KTHREAD *v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v4 = (unsigned int)BugCheckParameter4;
  v6 = 1;
  v7 = (struct _KTHREAD *)(*(_QWORD *)(BugCheckParameter2 + 1648)
                         + 24
                         * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1656) - 1) & ((101027
                                                                                         * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9))));
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 1LL, a4);
  if ( _interlockedbittestandset64(&v7->Header.Lock, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(v7, (unsigned __int64)v8, v10, v11);
    return 0;
  }
  else
  {
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v9);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    v7->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    if ( !CmpReferenceHive(BugCheckParameter2) )
      KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xDuLL, v4);
  }
  return v6;
}
