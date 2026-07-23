/*
 * XREFs of IopGetMountFlag @ 0x1404A3940
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x140982460 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 */

bool __fastcall IopGetMountFlag(__int64 a1)
{
  bool v2; // di
  KIRQL v3; // dl
  __int64 v4; // rax

  v2 = 0;
  v3 = KeAcquireQueuedSpinLock(9uLL);
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    v2 = (*(_BYTE *)(v4 + 4) & 1) != 0;
  KeReleaseQueuedSpinLock(9uLL, v3);
  return v2;
}
