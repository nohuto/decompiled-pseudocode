/*
 * XREFs of ??0RetailDemoExperienceManagerFactory@@QEAA@XZ @ 0x180182C94
 * Callers:
 *     ??$MakeAndInitialize@VRetailDemoExperienceManagerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetailDemoExperienceManagerFactory@@@Z @ 0x1801E5F24 (--$MakeAndInitialize@VRetailDemoExperienceManagerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPE.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180184040 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

RetailDemoExperienceManagerFactory *__fastcall RetailDemoExperienceManagerFactory::RetailDemoExperienceManagerFactory(
        RetailDemoExperienceManagerFactory *this)
{
  RetailDemoExperienceManagerFactory *v1; // rcx
  RetailDemoExperienceManagerFactory *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(this);
  result = v1;
  *(_QWORD *)v1 = &RetailDemoExperienceManagerFactory::`vftable';
  return result;
}
