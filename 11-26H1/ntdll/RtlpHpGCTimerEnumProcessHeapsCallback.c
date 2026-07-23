/*
 * XREFs of RtlpHpGCTimerEnumProcessHeapsCallback @ 0x180060000
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x18005FBB4 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180061668 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpHeapCompact @ 0x1800618B0 (RtlpHpHeapCompact.c)
 */

__int64 __fastcall RtlpHpGCTimerEnumProcessHeapsCallback(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v4; // rbx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( !v4 || RtlpAcquireDescriptorPseudoGlobalLockEx(*(_QWORD *)(a1 + 56), 1) )
    {
      v1 = RtlpHpHeapCompact(a1, 0x80000000LL);
      if ( v4 )
        RtlpReleaseDescriptorPseudoGlobalLock(v4, 0LL);
    }
  }
  return v1;
}
