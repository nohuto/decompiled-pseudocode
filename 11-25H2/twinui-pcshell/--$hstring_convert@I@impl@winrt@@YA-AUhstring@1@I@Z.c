/*
 * XREFs of ??$hstring_convert@I@impl@winrt@@YA?AUhstring@1@I@Z @ 0x180293898
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800AD728 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@I@Z @ 0x18063E5E0 (-TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800AD050 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 *     ??$_Integer_to_chars@I@std@@YA?AUto_chars_result@0@PEADQEADIH@Z @ 0x180293938 (--$_Integer_to_chars@I@std@@YA-AUto_chars_result@0@PEADQEADIH@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

winrt::hstring *__fastcall winrt::impl::hstring_convert<unsigned int>(winrt::hstring *this, unsigned int a2)
{
  unsigned __int16 *v3; // r8
  winrt::hstring *v4; // rcx
  unsigned __int16 v5; // ax
  winrt::hstring *v7; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v8[32]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v9[8]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int16 v10[32]; // [rsp+70h] [rbp-58h] BYREF

  v7 = this;
  std::_Integer_to_chars<unsigned int>(&v7, v8, v9, a2);
  v3 = v10;
  v4 = (winrt::hstring *)v8;
  if ( v8 != (_BYTE *)v7 )
  {
    do
    {
      v5 = *(char *)v4;
      v4 = (winrt::hstring *)((char *)v4 + 1);
      *v3++ = v5;
    }
    while ( v4 != v7 );
  }
  winrt::hstring::hstring(this, v10, v3 - v10);
  return this;
}
