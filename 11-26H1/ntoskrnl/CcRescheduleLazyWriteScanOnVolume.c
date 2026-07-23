/*
 * XREFs of CcRescheduleLazyWriteScanOnVolume @ 0x140218F44
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcCoalescingCallBackHelper @ 0x1403E3670 (CcCoalescingCallBackHelper.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcRescheduleLazyWriteScanOnVolume(_BYTE *a1, __int64 *a2)
{
  struct _KTIMER *v3; // rcx
  __int64 v4; // rax
  LARGE_INTEGER v5; // rdx

  v3 = (struct _KTIMER *)(a1 + 920);
  if ( a1[1172] )
    return;
  if ( v3[1].Header.Signalling )
  {
    if ( a2 && (v4 = *a2, *a2 != 0x7FFFFFFFFFFFFFFFLL) && v4 )
    {
      v5.QuadPart = v4 * KeMaximumIncrement;
      if ( v5.QuadPart > 160000000 )
      {
        v5.QuadPart = 160000000LL;
      }
      else
      {
        if ( v5.QuadPart < 10000000 )
          v5 = CcIdleDelay;
        if ( v5.QuadPart <= 0 )
          goto LABEL_7;
      }
      v5.QuadPart = -v5.QuadPart;
    }
    else
    {
      v5 = CcIdleDelay;
    }
LABEL_7:
    if ( !v3[1].Header.Type )
      KeBugCheckEx(0x34u, 0x86AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    KeSetCoalescableTimer(v3, v5, 0, 0x3E8u, 0LL);
    return;
  }
  if ( !a1[985] )
  {
    if ( !a1[984] )
      KeBugCheckEx(0x34u, 0x7C9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    KiSetTimerEx((_DWORD)v3, CcFirstDelay, 0, 0, 0LL);
  }
  if ( !a1[1172] )
    a1[985] = 1;
}
