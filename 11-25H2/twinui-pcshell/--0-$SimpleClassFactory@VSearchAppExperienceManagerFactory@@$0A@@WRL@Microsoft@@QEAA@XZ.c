/*
 * XREFs of ??0?$SimpleClassFactory@VSearchAppExperienceManagerFactory@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18039A340
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VSearchAppExperienceManagerFactory@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VSearchAppExperienceManagerFactory@@$0A@@12@@Z @ 0x18039A00C (--$MakeAndInitialize@V-$SimpleClassFactory@VSearchAppExperienceManagerFactory@@$0A@@WRL@Microsof.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180178ACC (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<SearchAppExperienceManagerFactory,0>::SimpleClassFactory<SearchAppExperienceManagerFactory,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<SearchAppExperienceManagerFactory,0>::`vftable';
  return result;
}
