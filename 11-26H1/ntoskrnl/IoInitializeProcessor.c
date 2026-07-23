/*
 * XREFs of IoInitializeProcessor @ 0x140796878
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopQueryProcessorInitValues @ 0x140796B38 (IopQueryProcessorInitValues.c)
 *     ExInitializeSystemLookasideList @ 0x140C136D0 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoInitializeProcessor(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rsi
  char *Pool2; // rbx
  void *v5; // rbp
  int v6; // eax
  void *v7; // rbp
  void *v8; // rbp
  void *v9; // rbp
  _BYTE v11[32]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a2;
  memset(v11, 0, sizeof(v11));
  if ( !a2 )
  {
    IopQueryProcessorInitValues(v11);
    v2 = v11;
  }
  Pool2 = (char *)ExAllocatePool2(0x40uLL);
  v5 = Pool2;
  if ( IopIrpCreditsEnabled <= 0 )
    v6 = 0x7FFFFFFF;
  else
    v6 = *((_DWORD *)v2 + 7);
  *(_DWORD *)(a1 + 11676) = v6;
  *(_QWORD *)(a1 + 2232) = &IopCompletionLookasideList;
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList((_DWORD)Pool2, 512, 56, 1349542729, *((_WORD *)v2 + 3));
    Pool2 += 128;
  }
  else
  {
    v5 = &IopCompletionLookasideList;
  }
  *(_QWORD *)(a1 + 2224) = v5;
  *(_QWORD *)(a1 + 2152) = &IopLargeIrpLookasideList;
  v7 = Pool2;
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList((_DWORD)Pool2, 512, *((_DWORD *)v2 + 5), 1282437705, *((_WORD *)v2 + 2));
    Pool2 += 128;
  }
  else
  {
    v7 = &IopLargeIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2144) = v7;
  *(_QWORD *)(a1 + 2136) = &IopMediumIrpLookasideList;
  v8 = Pool2;
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList((_DWORD)Pool2, 512, *((_DWORD *)v2 + 4), 1299214921, *((_WORD *)v2 + 1));
    Pool2 += 128;
  }
  else
  {
    v8 = &IopMediumIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2128) = v8;
  *(_QWORD *)(a1 + 2120) = &IopSmallIrpLookasideList;
  v9 = Pool2;
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList((_DWORD)Pool2, 512, *((_DWORD *)v2 + 3), 1399878217, *(_WORD *)v2);
    Pool2 += 128;
  }
  else
  {
    v9 = &IopSmallIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2112) = v9;
  *(_QWORD *)(a1 + 2168) = &IopMdlLookasideList;
  if ( Pool2 )
    ExInitializeSystemLookasideList((_DWORD)Pool2, 512, *((_DWORD *)v2 + 6), 1349280845, *((_WORD *)v2 + 4));
  else
    Pool2 = (char *)&IopMdlLookasideList;
  *(_QWORD *)(a1 + 2160) = Pool2;
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    memset_0((void *)(a1 + 37760), 0, 0x50uLL);
    *(_DWORD *)(a1 + 37840) = 0;
    memset_0((void *)(a1 + 37844), 0, 0x50uLL);
    *(_DWORD *)(a1 + 37924) = 0;
  }
  return 0LL;
}
