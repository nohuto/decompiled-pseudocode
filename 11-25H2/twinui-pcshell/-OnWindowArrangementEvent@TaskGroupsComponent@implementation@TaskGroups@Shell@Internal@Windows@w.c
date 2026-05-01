/*
 * XREFs of ?OnWindowArrangementEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@4567@AEBUWindowArrangementEventArgs@94567@@Z @ 0x18022C250
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUWindowSnapEventArgs@45671@@Z @ 0x1800E16C8 (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEve.c)
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::OnWindowArrangementEvent(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct winrt::Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs *a3)
{
  int v3; // eax
  char *v5; // rcx
  int v6; // ecx
  int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+24h] [rbp-14h]
  int v9; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD *)a3;
  v9 = 0;
  v7 = v3;
  if ( *((_DWORD *)a3 + 2) == 1 )
  {
    v8 = 0;
    if ( *((_DWORD *)a3 + 4) == -1 )
      return;
    v9 = 1;
    v5 = (char *)this + 472;
  }
  else
  {
    v6 = *((_DWORD *)a3 + 3);
    v8 = 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        v9 = 3;
    }
    else
    {
      v9 = 2;
    }
    v5 = (char *)this + 472;
  }
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>>::operator()<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>(
    (__int64)v5,
    (__int64)this,
    (__int64)&v7);
}
