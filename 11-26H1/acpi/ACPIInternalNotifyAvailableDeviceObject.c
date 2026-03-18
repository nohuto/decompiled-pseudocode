/*
 * XREFs of ACPIInternalNotifyAvailableDeviceObject @ 0x1400D14C8
 * Callers:
 *     ACPIDispatchIrp @ 0x140024580 (ACPIDispatchIrp.c)
 * Callees:
 *     WPP_RECORDER_SF_sqL @ 0x140018CD4 (WPP_RECORDER_SF_sqL.c)
 *     ACPIQueryDeviceBiosNameEx @ 0x14002C54C (ACPIQueryDeviceBiosNameEx.c)
 *     AMLIGetNSObjectNotifyFlag @ 0x14004BB60 (AMLIGetNSObjectNotifyFlag.c)
 *     WPP_RECORDER_SF_sqSD @ 0x14005EC7C (WPP_RECORDER_SF_sqSD.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1400AF984 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ACPIInternalNotifyAvailableDeviceObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+20h] [rbp-48h]
  int v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+38h] [rbp-30h]
  struct _UNICODE_STRING P; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 760);
  P = 0LL;
  if ( v2 && AMLIGetNSObjectNotifyFlag(v2) )
  {
    v3 = ACPIQueryDeviceBiosNameEx(*(_QWORD *)(a1 + 768), 1LL, &P);
    if ( v3 >= 0 )
    {
      v3 = AcpiExternalAddBiosNameDeviceAssociation((__int64)&P, *(_QWORD *)(a1 + 768));
      if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqSD((__int64)WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, v8, v9);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v3;
      WPP_RECORDER_SF_sqL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x14u,
        (__int64)&WPP_49a3cf2aed283f952c963990affd9223_Traceguids,
        "ACPIInternalNotifyAvailableDeviceObject",
        *(_QWORD *)(a1 + 768),
        v10);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( P.Buffer )
    ExFreePoolWithTag(P.Buffer, 0x53706341u);
  return (unsigned int)v3;
}
