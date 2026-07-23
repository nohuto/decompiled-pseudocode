/*
 * XREFs of MiDeleteUnmappedSystemCacheViews @ 0x1406FA688
 * Callers:
 *     MiReduceSystemCache @ 0x140533798 (MiReduceSystemCache.c)
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x1402A2790 (MiRebalanceSystemCacheFreedViews.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A2E28 (MiReturnSystemCacheRegionsToKva.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemCacheRegionsToFree @ 0x1404849A4 (MiGetSystemCacheRegionsToFree.c)
 */

void __fastcall MiDeleteUnmappedSystemCacheViews(__int64 a1)
{
  volatile LONG *v2; // rdi
  KIRQL v3; // si
  unsigned __int64 v4; // r8
  int v5; // ecx
  _QWORD *v6; // rdx
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = v8;
  v2 = (volatile LONG *)(a1 + 2752);
  v8[0] = v8;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2752));
  _InterlockedOr(v7, 0);
  MiRebalanceSystemCacheFreedViews(a1, KiTbFlushTimeStamp, 0);
  v5 = 0;
  v6 = (_QWORD *)(a1 + 2576);
  while ( !*v6 )
  {
    v6 += 4;
    if ( (unsigned int)++v5 >= 4 )
    {
      if ( v5 == 4 )
        goto LABEL_6;
      break;
    }
  }
  MiIssueFlushTbEntire((_KPROCESS *)2, (volatile _KAFFINITY_EX *)2, v4);
  MiRebalanceSystemCacheFreedViews(a1, 0, 1);
LABEL_6:
  MiGetSystemCacheRegionsToFree(a1, v8);
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v3);
  if ( v8[0] != v8 )
    MiReturnSystemCacheRegionsToKva(a1, v8);
}
