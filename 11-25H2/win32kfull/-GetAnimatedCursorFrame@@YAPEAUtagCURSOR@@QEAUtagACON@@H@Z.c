/*
 * XREFs of ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1402738F0
 * Callers:
 *     NtUserDrawIconEx @ 0x140056290 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x140056464 (_DrawIconEx.c)
 *     NtUserGetCursorFrameInfo @ 0x1401B0A60 (NtUserGetCursorFrameInfo.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1401B3FCC (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     NtUserGetIconSize @ 0x1401C9450 (NtUserGetIconSize.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagCURSOR *__fastcall GetAnimatedCursorFrame(struct tagACON *const a1, int a2)
{
  int v2; // r8d
  __int64 v4; // r9

  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    v2 = 52;
LABEL_3:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v2);
    return 0LL;
  }
  if ( !*((_QWORD *)a1 + 13) )
    return 0LL;
  if ( !*((_QWORD *)a1 + 12) )
    return 0LL;
  if ( a2 < 0 )
    return 0LL;
  if ( a2 >= *((_DWORD *)a1 + 23) )
    return 0LL;
  _mm_lfence();
  v4 = *(int *)(*((_QWORD *)a1 + 13) + 4LL * a2);
  if ( (int)v4 < 0 || (int)v4 >= *((_DWORD *)a1 + 22) )
    return 0LL;
  _mm_lfence();
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8 * v4) + 80LL) & 8) != 0 )
  {
    v2 = 76;
    goto LABEL_3;
  }
  return *(struct tagCURSOR **)(*((_QWORD *)a1 + 12) + 8 * v4);
}
