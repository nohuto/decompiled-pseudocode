/*
 * XREFs of BgpFoInitialize @ 0x140D19C60
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     FioFwReadUlongAtOffset @ 0x14071E484 (FioFwReadUlongAtOffset.c)
 *     FopInitializeFonts @ 0x140D19EB8 (FopInitializeFonts.c)
 */

__int64 __fastcall BgpFoInitialize(__int64 a1, int a2)
{
  __int64 Memory; // rax
  __int64 v5; // rbx
  int UlongAtOffset; // edi
  _QWORD *v7; // rax
  struct _LIST_ENTRY *Blink; // rax
  int v10; // [rsp+50h] [rbp+18h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v11 = 0;
  if ( !BYTE4(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Flink) )
  {
    gLoadedDiffHivesLock.Timer.DueTime.QuadPart = (unsigned __int64)&gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink;
    gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink;
    BYTE4(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Flink) = 1;
  }
  Memory = BgpFwAllocateMemory(0x38uLL);
  v5 = Memory;
  if ( !Memory )
    return (unsigned int)-1073741801;
  *(_QWORD *)Memory = 0LL;
  *(_QWORD *)(Memory + 8) = 0LL;
  *(_DWORD *)(Memory + 24) = 0;
  *(_QWORD *)(Memory + 32) = 0LL;
  v7 = (_QWORD *)(Memory + 40);
  v7[1] = v7;
  *v7 = v7;
  *(_QWORD *)(v5 + 16) = a1;
  *(_DWORD *)(v5 + 28) = a2;
  UlongAtOffset = FioFwReadUlongAtOffset(a1, 0, &v10);
  if ( UlongAtOffset < 0 )
    goto LABEL_10;
  if ( v10 != 1953784678 )
  {
    *(_DWORD *)(v5 + 24) = 1;
    goto LABEL_15;
  }
  *(_DWORD *)(v5 + 32) |= 1u;
  UlongAtOffset = FioFwReadUlongAtOffset(a1, 4u, &v11);
  if ( UlongAtOffset < 0 )
  {
LABEL_10:
    BgpFwFreeMemory(v5);
    return (unsigned int)UlongAtOffset;
  }
  if ( ((v11 - 0x10000) & 0xFFFEFFFF) != 0 )
  {
    UlongAtOffset = -1073741701;
    goto LABEL_10;
  }
  UlongAtOffset = FioFwReadUlongAtOffset(a1, 8u, (_DWORD *)(v5 + 24));
  if ( UlongAtOffset < 0 )
    goto LABEL_10;
LABEL_15:
  UlongAtOffset = FopInitializeFonts(v5);
  if ( UlongAtOffset < 0 )
    goto LABEL_10;
  Blink = gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink;
  if ( (struct _LIST_ENTRY **)gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink->Blink != &gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink )
    __fastfail(3u);
  *(_QWORD *)v5 = gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink;
  *(_QWORD *)(v5 + 8) = &gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink;
  Blink->Blink = (struct _LIST_ENTRY *)v5;
  gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v5;
  return (unsigned int)UlongAtOffset;
}
