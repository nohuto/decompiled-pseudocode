/*
 * XREFs of ?create_unique_key@reg@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@PEAUHKEY__@@PEBGW4key_access@12@@Z @ 0x18056FD48
 * Callers:
 *     ?EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805AB7D4 (-EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z @ 0x1803B3D24 (-get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
HKEY *__fastcall wil::reg::create_unique_key(HKEY *a1, HKEY a2, const WCHAR *a3, int a4)
{
  HKEY *phkResult; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  REGSAM samDesired; // eax
  int v13; // eax
  bool v14; // sf
  int v16; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  DWORD dwDisposition; // [rsp+88h] [rbp+10h] BYREF

  *a1 = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(a1);
  *phkResult = 0LL;
  dwDisposition = 0;
  samDesired = wil::reg::reg_view_details::get_access_flags(a4, v9, v10, v11);
  v13 = RegCreateKeyExW(a2, a3, 0, 0LL, 0, samDesired, 0LL, phkResult, &dwDisposition);
  v14 = v13 < 0;
  if ( v13 > 0 )
  {
    v13 = (unsigned __int16)v13 | 0x80070000;
    v14 = v13 < 0;
  }
  if ( v14 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v13,
      v16);
  return a1;
}
