/*
 * XREFs of ?ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ @ 0x1401923B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x140137220 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

bool __fastcall tagTHREADINFO::ComputeAndTestForegroundActivate(tagTHREADINFO *this, __int64 a2, int a3)
{
  char v3; // bp
  bool v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // bl
  bool v11; // di
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  bool v15; // r14
  int v16; // edi
  char TID; // bl
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx

  v3 = 1;
  if ( (*((_DWORD *)this + 429) & 1) != 0
    && (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *((_DWORD *)this + 428) > 0x1388 )
  {
    v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 4, a3);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        13,
        12,
        (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids);
    }
    *((_DWORD *)this + 429) &= ~1u;
  }
  if ( (*((_DWORD *)this + 429) & 0x20) != 0
    && (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *((_DWORD *)this + 430) > 0x1F4 )
  {
    v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 4, a3);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 69136),
        4,
        13,
        13,
        (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids);
    }
    *((_DWORD *)this + 429) &= ~0x20u;
    *((_DWORD *)this + 430) = 0;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v3 = 0;
  }
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *((_DWORD *)this + 429);
    TID = (unsigned __int8)tagTHREADINFO::GetTID((PETHREAD *)this);
    v21 = W32GetUserSessionState(v19, v18, v20);
    LOBYTE(v22) = v15;
    LOBYTE(v23) = v3;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 69136),
      4,
      13,
      14,
      (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
      TID,
      v16);
  }
  return *((_DWORD *)this + 429) != 0;
}
