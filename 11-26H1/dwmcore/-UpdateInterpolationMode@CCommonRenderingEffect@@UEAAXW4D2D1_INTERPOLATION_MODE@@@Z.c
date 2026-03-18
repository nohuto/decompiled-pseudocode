/*
 * XREFs of ?UpdateInterpolationMode@CCommonRenderingEffect@@UEAAXW4D2D1_INTERPOLATION_MODE@@@Z @ 0x180184CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCommonRenderingEffect::UpdateInterpolationMode(
        CCommonRenderingEffect *this,
        enum D2D1_INTERPOLATION_MODE a2)
{
  if ( a2 == D2D1_INTERPOLATION_MODE_LINEAR )
    goto LABEL_2;
  if ( a2 )
  {
    if ( a2 != D2D1_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR )
    {
LABEL_2:
      *((_BYTE *)this + 64) = 1;
      *((_BYTE *)this + 67) = 1;
      return;
    }
    *((_BYTE *)this + 64) = 2;
    *((_BYTE *)this + 67) = 2;
  }
  else
  {
    *((_BYTE *)this + 64) = 0;
    *((_BYTE *)this + 67) = 0;
  }
}
