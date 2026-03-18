/*
 * XREFs of EtwTraceWaitCursor @ 0x1400A48D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1400A4B30 (-EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1400A5664 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceWaitCursor(struct tagCURSOR *a1, struct tagCURSOR *a2)
{
  _UNKNOWN **v2; // rax
  unsigned int WaitCursorType; // esi
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int ThreadId; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // r14
  unsigned int v25; // r14d
  char CurrentWin32kSessionId; // di
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 UserSessionState; // rax
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0 )
  {
    LOBYTE(v2) = byte_14029EDB8 - 1;
    if ( (unsigned __int8)(byte_14029EDB8 - 1) > 2u && (qword_14029EDA0 & 0x8000000000040000uLL) != 0 )
    {
      LOBYTE(v2) = 0;
      if ( (qword_14029EDA8 & 0x8000000000040000uLL) == qword_14029EDA8 )
      {
        WaitCursorType = EtwpGetWaitCursorType(a2);
        v5 = EtwpGetWaitCursorType(a1);
        if ( WaitCursorType == *(_DWORD *)(W32GetUserSessionState(v7, v6) + 36352) )
        {
          if ( WaitCursorType )
          {
            if ( WaitCursorType != v5 )
            {
              v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              v25 = v24 - *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36356);
              if ( v25 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
              {
                CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
                v29 = *(_DWORD *)(W32GetUserSessionState(v28, v27) + 36364);
                UserSessionState = W32GetUserSessionState(v31, v30);
                McTemplateK0qqqqq_EtwWriteTransfer(
                  v33,
                  (unsigned int)&WaitCursorEvent,
                  v34,
                  *(_DWORD *)(UserSessionState + 36360),
                  v29,
                  CurrentWin32kSessionId,
                  WaitCursorType,
                  v25);
              }
            }
          }
        }
        *(_DWORD *)(W32GetUserSessionState(v9, v8) + 36352) = v5;
        if ( v5 )
        {
          v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(W32GetUserSessionState(v11, v10) + 36356) = v12;
        }
        if ( *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19176)
          && ((v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19176), (v16 = *(_QWORD *)(v15 + 112)) != 0)
            ? (v17 = *(_QWORD *)(v16 + 16))
            : (v17 = *(_QWORD *)(v15 + 96)),
              v17) )
        {
          ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v17);
          *(_DWORD *)(W32GetUserSessionState(v20, v19) + 36360) = ThreadId;
          v21 = *(_DWORD *)(*(_QWORD *)(v17 + 464) + 56LL);
          v2 = (_UNKNOWN **)W32GetUserSessionState(v23, v22);
          *((_DWORD *)v2 + 9091) = v21;
        }
        else
        {
          *(_DWORD *)(W32GetUserSessionState(v14, v13) + 36360) = 0;
          v2 = (_UNKNOWN **)W32GetUserSessionState(v36, v35);
          *((_DWORD *)v2 + 9091) = 0;
        }
      }
    }
  }
  return (char)v2;
}
