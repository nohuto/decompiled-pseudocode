/*
 * XREFs of ExternalRequestBiosNameDeviceAssociation @ 0x1400AFD98
 * Callers:
 *     AcpiExternalTranslateBiosToNtResources @ 0x1400AFA38 (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x14003CCB4 (ACPIInternalGetDeviceFromNSOBJ.c)
 *     WPP_RECORDER_SF_qSD @ 0x14006035C (WPP_RECORDER_SF_qSD.c)
 *     WPP_RECORDER_SF_qsD @ 0x1400604E0 (WPP_RECORDER_SF_qsD.c)
 *     AMLISetNSObjectNotifyFlag @ 0x14006C5AC (AMLISetNSObjectNotifyFlag.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1400AF984 (AcpiExternalAddBiosNameDeviceAssociation.c)
 *     ACPIInitUnicodeString @ 0x1400CFB64 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ExternalRequestBiosNameDeviceAssociation(_BYTE *a1, __int64 a2, char a3)
{
  void *v5; // rdi
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v17; // [rsp+20h] [rbp-40h]
  __int64 *v18; // [rsp+40h] [rbp-20h] BYREF
  void *v19; // [rsp+48h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+A8h] [rbp+48h] BYREF

  v18 = 0LL;
  v21 = 0;
  v5 = 0LL;
  v19 = 0LL;
  *(_OWORD *)P = 0LL;
  v7 = AMLIGetNameSpaceObject(a1, 0LL, &v18, 0);
  if ( v7 >= 0 )
  {
    AMLISetNSObjectNotifyFlag(v18);
    v7 = ACPIInitUnicodeString((PUNICODE_STRING)P);
    if ( v7 >= 0 )
    {
      ACPIInternalGetDeviceFromNSOBJ((__int64)v18, &v19, v8, &v21);
      v5 = v19;
      if ( v21 == 3 )
      {
        v7 = AcpiExternalAddBiosNameDeviceAssociation((__int64)P, (__int64)v19);
        if ( v7 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qSD((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, v17);
          v7 = 0;
        }
      }
      if ( (a3 & 4) == 0 )
      {
        v12 = IoReserveDependency(*(_QWORD *)(a2 + 784), P, 2LL);
        v7 = v12;
        if ( v12 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qsD(WPP_GLOBAL_Control->DeviceExtension, v13, v14, v15, v17, a2, (__int64)a1, v12);
          v7 = 0;
        }
      }
    }
  }
  if ( P[1] )
  {
    ExFreePoolWithTag(P[1], 0x53706341u);
    *(_OWORD *)P = 0LL;
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v18 )
    AMLIDereferenceHandleEx((__int64)v18);
  return (unsigned int)v7;
}
