/*
 * XREFs of MiCanPageMove @ 0x1402DFD1C
 * Callers:
 *     MiReplaceLockedPage @ 0x140294BC4 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiTradePageMarkedTransition @ 0x1402DF640 (MiTradePageMarkedTransition.c)
 *     MiValidateInPagePrepare @ 0x14038DF70 (MiValidateInPagePrepare.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCanPageMove(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = 0LL;
  if ( *(__int64 *)(a1 + 40) >= 0 || (*(_QWORD *)(a1 + 16) & 0x400LL) == 0 )
    return 1LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( qword_140E2D8C0 && (v2 & 0x10) == 0 )
      v2 &= qword_140E2D8C8;
    v3 = (v2 >> 12) & 0x3FFFFFFFFFFLL;
    if ( v3 )
      v1 = qword_140E37D10 - 8 + 8 * v3;
    if ( v1 != *(_QWORD *)v1 + 128LL && (*(_DWORD *)(*(_QWORD *)v1 + 56LL) & 0x20) != 0 )
      return (*(_DWORD *)(*(_QWORD *)v1 + 92LL) & 0x20000) == 0;
    return 1LL;
  }
  return 0LL;
}
