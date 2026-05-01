/*
 * XREFs of ??0?$SimpleClassFactory@VPeoplePaneViewManager@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180409C3C
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VPeoplePaneViewManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VPeoplePaneViewManager@@$0A@@12@@Z @ 0x180225384 (--$MakeAndInitialize@V-$SimpleClassFactory@VPeoplePaneViewManager@@$0A@@WRL@Microsoft@@V123@$$V@.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180184040 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<PeoplePaneViewManager,0>::SimpleClassFactory<PeoplePaneViewManager,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<PeoplePaneViewManager,0>::`vftable';
  return result;
}
