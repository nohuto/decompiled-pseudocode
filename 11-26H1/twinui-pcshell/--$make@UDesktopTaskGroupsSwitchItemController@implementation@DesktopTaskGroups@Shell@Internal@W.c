/*
 * XREFs of ??$make@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18029E834
 * Callers:
 *     ?ActivateInstance@?$produce@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18021E240 (-ActivateInstance@-$produce@UDesktopTaskGroupsSwitchItemController@factory_implementation@Deskto.c)
 * Callees:
 *     ??0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18029E89C (--0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,>(
        _QWORD *a1)
{
  _OWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x38uLL);
  *v3 = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::DesktopTaskGroupsSwitchItemController((winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *)v3);
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController>::`vftable';
  *a1 = v3 + 1;
  return a1;
}
