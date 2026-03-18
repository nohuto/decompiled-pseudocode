/*
 * XREFs of EtwInitializeAsyncKeyMonitor @ 0x1400C711C
 * Callers:
 *     EtwTraceGetAsyncKeyState @ 0x1400C6FD4 (EtwTraceGetAsyncKeyState.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1401B7704 (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 EtwInitializeAsyncKeyMonitor()
{
  signed __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // edx

  v0 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x61734B45u);
  if ( !v0 )
    return 3221225495LL;
  *(_QWORD *)v0 = 0LL;
  *(_BYTE *)(v0 + 88) = 0;
  *(_QWORD *)(v0 + 96) = 0LL;
  memset((void *)(v0 + 8), -1, 0x50uLL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(W32GetUserSessionState(v2, v1) + 14496), v0, 0LL) )
    CAsyncKeyEventMonitor::`scalar deleting destructor'((CAsyncKeyEventMonitor *)v0, v3);
  return 0LL;
}
