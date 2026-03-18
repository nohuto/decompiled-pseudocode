/*
 * XREFs of ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013ADCC
 * Callers:
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18013967C (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ @ 0x18021B0C0 (-UpdatePositionRoundingSuggestion@CInteractionTracker2@@AEAAXXZ.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

char __fastcall InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation(
        InteractionSourceManager *this)
{
  bool HasActiveManipulation; // al
  InteractionSourceManager *v2; // rcx
  char v3; // r9
  InteractionSourceManager *v5; // rcx
  InteractionSourceManager *v6; // rcx
  InteractionSourceManager *v7; // rcx

  HasActiveManipulation = InteractionSourceManager::HasActiveManipulation(this);
  v3 = 0;
  if ( HasActiveManipulation
    && COERCE_FLOAT(*((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v2) + 100) & _xmm) < 0.1
    && COERCE_FLOAT(*((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v5) + 101) & _xmm) < 0.1
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)InteractionSourceManager::TryGetActiveManipulation(v6) + 103) - 0.0) & _xmm) <= 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)InteractionSourceManager::TryGetActiveManipulation(v7) + 104) - 0.0) & _xmm) <= 0.0000011920929 )
  {
    return 1;
  }
  return v3;
}
