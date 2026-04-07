/*
 * XREFs of ?GetMirrorTransform@CVisual@@MEAAXPEAUD2DMatrix@@@Z @ 0x180071E00
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x1800228C8 (-D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z.c)
 */

void __fastcall CVisual::GetMirrorTransform(CVisual *this, struct D2DMatrix *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  D2DMatrixIdentity(a2);
  *(_DWORD *)v2 = -1082130432;
  *(float *)(v2 + 48) = (float)*(int *)(v3 + 64) / *(float *)(v3 + 104);
}
