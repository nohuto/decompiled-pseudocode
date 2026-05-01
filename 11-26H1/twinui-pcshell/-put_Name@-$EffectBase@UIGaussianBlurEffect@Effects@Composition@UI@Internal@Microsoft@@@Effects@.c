/*
 * XREFs of ?put_Name@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUHSTRING__@@@Z @ 0x180563CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180172954 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::put_Name(
        __int64 a1,
        HSTRING a2)
{
  HSTRING v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 56), &v3);
}
