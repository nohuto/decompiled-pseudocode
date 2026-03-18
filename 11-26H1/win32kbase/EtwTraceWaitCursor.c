/*
 * XREFs of EtwTraceWaitCursor @ 0x140140680
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1400A9F40 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1401408E8 (-EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z.c)
 */

char __fastcall EtwTraceWaitCursor(struct tagCURSOR *a1, struct tagCURSOR *a2)
{
  _UNKNOWN **v2; // rax
  unsigned int WaitCursorType; // esi
  unsigned int v5; // ebp
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  unsigned __int64 v15; // rbx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int ThreadId; // ebx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // ebx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  unsigned __int64 v30; // r14
  unsigned int v31; // r14d
  char CurrentWin32kSessionId; // di
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // ebx
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  __int64 UserSessionState; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0 )
  {
    LOBYTE(v2) = byte_1402A9DD8 - 1;
    if ( (unsigned __int8)(byte_1402A9DD8 - 1) > 2u && (qword_1402A9DC0 & 0x8000000000040000uLL) != 0 )
    {
      LOBYTE(v2) = 0;
      if ( (qword_1402A9DC8 & 0x8000000000040000uLL) == qword_1402A9DC8 )
      {
        WaitCursorType = EtwpGetWaitCursorType(a2);
        v5 = EtwpGetWaitCursorType(a1);
        if ( WaitCursorType == *(_DWORD *)(W32GetUserSessionState(v7, v6, v8) + 36384) )
        {
          if ( WaitCursorType )
          {
            if ( WaitCursorType != v5 )
            {
              v30 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              v31 = v30 - *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 36388);
              if ( v31 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
              {
                CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v10);
                v36 = *(_DWORD *)(W32GetUserSessionState(v34, v33, v35) + 36396);
                UserSessionState = W32GetUserSessionState(v38, v37, v39);
                McTemplateK0qqqqq_EtwWriteTransfer(
                  v41,
                  &WaitCursorEvent,
                  v42,
                  *(_DWORD *)(UserSessionState + 36392),
                  v36,
                  CurrentWin32kSessionId,
                  WaitCursorType,
                  v31);
              }
            }
          }
        }
        *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 36384) = v5;
        if ( v5 )
        {
          v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 36388) = v15;
        }
        if ( *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 19208)
          && ((v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16, v18) + 19208), (v20 = *(_QWORD *)(v19 + 112)) != 0)
            ? (v21 = *(_QWORD *)(v20 + 16))
            : (v21 = *(_QWORD *)(v19 + 96)),
              v21) )
        {
          ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v21);
          *(_DWORD *)(W32GetUserSessionState(v24, v23, v25) + 36392) = ThreadId;
          v26 = *(_DWORD *)(*(_QWORD *)(v21 + 456) + 56LL);
          v2 = (_UNKNOWN **)W32GetUserSessionState(v28, v27, v29);
          *((_DWORD *)v2 + 9099) = v26;
        }
        else
        {
          *(_DWORD *)(W32GetUserSessionState(v17, v16, v18) + 36392) = 0;
          v2 = (_UNKNOWN **)W32GetUserSessionState(v44, v43, v45);
          *((_DWORD *)v2 + 9099) = 0;
        }
      }
    }
  }
  return (char)v2;
}
