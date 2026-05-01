/*
 * XREFs of _dynamic_initializer_for__c_hostServiceSystemId__ @ 0x1801A5480
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

int dynamic_initializer_for__c_hostServiceSystemId__()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[0] = L"systemId_remote";
  v1[1] = std::_WChar_traits<wchar_t>::length((__int64)L"systemId_remote");
  winrt::hstring::hstring(&c_hostServiceSystemId, v1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_hostServiceSystemId__);
}
