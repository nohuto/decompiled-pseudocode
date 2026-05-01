/*
 * XREFs of ??0?$SimpleClassFactory@VCSwitchController@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1802BEAC8
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCSwitchController@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCSwitchController@@$0A@@12@@Z @ 0x1801F16D0 (--$MakeAndInitialize@V-$SimpleClassFactory@VCSwitchController@@$0A@@WRL@Microsoft@@V123@$$V@Deta.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180184040 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<CSwitchController,0>::SimpleClassFactory<CSwitchController,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<CSwitchController,0>::`vftable';
  return result;
}
