/*
 * XREFs of ??1?$ComPtr@VCShoulderTapExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180384A34
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CShoulderTapExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1806DC322 (_Microsoft--WRL--Details--MakeAndInitialize_CShoulderTapExperienceManager_IInspectable_IServiceP.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802A3F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CShoulderTapExperienceManager>::~ComPtr<CShoulderTapExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(result);
  }
  return result;
}
