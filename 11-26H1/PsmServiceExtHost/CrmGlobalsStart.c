/*
 * XREFs of CrmGlobalsStart @ 0x1800755E8
 * Callers:
 *     PsmCrmStart @ 0x180074520 (PsmCrmStart.c)
 * Callees:
 *     CrmGlobalsStartCrmRegistrations @ 0x18007788C (CrmGlobalsStartCrmRegistrations.c)
 *     CrmGlobalsStartTelemetry @ 0x180077AB4 (CrmGlobalsStartTelemetry.c)
 *     CrmLaunchRPCServer @ 0x180077BD0 (CrmLaunchRPCServer.c)
 *     TlgRegisterAggregateProviderEx @ 0x18008CE38 (TlgRegisterAggregateProviderEx.c)
 */

__int64 CrmGlobalsStart()
{
  int v0; // eax
  int started; // ecx
  RPC_STATUS v3; // eax
  int v4; // eax
  ULONG v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 8LL;
  v6 = 0;
  if ( NtQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &v7, 8u, &v6) >= 0 )
    v0 = (BYTE4(v7) >> 1) & 1;
  else
    v0 = 0;
  dword_1800E3B60 = v0;
  hObject = CreateEventW(0LL, 1, 0, 0LL);
  if ( hObject )
  {
    v3 = UuidCreate(&Uuid);
    if ( v3 )
      return (unsigned int)I_RpcMapWin32Status(v3);
    RtlGetDeviceFamilyInfoEnum(0LL, &unk_1800E3B40, &unk_1800E3B44);
    TlgRegisterAggregateProviderEx();
    started = TpAllocWork(&qword_1800E3990, CrmGlobalsPeriodicNotifier, &CrmGlobals, 0LL);
    if ( started >= 0 )
    {
      v4 = TpAllocTimer(&xmmword_1800E39B0, CrmIsolatedPollingWorkerNpuUsageTimerCallback, &unk_1800E39A0, 0LL);
      started = 0;
      if ( v4 < 0 )
        started = v4;
      if ( started >= 0 )
      {
        started = CrmGlobalsStartCrmRegistrations(&CrmGlobals);
        if ( started >= 0 )
        {
          started = CrmGlobalsStartTelemetry(&CrmGlobals);
          if ( started >= 0 )
            return (unsigned int)CrmLaunchRPCServer(&BindingVector);
        }
      }
    }
  }
  else
  {
    if ( (int)GetLastError() <= 0 )
      return GetLastError();
    return (unsigned __int16)GetLastError() | 0xC0070000;
  }
  return (unsigned int)started;
}
