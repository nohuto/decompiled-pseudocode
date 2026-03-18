/*
 * XREFs of PoReenableSleepStates @ 0x1407CC780
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PoReenableSleepStates(_QWORD *P)
{
  _QWORD *v2; // rdx
  PVOID *v3; // rax

  ExAcquireFastMutex((PKGUARDED_MUTEX)stru_140F12420.TracingPrivate);
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)stru_140F12420.TracingPrivate);
  ExFreePoolWithTag(P, 0x64536F50u);
}
