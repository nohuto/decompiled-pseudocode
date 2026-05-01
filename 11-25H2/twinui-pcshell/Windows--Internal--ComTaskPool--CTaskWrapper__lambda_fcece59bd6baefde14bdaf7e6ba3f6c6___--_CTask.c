/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___::_CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___ @ 0x1803144B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___::_scalar_deleting_destructor_ @ 0x1803148C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::_scalar_deleting_destructor_ @ 0x180314900 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___--_scala.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___::_CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
