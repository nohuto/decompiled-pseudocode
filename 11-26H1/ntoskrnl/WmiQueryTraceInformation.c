/*
 * XREFs of WmiQueryTraceInformation @ 0x140B6C6A0
 * Callers:
 *     <none>
 * Callees:
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     WmipQueryTraceInformation @ 0x14082F2A4 (WmipQueryTraceInformation.c)
 */

NTSTATUS __stdcall WmiQueryTraceInformation(
        TRACE_INFORMATION_CLASS TraceInformationClass,
        PVOID TraceInformation,
        ULONG TraceInformationLength,
        PULONG RequiredLength,
        PVOID Buffer)
{
  char IsKernelAddress; // bl
  char v10; // bp

  IsKernelAddress = MmIsKernelAddress((unsigned __int64)TraceInformation);
  v10 = MmIsKernelAddress((unsigned __int64)Buffer);
  if ( (!RequiredLength || IsKernelAddress == MmIsKernelAddress((unsigned __int64)RequiredLength))
    && (!Buffer || IsKernelAddress == v10) )
  {
    return WmipQueryTraceInformation(
             TraceInformationClass,
             (int *)TraceInformation,
             TraceInformationLength,
             RequiredLength,
             (unsigned int *)Buffer,
             IsKernelAddress == 0);
  }
  else
  {
    return -1073741503;
  }
}
