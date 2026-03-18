/*
 * XREFs of RIMIDEValidateKeybdInputStruct @ 0x14019D7D4
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x140180A6C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1400F12A4 (WPP_RECORDER_AND_TRACE_SF_i.c)
 */

__int64 __fastcall RIMIDEValidateKeybdInputStruct(__int16 *a1)
{
  int v1; // ebx
  char v2; // di
  bool v3; // bp
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int16 v7; // bp
  char v8; // bl
  bool v9; // di
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // bp
  bool v14; // r14
  int v15; // ebx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  char v20; // si
  bool v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx

  v1 = *((_DWORD *)a1 + 1);
  if ( (v1 & 4) != 0 && (*a1 || (v1 & 0xFFFF7FC9) != 0) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v2 = 0;
    }
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a1);
      LOBYTE(v5) = v3;
      LOBYTE(v6) = v2;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v6,
        v5,
        *(_QWORD *)(UserSessionState + 19336),
        2,
        1,
        29,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
        v1);
    }
    return 0LL;
  }
  if ( (v1 & 8) == 0 )
  {
    v7 = *a1;
    if ( (unsigned __int16)*a1 > 0xFEu )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v8 = 0;
      }
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = W32GetUserSessionState(WPP_GLOBAL_Control, a1);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v11,
          *(_QWORD *)(v10 + 19336),
          2,
          1,
          30,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
          v7);
      }
      return 0LL;
    }
  }
  if ( *((_DWORD *)a1 + 2)
    && *((_DWORD *)a1 + 2) > (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = *((_DWORD *)a1 + 2);
      v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, a1);
      LOBYTE(v18) = v14;
      LOBYTE(v19) = v13;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 19336),
        2,
        1,
        31,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
        v15,
        v16);
    }
    return 0LL;
  }
  if ( *((_QWORD *)a1 + 2) && (*((_DWORD *)a1 + 1) & 0x8000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v20 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v20 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control, a1);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 3), v24, v23, *(_QWORD *)(v22 + 19336), 2);
    }
    return 0LL;
  }
  return 1LL;
}
