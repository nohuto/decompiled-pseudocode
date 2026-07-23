/*
 * XREFs of ?KiAbReleaseTeeLockForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448E28
 * Callers:
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448C0C (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall LegacyAutoBoost::KiAbReleaseTeeLockForEntry(
        LegacyAutoBoost *this,
        struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *a2)
{
  char v2; // al
  char v4; // al
  volatile LONG *v5; // rcx

  v2 = *((_BYTE *)this + 48);
  if ( (v2 & 1) != 0 )
  {
    v4 = v2 & 0xFE;
    *((_BYTE *)this + 48) = v4;
    v5 = (volatile LONG *)*((_QWORD *)this + 1);
    if ( (v4 & 2) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v5);
    *((_BYTE *)this + 48) &= ~2u;
  }
}
