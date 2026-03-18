/*
 * XREFs of EtwTraceUIPIInputError @ 0x14006F600
 * Callers:
 *     NtUserGetKeyboardState @ 0x1400E83A0 (NtUserGetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x1400E8790 (NtUserGetAsyncKeyState.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x14010136C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14016C0A8 (_anonymous_namespace_--ValidateUIPI.c)
 *     NtUserSetKeyboardState @ 0x14017C0C0 (NtUserSetKeyboardState.c)
 *     _GetKeyboardState @ 0x1401BD130 (_GetKeyboardState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     McTemplateK0nqqq_EtwWriteTransfer @ 0x1401658F0 (McTemplateK0nqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
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
    v10 = *(_QWORD *)(a1 + 456);
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
    v12 = *(_QWORD *)(a2 + 456);
    *(_DWORD *)&v19[24] = v11;
    if ( v12 )
    {
      *(_DWORD *)&v19[20] = (unsigned int)PsGetProcessId(*(PEPROCESS *)v12);
      *(_QWORD *)&v19[28] = *(_QWORD *)(v12 + 864);
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq_EtwWriteTransfer(a1, (unsigned int)"\a", a3, (_DWORD)a4, (__int64)v19, a5, *a4, a4[1]);
  v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v13;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qq(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v18,
                          v17,
                          *(_QWORD *)(UserSessionState + 69136),
                          4,
                          14,
                          14,
                          (__int64)&WPP_42431c7f46c33183710de72b361f4c31_Traceguids,
                          a1,
                          a3,
                          *(_OWORD *)v19,
                          *(_OWORD *)&v19[16],
                          *(_QWORD *)&v19[32]);
  }
  return result;
}
