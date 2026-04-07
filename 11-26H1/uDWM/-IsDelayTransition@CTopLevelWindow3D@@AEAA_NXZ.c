/*
 * XREFs of ?IsDelayTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x18006F888
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::IsDelayTransition(CTopLevelWindow3D *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 70);
  return v1 >= 7 && v1 <= 9;
}
