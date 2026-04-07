/*
 * XREFs of ?ShouldHandleTransition@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800789A0
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18008C5D8 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::ShouldHandleTransition(CTopLevelWindow3D *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 71);
  return v1 != 2 && (((v1 - 4) & 0xFFFFFFF6) != 0 || v1 == 5) && v1 != 18;
}
