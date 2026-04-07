/*
 * XREFs of ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x18006E3C4
 * Callers:
 *     ?EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ @ 0x180082790 (-EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18008C5D8 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::ShouldFreezeAnimationCVI(CTopLevelWindow3D *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 70);
  return v1 == 6 || v1 == 3;
}
