/*
 * XREFs of RIMUpdatePointerDeviceDeadzoneOrigin @ 0x1402039F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceDeadzoneOrigin(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // r8d
  bool v7; // di
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // edi
  bool v14; // bl
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // bl
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx

  v6 = (int)WPP_GLOBAL_Control;
  v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      39,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 )
  {
    v13 = -1073741811;
    v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, v6);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 19368),
        3,
        1,
        40,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
  }
  else if ( a2 < 5 && (v12 = *(_QWORD *)(a1 + 8LL * a2 + 392)) != 0 )
  {
    v13 = 0;
    if ( *(_DWORD *)(v12 + 16) )
      *(_QWORD *)(v12 + 44) = a3;
    else
      v13 = -1073741823;
  }
  else
  {
    v13 = -1073741811;
  }
  v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, v6);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v19;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 19368),
      4,
      1,
      41,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
      v13);
  }
  return v13;
}
