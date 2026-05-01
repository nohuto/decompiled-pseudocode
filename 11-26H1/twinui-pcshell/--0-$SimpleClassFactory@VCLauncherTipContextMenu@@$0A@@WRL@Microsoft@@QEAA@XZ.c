/*
 * XREFs of ??0?$SimpleClassFactory@VCLauncherTipContextMenu@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1806004FC
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCLauncherTipContextMenu@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCLauncherTipContextMenu@@$0A@@12@@Z @ 0x18021BF90 (--$MakeAndInitialize@V-$SimpleClassFactory@VCLauncherTipContextMenu@@$0A@@WRL@Microsoft@@V123@$$.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180184040 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<CLauncherTipContextMenu,0>::SimpleClassFactory<CLauncherTipContextMenu,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<CLauncherTipContextMenu,0>::`vftable';
  return result;
}
