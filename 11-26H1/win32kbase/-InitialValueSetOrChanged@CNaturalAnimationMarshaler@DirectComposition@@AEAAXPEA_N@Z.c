/*
 * XREFs of ?InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x1402450F8
 * Callers:
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140245170 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CNaturalAnimationMarshaler::InitialValueSetOrChanged(
        DirectComposition::CNaturalAnimationMarshaler *this,
        bool *a2)
{
  int v2; // eax
  int v3; // eax

  *a2 = 0;
  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x1000) == 0 )
  {
    *((_DWORD *)this + 4) = v2 | 0x1000;
    *a2 = 1;
  }
  v3 = *((_DWORD *)this + 4);
  if ( (v3 & 0x2000) == 0 )
  {
    *((_DWORD *)this + 4) = v3 | 0x2000;
    *a2 = 1;
  }
}
