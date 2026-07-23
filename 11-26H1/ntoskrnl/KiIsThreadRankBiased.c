/*
 * XREFs of KiIsThreadRankBiased @ 0x14050F950
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsThreadRankBiased(__int64 a1, struct _KPRCB *CurrentPrcb)
{
  char v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( *(char *)(a1 + 195) >= 16 )
    return 0;
  v2 = 0;
  if ( !*(_QWORD *)(a1 + 104) )
    return 0;
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  v3 = *(_QWORD *)(a1 + 104);
  if ( !v3 )
    return 0;
  v4 = v3 + CurrentPrcb->ScbOffset;
  if ( !v4 )
    return 0;
  while ( (*(_BYTE *)(v4 + 128) & 8) == 0 )
  {
    v4 = *(_QWORD *)(v4 + 440);
    if ( !v4 )
      return v2;
  }
  return 1;
}
