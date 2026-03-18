/*
 * XREFs of ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x1400CEC24
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1400CDC30 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x1400CEB20 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?AllocationFailure@Monitors@InputTraceLogging@@SAXXZ @ 0x1401A072C (-AllocationFailure@Monitors@InputTraceLogging@@SAXXZ.c)
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
