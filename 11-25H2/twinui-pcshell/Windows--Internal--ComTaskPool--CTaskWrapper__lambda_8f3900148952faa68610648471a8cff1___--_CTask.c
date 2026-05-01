/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___::_CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___ @ 0x1800D573C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___::_scalar_deleting_destructor_ @ 0x1800D5700 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___::_scalar_deleting_destructor_ @ 0x1803095F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cd700f2a7d541494bae9b45ccb614160___--_scala.c)
 * Callees:
 *     _lambda_8f3900148952faa68610648471a8cff1_::__lambda_8f3900148952faa68610648471a8cff1_ @ 0x1800D5E50 (_lambda_8f3900148952faa68610648471a8cff1_--__lambda_8f3900148952faa68610648471a8cff1_.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___::_CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8f3900148952faa68610648471a8cff1_::__lambda_8f3900148952faa68610648471a8cff1_(a1 + 16);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
