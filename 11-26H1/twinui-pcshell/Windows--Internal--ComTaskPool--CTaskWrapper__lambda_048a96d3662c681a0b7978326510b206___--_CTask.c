/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___::_CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___ @ 0x180444B34
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___::_scalar_deleting_destructor_ @ 0x1804468E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___--_scala.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___::_CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___(
        __int64 a1)
{
  Windows::Internal::String::~String((HSTRING *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
