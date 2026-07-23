/*
 * XREFs of KiReduceAffinityToRankListMinimums @ 0x14022B4C0
 * Callers:
 *     KiPerformSoftParkElection @ 0x14022C024 (KiPerformSoftParkElection.c)
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReduceAffinityToRankListMinimums(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int8 v4; // cl
  __int64 v5; // rax
  unsigned __int8 v7; // r11
  unsigned __int8 v8; // dl

  v2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v7 = -1;
  do
  {
    if ( ((1LL << v4) & a1) != 0 )
    {
      v8 = *(_BYTE *)(v5 + a2);
      if ( v8 == v7 )
      {
        v2 |= 1LL << v5;
      }
      else if ( v8 < v7 )
      {
        v7 = *(_BYTE *)(v5 + a2);
        v2 = 1LL << v4;
      }
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x40u );
  return v2;
}
