/*
 * XREFs of ?GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1402345F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140230340 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xF )
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
  else
    *a3 = *((float *)this + (unsigned int)(a2 - 1) + 18);
  return v3;
}
