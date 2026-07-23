/*
 * XREFs of ?KiAbPreWait@LegacyAutoBoost@@YAXPEAX@Z @ 0x1404A4560
 * Callers:
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     MiChangingSubsectionProtos @ 0x1406FDDF0 (MiChangingSubsectionProtos.c)
 * Callees:
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 */

void __fastcall LegacyAutoBoost::KiAbPreWait(LegacyAutoBoost *this, struct _KLOCK_ENTRY *a2)
{
  *(_BYTE *)this |= 2u;
  if ( *(__int64 *)this < 0 )
    LegacyAutoBoost::KiAbEntryRemoveFromTree((__int64)this, a2);
  *((_BYTE *)this + 9) = 1;
  *(_BYTE *)this &= ~2u;
}
