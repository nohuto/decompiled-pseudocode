/*
 * XREFs of _dynamic_initializer_for__c_bootSystemId__ @ 0x1801A55C0
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801A5654 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

int dynamic_initializer_for__c_bootSystemId__()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[0] = L"SystemId_boot";
  v1[1] = std::_WChar_traits<wchar_t>::length((__int64)L"SystemId_boot");
  winrt::hstring::hstring(&c_bootSystemId, v1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_bootSystemId__);
}
