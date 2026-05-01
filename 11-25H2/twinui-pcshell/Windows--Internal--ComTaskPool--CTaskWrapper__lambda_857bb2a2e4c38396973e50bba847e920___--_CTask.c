/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::_CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___ @ 0x1801EEB6C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::_scalar_deleting_destructor_ @ 0x1801EEB30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___--_scala.c)
 * Callees:
 *     ??1?$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006A0DC (--1-$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___::_CTaskWrapper__lambda_857bb2a2e4c38396973e50bba847e920___(
        __int64 a1)
{
  __int64 result; // rax

  result = wil::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>::~com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>((_QWORD *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
