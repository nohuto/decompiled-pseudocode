/*
 * XREFs of ??0CortanaStoreAppExperienceManagerFactory@@QEAA@XZ @ 0x1801777E8
 * Callers:
 *     ??$MakeAndInitialize@VCortanaStoreAppExperienceManagerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCortanaStoreAppExperienceManagerFactory@@@Z @ 0x18017775C (--$MakeAndInitialize@VCortanaStoreAppExperienceManagerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180178ACC (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

CortanaStoreAppExperienceManagerFactory *__fastcall CortanaStoreAppExperienceManagerFactory::CortanaStoreAppExperienceManagerFactory(
        CortanaStoreAppExperienceManagerFactory *this)
{
  CortanaStoreAppExperienceManagerFactory *v1; // rcx
  CortanaStoreAppExperienceManagerFactory *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(this);
  result = v1;
  *(_QWORD *)v1 = &CortanaStoreAppExperienceManagerFactory::`vftable';
  return result;
}
