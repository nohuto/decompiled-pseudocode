/*
 * XREFs of BgpTxtGetRegionContext @ 0x140C53234
 * Callers:
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140355EBC (BgpFwAllocateMemory.c)
 */

__int64 __fastcall BgpTxtGetRegionContext(__int64 a1)
{
  int v1; // ebx
  int v3; // eax
  _KTIMER *v4; // rcx
  __int64 *i; // rsi
  __int64 *v6; // rbp
  __int64 result; // rax

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 0LL;
  v3 = -1073741275;
  if ( !LOBYTE(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink) )
    return 0LL;
  v4 = *(_KTIMER **)&gLoadedDiffHivesLock.Timer.Header.Lock;
  while ( 1 )
  {
    i = 0LL;
    if ( v4 == &gLoadedDiffHivesLock.Timer )
      break;
    for ( i = (__int64 *)v4->TimerListEntry.Blink; i != (__int64 *)&v4->TimerListEntry.Blink; i = (__int64 *)*i )
    {
      if ( (v4->DueTime.HighPart & 1) != 0 )
      {
        v3 = 0;
        goto LABEL_10;
      }
    }
    v4 = *(_KTIMER **)&v4->Header.Lock;
    v3 = -1073741275;
  }
LABEL_10:
  if ( v3 < 0 )
    return 0LL;
  v6 = *(__int64 **)(a1 + 48);
  result = BgpFwAllocateMemory(0x24uLL);
  if ( result )
  {
    *(_OWORD *)result = 0LL;
    *(_OWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 32) = 0;
    LOBYTE(v1) = v6 == i;
    *(_QWORD *)result = *(_QWORD *)a1;
    *(_QWORD *)(result + 8) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(result + 16) = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(result + 28) = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(result + 20) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(result + 24) = v1;
  }
  return result;
}
