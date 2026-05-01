/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18044D3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CTaskWrapper@V_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1802EE280 (--1-$CTaskWrapper@V_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6e764029c0aa6c6ec77bb6d461e8b456_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6e764029c0aa6c6ec77bb6d461e8b456_>::~CTaskWrapper<_lambda_6e764029c0aa6c6ec77bb6d461e8b456_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
