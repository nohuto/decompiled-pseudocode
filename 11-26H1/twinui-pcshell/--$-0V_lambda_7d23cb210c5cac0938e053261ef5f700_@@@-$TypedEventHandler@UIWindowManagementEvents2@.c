/*
 * XREFs of ??$?0V_lambda_7d23cb210c5cac0938e053261ef5f700_@@@?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowArrangementEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_7d23cb210c5cac0938e053261ef5f700_@@@Z @ 0x1802BC89C
 * Callers:
 *     ?subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18002B090 (-subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::TypedEventHandler<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>(
        _QWORD *a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  __int64 v5; // xmm1_8
  _DWORD *v7; // [rsp+30h] [rbp+8h]

  v7 = operator new(0x28uLL);
  v4 = *a2;
  v5 = *((_QWORD *)a2 + 2);
  v7[2] = 1;
  *((_OWORD *)v7 + 1) = v4;
  *((_QWORD *)v7 + 4) = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v7 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>,_lambda_7d23cb210c5cac0938e053261ef5f700_>::`vftable';
  *a1 = v7;
  return a1;
}
