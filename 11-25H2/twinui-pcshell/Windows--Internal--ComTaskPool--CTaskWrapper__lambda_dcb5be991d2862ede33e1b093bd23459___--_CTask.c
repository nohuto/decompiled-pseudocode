/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___::_CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___ @ 0x1805E0E34
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___::_scalar_deleting_destructor_ @ 0x1805E1340 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___--_scala.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___::_CTaskWrapper__lambda_dcb5be991d2862ede33e1b093bd23459___(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
