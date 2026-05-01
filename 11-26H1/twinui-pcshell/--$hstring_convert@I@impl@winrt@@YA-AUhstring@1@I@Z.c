/*
 * XREFs of ??$hstring_convert@I@impl@winrt@@YA?AUhstring@1@I@Z @ 0x180289BDC
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@I@Z @ 0x18066414C (-TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$copy@PEADPEAG@std@@YAPEAGPEAD0PEAG@Z @ 0x18023AD84 (--$copy@PEADPEAG@std@@YAPEAGPEAD0PEAG@Z.c)
 *     ??$_Integer_to_chars@I@std@@YA?AUto_chars_result@0@PEADQEADIH@Z @ 0x180289C80 (--$_Integer_to_chars@I@std@@YA-AUto_chars_result@0@PEADQEADIH@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::hstring_convert<unsigned int>(
        struct winrt::impl::shared_hstring_header **a1,
        unsigned int a2)
{
  _QWORD v4[2]; // [rsp+38h] [rbp-A0h] BYREF
  char *v5; // [rsp+48h] [rbp-90h] BYREF
  char v6[32]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v7[8]; // [rsp+78h] [rbp-60h] BYREF
  _WORD v8[32]; // [rsp+80h] [rbp-58h] BYREF

  std::_Integer_to_chars<unsigned int>(&v5, v6, v7, a2);
  v4[0] = v8;
  v4[1] = std::copy<char *,unsigned short *>(v6, v5, v8) - v8;
  winrt::hstring::hstring(a1, (__int64)v4);
  return a1;
}
