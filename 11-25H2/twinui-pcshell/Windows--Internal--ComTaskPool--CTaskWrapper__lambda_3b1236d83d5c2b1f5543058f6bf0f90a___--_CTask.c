/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___::_CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___ @ 0x18043859C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___::_scalar_deleting_destructor_ @ 0x18043A2B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___--_scala.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___::_CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___(
        __int64 a1)
{
  Windows::Internal::String::~String((HSTRING *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
