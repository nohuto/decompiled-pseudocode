/*
 * XREFs of ?box_value@winrt@@YA?AUIInspectable@Foundation@Windows@1@AEBUhstring@param@1@@Z @ 0x180577B78
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1805758D4 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@QEAA@AEBUhstring@3@@Z @ 0x180574B60 (--0-$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@QEAA@AEBUhstring@3@@Z.c)
 */

struct IInspectable __fastcall winrt::box_value(winrt *this, const struct winrt::param::hstring *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  winrt *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  v3 = winrt::Windows::Foundation::IReference<winrt::hstring>::IReference<winrt::hstring>((__int64 *)&v6, (__int64 *)a2);
  v4 = *v3;
  *v3 = 0LL;
  *(_QWORD *)this = v4;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return (struct IInspectable)this;
}
