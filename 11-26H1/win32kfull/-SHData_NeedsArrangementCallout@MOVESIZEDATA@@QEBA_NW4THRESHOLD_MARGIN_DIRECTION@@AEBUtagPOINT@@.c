/*
 * XREFs of ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x14019EA2C
 * Callers:
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x14019DD24 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddsdddddd @ 0x14019CDBC (WPP_RECORDER_AND_TRACE_SF_ddsdddddd.c)
 */

char __fastcall MOVESIZEDATA::SHData_NeedsArrangementCallout(__int64 a1, _BOOL8 a2, unsigned __int64 *a3)
{
  int v3; // r10d
  __int64 v4; // r9
  int v5; // r11d
  bool v7; // bl
  bool v8; // di
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // r12
  char v13; // r13
  __int64 UserSessionState; // rax
  int v15; // [rsp+20h] [rbp-98h]
  int v16; // [rsp+28h] [rbp-90h]
  int v17; // [rsp+30h] [rbp-88h]
  int v18; // [rsp+38h] [rbp-80h]

  v3 = a2;
  v4 = a1;
  if ( *(_BYTE *)(a1 + 372) && (a2 = PtInRect((_DWORD *)(a1 + 356), *a3), v5 != a2) )
  {
    v12 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      WPP_RECORDER_AND_TRACE_SF_ddsdddddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v13,
        *(_QWORD *)(UserSessionState + 69152),
        v15,
        v16,
        v17,
        v18);
    }
  }
  else
  {
    if ( v3 != 4 || !*(_BYTE *)(v4 + 393) )
      return 0;
    v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(v9 + 69152),
        4,
        1,
        14,
        (__int64)&WPP_43ca9dd73b1a3e4bb7b0460db2e379ed_Traceguids);
    }
  }
  return 1;
}
