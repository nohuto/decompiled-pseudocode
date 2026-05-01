/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1805506A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x180550414 (--1-$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_42dce70c870a3964e7319458b8bf7bca_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_42dce70c870a3964e7319458b8bf7bca_>::~CTaskWrapper<_lambda_42dce70c870a3964e7319458b8bf7bca_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
