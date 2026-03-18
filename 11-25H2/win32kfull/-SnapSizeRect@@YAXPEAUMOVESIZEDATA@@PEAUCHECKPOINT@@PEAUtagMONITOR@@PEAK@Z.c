/*
 * XREFs of ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1401F7F88
 * Callers:
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1401F7CB4 (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1401F8074 (-ComputeSizeOutcome@@YA-AW4_MOUSE_SIZE_OUTCOME@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESH.c)
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1402A6DC4 (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402A7000 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1402A87E0 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 */

void __fastcall SnapSizeRect(const struct tagWND **a1, struct CHECKPOINT *a2, struct tagMONITOR *a3, unsigned int *a4)
{
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // esi
  const struct tagWND *v12; // rcx
  int v13; // eax
  const struct tagWND *v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  int v16; // [rsp+64h] [rbp+1Ch]

  v16 = HIDWORD(a3);
  v14 = 0LL;
  v15 = 0;
  v7 = ComputeSizeOutcome(a1, &v14, &v15) - 2;
  if ( !v7 )
  {
    VerticalSizeRectFromHitTarget(a1, v14, v15);
    return;
  }
  v9 = v7 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
        HandleNoTargetToDockTargetSizing(a1, v14, v8, v15, a4);
      return;
    }
LABEL_10:
    HandleSizingAwayFromDockTarget((struct MOVESIZEDATA *)a1, a2, a4);
    return;
  }
  v11 = *((_DWORD *)a1 + 62);
  v12 = a1[2];
  a1[30] = v14;
  *((_DWORD *)a1 + 62) = v15;
  if ( !IsArranged(v12) )
    goto LABEL_10;
  v13 = *((_DWORD *)a1 + 62);
  if ( v13 == v11 || v13 && v13 != 3 )
    goto LABEL_10;
}
