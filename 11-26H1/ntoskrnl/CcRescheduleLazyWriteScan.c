/*
 * XREFs of CcRescheduleLazyWriteScan @ 0x1403E429C
 * Callers:
 *     CcCoalescingCallBackHelper @ 0x1403E3670 (CcCoalescingCallBackHelper.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcRescheduleLazyWriteScan(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  LARGE_INTEGER v3; // rdx

  if ( *(_BYTE *)(a1 + 1292) )
    return;
  if ( !*(_BYTE *)(a1 + 1049) )
  {
    CcScheduleLazyWriteScan((_BYTE *)a1, 0LL, 0, 0);
    return;
  }
  if ( a2 && (v2 = *a2, *a2 != 0x7FFFFFFFFFFFFFFFLL) && v2 )
  {
    v3.QuadPart = v2 * KeMaximumIncrement;
    if ( v3.QuadPart > 160000000 )
    {
      v3.QuadPart = 160000000LL;
    }
    else
    {
      if ( v3.QuadPart < 10000000 )
        v3 = CcIdleDelay;
      if ( v3.QuadPart <= 0 )
        goto LABEL_16;
    }
    v3.QuadPart = -v3.QuadPart;
  }
  else
  {
    v3 = CcIdleDelay;
  }
LABEL_16:
  if ( !*(_BYTE *)(a1 + 1048) )
    KeBugCheckEx(0x34u, 0x403uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeSetCoalescableTimer((PKTIMER)(a1 + 984), v3, 0, 0x3E8u, 0LL);
}
