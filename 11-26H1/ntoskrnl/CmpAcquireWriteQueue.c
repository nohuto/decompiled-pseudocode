/*
 * XREFs of CmpAcquireWriteQueue @ 0x1404C594C
 * Callers:
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 */

unsigned __int64 __fastcall CmpAcquireWriteQueue(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 result; // rax

  result = KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  *a1 = KeGetCurrentThread();
  if ( result )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(result + 33) |= 2u;
    else
      *(_BYTE *)(result + 10) = 1;
  }
  return result;
}
