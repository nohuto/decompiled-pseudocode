/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___ @ 0x1803B57F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_scalar_deleting_destructor_ @ 0x1803B5860 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___--_scala.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18020D2B4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 */

BOOL __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___(
        __int64 a1)
{
  BOOL result; // eax

  result = wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
