/*
 * XREFs of BgpTxtGetRegionContext @ 0x140C59234
 * Callers:
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 */

__int64 __fastcall BgpTxtGetRegionContext(__int64 a1)
{
  int v1; // ebx
  int v3; // eax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *v6; // rbp
  __int64 result; // rax

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 0LL;
  v3 = -1073741275;
  if ( !BYTE4(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Flink) )
    return 0LL;
  Blink = gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink;
  while ( 1 )
  {
    i = 0LL;
    if ( Blink == (struct _LIST_ENTRY *)&gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink )
      break;
    for ( i = Blink[2].Blink; i != (struct _LIST_ENTRY *)&Blink[2].Blink; i = i->Flink )
    {
      if ( (HIDWORD(Blink[1].Blink) & 1) != 0 )
      {
        v3 = 0;
        goto LABEL_10;
      }
    }
    Blink = Blink->Flink;
    v3 = -1073741275;
  }
LABEL_10:
  if ( v3 < 0 )
    return 0LL;
  v6 = *(struct _LIST_ENTRY **)(a1 + 48);
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
