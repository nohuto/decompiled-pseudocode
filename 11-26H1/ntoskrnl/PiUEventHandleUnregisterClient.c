/*
 * XREFs of PiUEventHandleUnregisterClient @ 0x1409A70C8
 * Callers:
 *     PiUEventHandleIoctl @ 0x1409A7840 (PiUEventHandleIoctl.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 */

__int64 __fastcall PiUEventHandleUnregisterClient(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  struct _FAST_MUTEX *v3; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  if ( v1 )
  {
    ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(v1 + 16));
    v3 = *(struct _FAST_MUTEX **)(v1 + 16);
    *(_BYTE *)(v1 + 140) = 0;
    KeReleaseGuardedMutex(v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
