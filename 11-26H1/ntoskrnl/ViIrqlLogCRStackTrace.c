/*
 * XREFs of ViIrqlLogCRStackTrace @ 0x140C426F8
 * Callers:
 *     ViIrqlKeEnterCriticalRegion_Exit @ 0x140C42680 (ViIrqlKeEnterCriticalRegion_Exit.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140C426A0 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void ViIrqlLogCRStackTrace()
{
  char *v0; // rbx
  KIRQL v1; // al
  KIRQL v2; // si
  USHORT v3; // ax

  if ( VfKeCriticalRegionTraces )
  {
    v0 = (char *)VfKeCriticalRegionTraces
       + 80
       * (_InterlockedIncrement(&VfKeCriticalRegionTracesIndex) & (unsigned int)(VfKeCriticalRegionTracesLength - 1));
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v0 + 8);
    *((_DWORD *)v0 + 18) = 1;
    *(_QWORD *)v0 = KeGetCurrentThread();
    v2 = v1;
    v3 = RtlCaptureStackBackTrace(2u, 7u, (PVOID *)v0 + 1, 0LL);
    if ( v3 < 7u )
      *(_QWORD *)&v0[8 * v3 + 8] = 0LL;
    *((_DWORD *)v0 + 18) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)v0 + 8, v2);
  }
}
