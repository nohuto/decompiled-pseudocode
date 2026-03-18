/*
 * XREFs of ACPIProcessorBuildBootApicIds @ 0x1400B5C80
 * Callers:
 *     ACPIProcessorStartDeviceWorker @ 0x1400673B0 (ACPIProcessorStartDeviceWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 */

__int64 ACPIProcessorBuildBootApicIds()
{
  int v0; // edx
  __int64 result; // rax
  __int64 i; // rbx
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( AcpiBootProcessorApicIds )
    return 0LL;
  AcpiBootProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  AcpiBootProcessorApicIds = ExAllocatePool2(64LL, 4LL * (unsigned int)AcpiBootProcessorCount, 1299211073LL);
  if ( AcpiBootProcessorApicIds )
  {
    for ( i = 0LL; (unsigned int)i < AcpiBootProcessorCount; i = (unsigned int)(i + 1) )
    {
      result = HalGetProcessorIdByNtNumber((unsigned int)i, &v3);
      if ( (int)result < 0 )
        return result;
      *(_DWORD *)(AcpiBootProcessorApicIds + 4 * i) = v3;
    }
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      21,
      10,
      (__int64)&WPP_753fe4d36662374399d7f9e30a1e6541_Traceguids);
  }
  return 3221225626LL;
}
