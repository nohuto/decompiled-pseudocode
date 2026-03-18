/*
 * XREFs of EtwTraceDisplayTimeoutReset @ 0x14009B31C
 * Callers:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x14009B294 (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qhq_EtwWriteTransfer @ 0x140155368 (McTemplateK0qhq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceDisplayTimeoutReset(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // bx
  int CurrentWin32kSessionId; // eax
  int v11; // ecx
  int v12; // r8d

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x2000000000008000LL) != 0
    && (qword_14029EDA8 & 0x2000000000008000LL) == qword_14029EDA8
    && *(int *)(W32GetUserSessionState(a1, 0x2000000000008000LL) + 2680) > 0 )
  {
    v2 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
    v3 = (v2 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v5 = *(int *)(W32GetUserSessionState(v2, v3) + 2680);
    if ( v3 - a1 > v5 && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v6 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 2680);
      v9 = *(_WORD *)(W32GetUserSessionState(v8, v7) + 68752);
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0qhq_EtwWriteTransfer(
        v11,
        (unsigned int)&DisplayTimeoutResetEvent,
        v12,
        CurrentWin32kSessionId,
        v9 == 0,
        v6);
    }
  }
}
