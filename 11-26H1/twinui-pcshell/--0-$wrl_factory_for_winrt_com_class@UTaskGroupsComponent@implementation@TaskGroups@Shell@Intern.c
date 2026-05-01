/*
 * XREFs of ??0?$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@wil@@QEAA@XZ @ 0x180587B0C
 * Callers:
 *     ??$MakeAndInitialize@V?$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@wil@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@wil@@@Z @ 0x1805874F0 (--$MakeAndInitialize@V-$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@Task.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180184040 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::`vftable';
  return result;
}
