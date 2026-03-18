/*
 * XREFs of IsCurrentSessionHostServiceSession @ 0x1401FCC60
 * Callers:
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x14012FDB0 (--0InteractiveControlManager@@AEAA@XZ.c)
 *     ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x1401FC904 (-CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z.c)
 *     EditionInitializeWppLogging @ 0x140215F50 (EditionInitializeWppLogging.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     ??1InteractiveControlManager@@AEAA@XZ @ 0x1402DFB10 (--1InteractiveControlManager@@AEAA@XZ.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1402EBCA8 (--0InkProcessor@@AEAA@XZ.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402EBDA8 (--1InkProcessor@@AEAA@XZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 */

_BOOL8 IsCurrentSessionHostServiceSession()
{
  int CurrentWin32kSessionId; // ebx
  int CurrentServiceSessionId; // ecx
  _BOOL8 result; // rax

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  result = 0LL;
  if ( CurrentWin32kSessionId == CurrentServiceSessionId )
    return CurrentServiceSessionId == 0;
  return result;
}
