/*
 * XREFs of EtwTraceUIPISystemError @ 0x14016E1F0
 * Callers:
 *     NtUserSystemParametersInfo @ 0x140175320 (NtUserSystemParametersInfo.c)
 *     NtUserEnableTouchPad @ 0x1401BD300 (NtUserEnableTouchPad.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1400DDF90 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     McTemplateK0nq_EtwWriteTransfer @ 0x14019E058 (McTemplateK0nq_EtwWriteTransfer.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1401A5360 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPISystemError(PEPROCESS *a1, const struct tagPROCESSINFO *a2, char a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  _UNKNOWN **result; // rax
  __int64 v10; // rdx
  bool v11; // di
  bool v12; // si
  int v13; // ebx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  bool v17; // di
  bool v18; // bl
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  _OWORD v22[2]; // [rsp+50h] [rbp-48h] BYREF
  int v23; // [rsp+70h] [rbp-28h]

  v23 = 0;
  memset(v22, 0, sizeof(v22));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v22,
    7,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nq_EtwWriteTransfer(v6, v5, v7, v8, (__int64)v22);
  result = (_UNKNOWN **)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( a1 )
    {
      v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      result = &WPP_RECORDER_INITIALIZED;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *((_DWORD *)a1 + 14);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v15) = v12;
        LOBYTE(v16) = v11;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_Dd(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v16,
                              v15,
                              *(_QWORD *)(UserSessionState + 69144),
                              3,
                              8,
                              16,
                              (__int64)&WPP_51aa2c2178953e50c8a4c421e3b79a93_Traceguids,
                              v13,
                              a3);
      }
    }
  }
  else
  {
    v17 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    result = &WPP_RECORDER_INITIALIZED;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v21,
                            v20,
                            *(_QWORD *)(v19 + 69144),
                            4,
                            8,
                            17,
                            (__int64)&WPP_51aa2c2178953e50c8a4c421e3b79a93_Traceguids,
                            (char)a1);
    }
  }
  return result;
}
