/*
 * XREFs of ??0?$SimpleClassFactory@VNetworkExperienceManagerFactory@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1801831BC
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VNetworkExperienceManagerFactory@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VNetworkExperienceManagerFactory@@$0A@@12@@Z @ 0x180183130 (--$MakeAndInitialize@V-$SimpleClassFactory@VNetworkExperienceManagerFactory@@$0A@@WRL@Microsoft@.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180184040 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::SimpleClassFactory<NetworkExperienceManagerFactory,0>::SimpleClassFactory<NetworkExperienceManagerFactory,0>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  result = v1;
  *v1 = &Microsoft::WRL::SimpleClassFactory<NetworkExperienceManagerFactory,0>::`vftable';
  return result;
}
