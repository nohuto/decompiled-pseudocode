/*
 * XREFs of ?SetFloatProperty@CAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023C440
 * Callers:
 *     <none>
 * Callees:
 *     _finite @ 0x1401C7A30 (_finite.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetFloatProperty(__int64 a1, int a2, float a3, _BYTE *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  *a4 = 0;
  if ( a2 == 6 && finite(a3) )
    *(float *)(a1 + 136) = a3;
  else
    return (unsigned int)-1073741811;
  return v4;
}
