/*
 * XREFs of ?LookupInterlockedExchangePointer@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0PEAPEAX@Z @ 0x1402907B0
 * Callers:
 *     GreNotifyHwndDpiDirty @ 0x1400D3F38 (GreNotifyHwndDpiDirty.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2AE0 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2B30 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1400D2580 (-LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z.c)
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
