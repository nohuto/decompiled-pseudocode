/*
 * XREFs of PopAdaptiveGetSessionStateUnsafe @ 0x1409F935C
 * Callers:
 *     PopSessionConnectedV2 @ 0x1407E2424 (PopSessionConnectedV2.c)
 *     PopAdaptiveGetSessionState @ 0x1409F91C0 (PopAdaptiveGetSessionState.c)
 *     PopSessionConnected @ 0x140B77568 (PopSessionConnected.c)
 * Callees:
 *     PopAdaptiveGetRemoteSessionState @ 0x1409F92B0 (PopAdaptiveGetRemoteSessionState.c)
 *     PopDiagTraceAdaptiveSessionState @ 0x1409F940C (PopDiagTraceAdaptiveSessionState.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409F99F8 (PopAdaptiveGetConsoleSessionState.c)
 */

__int64 __fastcall PopAdaptiveGetSessionStateUnsafe(unsigned int a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  v8 = 0;
  if ( dword_140F0C078 != a1 || a1 == -1 )
    PopAdaptiveGetRemoteSessionState(a1, a2, a3, &v8, &v7);
  else
    PopAdaptiveGetConsoleSessionState(a1, a2, a3, (unsigned int)&v8, (__int64)&v7);
  return PopDiagTraceAdaptiveSessionState(
           a1,
           *(_QWORD *)a2,
           *(_QWORD *)(a2 + 16),
           *(_DWORD *)(a2 + 24),
           *(_DWORD *)a3,
           *(_DWORD *)(a3 + 8),
           *(_BYTE *)(a3 + 12),
           v8,
           *(_DWORD *)(a3 + 4),
           v7);
}
