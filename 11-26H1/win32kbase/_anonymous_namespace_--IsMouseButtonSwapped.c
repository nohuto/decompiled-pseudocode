/*
 * XREFs of _anonymous_namespace_::IsMouseButtonSwapped @ 0x140089AA0
 * Callers:
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1400898F4 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1402230BC (-ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA-AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_sscc @ 0x140224EA8 (WPP_RECORDER_AND_TRACE_SF_sscc.c)
 */

bool __fastcall anonymous_namespace_::IsMouseButtonSwapped(int a1, unsigned __int8 a2, int a3)
{
  int v3; // r15d
  __int64 v5; // rcx
  int v6; // ebp
  bool v7; // bl
  char v8; // dl
  int v9; // r8d
  char v10; // dl
  int v11; // ecx
  int v12; // r8d
  char v14; // dl
  unsigned __int8 v15; // cl
  int v16; // r8d
  char v17; // al
  int v18; // ecx
  char v19; // al
  bool v20; // bl
  bool v21; // r14
  __int64 UserSessionState; // rax
  const char *v23; // rdx
  int v24; // r8d

  v3 = a2;
  if ( (unsigned int)(a1 - 1) > 1 )
    return 0;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904);
  v6 = *(_DWORD *)(v5 + 1988);
  v7 = v6 != 0;
  if ( *(_BYTE *)(W32GetUserSessionState(v5, v8, v9) + 16344) )
  {
    v15 = *(_BYTE *)(W32GetUserSessionState(v11, v10, v12) + 14328);
    v17 = 16;
    if ( a1 != 1 )
      v17 = 4;
    v18 = (v15 & (unsigned __int8)v17) != 0;
    if ( (v3 ^ 1) == v18 )
    {
      LOBYTE(v18) = *(_BYTE *)(W32GetUserSessionState(v18, v14, v16) + 14328);
      v19 = 4;
      if ( a1 != 1 )
        v19 = 16;
      if ( v3 == (((unsigned __int8)v18 & (unsigned __int8)v19) != 0) )
      {
        v18 = (int)WPP_GLOBAL_Control;
        v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v16);
          v23 = "Right";
          LOBYTE(v24) = v21;
          LOBYTE(v23) = v20;
          WPP_RECORDER_AND_TRACE_SF_sscc(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            (_DWORD)v23,
            v24,
            *(_QWORD *)(UserSessionState + 69136));
        }
        v7 = v6 == 0;
      }
    }
    *(_BYTE *)(W32GetUserSessionState(v18, v14, v16) + 16344) = 0;
  }
  return v7;
}
