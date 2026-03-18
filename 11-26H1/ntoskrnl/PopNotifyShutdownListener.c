/*
 * XREFs of PopNotifyShutdownListener @ 0x140BFDF58
 * Callers:
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140BFDFD4 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopNotifyShutdownListener(__int64 a1, __int64 a2)
{
  struct _KTHREAD *i; // rbx
  __int64 result; // rax

  for ( i = *(struct _KTHREAD **)&PopWeakChargerLock.SavedApcStateFill[40];
        i != (struct _KTHREAD *)&PopWeakChargerLock.SavedApcStateFill[40];
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    result = guard_dispatch_icall_no_overrides(i->QuantumTarget, a2);
  }
  return result;
}
