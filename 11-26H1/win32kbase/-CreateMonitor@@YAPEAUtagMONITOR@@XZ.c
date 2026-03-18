/*
 * XREFs of ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x14011DC04
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14011D380 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14011DB50 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 *     ?AllocationFailure@Monitors@InputTraceLogging@@SAXXZ @ 0x1401C3A60 (-AllocationFailure@Monitors@InputTraceLogging@@SAXXZ.c)
 */

struct tagMONITOR *CreateMonitor(void)
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx

  v0 = (_QWORD *)HMAllocObjectEx(0, 0, 12, 152, 0);
  v1 = v0;
  if ( v0 )
  {
    *(_DWORD *)(v0[5] + 28LL) = 0;
    *(_DWORD *)(v0[5] + 32LL) = 0;
    *(_DWORD *)(v0[5] + 36LL) = 0;
    *(_DWORD *)(v0[5] + 40LL) = 0;
    *(_DWORD *)(v0[5] + 44LL) = 0;
    *(_DWORD *)(v0[5] + 48LL) = 0;
    *(_DWORD *)(v0[5] + 52LL) = 0;
    *(_DWORD *)(v0[5] + 56LL) = 0;
    v0[14] = 0LL;
    v0[15] = 0LL;
  }
  else
  {
    UserSetLastError(8);
    InputTraceLogging::Monitors::AllocationFailure();
  }
  return (struct tagMONITOR *)v1;
}
