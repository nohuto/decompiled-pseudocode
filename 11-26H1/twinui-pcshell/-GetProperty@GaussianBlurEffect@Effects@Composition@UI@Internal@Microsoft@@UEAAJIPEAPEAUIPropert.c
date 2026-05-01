/*
 * XREFs of ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180560120
 * Callers:
 *     <none>
 * Callees:
 *     ??$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@KAJAEBV_lambda_f0b0058c35c91142d2603957657c1ded_@@@Z @ 0x18055BCEC (--$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@-$EffectBase@UIGaussianBlurEf.c)
 *     ??0_lambda_f0b0058c35c91142d2603957657c1ded_@@QEAA@AEBIPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@AEBQEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18055C270 (--0_lambda_f0b0058c35c91142d2603957657c1ded_@@QEAA@AEBIPEAVGaussianBlurEffect@Effects@Compositio.c)
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GetProperty(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        unsigned int a2,
        struct Windows::Foundation::IPropertyValue **a3)
{
  _lambda_f0b0058c35c91142d2603957657c1ded_ *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+10h] BYREF
  struct Windows::Foundation::IPropertyValue **v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = _lambda_f0b0058c35c91142d2603957657c1ded_::_lambda_f0b0058c35c91142d2603957657c1ded_(
         (_lambda_f0b0058c35c91142d2603957657c1ded_ *)&v5,
         &v6,
         (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)((char *)this - 24),
         &v7);
  return Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::UsePropertyFactory<_lambda_f0b0058c35c91142d2603957657c1ded_>((__int64)v3);
}
