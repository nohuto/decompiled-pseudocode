/*
 * XREFs of ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x14011DBC0
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14011D380 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14011DB50 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?AllocationFailure@Monitors@InputTraceLogging@@SAXXZ @ 0x1401C3A60 (-AllocationFailure@Monitors@InputTraceLogging@@SAXXZ.c)
 */

struct _REFCOUNTED_DPI_INFORMATION *CreateMonitorDpiInfo(void)
{
  __int64 v0; // rbx

  v0 = Win32AllocPoolZInitImpl(256LL, 0x64uLL, 0x70776455u);
  if ( !v0 )
  {
    UserSetLastError(8);
    InputTraceLogging::Monitors::AllocationFailure();
  }
  return (struct _REFCOUNTED_DPI_INFORMATION *)v0;
}
