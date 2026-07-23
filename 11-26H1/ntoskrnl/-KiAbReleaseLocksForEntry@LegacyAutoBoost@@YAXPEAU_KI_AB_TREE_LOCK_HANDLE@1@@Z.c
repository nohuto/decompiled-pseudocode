/*
 * XREFs of ?KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448DD0
 * Callers:
 *     ?KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x14023D580 (-KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448C0C (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall LegacyAutoBoost::KiAbReleaseLocksForEntry(
        LegacyAutoBoost *this,
        struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *a2)
{
  char v2; // al
  char v4; // al
  volatile LONG *v5; // rcx
  char v6; // al

  v2 = *((_BYTE *)this + 48);
  if ( (v2 & 4) != 0 )
  {
    *((_BYTE *)this + 48) = v2 & 0xFB;
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)this + 16));
  }
  v4 = *((_BYTE *)this + 48);
  if ( (v4 & 1) != 0 )
  {
    v5 = (volatile LONG *)*((_QWORD *)this + 1);
    v6 = v4 & 0xFE;
    *((_BYTE *)this + 48) = v6;
    if ( (v6 & 2) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    *((_BYTE *)this + 48) &= ~2u;
  }
  *((_QWORD *)this + 5) = 0LL;
}
