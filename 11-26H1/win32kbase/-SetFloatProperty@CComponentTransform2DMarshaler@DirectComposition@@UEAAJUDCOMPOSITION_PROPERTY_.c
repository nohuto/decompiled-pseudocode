/*
 * XREFs of ?SetFloatProperty@CComponentTransform2DMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023DA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform2DMarshaler::SetFloatProperty(
        __int64 a1,
        int a2,
        float a3,
        _BYTE *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 4 )
    return 3221225485LL;
  *(_DWORD *)(a1 + 16) &= ~0x800u;
  *(float *)(a1 + 96) = a3;
  *a4 = 1;
  return result;
}
