/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180529E90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CTaskWrapper@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x180529AF4 (--1-$CTaskWrapper@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2e2fc3472f23404d9698fd55902d938b_>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2e2fc3472f23404d9698fd55902d938b_>::~CTaskWrapper<_lambda_2e2fc3472f23404d9698fd55902d938b_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
