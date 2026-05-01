/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::_CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___ @ 0x18039A5E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c69c80f028b94beb4c3634775a85cf13___::_scalar_deleting_destructor_ @ 0x18039A820 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c69c80f028b94beb4c3634775a85cf13___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___::_scalar_deleting_destructor_ @ 0x18046B840 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::_scalar_deleting_destructor_ @ 0x18046BA40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___--_scala.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___::_CTaskWrapper__lambda_c5b63f338e787c1dc9ce32ee8c9a5927___(
        __int64 a1)
{
  __int64 result; // rax

  result = std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
