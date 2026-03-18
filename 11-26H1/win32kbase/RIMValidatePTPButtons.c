/*
 * XREFs of RIMValidatePTPButtons @ 0x14019BB58
 * Callers:
 *     RIMGetDeviceButtons @ 0x140204BF4 (RIMGetDeviceButtons.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMValidatePTPButtons(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // r9d
  int v5; // edi
  unsigned int v6; // esi
  _WORD *v7; // rcx
  __int64 v8; // rbx
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = -1073741668;
  if ( !a2 )
    goto LABEL_21;
  v7 = (_WORD *)(a1 + 56);
  v8 = a2;
  do
  {
    a2 = (unsigned __int16)*(v7 - 28);
    if ( (_WORD)a2 == 13 )
    {
      if ( *v7 == 71 )
        v5 = 1;
    }
    else if ( (_WORD)a2 == 9 )
    {
      a2 = (unsigned __int16)*v7;
      switch ( (_WORD)a2 )
      {
        case 1:
          v3 = 1;
          break;
        case 2:
          v2 = 1;
          break;
        case 3:
          v4 = 1;
          break;
      }
    }
    v7 += 36;
    --v8;
  }
  while ( v8 );
  if ( !v5 )
    goto LABEL_21;
  if ( !v3 )
  {
LABEL_18:
    if ( !v2 )
      goto LABEL_21;
    goto LABEL_19;
  }
  if ( !v2 )
  {
    if ( !v4 )
      return 0;
    goto LABEL_18;
  }
LABEL_19:
  if ( v4 )
    return 0;
LABEL_21:
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, v3);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 19368),
      3,
      1,
      11,
      (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids);
  }
  return v6;
}
