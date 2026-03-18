/*
 * XREFs of MiFindNextLowerLargePageCandidate @ 0x14042E03C
 * Callers:
 *     MiPfnsWorthTrying @ 0x140290D20 (MiPfnsWorthTrying.c)
 *     MiFindBestLargePageStealCandidates @ 0x14042DA48 (MiFindBestLargePageStealCandidates.c)
 *     MiExpandPageSkipRange @ 0x14042DF80 (MiExpandPageSkipRange.c)
 * Callees:
 *     RtlFindNextClearBitBackwardsEx @ 0x14042E0DC (RtlFindNextClearBitBackwardsEx.c)
 */

__int64 __fastcall MiFindNextLowerLargePageCandidate(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // r9
  __int64 v5; // r8
  int v6; // edi
  unsigned __int64 v7; // rbx
  __int64 NextClearBitBackwards; // rax
  __int64 v9; // r11
  unsigned __int64 v10; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16486) )
    return a2;
  v3 = 0LL;
  v4 = MiPageSizes;
  do
  {
    if ( *v4 == a3 )
      break;
    v3 = (unsigned int)(v3 + 1);
    ++v4;
  }
  while ( (unsigned int)v3 < 3 );
  if ( (unsigned int)v3 > 1 )
    return a2;
  v5 = a1 + 16LL * (unsigned int)v3;
  if ( !*(_QWORD *)(v5 + 16712) )
    return a2;
  v6 = MiLargePageShifts[v3];
  v7 = a2 >> v6;
  NextClearBitBackwards = RtlFindNextClearBitBackwardsEx(v5 + 16712, a2 >> v6);
  if ( NextClearBitBackwards == -1 )
    return 0LL;
  v10 = NextClearBitBackwards + 1;
  result = (NextClearBitBackwards + 1) << v6;
  if ( v10 >= v7 )
    return v9;
  return result;
}
