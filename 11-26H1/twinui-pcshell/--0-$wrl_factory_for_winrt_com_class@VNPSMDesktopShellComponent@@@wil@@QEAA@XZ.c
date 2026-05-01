/*
 * XREFs of ??0?$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@QEAA@XZ @ 0x180182CDC
 * Callers:
 *     ??$MakeAndInitialize@V?$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@@Z @ 0x1801823C0 (--$MakeAndInitialize@V-$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@V12@$$.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180184040 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::wrl_factory_for_winrt_com_class<NPSMDesktopShellComponent>::wrl_factory_for_winrt_com_class<NPSMDesktopShellComponent>(
        __int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  result = v1;
  *v1 = &wil::wrl_factory_for_winrt_com_class<NPSMDesktopShellComponent>::`vftable';
  return result;
}
