/*
 * XREFs of ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x1401DA798
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddsdddddd @ 0x1401DA9C4 (WPP_RECORDER_AND_TRACE_SF_ddsdddddd.c)
 */

char __fastcall MOVESIZEDATA::SHData_NeedsArrangementCallout(__int64 a1, _BOOL8 a2, unsigned __int64 *a3)
{
  int v3; // r10d
  __int64 v4; // r9
  int v5; // r11d
  bool v7; // r12
  bool v8; // r13
  __int64 UserSessionState; // rax
  const char *v10; // rdx
  int v11; // r8d
  bool v12; // bl
  bool v13; // di
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx

  v3 = a2;
  v4 = a1;
  if ( *(_BYTE *)(a1 + 308) && (a2 = PtInRect((_DWORD *)(a1 + 292), *a3), v5 != a2) )
  {
    v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v10 = "entered";
      LOBYTE(v11) = v8;
      LOBYTE(v10) = v7;
      WPP_RECORDER_AND_TRACE_SF_ddsdddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        (_DWORD)v10,
        v11,
        *(_QWORD *)(UserSessionState + 69160));
    }
  }
  else
  {
    if ( v3 != 4 || !*(_BYTE *)(v4 + 329) )
      return 0;
    v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v15,
        *(_QWORD *)(v14 + 69160),
        4,
        1,
        14,
        (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids);
    }
  }
  return 1;
}
