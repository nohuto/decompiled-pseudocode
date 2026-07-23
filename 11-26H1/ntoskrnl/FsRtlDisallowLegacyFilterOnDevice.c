/*
 * XREFs of FsRtlDisallowLegacyFilterOnDevice @ 0x1405BA450
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall FsRtlDisallowLegacyFilterOnDevice(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx
  KIRQL v5; // al

  v1 = *(unsigned int *)(a1 + 72);
  if ( (_DWORD)v1 != 8 )
  {
    if ( (unsigned int)v1 > 0x35 )
      return 3221225485LL;
    v3 = 0x20000100100008LL;
    if ( !_bittest64(&v3, v1) )
      return 3221225485LL;
  }
  v5 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x2000u;
  KeReleaseQueuedSpinLock(0xAuLL, v5);
  return 0LL;
}
