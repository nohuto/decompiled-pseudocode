/*
 * XREFs of vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1401C3CF0
 * Callers:
 *     bSetDevPreviewRect @ 0x1401E068C (bSetDevPreviewRect.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1403219F0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vSpDwmGetMiniWinInfoForNonWindowSprite(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm0
  __int64 result; // rax

  if ( a2 )
  {
    v3 = *a2;
    *(_OWORD *)a1 = *a2;
    *(_OWORD *)(a1 + 16) = v3;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  result = W32GetUserSessionState(a1, a2);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(result + 18656);
  return result;
}
