/*
 * XREFs of ?OnApplicationViewChanged@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180267570
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUWindowStateChangedEventArgs@45671@@Z @ 0x1801460FC (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateCh.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::OnApplicationViewChanged(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  __int64 WindowForView; // rax
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( !a3 )
    goto LABEL_17;
  v6 = a3 - 1;
  if ( !v6 )
    goto LABEL_13;
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_13;
  v8 = v7 - 5;
  if ( !v8 )
    goto LABEL_13;
  v9 = v8 - 3;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 || v10 == 2 && (unsigned int)IsWindowArranged(WindowForView) )
      goto LABEL_13;
  }
  else
  {
LABEL_17:
    if ( (unsigned int)IsWindowArranged(WindowForView) )
LABEL_13:
      winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>(
        a1 + 496,
        a1);
  }
  return 0LL;
}
