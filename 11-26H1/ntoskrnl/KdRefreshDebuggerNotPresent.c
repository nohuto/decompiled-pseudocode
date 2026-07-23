/*
 * XREFs of KdRefreshDebuggerNotPresent @ 0x1404E9CA0
 * Callers:
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405EA1C0 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 * Callees:
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     KdpPrintString @ 0x140C1CAD8 (KdpPrintString.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 */

BOOLEAN KdRefreshDebuggerNotPresent(void)
{
  __int64 v1; // rax
  char v2; // di
  BOOLEAN v3; // bl
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( !(_BYTE)KdDebuggerEnabled || KdPitchDebugger )
    return 1;
  v1 = -1LL;
  *((_QWORD *)&v5 + 1) = "KDTARGET: Refreshing KD connection\n";
  do
    ++v1;
  while ( aKdtargetRefres[v1] );
  LOWORD(v5) = v1;
  v2 = KdEnterDebugger(0LL, 0LL);
  KdpPrintString(&v5);
  v3 = (unsigned __int8)KdDebuggerNotPresent;
  LOBYTE(v4) = v2;
  KdExitDebugger(v4);
  return v3;
}
