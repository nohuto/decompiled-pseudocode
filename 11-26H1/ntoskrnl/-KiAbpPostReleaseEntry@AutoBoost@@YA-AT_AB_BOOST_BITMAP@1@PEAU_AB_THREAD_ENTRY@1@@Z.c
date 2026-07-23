/*
 * XREFs of ?KiAbpPostReleaseEntry@AutoBoost@@YA?AT_AB_BOOST_BITMAP@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140526684
 * Callers:
 *     ?KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x140203BD0 (-KiAbpPerformPendingReleases@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 */

__int64 __fastcall AutoBoost::KiAbpPostReleaseEntry(__int64 a1, struct AutoBoost::_AB_THREAD_ENTRY *a2)
{
  signed __int8 v3; // al
  signed __int8 v4; // tt
  __int64 result; // rax
  char v6; // dl

  LOBYTE(a2) = 1;
  *(_BYTE *)(a1 + 33) = *(_BYTE *)(a1 + 33) & 0xFC | 1;
  _m_prefetchw((const void *)(a1 + 35));
  v3 = *(_BYTE *)(a1 + 35);
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 35), v3 | 1, v3);
  }
  while ( v4 != v3 );
  while ( (v3 & 1) != 0 )
  {
    while ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
      _mm_pause();
    _m_prefetchw((const void *)(a1 + 35));
    v3 = _InterlockedOr8((volatile signed __int8 *)(a1 + 35), 1u);
  }
  if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
    AutoBoost::KiAbpEntryUnlink((AutoBoost *)a1, a2);
  result = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = 0;
  _InterlockedAnd8((volatile signed __int8 *)(a1 + 35), 0xFEu);
  v6 = *(_BYTE *)(a1 + 36);
  *(_QWORD *)a1 = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 - 48LL * (v6 & 0x7F) - 8) |= 1 << (v6 & 0xF);
  return result;
}
