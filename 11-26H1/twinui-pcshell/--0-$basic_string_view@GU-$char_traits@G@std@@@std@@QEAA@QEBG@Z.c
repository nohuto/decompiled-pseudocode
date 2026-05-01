/*
 * XREFs of ??0?$basic_string_view@GU?$char_traits@G@std@@@std@@QEAA@QEBG@Z @ 0x180030604
 * Callers:
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180668F70 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 */

__int64 __fastcall std::basic_string_view<unsigned short>::basic_string_view<unsigned short,std::char_traits<unsigned short>>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  *a1 = a2;
  v2 = std::_WChar_traits<wchar_t>::length(a2);
  *(_QWORD *)(v3 + 8) = v2;
  return v3;
}
