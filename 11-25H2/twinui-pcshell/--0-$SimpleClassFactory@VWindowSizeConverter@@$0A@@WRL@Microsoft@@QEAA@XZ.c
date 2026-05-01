/*
 * XREFs of ??0?$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1801774C0
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VWindowSizeConverter@@$0A@@12@@Z @ 0x1802C424C (--$MakeAndInitialize@V-$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@V123@$$V@De.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180178ACC (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<WindowSizeConverter,0>::SimpleClassFactory<WindowSizeConverter,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<WindowSizeConverter,0>::`vftable';
  return result;
}
