/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___::_CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___ @ 0x18035AB84
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___::_scalar_deleting_destructor_ @ 0x18035AC50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___--_scala.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___::_CTaskWrapper__lambda_d4d75362ac07d926fcc1fc2d8f09e59f___(
        __int64 a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 24);
  if ( *v2 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
