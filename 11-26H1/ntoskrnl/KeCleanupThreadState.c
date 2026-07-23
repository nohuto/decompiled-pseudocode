/*
 * XREFs of KeCleanupThreadState @ 0x140201FC8
 * Callers:
 *     PspThreadDelete @ 0x140AA3CB0 (PspThreadDelete.c)
 * Callees:
 *     ?KiAbpCleanupThreadEntries@AutoBoost@@YAXPEAU_AB_THREAD_ENTRIES@1@PEAU_KTHREAD@@@Z @ 0x140203AAC (-KiAbpCleanupThreadEntries@AutoBoost@@YAXPEAU_AB_THREAD_ENTRIES@1@PEAU_KTHREAD@@@Z.c)
 *     ?KiAbCleanupLockEntriesState@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRIES@@PEAU_KTHREAD@@@Z @ 0x140203CA8 (-KiAbCleanupLockEntriesState@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRIES@@PEAU_KTHREAD@@@Z.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeFlushQueuedDpcs @ 0x1405163E0 (KeFlushQueuedDpcs.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdx
  struct _KTHREAD *v3; // r8
  AutoBoost **v4; // rbx
  struct _KTHREAD *v5; // r8
  __int64 v6; // rbx
  struct _KTHREAD *v7; // r8
  LegacyAutoBoost *v8; // rcx
  char v9; // al
  __int64 v10; // rax
  char v11; // al
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  KiAcquireThreadLockRaiseToDpc(BugCheckParameter2, &v12);
  if ( *(_DWORD *)(BugCheckParameter2 + 1028) != 32 )
  {
    v2 = *(char *)(BugCheckParameter2 + 1028);
    v9 = *(_BYTE *)(v2 + BugCheckParameter2 + 824);
    if ( !v9 )
      KeBugCheckEx(0x157u, BugCheckParameter2, *(char *)(BugCheckParameter2 + 1028), 2uLL, 0LL);
    v11 = v9 - 1;
    *(_BYTE *)(v2 + BugCheckParameter2 + 824) = v11;
    if ( !v11 )
      *(_DWORD *)(BugCheckParameter2 + 856) ^= 1 << v2;
    *(_DWORD *)(BugCheckParameter2 + 1028) = 32;
  }
  LOBYTE(v2) = v12;
  KiReleaseThreadLockLowerIrql(BugCheckParameter2, v2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 1) != 0 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      v4 = *(AutoBoost ***)(BugCheckParameter2 + 1136);
      AutoBoost::KiAbpCleanupThreadEntries(*v4, (struct AutoBoost::_AB_THREAD_ENTRIES *)BugCheckParameter2, v3);
      AutoBoost::KiAbpCleanupThreadEntries(v4[1], (struct AutoBoost::_AB_THREAD_ENTRIES *)BugCheckParameter2, v5);
    }
    else
    {
      LegacyAutoBoost::KiAbCleanupLockEntriesState(
        *(LegacyAutoBoost **)(BugCheckParameter2 + 1136),
        (struct _KLOCK_ENTRIES *)BugCheckParameter2,
        v3);
      v8 = *(LegacyAutoBoost **)(BugCheckParameter2 + 1144);
      if ( v8 )
        LegacyAutoBoost::KiAbCleanupLockEntriesState(v8, (struct _KLOCK_ENTRIES *)BugCheckParameter2, v7);
    }
  }
  v6 = *(unsigned __int16 *)(BugCheckParameter2 + 868);
  if ( (_WORD)v6 )
  {
    KeFlushQueuedDpcs();
    v10 = *(unsigned __int16 *)(BugCheckParameter2 + 868);
    if ( (_WORD)v10 )
      KeBugCheckEx(0x200u, 4uLL, BugCheckParameter2, v10 | (v6 << 16), 0LL);
  }
}
