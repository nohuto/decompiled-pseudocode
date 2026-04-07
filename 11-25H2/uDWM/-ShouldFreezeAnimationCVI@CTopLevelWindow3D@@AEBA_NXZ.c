/*
 * XREFs of ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x180064AF4
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x1800644FC (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18006459C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::ShouldFreezeAnimationCVI(CTopLevelWindow3D *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 84);
  return v1 == 6 || v1 == 3;
}
