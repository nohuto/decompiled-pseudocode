/*
 * XREFs of ??0?$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1801781D8
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@12@@Z @ 0x18017814C (--$MakeAndInitialize@V-$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@WRL@Microsoft.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180178ACC (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::SimpleClassFactory<DesktopBlueLightReductionManager,0>::SimpleClassFactory<DesktopBlueLightReductionManager,0>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  result = v1;
  *v1 = &Microsoft::WRL::SimpleClassFactory<DesktopBlueLightReductionManager,0>::`vftable';
  return result;
}
