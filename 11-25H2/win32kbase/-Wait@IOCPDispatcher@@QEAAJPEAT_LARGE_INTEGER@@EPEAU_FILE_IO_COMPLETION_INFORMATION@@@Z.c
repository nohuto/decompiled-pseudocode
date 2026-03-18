/*
 * XREFs of ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1400D8350
 * Callers:
 *     UserKSTWait @ 0x1400BD37C (UserKSTWait.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall IOCPDispatcher::Wait(
        IOCPDispatcher *this,
        union _LARGE_INTEGER *a2,
        char a3,
        struct _FILE_IO_COMPLETION_INFORMATION *a4)
{
  __int64 v8; // rdx
  bool v10; // bl
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  _DWORD v15[6]; // [rsp+40h] [rbp-18h] BYREF

  v15[0] = 0;
  *(_OWORD *)&a4->KeyContext = 0LL;
  *(_OWORD *)&a4->IoStatusBlock.Status = 0LL;
  if ( !PsIsThreadTerminating(KeGetCurrentThread()) )
    return ZwRemoveIoCompletionEx(*((_QWORD *)this + 363), a4, 1LL, v15, a2, a3);
  v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69144),
      2,
      2,
      25,
      (__int64)&WPP_16b0d3e1bc85332a6529a599abe513a5_Traceguids);
  }
  return 3221225547LL;
}
