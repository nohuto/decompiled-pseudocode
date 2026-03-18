/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1400D9528
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14002F720 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1400310C8 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1400D972C (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMGetPointerInputType @ 0x1400D98BC (RIMGetPointerInputType.c)
 */

__int64 __fastcall rimAbShouldButtonContactBeSuppressed(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  unsigned int v8; // ebx
  int IsButtonContactActiveAndNotSuppressed; // eax
  __int64 v10; // rdx
  _QWORD **v11; // r14
  _QWORD *i; // rsi
  int v13; // ebx
  __int64 v14; // rdx
  char v15; // bl
  bool v16; // bp
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rbx
  int v21; // r15d
  char v22; // bp
  bool v23; // r14
  int v24; // ebx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx

  v6 = 0;
  if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
  {
    v8 = *(_DWORD *)(a2 + 1020);
    IsButtonContactActiveAndNotSuppressed = RIMCmIsButtonContactActiveAndNotSuppressed(a2);
    v10 = v8 - 1;
    if ( !IsButtonContactActiveAndNotSuppressed )
      v10 = v8;
    if ( !(_DWORD)v10 )
    {
      if ( a3 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v15 = 0;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
          LOBYTE(v18) = v16;
          LOBYTE(v19) = v15;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v19,
            v18,
            *(_QWORD *)(UserSessionState + 19336),
            4,
            1,
            14,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        return 1;
      }
      else if ( (*(_DWORD *)(a2 + 368) & 8) == 0 || (unsigned int)RIMGetPointerInputType(a2) != 5 )
      {
        v11 = (_QWORD **)(a1 + 448);
        for ( i = *v11; i != v11; i = (_QWORD *)*i )
        {
          v13 = RIMGetPointerInputType(*(i - 1));
          if ( v13 != (unsigned int)RIMGetPointerInputType(a2) )
          {
            v20 = *(i - 1);
            v21 = *(_DWORD *)(v20 + 1020);
            if ( v21 )
            {
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v22 = 0;
              }
              v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v24 = *(_DWORD *)(v20 + 24);
                v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
                LOBYTE(v26) = v23;
                LOBYTE(v27) = v22;
                WPP_RECORDER_AND_TRACE_SF_Dd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v27,
                  v26,
                  *(_QWORD *)(v25 + 19336),
                  4,
                  1,
                  15,
                  (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                  v24,
                  v21);
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
