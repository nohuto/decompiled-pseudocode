/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1804BB680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1804BB604 (--1-$CTaskWrapper@V_lambda_04782cd470235717f7963c3576bcb0e4_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_04782cd470235717f7963c3576bcb0e4_>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_04782cd470235717f7963c3576bcb0e4_>::~CTaskWrapper<_lambda_04782cd470235717f7963c3576bcb0e4_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
