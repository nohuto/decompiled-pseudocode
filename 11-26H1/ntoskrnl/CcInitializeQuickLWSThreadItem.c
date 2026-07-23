/*
 * XREFs of CcInitializeQuickLWSThreadItem @ 0x1403E7820
 * Callers:
 *     CcInitializePrivateVolumeCacheMap @ 0x1403E6740 (CcInitializePrivateVolumeCacheMap.c)
 * Callees:
 *     ExAllocatePoolWithTagFromNode @ 0x140399FE0 (ExAllocatePoolWithTagFromNode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall CcInitializeQuickLWSThreadItem(_QWORD *a1)
{
  __int64 v1; // rsi
  char v2; // bl
  __int64 PoolWithTagFromNode; // rax
  __int64 *v6; // rdx

  v1 = a1[8];
  v2 = 0;
  if ( !v1 )
    KeBugCheckEx(0x34u, 0xE40uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(
                          (__int64)a1,
                          0x50uLL,
                          0x71576343u,
                          *(_DWORD *)(v1 + 24) | 0x80000000);
  if ( PoolWithTagFromNode )
  {
    *(_DWORD *)(PoolWithTagFromNode + 32) = 6;
    *(_QWORD *)(PoolWithTagFromNode + 56) = a1[4];
    *(_QWORD *)(PoolWithTagFromNode + 64) = a1;
    *(_QWORD *)(PoolWithTagFromNode + 72) = v1;
    *(_DWORD *)(PoolWithTagFromNode + 40) = 0;
    *(_DWORD *)(PoolWithTagFromNode + 36) = -1;
    *(_QWORD *)(PoolWithTagFromNode + 16) = CcQuickLazyWriteScanForVolume;
    *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
    *(_QWORD *)PoolWithTagFromNode = 0LL;
    v6 = (__int64 *)a1[196];
    if ( (_QWORD *)*v6 != a1 + 195 )
      __fastfail(3u);
    *(_QWORD *)PoolWithTagFromNode = a1 + 195;
    v2 = 1;
    *(_QWORD *)(PoolWithTagFromNode + 8) = v6;
    *v6 = PoolWithTagFromNode;
    a1[196] = PoolWithTagFromNode;
  }
  return v2;
}
