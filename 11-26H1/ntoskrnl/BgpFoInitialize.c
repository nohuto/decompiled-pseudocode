/*
 * XREFs of BgpFoInitialize @ 0x140D13A98
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140355EBC (BgpFwAllocateMemory.c)
 *     FioFwReadUlongAtOffset @ 0x140719794 (FioFwReadUlongAtOffset.c)
 *     FopInitializeFonts @ 0x140D13CF0 (FopInitializeFonts.c)
 */

__int64 __fastcall BgpFoInitialize(__int64 a1, int a2)
{
  __int64 Memory; // rax
  __int64 v5; // rbx
  int UlongAtOffset; // edi
  _QWORD *v7; // rax
  __int64 v9; // rax
  int v10; // [rsp+50h] [rbp+18h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v11 = 0;
  if ( !LOBYTE(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink) )
  {
    gLoadedDiffHivesLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&gLoadedDiffHivesLock.Timer;
    *(_QWORD *)&gLoadedDiffHivesLock.Timer.Header.Lock = &gLoadedDiffHivesLock.Timer;
    LOBYTE(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink) = 1;
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
  v9 = *(_QWORD *)&gLoadedDiffHivesLock.Timer.Header.Lock;
  if ( *(struct _KTHREAD **)(*(_QWORD *)&gLoadedDiffHivesLock.Timer.Header.Lock + 8LL) != (struct _KTHREAD *)&gLoadedDiffHivesLock.Timer )
    __fastfail(3u);
  *(_QWORD *)v5 = *(_QWORD *)&gLoadedDiffHivesLock.Timer.Header.Lock;
  *(_QWORD *)(v5 + 8) = &gLoadedDiffHivesLock.Timer;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)&gLoadedDiffHivesLock.Timer.Header.Lock = v5;
  return (unsigned int)UlongAtOffset;
}
