/*
 * XREFs of ??_GCAppLayoutItemEnum@@UEAAPEAXI@Z @ 0x18069DE00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CTaskWrapper@V_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1802EE280 (--1-$CTaskWrapper@V_lambda_6e764029c0aa6c6ec77bb6d461e8b456_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

CAppLayoutItemEnum *__fastcall CAppLayoutItemEnum::`scalar deleting destructor'(CAppLayoutItemEnum *this, char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6e764029c0aa6c6ec77bb6d461e8b456_>::~CTaskWrapper<_lambda_6e764029c0aa6c6ec77bb6d461e8b456_>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
