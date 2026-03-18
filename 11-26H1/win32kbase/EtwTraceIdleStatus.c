/*
 * XREFs of EtwTraceIdleStatus @ 0x1400EA6F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qqqqqqq_EtwWriteTransfer @ 0x1400EA820 (McTemplateK0qqqqqqq_EtwWriteTransfer.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1400EAA30 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 */

void __fastcall EtwTraceIdleStatus(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 UserSessionState; // rax
  char v5; // r15
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  _DWORD *v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  _DWORD *v13; // rdi
  int v14; // esi
  int v15; // ebp
  int v16; // r14d
  __int64 v17; // rax
  int v18; // edi
  int v19; // ebx
  __int64 v20; // rcx
  int CurrentWin32kSessionId; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x2000000000008000LL) != 0
    && (qword_1402A9DC8 & 0x2000000000008000LL) == qword_1402A9DC8 )
  {
    v3 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UserSessionState = W32GetUserSessionState(0, v3, a3);
    v5 = v3 - CInputGlobals::GetLastInputTime(*(CInputGlobals **)(UserSessionState + 3056));
    v9 = (_DWORD *)W32GetUserSessionState(v7, v6, v8);
    v13 = v9;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v14 = v9[725];
      v15 = v9[727];
      v16 = v9[672];
      v17 = W32GetUserSessionState(v11, v10, v12);
      v18 = v13[670];
      v19 = *(_DWORD *)(v17 + 62808);
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v20);
      McTemplateK0qqqqqqq_EtwWriteTransfer(v23, v22, v24, CurrentWin32kSessionId, v5, v18, v19, v16, v15, v14);
    }
  }
}
