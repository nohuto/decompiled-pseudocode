/*
 * XREFs of ?IsInputTargetThreadInInputSwitchHost@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJKPEAH@Z @ 0x180613DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::IsInputTargetThreadInInputSwitchHost(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        __int64 a2,
        int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 24) + 24LL))(
           *((_QWORD *)this + 24),
           a2,
           a3);
}
