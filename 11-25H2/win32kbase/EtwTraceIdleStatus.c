/*
 * XREFs of EtwTraceIdleStatus @ 0x14009ABB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x140099090 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqqqq_EtwWriteTransfer @ 0x14009ACDC (McTemplateK0qqqqqqq_EtwWriteTransfer.c)
 */

void EtwTraceIdleStatus()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // r15
  __int64 UserSessionState; // rax
  char v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  int v10; // esi
  int v11; // ebp
  int v12; // r14d
  __int64 v13; // rax
  int v14; // edi
  int v15; // ebx
  int CurrentWin32kSessionId; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x2000000000008000LL) != 0
    && (qword_14029EDA8 & 0x2000000000008000LL) == qword_14029EDA8 )
  {
    v0 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v1 = (v0 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UserSessionState = W32GetUserSessionState(v0, v1);
    v3 = v1 - CInputGlobals::GetLastInputTime(*(CInputGlobals **)(UserSessionState + 3056));
    v6 = (_DWORD *)W32GetUserSessionState(v5, v4);
    v9 = v6;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v10 = v6[725];
      v11 = v6[727];
      v12 = v6[672];
      v13 = W32GetUserSessionState(v8, v7);
      v14 = v9[670];
      v15 = *(_DWORD *)(v13 + 62816);
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0qqqqqqq_EtwWriteTransfer(v18, v17, v19, CurrentWin32kSessionId, v3, v14, v15, v12, v11, v10);
    }
  }
}
