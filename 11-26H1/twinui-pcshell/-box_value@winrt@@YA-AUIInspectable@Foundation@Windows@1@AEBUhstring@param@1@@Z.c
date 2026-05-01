/*
 * XREFs of ?box_value@winrt@@YA?AUIInspectable@Foundation@Windows@1@AEBUhstring@param@1@@Z @ 0x18059B3D4
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180599038 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@QEAA@AEBUhstring@3@@Z @ 0x180598274 (--0-$IReference@Uhstring@winrt@@@Foundation@Windows@winrt@@QEAA@AEBUhstring@3@@Z.c)
 */

struct IInspectable __fastcall winrt::box_value(winrt *this, const struct winrt::param::hstring *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rax
  __int64 (__fastcall **v5)(_QWORD, void *, __int64 *); // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64 (__fastcall **)(_QWORD, void *, __int64 *))this;
  v3 = winrt::Windows::Foundation::IReference<winrt::hstring>::IReference<winrt::hstring>(&v5, (__int64 *)a2);
  *(_QWORD *)this = *v3;
  *v3 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  return (struct IInspectable)this;
}
