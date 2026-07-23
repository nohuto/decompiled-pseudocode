/*
 * XREFs of ?KiAbUserModeEntryFree@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x1404B003C
 * Callers:
 *     KeAbUserModeEntryFree @ 0x14026F9C0 (KeAbUserModeEntryFree.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall LegacyAutoBoost::KiAbUserModeEntryFree(struct _KLOCK_ENTRY *this, struct _KTHREAD *a2, void *a3)
{
  _KLOCK_ENTRY_LOCK_STATE v3; // rdi
  unsigned int v4; // ebp
  struct _KLOCK_ENTRY *v5; // rsi
  unsigned __int8 CurrentIrql; // bl
  LegacyAutoBoost *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h]

  v3.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)this[13].LockState;
  v4 = (unsigned int)a2;
  v5 = this;
  if ( *(_QWORD *)&v3.0 && (unsigned int)a2 < *(unsigned __int8 *)(*(_QWORD *)&v3.0 + 12LL) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(this) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(this, 2LL);
    }
    v7 = (LegacyAutoBoost *)(*(_QWORD *)&v3.0 + 88LL * v4 + 16);
    if ( *(_QWORD *)v7 )
    {
      _disable();
      LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(v7, v5, 0LL, (void *)1, 0LL);
    }
    v8 = *(_QWORD *)&v5[9].EntryFlags;
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8LL * v4);
      HIBYTE(v9) &= ~0x80u;
      *(_QWORD *)(v8 + 8LL * v4) = v9;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
