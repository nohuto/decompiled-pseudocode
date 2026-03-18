/*
 * XREFs of ForwardTouchMessage @ 0x1400CA82C
 * Callers:
 *     NtUserfnTOUCH @ 0x1400CACA0 (NtUserfnTOUCH.c)
 *     NtUserPostMessage @ 0x1401421C0 (NtUserPostMessage.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1400CA648 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 *     _PostMessageCheckIL @ 0x1400CA9FC (_PostMessageCheckIL.c)
 *     _FreeTouchInputInfo @ 0x1400CABF0 (_FreeTouchInputInfo.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ForwardTouchMessage(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        volatile void *Address,
        int a6,
        __int64 a7,
        int a8,
        _QWORD *a9)
{
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct HTOUCHINPUT__ *ValidTouchInputInfo; // rsi
  unsigned int v18; // edi
  int v19; // ebx
  __int64 UserSessionState; // rax
  int v21; // ebx
  int v22; // ebx

  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL || !Address || (unsigned __int64)(a4 - 1) > 0xFFFFFFFE )
  {
    UserSetLastError(87);
    return 0LL;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(4294967294LL, a2);
  ProbeForRead(Address, 48LL * (unsigned int)a4, CurrentProcessWow64Process != 0 ? 1 : 4);
  ValidTouchInputInfo = CreateValidTouchInputInfo(a1, v14, a4, (struct tagTOUCHINPUT *const)Address);
  if ( !ValidTouchInputInfo )
    return 0LL;
  if ( a6 )
  {
    v18 = PostMessageCheckIL(a2, a3);
    v19 = a8;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v16, v15);
    v19 = a8;
    *a9 = (*(__int64 (__fastcall **)(struct tagWND *, _QWORD, __int64, struct HTOUCHINPUT__ *, __int64))(UserSessionState + 8LL * (((_BYTE)a8 + 6) & 0x1F) + 70920))(
            a2,
            a3,
            a4,
            ValidTouchInputInfo,
            a7);
    v18 = 1;
  }
  if ( !v18 || (v21 = v19 - 683) == 0 || (v22 = v21 - 1) == 0 || v22 == 8 )
    FreeTouchInputInfo(ValidTouchInputInfo, 1LL);
  return v18;
}
