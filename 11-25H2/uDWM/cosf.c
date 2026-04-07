/*
 * XREFs of cosf @ 0x18009B6AC
 * Callers:
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800155B8 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x180017ACC (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return _o_cosf(X);
}
