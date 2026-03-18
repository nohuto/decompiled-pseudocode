/*
 * XREFs of ?KiAbMarkCrossThreadReleasable@LegacyAutoBoost@@YAXPEAX0@Z @ 0x140529BBC
 * Callers:
 *     ExpAcquireFastResourceSharedSlow @ 0x140276E40 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140529B94 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1405FD774 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 */

void __fastcall LegacyAutoBoost::KiAbMarkCrossThreadReleasable(
        LegacyAutoBoost *this,
        struct _KLOCK_ENTRY *a2,
        void *a3)
{
  LegacyAutoBoost *v3; // rbx

  v3 = (LegacyAutoBoost *)a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    v3 = (LegacyAutoBoost *)((char *)KeGetCurrentThread()->AutoBoostThreadState
                           + 88 * (unsigned __int8)((unsigned __int64)a2 >> 1)
                           + 16);
  if ( *(__int64 *)v3 >= 0 )
    LegacyAutoBoost::KiAbForceProcessLockEntry(v3, a2);
  *(_BYTE *)v3 |= 1u;
}
