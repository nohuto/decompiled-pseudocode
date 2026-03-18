/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1400779A8
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     RIMGetPointerInputType @ 0x140074390 (RIMGetPointerInputType.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x140077BAC (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall rimAbShouldButtonContactBeSuppressed(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  unsigned int v8; // ebx
  int IsButtonContactActiveAndNotSuppressed; // eax
  int v10; // r8d
  __int64 v11; // rdx
  _QWORD **v12; // r14
  _QWORD *i; // rsi
  int v14; // ebx
  __int64 v15; // rdx
  int v16; // r8d
  char v17; // bl
  bool v18; // bp
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rbx
  int v23; // r15d
  char v24; // bp
  bool v25; // r14
  int v26; // ebx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx

  v6 = 0;
  if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
  {
    v8 = *(_DWORD *)(a2 + 1020);
    IsButtonContactActiveAndNotSuppressed = RIMCmIsButtonContactActiveAndNotSuppressed(a2);
    v11 = v8 - 1;
    if ( !IsButtonContactActiveAndNotSuppressed )
      v11 = v8;
    if ( !(_DWORD)v11 )
    {
      if ( a3 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v17 = 0;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v10);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(UserSessionState + 19368),
            4,
            1,
            14,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        return 1;
      }
      else if ( (*(_DWORD *)(a2 + 368) & 8) == 0 || (unsigned int)RIMGetPointerInputType(a2, v11, v10) != 5 )
      {
        v12 = (_QWORD **)(a1 + 448);
        for ( i = *v12; i != v12; i = (_QWORD *)*i )
        {
          v14 = RIMGetPointerInputType(*(i - 1), v11, v10);
          if ( v14 != (unsigned int)RIMGetPointerInputType(a2, v15, v16) )
          {
            v22 = *(i - 1);
            v23 = *(_DWORD *)(v22 + 1020);
            if ( v23 )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v24 = 0;
              }
              v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v26 = *(_DWORD *)(v22 + 24);
                v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v10);
                LOBYTE(v28) = v25;
                LOBYTE(v29) = v24;
                WPP_RECORDER_AND_TRACE_SF_Dd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v29,
                  v28,
                  *(_QWORD *)(v27 + 19368),
                  4,
                  1,
                  15,
                  (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                  v26,
                  v23);
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return v6;
}
