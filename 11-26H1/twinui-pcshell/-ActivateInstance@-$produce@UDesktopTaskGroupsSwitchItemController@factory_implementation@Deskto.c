/*
 * XREFs of ?ActivateInstance@?$produce@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18021E240
 * Callers:
 *     <none>
 * Callees:
 *     ??$make@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18029E834 (--$make@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@W.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  *a2 = 0LL;
  winrt::make<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,>(&v4);
  *a2 = v4;
  return 0LL;
}
