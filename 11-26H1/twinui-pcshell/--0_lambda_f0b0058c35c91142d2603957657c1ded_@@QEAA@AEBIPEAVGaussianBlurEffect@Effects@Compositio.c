/*
 * XREFs of ??0_lambda_f0b0058c35c91142d2603957657c1ded_@@QEAA@AEBIPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@AEBQEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18055C270
 * Callers:
 *     ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180560120 (-GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropert.c)
 * Callees:
 *     <none>
 */

_lambda_f0b0058c35c91142d2603957657c1ded_ *__fastcall _lambda_f0b0058c35c91142d2603957657c1ded_::_lambda_f0b0058c35c91142d2603957657c1ded_(
        _lambda_f0b0058c35c91142d2603957657c1ded_ *this,
        const unsigned int *a2,
        struct Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *a3,
        struct Windows::Foundation::IPropertyValue ***a4)
{
  *(_DWORD *)this = *a2;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = *a4;
  return this;
}
