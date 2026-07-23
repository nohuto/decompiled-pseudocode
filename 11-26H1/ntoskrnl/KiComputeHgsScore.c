/*
 * XREFs of KiComputeHgsScore @ 0x140453BF4
 * Callers:
 *     KiUpdateHgsScores @ 0x140453970 (KiUpdateHgsScores.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeHgsScore(unsigned __int8 a1, unsigned __int8 a2)
{
  if ( a2 )
    return (a1 << 8) / (unsigned int)a2;
  else
    return 256LL;
}
