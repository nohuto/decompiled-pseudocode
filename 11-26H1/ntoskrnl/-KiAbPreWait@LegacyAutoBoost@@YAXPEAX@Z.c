/*
 * XREFs of ?KiAbPreWait@LegacyAutoBoost@@YAXPEAX@Z @ 0x1404AAED0
 * Callers:
 *     MiReferenceControlArea @ 0x14046FD70 (MiReferenceControlArea.c)
 *     MiChangingSubsectionProtos @ 0x1406F9120 (MiChangingSubsectionProtos.c)
 * Callees:
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1402722CC (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 */

void __fastcall LegacyAutoBoost::KiAbPreWait(LegacyAutoBoost *this, struct _KLOCK_ENTRY *a2)
{
  *(_BYTE *)this |= 2u;
  if ( *(__int64 *)this < 0 )
    LegacyAutoBoost::KiAbEntryRemoveFromTree((__int64)this, a2);
  *((_BYTE *)this + 9) = 1;
  *(_BYTE *)this &= ~2u;
}
