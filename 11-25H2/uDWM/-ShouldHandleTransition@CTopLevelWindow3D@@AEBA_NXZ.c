/*
 * XREFs of ?ShouldHandleTransition@CTopLevelWindow3D@@AEBA_NXZ @ 0x180064B9C
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x1800644FC (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::ShouldHandleTransition(CTopLevelWindow3D *this)
{
  unsigned int v1; // eax
  int v2; // ecx
  bool result; // al

  v1 = *((_DWORD *)this + 85);
  result = (v1 > 0xD || (v2 = 12308, !_bittest(&v2, v1))) && v1 != 18;
  return result;
}
