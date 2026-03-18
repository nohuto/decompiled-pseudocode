/*
 * XREFs of EtwTraceUIPIInputError @ 0x140060E40
 * Callers:
 *     NtUserGetKeyboardState @ 0x140060B00 (NtUserGetKeyboardState.c)
 *     NtUserSetKeyboardState @ 0x140147150 (NtUserSetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x14016FB90 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x140206CB4 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1402225F8 (_anonymous_namespace_--ValidateUIPI.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     McTemplateK0nqqq_EtwWriteTransfer @ 0x140061778 (McTemplateK0nqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIInputError(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, char a5)
{
  unsigned int ThreadId; // eax
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rbx
  bool v13; // bl
  _UNKNOWN **result; // rax
  bool v15; // di
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  _BYTE v19[40]; // [rsp+50h] [rbp-30h] BYREF

  *(_DWORD *)v19 = 5;
  memset(&v19[4], 0, 32);
  if ( a1 )
  {
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
    v10 = *(_QWORD *)(a1 + 464);
    *(_DWORD *)&v19[8] = ThreadId;
    if ( v10 )
    {
      *(_DWORD *)&v19[4] = (unsigned int)PsGetProcessId(*(PEPROCESS *)v10);
      *(_QWORD *)&v19[12] = *(_QWORD *)(v10 + 864);
    }
  }
  if ( a2 )
  {
    v11 = (unsigned int)PsGetThreadId(*(PETHREAD *)a2);
    v12 = *(_QWORD *)(a2 + 464);
    *(_DWORD *)&v19[24] = v11;
    if ( v12 )
    {
      *(_DWORD *)&v19[20] = (unsigned int)PsGetProcessId(*(PEPROCESS *)v12);
      *(_QWORD *)&v19[28] = *(_QWORD *)(v12 + 864);
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq_EtwWriteTransfer(a1, (unsigned int)"\a", a3, (_DWORD)a4, (__int64)v19, a5, *a4, a4[1]);
  v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v13;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qq(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v18,
                          v17,
                          *(_QWORD *)(UserSessionState + 69144),
                          4,
                          14,
                          14,
                          (__int64)&WPP_51aa2c2178953e50c8a4c421e3b79a93_Traceguids,
                          a1,
                          a3,
                          *(_OWORD *)v19,
                          *(_OWORD *)&v19[16],
                          *(_QWORD *)&v19[32]);
  }
  return result;
}
