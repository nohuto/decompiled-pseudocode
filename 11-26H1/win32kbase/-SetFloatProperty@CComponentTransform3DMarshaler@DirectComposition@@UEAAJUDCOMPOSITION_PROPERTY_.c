/*
 * XREFs of ?SetFloatProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023DA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetFloatProperty(
        __int64 a1,
        int a2,
        float a3,
        _BYTE *a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 != 5 )
    return 3221225485LL;
  *(_DWORD *)(a1 + 16) &= ~0x1000u;
  *(float *)(a1 + 132) = a3;
  *a4 = 1;
  return result;
}
