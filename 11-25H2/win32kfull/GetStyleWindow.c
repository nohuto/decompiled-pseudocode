/*
 * XREFs of GetStyleWindow @ 0x14005A130
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     UnredirectDCEs @ 0x1400587E0 (UnredirectDCEs.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x140058F0C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     UpdateRedirectedDCE @ 0x140059FD0 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x14005A370 (SpbCheckDce.c)
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDesktopPaintCallback @ 0x140200ED0 (xxxDesktopPaintCallback.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxPrintWindow @ 0x140241E1C (xxxPrintWindow.c)
 *     NtUserHwndSetRedirectionInfo @ 0x140299D90 (NtUserHwndSetRedirectionInfo.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BE800 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r10
  __int64 v3; // r8

  v2 = a1;
  if ( !a1 )
    return a1;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( ((unsigned __int8)a2 & *(_BYTE *)(BYTE1(a2) + v3 + 16)) != 0 )
      break;
    a1 = *(_QWORD *)(a1 + 104);
    if ( !a1 )
      return a1;
  }
  if ( a1 != v2 && (*(_WORD *)(v3 + 42) & 0x2FFF) == 0x29D && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return a1;
}
