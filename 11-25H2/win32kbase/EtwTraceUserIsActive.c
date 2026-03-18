/*
 * XREFs of EtwTraceUserIsActive @ 0x1400DE680
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99B0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qqm_EtwWriteTransfer @ 0x1400DE820 (McTemplateK0qqm_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUserIsActive(_DWORD *a1, LONGLONG *a2)
{
  LONGLONG v4; // rbx
  __int64 UserSessionState; // rcx
  unsigned __int64 v6; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int CurrentWin32kSessionId; // eax
  int v17; // edx
  int v18; // r8d
  LONGLONG TimeQuadPart; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)(v6 - *(_DWORD *)(UserSessionState + 69168)) < 0xEA60 )
    return 0LL;
  *(_DWORD *)(UserSessionState + 69168) = v6;
  if ( !*(_QWORD *)(W32GetUserSessionState(UserSessionState, 0xFFFFF78000000004uLL) + 18904) )
  {
    v11 = 0;
    goto LABEL_18;
  }
  v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18904);
  v11 = *(_DWORD *)(*(_QWORD *)(v10 + 464) + 56LL);
  v14 = *(_QWORD *)(W32GetUserSessionState(v10, v12) + 18904);
  if ( !**(_QWORD **)(v14 + 464) )
  {
LABEL_18:
    TimeQuadPart = 0LL;
    goto LABEL_6;
  }
  v15 = W32GetUserSessionState(v14, v13);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(*(_QWORD *)(v15 + 18904) + 464LL));
  v4 = TimeQuadPart;
LABEL_6:
  if ( a1 )
    *a1 = v11;
  if ( a2 )
    *a2 = v4;
  if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x8000000000020000uLL) != 0
    && (qword_14029EDA8 & 0x8000000000020000uLL) == qword_14029EDA8
    && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    McTemplateK0qqm_EtwWriteTransfer(
      (unsigned int)&TimeQuadPart,
      v17,
      v18,
      CurrentWin32kSessionId,
      v11,
      (__int64)&TimeQuadPart);
  }
  return 1LL;
}
