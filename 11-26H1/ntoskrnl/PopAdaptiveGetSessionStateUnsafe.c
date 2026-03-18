/*
 * XREFs of PopAdaptiveGetSessionStateUnsafe @ 0x140A3D93C
 * Callers:
 *     PopSessionConnectedV2 @ 0x1407DDDF4 (PopSessionConnectedV2.c)
 *     PopAdaptiveGetSessionState @ 0x140A3D7A0 (PopAdaptiveGetSessionState.c)
 *     PopSessionConnected @ 0x140B72588 (PopSessionConnected.c)
 * Callees:
 *     PopAdaptiveGetRemoteSessionState @ 0x140A3D890 (PopAdaptiveGetRemoteSessionState.c)
 *     PopDiagTraceAdaptiveSessionState @ 0x140A3D9EC (PopDiagTraceAdaptiveSessionState.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x140A3DFD8 (PopAdaptiveGetConsoleSessionState.c)
 */

__int64 __fastcall PopAdaptiveGetSessionStateUnsafe(unsigned int a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  v8 = 0;
  if ( *(_DWORD *)&PopAdaptiveStandbyLock.AbWaitEntryCount != a1 || a1 == -1 )
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
