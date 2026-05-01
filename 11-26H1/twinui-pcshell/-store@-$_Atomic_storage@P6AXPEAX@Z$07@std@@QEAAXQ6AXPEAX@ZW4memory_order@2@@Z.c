/*
 * XREFs of ?store@?$_Atomic_storage@P6AXPEAX@Z$07@std@@QEAAXQ6AXPEAX@ZW4memory_order@2@@Z @ 0x1802C7D94
 * Callers:
 *     ??1unique_cancellation_lock@?1??cancel@cancellable_promise@winrt@@QEAAXXZ@QEAA@XZ @ 0x180329250 (--1unique_cancellation_lock@-1--cancel@cancellable_promise@winrt@@QEAAXXZ@QEAA@XZ.c)
 *     ?cancel@cancellable_promise@winrt@@QEAAXXZ @ 0x180330A9C (-cancel@cancellable_promise@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Atomic_storage<void (*)(void *),8>::store(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
