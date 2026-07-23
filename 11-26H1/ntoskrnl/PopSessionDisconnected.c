/*
 * XREFs of PopSessionDisconnected @ 0x1409F73A0
 * Callers:
 *     PopSessionConnectionChangeV2 @ 0x1407E24E4 (PopSessionConnectionChangeV2.c)
 *     PopSessionConnectionChange @ 0x140B77620 (PopSessionConnectionChange.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDiagTraceSessionStates @ 0x1409F7428 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x1409F7F68 (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1409F9DBC (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED);
  if ( dword_140F0C078 == a1 && a1 != -1 )
  {
    memset_0(&PopAdaptiveContext, 0, 0x50uLL);
    dword_140F0C07C = 3;
    dword_140F0C078 = -1;
  }
  PopSetSessionDisplayStatus(a1, 0LL);
  PopSetSessionUserStatus(a1, 2LL);
  result = 0LL;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = 0;
  return result;
}
