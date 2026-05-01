/*
 * XREFs of _dynamic_initializer_for__c_animationPropertyName__ @ 0x1800128B0
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??0hstring@winrt@@QEAA@PEB_WI@Z @ 0x1801AFED0 (--0hstring@winrt@@QEAA@PEB_WI@Z.c)
 */

int dynamic_initializer_for__c_animationPropertyName__()
{
  unsigned int v0; // eax
  winrt::hstring *v1; // rcx

  v0 = std::_WChar_traits<wchar_t>::length(L"Translation.Y");
  winrt::hstring::hstring(v1, (const wchar_t *)v1, v0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_animationPropertyName__);
}
