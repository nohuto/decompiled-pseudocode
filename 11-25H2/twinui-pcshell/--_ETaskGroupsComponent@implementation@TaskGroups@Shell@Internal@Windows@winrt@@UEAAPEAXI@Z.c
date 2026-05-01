/*
 * XREFs of ??_ETaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180563C0C
 * Callers:
 *     ??_ETaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@WEI@EAAPEAXI@Z @ 0x180563B80 (--_ETaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@WEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180563A18 (--1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this,
        char a2)
{
  winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::~TaskGroupsComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x270);
  return this;
}
