/*
 * XREFs of PopSessionDisconnected @ 0x140A3B980
 * Callers:
 *     PopSessionConnectionChangeV2 @ 0x1407DDEB4 (PopSessionConnectionChangeV2.c)
 *     PopSessionConnectionChange @ 0x140B72640 (PopSessionConnectionChange.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopDiagTraceSessionStates @ 0x140A3BA08 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x140A3C548 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x140A3E39C (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED);
  if ( *(_DWORD *)&PopAdaptiveStandbyLock.AbWaitEntryCount == a1 && a1 != -1 )
  {
    memset_0(&PopAdaptiveStandbyLock.ThreadListEntry.Blink, 0, 0x50uLL);
    PopAdaptiveStandbyLock.SecureThreadCookie = 3;
    *(_DWORD *)&PopAdaptiveStandbyLock.AbWaitEntryCount = -1;
  }
  PopSetSessionDisplayStatus(a1, 0LL);
  PopSetSessionUserStatus(a1, 2LL);
  result = 0LL;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = 0;
  return result;
}
