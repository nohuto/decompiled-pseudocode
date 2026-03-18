/*
 * XREFs of EtwTraceUIPIHookError @ 0x140127F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x14012811C (WPP_RECORDER_AND_TRACE_SF_qDqq.c)
 *     McTemplateK0ndcdxx_EtwWriteTransfer @ 0x14012825C (McTemplateK0ndcdxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIHookError(
        char a1,
        char a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int ThreadId; // eax
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rbx
  bool v16; // bl
  _UNKNOWN **result; // rax
  bool v18; // si
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // [rsp+20h] [rbp-69h]
  int v23; // [rsp+28h] [rbp-61h]
  int v24; // [rsp+30h] [rbp-59h]
  int v25; // [rsp+38h] [rbp-51h]
  int v26; // [rsp+60h] [rbp-29h] BYREF
  __int128 v27; // [rsp+64h] [rbp-25h]
  __int128 v28; // [rsp+74h] [rbp-15h]

  v26 = 2;
  v27 = 0LL;
  v28 = 0LL;
  if ( a3 )
  {
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a3);
    v13 = *(_QWORD *)(a3 + 456);
    DWORD1(v27) = ThreadId;
    if ( v13 )
    {
      LODWORD(v27) = (unsigned int)PsGetProcessId(*(PEPROCESS *)v13);
      *((_QWORD *)&v27 + 1) = *(_QWORD *)(v13 + 864);
    }
  }
  if ( a4 )
  {
    v14 = (unsigned int)PsGetThreadId(*(PETHREAD *)a4);
    v15 = *(_QWORD *)(a4 + 456);
    DWORD1(v28) = v14;
    if ( v15 )
    {
      LODWORD(v28) = (unsigned int)PsGetProcessId(*(PEPROCESS *)v15);
      *((_QWORD *)&v28 + 1) = *(_QWORD *)(v15 + 864);
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0ndcdxx_EtwWriteTransfer(a1, a2, a3, a4, (__int64)&v26, a5, a2, a6, a7, a8);
  v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v16;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qDqq(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v21,
                          v20,
                          *(_QWORD *)(UserSessionState + 69136),
                          v22,
                          v23,
                          v24,
                          v25,
                          a1,
                          a2,
                          a3,
                          a4);
  }
  return result;
}
