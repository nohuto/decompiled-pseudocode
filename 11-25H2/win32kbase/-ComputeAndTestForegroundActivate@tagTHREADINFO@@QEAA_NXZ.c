/*
 * XREFs of ?ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ @ 0x140161BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F1F80 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

bool __fastcall tagTHREADINFO::ComputeAndTestForegroundActivate(tagTHREADINFO *this)
{
  char v1; // bp
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  bool v8; // bl
  bool v9; // di
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // r14
  int v14; // edi
  char TID; // bl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx

  v1 = 1;
  if ( (*((_DWORD *)this + 429) & 1) != 0
    && (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *((_DWORD *)this + 428) > 0x1388 )
  {
    v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0xFFFFF78000000004uLL);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        13,
        12,
        (__int64)&WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids);
    }
    *((_DWORD *)this + 429) &= ~1u;
  }
  if ( (*((_DWORD *)this + 429) & 0x20) != 0
    && (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *((_DWORD *)this + 430) > 0x1F4 )
  {
    v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, 0xFFFFF78000000004uLL);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 69144),
        4,
        13,
        13,
        (__int64)&WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids);
    }
    *((_DWORD *)this + 429) &= ~0x20u;
    *((_DWORD *)this + 430) = 0;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v1 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *((_DWORD *)this + 429);
    TID = (unsigned __int8)tagTHREADINFO::GetTID((PETHREAD *)this);
    v18 = W32GetUserSessionState(v17, v16);
    LOBYTE(v19) = v13;
    LOBYTE(v20) = v1;
    WPP_RECORDER_AND_TRACE_SF_dD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      *(_QWORD *)(v18 + 69144),
      4,
      13,
      14,
      (__int64)&WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids,
      TID,
      v14);
  }
  return *((_DWORD *)this + 429) != 0;
}
