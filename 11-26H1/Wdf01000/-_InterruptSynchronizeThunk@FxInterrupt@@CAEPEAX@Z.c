/*
 * XREFs of ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x140052EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x140053190 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1400532A0 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

char __fastcall FxInterrupt::_InterruptSynchronizeThunk(_QWORD *SyncContext)
{
  FxInterrupt *v2; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v4; // rcx
  char v5; // di
  unsigned __int64 v7; // rcx

  v2 = (FxInterrupt *)*SyncContext;
  if ( v2->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(v2);
    v7 = *SyncContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(*SyncContext + 10LL) )
      v7 = 0LL;
    v5 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))SyncContext[1])(v7, SyncContext[2]);
    FxInterrupt::ReleaseLock((FxInterrupt *)*SyncContext);
  }
  else
  {
    m_ObjectSize = v2->m_ObjectSize;
    v4 = (unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v4 = 0LL;
    return ((__int64 (__fastcall *)(unsigned __int64, _QWORD))SyncContext[1])(v4, SyncContext[2]);
  }
  return v5;
}
