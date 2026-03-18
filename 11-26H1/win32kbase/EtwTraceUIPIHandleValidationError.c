/*
 * XREFs of EtwTraceUIPIHandleValidationError @ 0x14014C6B4
 * Callers:
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1401226B8 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DDqq @ 0x14014C840 (WPP_RECORDER_AND_TRACE_SF_DDqq.c)
 *     McTemplateK0nxqq_EtwWriteTransfer @ 0x14014C980 (McTemplateK0nxqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIHandleValidationError(__int64 a1, __int64 a2, char a3, char a4)
{
  bool v8; // bl
  _UNKNOWN **result; // rax
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+28h] [rbp-90h]
  int v16; // [rsp+30h] [rbp-88h]
  int v17; // [rsp+60h] [rbp-58h] BYREF
  __int128 v18; // [rsp+64h] [rbp-54h]
  __int128 v19; // [rsp+74h] [rbp-44h]

  v17 = 4;
  v18 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    LODWORD(v18) = (unsigned int)PsGetProcessId(*(PEPROCESS *)a1);
    *((_QWORD *)&v18 + 1) = *(_QWORD *)(a1 + 864);
  }
  if ( a2 )
  {
    LODWORD(v19) = (unsigned int)PsGetProcessId(*(PEPROCESS *)a2);
    *((_QWORD *)&v19 + 1) = *(_QWORD *)(a2 + 864);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nxqq_EtwWriteTransfer(a1, a2, a3, a4, (__int64)&v17, a3, a4);
  v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v8;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_DDqq(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v13,
                          v12,
                          *(_QWORD *)(UserSessionState + 69136),
                          v14,
                          v15,
                          v16);
  }
  return result;
}
