/*
 * XREFs of EtwTraceUIPIClipboardError @ 0x1401B8AC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0nqqq_EtwWriteTransfer @ 0x140061778 (McTemplateK0nqqq_EtwWriteTransfer.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1400DDF90 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E6C70 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIClipboardError(PEPROCESS *a1, const struct tagPROCESSINFO *a2, char a3, _DWORD *a4)
{
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // bl
  _UNKNOWN **result; // rax
  bool v13; // di
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  _OWORD v17[2]; // [rsp+60h] [rbp-48h] BYREF
  int v18; // [rsp+80h] [rbp-28h]

  v6 = (char)a2;
  memset(v17, 0, sizeof(v17));
  v18 = 0;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v17,
    6,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq_EtwWriteTransfer(v8, &UIPIClipboardEvent, v9, v10, (__int64)v17, a3, *a4, a4[1]);
  v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v11;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qDD(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v16,
                          v15,
                          *(_QWORD *)(UserSessionState + 69144),
                          4,
                          14,
                          15,
                          (__int64)&WPP_51aa2c2178953e50c8a4c421e3b79a93_Traceguids,
                          v6,
                          a3,
                          *a4);
  }
  return result;
}
