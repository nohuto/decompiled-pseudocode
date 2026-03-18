/*
 * XREFs of WdipSemGetLoggerDroppedEventCount @ 0x140ADB33C
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140ADB0D8 (WdipSemWriteSemActionsEvent.c)
 * Callees:
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 *     WmipQueryTraceInformation @ 0x140829064 (WmipQueryTraceInformation.c)
 */

__int64 __fastcall WdipSemGetLoggerDroppedEventCount(unsigned int a1, _DWORD *a2)
{
  int v3; // ecx
  bool IsKernelAddress; // di
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = a1;
  v7 = 0;
  if ( a2 && a1 )
  {
    IsKernelAddress = MmIsKernelAddress((unsigned __int64)&v7);
    if ( IsKernelAddress == MmIsKernelAddress((unsigned __int64)&v6) )
    {
      v3 = WmipQueryTraceInformation(8, &v7, 4u, 0LL, &v6, !IsKernelAddress);
      if ( v3 >= 0 )
        *a2 = v7;
    }
    else
    {
      return (unsigned int)-1073741503;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
