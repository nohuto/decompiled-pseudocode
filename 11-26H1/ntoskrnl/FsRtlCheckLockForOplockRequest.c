/*
 * XREFs of FsRtlCheckLockForOplockRequest @ 0x1404CECF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall FsRtlCheckLockForOplockRequest(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rsi
  char v3; // di
  unsigned __int64 v5; // rbx
  KIRQL v6; // al

  v2 = *(unsigned __int64 **)(a1 + 24);
  v3 = 0;
  if ( !v2 || !v2[4] && !v2[5] || !*a2 )
    return 1;
  if ( *(_DWORD *)(a1 + 88) )
    return 0;
  v5 = *a2 - 1LL;
  v6 = KeAcquireSpinLockRaiseToDpc(v2 + 3);
  if ( v5 < *v2 )
    v3 = 1;
  KeReleaseSpinLock(v2 + 3, v6);
  return v3;
}
