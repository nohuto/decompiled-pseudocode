/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x140034EB0
 * Callers:
 *     InternalSetTimer @ 0x140019C44 (InternalSetTimer.c)
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x140034DBC (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140065FC8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     InitializeMonitorInfo @ 0x1400901C8 (InitializeMonitorInfo.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1401398E8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax

  if ( !a1 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(0LL, a2);
    if ( CurrentThreadNonPaged )
      a1 = *CurrentThreadNonPaged;
    else
      a1 = 0LL;
  }
  return *(_QWORD *)(a1 + 688);
}
