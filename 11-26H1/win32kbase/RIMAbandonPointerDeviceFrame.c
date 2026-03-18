/*
 * XREFs of RIMAbandonPointerDeviceFrame @ 0x140079770
 * Callers:
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1401367F0 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1400734B4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     rimReclaimHoldingFrame @ 0x1400761B0 (rimReclaimHoldingFrame.c)
 *     rimFindHoldingFrame @ 0x140077F1C (rimFindHoldingFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMAbandonPointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // r8
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  char v9; // r8

  v2 = a2;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v4 = 0;
  }
  if ( (_BYTE)a2 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      v4,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      1,
      50,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  result = (__int64)rimFindHoldingFrame((__int64)a1, v2);
  if ( result && *(_DWORD *)(result + 16) )
  {
    rimReclaimHoldingFrame(v7, v6, result, v8);
    result = RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v2, 0, 1);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 1) == 0)
    || (LOBYTE(v6) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v9 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v9 = 0;
  }
  if ( (_BYTE)v6 || v9 )
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v6,
             v9,
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             5,
             1,
             51,
             (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  return result;
}
