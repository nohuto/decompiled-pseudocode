/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x140277040
 * Callers:
 *     MiDeletePagablePteRange @ 0x140363600 (MiDeletePagablePteRange.c)
 *     MiLockAwePagesShared @ 0x1404E9C70 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x14050D428 (MiLockAweVadsShared.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  int v5; // ebp
  unsigned __int64 v6; // r10
  ULONG_PTR v7; // rbx
  __int64 v9; // r9
  unsigned int v10; // ecx
  volatile signed __int64 *v11; // r14

  v2 = BugCheckParameter1;
  v4 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v5 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
    v4 = KeAbPreAcquire((struct _KTHREAD *)BugCheckParameter2, 0LL);
  v6 = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (v6 & 1) != 0 )
  {
    v9 = ((unsigned int)v6 >> 13) & 0x3FFFF;
    _BitScanReverse(&v10, v9);
    v11 = (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v10 - 2)
                                                + 8 * (v9 ^ (unsigned int)(1 << v10))
                                                + 8)
                                    + 8 * ((v6 >> 4) & 0x1FF));
    if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v11, v2, v4, BugCheckParameter2);
    v7 = (ULONG_PTR)v11;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, v2, v4, BugCheckParameter2);
    v7 = BugCheckParameter2 | 1;
  }
  if ( !v5 )
    v7 |= 2uLL;
  if ( !v4 )
    return v7;
  if ( (KiAbpGlobalState & 1) == 0 )
  {
    *(_BYTE *)(v4 + 10) = 1;
    return v7;
  }
  *(_BYTE *)(v4 + 33) |= 2u;
  return v7;
}
