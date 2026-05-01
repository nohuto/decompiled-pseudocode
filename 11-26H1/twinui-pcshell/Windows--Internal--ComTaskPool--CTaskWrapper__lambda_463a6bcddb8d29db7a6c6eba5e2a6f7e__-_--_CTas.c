/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_::_CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_ @ 0x1805408F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&_::_scalar_deleting_destructor_ @ 0x180540B80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-_--_scal.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____::_CTaskWrapper__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e____(
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
