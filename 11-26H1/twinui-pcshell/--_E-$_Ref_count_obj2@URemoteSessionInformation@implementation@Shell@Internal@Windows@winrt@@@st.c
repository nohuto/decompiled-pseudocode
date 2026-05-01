/*
 * XREFs of ??_E?$_Ref_count_obj2@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@UEAAPEAXI@Z @ 0x180659EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xB8);
  return a1;
}
