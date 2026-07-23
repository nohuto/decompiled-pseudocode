/*
 * XREFs of ?KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z @ 0x14044F6A0
 * Callers:
 *     KeAbPreWakeupThread @ 0x140269824 (KeAbPreWakeupThread.c)
 *     KiAlertSingleThreadByThreadId @ 0x140382DF0 (KiAlertSingleThreadByThreadId.c)
 *     KeAlertThreadByThreadIdEx @ 0x140383010 (KeAlertThreadByThreadIdEx.c)
 * Callees:
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ?KiAbLockEntriesFindLock@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAXPEAU_KLOCK_ENTRIES@@@Z @ 0x14044F700 (-KiAbLockEntriesFindLock@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAXPEAU_KLOCK_ENTRIES@@@Z.c)
 *     KeAbIsValidUserModeLockAddress @ 0x14044F7A0 (KeAbIsValidUserModeLockAddress.c)
 */

void __fastcall LegacyAutoBoost::KiAbPreWakeupThread(
        LegacyAutoBoost *this,
        struct _KTHREAD *a2,
        void *a3,
        unsigned int a4)
{
  LegacyAutoBoost *v6; // rcx
  struct _KLOCK_ENTRIES *v7; // r8
  void *v8; // rdx
  struct _KLOCK_ENTRY *Lock; // rax

  if ( (unsigned int)KeAbIsValidUserModeLockAddress(a2) )
  {
    v8 = (void *)*((_QWORD *)this + 143);
    if ( !v8 )
      return;
  }
  else
  {
    v8 = (void *)*((_QWORD *)this + 142);
  }
  Lock = LegacyAutoBoost::KiAbLockEntriesFindLock(v6, v8, v7);
  if ( Lock )
    LegacyAutoBoost::KiAbConvertWaiterToOwnerEntry(this, (__int64)Lock, (struct _KLOCK_ENTRY *)a4);
}
