/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_a02b962ba123cadce7fe124e9cd07393_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1802C9570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CTaskWrapper@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1802C95AC (--1-$CTaskWrapper@V_lambda_2982927e39568cdd3df99df702aa65a9_@@@ComTaskPool@Internal@Windows@@UEA.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_a02b962ba123cadce7fe124e9cd07393_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2982927e39568cdd3df99df702aa65a9_>::~CTaskWrapper<_lambda_2982927e39568cdd3df99df702aa65a9_>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
