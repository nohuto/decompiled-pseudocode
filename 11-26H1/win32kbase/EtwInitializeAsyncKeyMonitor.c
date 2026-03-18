/*
 * XREFs of EtwInitializeAsyncKeyMonitor @ 0x1400E8E5C
 * Callers:
 *     EtwTraceGetAsyncKeyState @ 0x1400E8B98 (EtwTraceGetAsyncKeyState.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1401DA920 (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 EtwInitializeAsyncKeyMonitor()
{
  signed __int64 v0; // rbx
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  __int64 UserSessionState; // rax

  v0 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x61734B45u);
  if ( !v0 )
    return 3221225495LL;
  *(_QWORD *)v0 = 0LL;
  *(_BYTE *)(v0 + 88) = 0;
  *(_QWORD *)(v0 + 96) = 0LL;
  memset((void *)(v0 + 8), -1, 0x50uLL);
  UserSessionState = W32GetUserSessionState(v2, v1, v3);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(UserSessionState + 14488), v0, 0LL) )
    CAsyncKeyEventMonitor::`scalar deleting destructor'((CAsyncKeyEventMonitor *)v0, UserSessionState);
  return 0LL;
}
