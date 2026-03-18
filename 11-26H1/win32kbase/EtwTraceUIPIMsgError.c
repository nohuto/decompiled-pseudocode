/*
 * XREFs of EtwTraceUIPIMsgError @ 0x140144260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqDDD @ 0x140144410 (WPP_RECORDER_AND_TRACE_SF_qqDDD.c)
 *     McTemplateK0nqxx_EtwWriteTransfer @ 0x14014457C (McTemplateK0nqxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIMsgError(__int64 a1, __int64 a2, char a3, char a4, __int64 a5)
{
  char v5; // bp
  _UNKNOWN **result; // rax
  bool v11; // si
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // [rsp+20h] [rbp-A8h]
  int v16; // [rsp+28h] [rbp-A0h]
  int v17; // [rsp+30h] [rbp-98h]
  int v18; // [rsp+38h] [rbp-90h]
  int v19; // [rsp+70h] [rbp-58h] BYREF
  __int128 v20; // [rsp+74h] [rbp-54h]
  __int128 v21; // [rsp+84h] [rbp-44h]

  v5 = 1;
  v20 = 0LL;
  v21 = 0LL;
  v19 = 1;
  if ( a1 )
  {
    LODWORD(v20) = (unsigned int)PsGetProcessId(*(PEPROCESS *)a1);
    *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 864);
  }
  if ( a2 )
  {
    LODWORD(v21) = (unsigned int)PsGetProcessId(*(PEPROCESS *)a2);
    *((_QWORD *)&v21 + 1) = *(_QWORD *)(a2 + 864);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqxx_EtwWriteTransfer(a1, a2, a3, a4, (__int64)&v19, a3, a4, a5);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v5;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqDDD(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v14,
                          v13,
                          *(_QWORD *)(UserSessionState + 69136),
                          v15,
                          v16,
                          v17,
                          v18,
                          a2,
                          a1,
                          a3,
                          a4,
                          a5);
  }
  return result;
}
