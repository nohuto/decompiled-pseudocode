/*
 * XREFs of VerifierIoReleaseRemoveLockAndWaitEx @ 0x140B827D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViRemLockFindSurrogate @ 0x140B829C4 (ViRemLockFindSurrogate.c)
 */

__int64 __fastcall VerifierIoReleaseRemoveLockAndWaitEx(__int64 a1, __int64 a2, int a3)
{
  __int64 Surrogate; // rax
  __int64 v5; // rcx

  if ( ViRemLockInitialized && a3 != 120 && (Surrogate = ViRemLockFindSurrogate()) != 0 )
    v5 = Surrogate + 16;
  else
    v5 = a1;
  return guard_dispatch_icall_no_overrides(v5);
}
