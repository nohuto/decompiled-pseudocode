/*
 * XREFs of ??0?$SimpleClassFactory@VUwpWindowEventDispatcher@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18017780C
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VUwpWindowEventDispatcher@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VUwpWindowEventDispatcher@@$0A@@12@@Z @ 0x180176BD0 (--$MakeAndInitialize@V-$SimpleClassFactory@VUwpWindowEventDispatcher@@$0A@@WRL@Microsoft@@V123@$.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180178ACC (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::SimpleClassFactory<UwpWindowEventDispatcher,0>::SimpleClassFactory<UwpWindowEventDispatcher,0>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  result = v1;
  *v1 = &Microsoft::WRL::SimpleClassFactory<UwpWindowEventDispatcher,0>::`vftable';
  return result;
}
