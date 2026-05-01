/*
 * XREFs of ??$?0V_lambda_ce4eb3fc4208a6b39c2f699375d310a1_@@@?$TypedEventHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UWindowTabDataModelActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_ce4eb3fc4208a6b39c2f699375d310a1_@@@Z @ 0x18028DC54
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18028D838 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelActiveTabChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelActiveTabChangedEventArgs>(
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
  *(_QWORD *)v7 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelActiveTabChangedEventArgs>,_lambda_ce4eb3fc4208a6b39c2f699375d310a1_>::`vftable';
  *a1 = v7;
  return a1;
}
