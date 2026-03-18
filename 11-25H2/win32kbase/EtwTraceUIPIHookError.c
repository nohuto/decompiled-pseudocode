/*
 * XREFs of EtwTraceUIPIHookError @ 0x1400DC930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x1400DCAFC (WPP_RECORDER_AND_TRACE_SF_qDqq.c)
 *     McTemplateK0ndcdxx_EtwWriteTransfer @ 0x1400DCC34 (McTemplateK0ndcdxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIHookError(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // r15
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

  v8 = a2;
  v26 = 2;
  v27 = 0LL;
  v28 = 0LL;
  if ( a3 )
  {
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a3);
    v13 = *(_QWORD *)(a3 + 464);
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
    v15 = *(_QWORD *)(a4 + 464);
    DWORD1(v28) = v14;
    if ( v15 )
    {
      LODWORD(v28) = (unsigned int)PsGetProcessId(*(PEPROCESS *)v15);
      *((_QWORD *)&v28 + 1) = *(_QWORD *)(v15 + 864);
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0ndcdxx_EtwWriteTransfer(a1, a2, a3, a4, (__int64)&v26, a5, v8, a6, a7, a8);
  v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v16;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qDqq(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v21,
                          v20,
                          *(_QWORD *)(UserSessionState + 69144),
                          v22,
                          v23,
                          v24,
                          v25,
                          a1,
                          v8,
                          a3,
                          a4);
  }
  return result;
}
