/*
 * XREFs of ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0
 * Callers:
 *     ?SetRemarshalingFlags@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402387D0 (-SetRemarshalingFlags@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238A50 (-SetRemarshalingFlags@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CBlendEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238B00 (-SetRemarshalingFlags@CBlendEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CBrightnessEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238B50 (-SetRemarshalingFlags@CBrightnessEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238CC0 (-SetRemarshalingFlags@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CFloodEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239360 (-SetRemarshalingFlags@CFloodEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CGaussianBlurEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402393D0 (-SetRemarshalingFlags@CGaussianBlurEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CHueRotationEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239520 (-SetRemarshalingFlags@CHueRotationEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239AD0 (-SetRemarshalingFlags@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSaturationEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A150 (-SetRemarshalingFlags@CSaturationEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CShadowEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A650 (-SetRemarshalingFlags@CShadowEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023ABF0 (-SetRemarshalingFlags@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CTurbulenceEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023AE30 (-SetRemarshalingFlags@CTurbulenceEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A00 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CFilterEffectMarshaler *this)
{
  char v1; // bl
  _DWORD *v2; // rsi

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 18) )
    *v2 |= 0x100u;
  if ( *((_DWORD *)this + 62) )
    *v2 |= 0x200u;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this)
    || (*v2 & 0x300) != 0
    || *((_QWORD *)this + 11)
    || *((_QWORD *)this + 14)
    || *((_QWORD *)this + 17)
    || *((_QWORD *)this + 20)
    || *((_QWORD *)this + 23)
    || *((_QWORD *)this + 26)
    || *((_QWORD *)this + 29) )
  {
    return 1;
  }
  return v1;
}
