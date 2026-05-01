/*
 * XREFs of ??0CCortanaExperienceManagerClassFactory@@QEAA@XZ @ 0x180371390
 * Callers:
 *     ??$MakeAndInitialize@VCCortanaExperienceManagerClassFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCCortanaExperienceManagerClassFactory@@@Z @ 0x180370564 (--$MakeAndInitialize@VCCortanaExperienceManagerClassFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPE.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180184040 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

CCortanaExperienceManagerClassFactory *__fastcall CCortanaExperienceManagerClassFactory::CCortanaExperienceManagerClassFactory(
        CCortanaExperienceManagerClassFactory *this)
{
  CCortanaExperienceManagerClassFactory *v1; // rcx
  CCortanaExperienceManagerClassFactory *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v1;
  *(_QWORD *)v1 = &CCortanaExperienceManagerClassFactory::`vftable';
  return result;
}
