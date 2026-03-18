/*
 * XREFs of EtwTraceUserIsActive @ 0x140128580
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qqm_EtwWriteTransfer @ 0x140128720 (McTemplateK0qqm_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUserIsActive(_DWORD *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v5; // rbx
  __int64 UserSessionState; // rcx
  unsigned __int64 v7; // r8
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // edi
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rax
  int CurrentWin32kSessionId; // eax
  int v20; // edx
  int v21; // r8d
  unsigned __int64 TimeQuadPart; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)(v7 - *(_DWORD *)(UserSessionState + 69160)) < 0xEA60 )
    return 0LL;
  *(_DWORD *)(UserSessionState + 69160) = v7;
  if ( !*(_QWORD *)(W32GetUserSessionState(UserSessionState, 4, v7) + 18944) )
  {
    v13 = 0;
    goto LABEL_18;
  }
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 18944);
  v13 = *(_DWORD *)(*(_QWORD *)(v12 + 456) + 56LL);
  v10 = *(_QWORD *)(W32GetUserSessionState(v12, v14, v15) + 18944);
  if ( !**(_QWORD **)(v10 + 456) )
  {
LABEL_18:
    TimeQuadPart = 0LL;
    goto LABEL_6;
  }
  v18 = W32GetUserSessionState(v10, v16, v17);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(*(_QWORD *)(v18 + 18944) + 456LL));
  v10 = HIDWORD(TimeQuadPart);
  v5 = TimeQuadPart;
LABEL_6:
  if ( a1 )
    *a1 = v13;
  if ( a2 )
    *a2 = v5;
  if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x8000000000020000uLL) != 0
    && (qword_1402A9DC8 & 0x8000000000020000uLL) == qword_1402A9DC8
    && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v10);
    McTemplateK0qqm_EtwWriteTransfer(
      (unsigned int)&TimeQuadPart,
      v20,
      v21,
      CurrentWin32kSessionId,
      v13,
      (__int64)&TimeQuadPart);
  }
  return 1LL;
}
