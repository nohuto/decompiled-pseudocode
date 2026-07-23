/*
 * XREFs of ?KiAbpUmPostWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x140486F44
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall LegacyAutoBoost::KiAbpUmPostWait(struct _KLOCK_ENTRY *this, struct _KTHREAD *a2, void *a3)
{
  _KLOCK_ENTRY_LOCK_STATE v3; // rsi
  struct _KLOCK_ENTRY *v5; // rbp
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdi
  __int64 i; // rcx
  __int64 v9; // r14
  __int64 v10; // r8
  LegacyAutoBoost *v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h]

  v3.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)this[13].LockState;
  v5 = this;
  if ( v3.0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(this) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(this, 2LL);
    }
    v7 = *(_QWORD *)&v5[9].EntryFlags;
    if ( v7 )
    {
      for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(*(_QWORD *)&v3.0 + 12LL); i = (unsigned int)(i + 1) )
      {
        v12 = *(_QWORD *)(v7 + 8 * i);
        v9 = (unsigned int)i;
        if ( (struct _KTHREAD *)(v12 & 0x7FFFFFFFFFFFFFFCLL) == a2 )
        {
          LOBYTE(v12) = v12 & 0xFE;
          v11 = (LegacyAutoBoost *)(*(_QWORD *)&v3.0 + 88LL * (unsigned int)i + 16);
          if ( *(_QWORD *)v11 && *((_BYTE *)v11 + 9) )
          {
            _disable();
            v10 = *(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL;
            if ( v10 && *((_BYTE *)v11 + 8) < 0x80u )
              v10 |= 0x8000000000000000uLL;
            LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(v11, v5, (struct _KTHREAD *)v10, (void *)1, 0LL);
            HIBYTE(v12) &= ~0x80u;
          }
          *(_QWORD *)(v7 + 8 * v9) = v12;
          break;
        }
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
