/*
 * XREFs of ?LookupInterlockedExchangePointer@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0PEAPEAX@Z @ 0x14026AEB0
 * Callers:
 *     GreNotifyHwndDpiDirty @ 0x14010AE1C (GreNotifyHwndDpiDirty.c)
 * Callees:
 *     ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1400B0830 (-LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B2384 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B23D4 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::LookupInterlockedExchangePointer(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        __int64 a3,
        void **a4)
{
  struct NSInstrumentation::CPointerHashTable::ENTRY *v8; // rax
  char v9; // bl

  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(this);
  v8 = NSInstrumentation::CPointerHashTable::LookupCommon(this, a2);
  v9 = 0;
  if ( v8 )
  {
    *a4 = (void *)_InterlockedExchange64((volatile __int64 *)v8 + 1, a3);
    v9 = 1;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v9;
}
