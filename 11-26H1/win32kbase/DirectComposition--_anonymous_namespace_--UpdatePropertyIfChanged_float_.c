/*
 * XREFs of DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_ @ 0x1401C5AE0
 * Callers:
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140245170 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(
        float a1,
        float *a2,
        _BYTE *a3)
{
  char result; // al

  result = 0;
  if ( *a2 != a1 )
  {
    result = 1;
    *a2 = a1;
    *a3 = 1;
  }
  return result;
}
