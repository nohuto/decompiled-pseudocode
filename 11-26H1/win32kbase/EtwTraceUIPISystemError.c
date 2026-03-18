/*
 * XREFs of EtwTraceUIPISystemError @ 0x1401DBAF0
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     NtUserEnableTouchPad @ 0x1401E3C50 (NtUserEnableTouchPad.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1401284B0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     McTemplateK0nq_EtwWriteTransfer @ 0x1401BDDE4 (McTemplateK0nq_EtwWriteTransfer.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401CAC9C (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPISystemError(PEPROCESS *a1, const struct tagPROCESSINFO *a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _UNKNOWN **result; // rax
  int v10; // edx
  int v11; // r8d
  bool v12; // di
  bool v13; // si
  int v14; // ebx
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // di
  bool v19; // bl
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // [rsp+28h] [rbp-70h]
  _OWORD v24[2]; // [rsp+50h] [rbp-48h] BYREF
  int v25; // [rsp+70h] [rbp-28h]

  v25 = 0;
  memset(v24, 0, sizeof(v24));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v24,
    7,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
  {
    LODWORD(v23) = a3;
    McTemplateK0nq_EtwWriteTransfer(v6, v5, v7, v8, (__int64)v24, v23);
  }
  result = (_UNKNOWN **)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( a1 )
    {
      v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      result = &WPP_RECORDER_INITIALIZED;
      v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = *((_DWORD *)a1 + 14);
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
        LOBYTE(v16) = v13;
        LOBYTE(v17) = v12;
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_Dd(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v17,
                              v16,
                              *(_QWORD *)(UserSessionState + 69136),
                              3,
                              8,
                              16,
                              (__int64)&WPP_42431c7f46c33183710de72b361f4c31_Traceguids,
                              v14,
                              a3);
      }
    }
  }
  else
  {
    v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    result = &WPP_RECORDER_INITIALIZED;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v22,
                            v21,
                            *(_QWORD *)(v20 + 69136),
                            4,
                            8,
                            17,
                            (__int64)&WPP_42431c7f46c33183710de72b361f4c31_Traceguids,
                            (char)a1);
    }
  }
  return result;
}
