/*
 * XREFs of ??0?$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1803E6BF0
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@12@@Z @ 0x1803E6A9C (--$MakeAndInitialize@V-$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@V123@$$V.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180178ACC (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<PWSLayoutPolicyManager,0>::SimpleClassFactory<PWSLayoutPolicyManager,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<PWSLayoutPolicyManager,0>::`vftable';
  return result;
}
