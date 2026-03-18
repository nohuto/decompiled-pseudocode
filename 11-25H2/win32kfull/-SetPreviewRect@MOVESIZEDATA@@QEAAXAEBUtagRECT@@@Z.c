/*
 * XREFs of ?SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x140269D24
 * Callers:
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x140253DE8 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x140218258 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 */

void __fastcall MOVESIZEDATA::SetPreviewRect(MOVESIZEDATA *this, const struct tagRECT *a2)
{
  bool v2; // zf
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // eax
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF

  v2 = (*((_DWORD *)this + 50) & 0x80000) == 0;
  *(struct tagRECT *)((char *)this + 72) = *a2;
  if ( v2 )
  {
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        1,
        28,
        (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids);
    }
    v9 = *((_DWORD *)this + 50) | 0x80000;
    *((_DWORD *)this + 50) = v9;
    if ( (v9 & 0x20) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10);
      xxxDrawDragRect(this, 0LL, 0x80000000);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10);
    }
  }
}
