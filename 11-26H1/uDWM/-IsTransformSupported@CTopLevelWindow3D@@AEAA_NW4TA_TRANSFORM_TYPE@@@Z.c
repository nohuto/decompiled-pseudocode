/*
 * XREFs of ?IsTransformSupported@CTopLevelWindow3D@@AEAA_NW4TA_TRANSFORM_TYPE@@@Z @ 0x1800745B4
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::IsTransformSupported(__int64 a1, unsigned int a2)
{
  return a2 <= 2;
}
