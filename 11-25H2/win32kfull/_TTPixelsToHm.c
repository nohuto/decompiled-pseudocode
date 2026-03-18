/*
 * XREFs of _TTPixelsToHm @ 0x1401C1F6C
 * Callers:
 *     TouchTargetingRankForRect @ 0x1401C0930 (TouchTargetingRankForRect.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1401C1D74 (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 *     TouchTargetingBigTargetWindow @ 0x1401C1F18 (TouchTargetingBigTargetWindow.c)
 *     ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1401C2024 (-DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x1401C20E8 (TouchTargetChildTree.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1402F322C (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TTPixelsToHm(int a1, int a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rdx

  v2 = 0x7FFFFFFF;
  v3 = a2 * (__int64)a1 / 1000;
  if ( (unsigned __int64)(v3 + 0x80000000LL) <= 0xFFFFFFFF )
    return (unsigned int)v3;
  return v2;
}
