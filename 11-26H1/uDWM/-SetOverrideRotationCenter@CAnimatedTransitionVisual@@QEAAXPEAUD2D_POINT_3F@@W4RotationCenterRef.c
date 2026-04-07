/*
 * XREFs of ?SetOverrideRotationCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@W4RotationCenterReference3D@@@Z @ 0x180096714
 * Callers:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800C44F4 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::SetOverrideRotationCenter(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 8);
  *(_QWORD *)(a1 + 736) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 744) = result;
  *(_DWORD *)(a1 + 956) = 2;
  *(_BYTE *)(a1 + 909) = 1;
  return result;
}
