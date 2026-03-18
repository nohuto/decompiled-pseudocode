/*
 * XREFs of EtwTraceDisplayTimeoutReset @ 0x1400D47F4
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D36E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1400D476C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qhq_EtwWriteTransfer @ 0x14017B344 (McTemplateK0qhq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceDisplayTimeoutReset(__int64 a1, __int64 a2, int a3)
{
  int v4; // r8d
  __int64 v5; // rbx
  int v6; // edx
  unsigned __int64 v7; // rcx
  int v8; // r8d
  int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int16 v13; // bx
  __int64 v14; // rcx
  int CurrentWin32kSessionId; // eax
  int v16; // ecx
  int v17; // r8d

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x2000000000008000LL) != 0
    && (qword_1402A9DC8 & 0x2000000000008000LL) == qword_1402A9DC8
    && *(int *)(W32GetUserSessionState(a1, 0x8000, a3) + 2680) > 0 )
  {
    v5 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v7 = *(int *)(W32GetUserSessionState(0, v5, v4) + 2680);
    if ( v5 - a1 > v7 && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v9 = *(_DWORD *)(W32GetUserSessionState(v7, v6, v8) + 2680);
      v13 = *(_WORD *)(W32GetUserSessionState(v11, v10, v12) + 68744);
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v14);
      McTemplateK0qhq_EtwWriteTransfer(
        v16,
        (unsigned int)&DisplayTimeoutResetEvent,
        v17,
        CurrentWin32kSessionId,
        v13 == 0,
        v9);
    }
  }
}
