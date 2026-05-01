/*
 * XREFs of ??0?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1803224A8
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCFullScreenManager@@$0A@@12@@Z @ 0x180322170 (--$MakeAndInitialize@V-$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@V123@$$V@Det.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180184040 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<CFullScreenManager,0>::SimpleClassFactory<CFullScreenManager,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<CFullScreenManager,0>::`vftable';
  return result;
}
