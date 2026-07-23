/*
 * XREFs of ?KiAbTryDecrementIoWaiterCounts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x140448E64
 * Callers:
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448C0C (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyAutoBoost::KiAbTryDecrementIoWaiterCounts(
        LegacyAutoBoost *this,
        struct _KLOCK_ENTRY *a2,
        struct _KLOCK_ENTRY *a3)
{
  _BYTE *v3; // rdx

  v3 = (char *)&a2->BoostBitmap.2 + 4;
  if ( (*((_BYTE *)this + 11) & 2) != 0 )
  {
    --*v3;
    *((_BYTE *)this + 11) &= ~2u;
  }
  if ( (*((_BYTE *)this + 11) & 4) != 0 )
  {
    *(_DWORD *)v3 ^= ((unsigned __int16)*(_DWORD *)v3 ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)v3 >> 8) - 1) << 8)) & 0x7F00;
    *((_BYTE *)this + 11) &= ~4u;
  }
}
