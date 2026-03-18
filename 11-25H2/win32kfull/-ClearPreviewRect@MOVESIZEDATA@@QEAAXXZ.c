/*
 * XREFs of ?ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ @ 0x14021A81C
 * Callers:
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x140253DE8 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 */

void __fastcall MOVESIZEDATA::ClearPreviewRect(MOVESIZEDATA *this)
{
  __int64 v2; // rdx
  bool v3; // di
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  unsigned int v8; // eax
  __int64 v9; // rax

  if ( (*((_DWORD *)this + 50) & 0x80000) != 0 )
  {
    v2 = *(_QWORD *)&WPP_GLOBAL_Control;
    v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(this, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        1,
        29,
        (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids);
    }
    v8 = *((_DWORD *)this + 50) & 0xFFF7FFFF;
    *((_DWORD *)this + 50) = v8;
    if ( (v8 & 0x20) != 0 )
    {
      v9 = W32GetUserSessionState(this, v2);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v9 + 56968) + 48LL), 0LL, 0LL, 0);
    }
  }
}
