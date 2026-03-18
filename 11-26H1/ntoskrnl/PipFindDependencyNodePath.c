/*
 * XREFs of PipFindDependencyNodePath @ 0x1404BF6BC
 * Callers:
 *     IoTestDependency @ 0x1404BF660 (IoTestDependency.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipDependencyGraphDepthFirstSearch @ 0x1404BF750 (PipDependencyGraphDepthFirstSearch.c)
 */

void __fastcall PipFindDependencyNodePath(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v5; // ebp
  KIRQL v9; // r10
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  v10[0] = 0;
  KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  PipDependencyGraphDepthFirstSearch(a1, a2, v10, a4);
  KeReleaseSpinLock(&PiDependencyEdgeWriteLock, v9);
  if ( v10[0] )
  {
    LOBYTE(v5) = v10[0] != 1;
    ++v5;
  }
  *a3 = v5;
}
