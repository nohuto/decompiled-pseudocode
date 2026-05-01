/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___::_CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___ @ 0x18020FB1C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___::_scalar_deleting_destructor_ @ 0x18020FAE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___--_scala.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___::_CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
