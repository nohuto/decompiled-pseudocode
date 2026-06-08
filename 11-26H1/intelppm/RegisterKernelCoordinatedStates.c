/*
 * XREFs of RegisterKernelCoordinatedStates @ 0x140038C78
 * Callers:
 *     RegisterIdleComplete @ 0x140038858 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     PepNotifyQueryCoordinatedStates @ 0x14003A390 (PepNotifyQueryCoordinatedStates.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1400464E0 (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall RegisterKernelCoordinatedStates(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  _QWORD *v3; // rbx
  PVOID v4; // rcx
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  P = 0LL;
  if ( dword_140019854 )
  {
    v2 = PepNotifyQueryCoordinatedStates(a1, &P);
    v3 = P;
    v1 = v2;
    if ( v2 >= 0 )
    {
      v4 = P;
      *(_DWORD *)P = dword_140019854;
      v3[4] = PepQueryPlatformStateResidency;
      v3[2] = PepIdlePreExecute;
      v3[3] = PepIdleComplete;
      v1 = ((__int64 (__fastcall *)(PVOID))qword_1400194F8)(v4);
      if ( v1 >= 0 )
      {
        qword_140019868 = (__int64)v3;
        v3 = 0LL;
        byte_140019858 = 1;
        ProcLibTraceCoordinatedIdleStates(0LL);
        v1 = 0;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x14u,
          (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
          v1);
      }
    }
    if ( v3 )
      ExFreePoolWithTag(v3, (ULONG)1919119952);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v1;
}
