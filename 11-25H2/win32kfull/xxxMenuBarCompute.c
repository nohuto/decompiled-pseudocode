/*
 * XREFs of xxxMenuBarCompute @ 0x14004007C
 * Callers:
 *     xxxMNRecomputeBarIfNeeded @ 0x14003DA44 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxPaintMenuBar @ 0x14003F7B0 (xxxPaintMenuBar.c)
 *     xxxCalcClientRect @ 0x140047B98 (xxxCalcClientRect.c)
 *     xxxCalcMenuBar @ 0x140050EB4 (xxxCalcMenuBar.c)
 *     xxxMenuBarDraw @ 0x14020258C (xxxMenuBarDraw.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14003FD3C (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNCompute @ 0x140041D3C (xxxMNCompute.c)
 *     MNClearCachedPopupSizes @ 0x1401FED6C (MNClearCachedPopupSizes.c)
 */

__int64 __fastcall xxxMenuBarCompute(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int16 WindowDpiLastNotify; // bx
  __int64 v12; // rax
  int v13; // ebp
  int v14; // ebx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0;
  if ( a2 )
  {
    v8 = *(_QWORD *)(a2 + 40);
    v9 = *(_DWORD *)(v8 + 288) & 0xF;
    if ( (_DWORD)v9 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v8 + 288) >> 8) & 0x1FF;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v8 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
      goto LABEL_10;
    }
    if ( (_DWORD)v9
      || (v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 496LL)) == 0
      || (v9 = **(_QWORD **)(v10 + 8), (*(_DWORD *)(v9 + 64) & 1) == 0) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 464LL);
      WindowDpiLastNotify = *(_WORD *)(v9 + 272);
      goto LABEL_10;
    }
LABEL_9:
    WindowDpiLastNotify = 96;
    goto LABEL_10;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
    goto LABEL_9;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  if ( CurrentProcessWin32Process )
  {
    v9 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  WindowDpiLastNotify = *(_WORD *)(CurrentProcessWin32Process + 272);
LABEL_10:
  if ( (*(_DWORD *)(a2 + 380) & 0x80000) != 0 )
    goto LABEL_22;
  v12 = PsGetCurrentProcessWin32Process(v9);
  if ( v12 )
    v12 &= -(__int64)(*(_QWORD *)v12 != 0LL);
  if ( (*(_DWORD *)(v12 + 808) & 0x100000) != 0 )
  {
LABEL_22:
    if ( *(_WORD *)(**(_QWORD **)a1 + 76LL) != WindowDpiLastNotify )
    {
      v16 = *(_QWORD *)(a1 + 16);
      if ( !v16 )
        v16 = **(_QWORD **)a1;
      MNClearCachedPopupSizes(v16);
      *(_WORD *)(**(_QWORD **)a1 + 76LL) = WindowDpiLastNotify;
    }
  }
  v13 = a5;
  v14 = xxxMNCompute(a1, a4, a5, (__int64)&v18);
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 1) == 0 )
  {
    if ( v18 )
      v14 = xxxMNCompute(a1, a4, v13, (__int64)&v18);
    MBC_RightJustifyMenu(a1);
  }
  result = (unsigned int)(v14 + 1);
  if ( !v14 )
    return 0LL;
  return result;
}
