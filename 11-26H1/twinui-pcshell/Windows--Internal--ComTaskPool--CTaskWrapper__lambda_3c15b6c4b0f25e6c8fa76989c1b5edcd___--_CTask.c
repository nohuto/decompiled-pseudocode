/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::_CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___ @ 0x1801DC4EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a34c8618806693e8e74fc06704696ec1___::_scalar_deleting_destructor_ @ 0x1801DC4B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a34c8618806693e8e74fc06704696ec1___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::_scalar_deleting_destructor_ @ 0x1801F4FC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___--_scala.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::_CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___(
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
