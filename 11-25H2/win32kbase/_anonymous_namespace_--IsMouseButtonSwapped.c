/*
 * XREFs of _anonymous_namespace_::IsMouseButtonSwapped @ 0x14010E9C4
 * Callers:
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x14018EEA0 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x14021FBF4 (-ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA-AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_sscc @ 0x140222D40 (WPP_RECORDER_AND_TRACE_SF_sscc.c)
 */

bool __fastcall anonymous_namespace_::IsMouseButtonSwapped(__int64 a1, __int64 a2)
{
  int v2; // r15d
  int v3; // edi
  __int64 v4; // rcx
  int v5; // esi
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  char v13; // cl
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // bl
  bool v17; // bp
  __int64 v18; // rax
  const char *v19; // rdx
  int v20; // r8d

  v2 = (unsigned __int8)a2;
  v3 = a1;
  if ( (unsigned int)(a1 - 1) > 1 )
    return 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872);
  v5 = *(_DWORD *)(v4 + 1988);
  v6 = v5 != 0;
  if ( *(_BYTE *)(W32GetUserSessionState(v4, v7) + 16352) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    v13 = 16;
    if ( v3 != 1 )
      v13 = 4;
    v14 = ((unsigned __int8)v13 & *(_BYTE *)(UserSessionState + 14336)) != 0;
    if ( (v2 ^ 1) == (_DWORD)v14 )
    {
      v15 = W32GetUserSessionState(v14, v12);
      v12 = 16LL;
      v14 = 4LL;
      if ( v3 != 1 )
        v14 = 16LL;
      if ( v2 == (((unsigned __int8)v14 & *(_BYTE *)(v15 + 14336)) != 0) )
      {
        v14 = (__int64)WPP_GLOBAL_Control;
        v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = W32GetUserSessionState(WPP_GLOBAL_Control, 16LL);
          v19 = "Right";
          LOBYTE(v20) = v17;
          LOBYTE(v19) = v16;
          WPP_RECORDER_AND_TRACE_SF_sscc(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            (_DWORD)v19,
            v20,
            *(_QWORD *)(v18 + 69144));
        }
        v6 = v5 == 0;
      }
    }
    *(_BYTE *)(W32GetUserSessionState(v14, v12) + 16352) = 0;
  }
  return v6;
}
