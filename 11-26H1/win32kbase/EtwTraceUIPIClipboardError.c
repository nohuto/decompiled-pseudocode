/*
 * XREFs of EtwTraceUIPIClipboardError @ 0x1401DB990
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1401284B0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140132544 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     McTemplateK0nqqq_EtwWriteTransfer @ 0x1401658F0 (McTemplateK0nqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIClipboardError(PEPROCESS *a1, const struct tagPROCESSINFO *a2, int a3, _DWORD *a4)
{
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // bl
  _UNKNOWN **result; // rax
  char v13; // di
  __int64 UserSessionState; // rax
  _OWORD v15[2]; // [rsp+60h] [rbp-48h] BYREF
  int v16; // [rsp+80h] [rbp-28h]

  memset(v15, 0, sizeof(v15));
  v16 = 0;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v15,
    6,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq_EtwWriteTransfer(v8, &UIPIClipboardEvent, v9, v10, (__int64)v15, a3, *a4, a4[1]);
  v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v9);
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qDD(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v11,
                          v13,
                          *(_QWORD *)(UserSessionState + 69136),
                          4u,
                          0xEu,
                          0xFu,
                          (__int64)&WPP_42431c7f46c33183710de72b361f4c31_Traceguids,
                          a2,
                          a3,
                          *a4);
  }
  return result;
}
