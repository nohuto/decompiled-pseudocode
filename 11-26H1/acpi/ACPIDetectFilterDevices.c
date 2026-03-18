/*
 * XREFs of ACPIDetectFilterDevices @ 0x14001D41C
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400C58A0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1400C67F8 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1400CDB30 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x14001C97C (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildMissingChildren @ 0x14001CAE4 (ACPIBuildMissingChildren.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x14001DAA0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildFilter @ 0x140044FD0 (ACPIBuildFilter.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1400C1E54 (ACPIFilterQueryBusD3ColdSupport.c)
 *     AcpiQueryPciBusInterface @ 0x1400C2130 (AcpiQueryPciBusInterface.c)
 *     ACPIDetectFilterMatch @ 0x1400C2394 (ACPIDetectFilterMatch.c)
 *     ACPIBuildFlushQueue @ 0x1400C7EBC (ACPIBuildFlushQueue.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 *     ACPIInternalIsPci @ 0x1400D4050 (ACPIInternalIsPci.c)
 */

__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  char v3; // si
  __int64 v4; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbp
  _QWORD *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  char v15; // r8
  KIRQL v16; // al
  __int64 v17; // rbx
  __int64 v18; // rdx
  KIRQL v19; // dl
  const char *v21; // r14
  const char *v22; // rax
  int v23; // eax
  ULONG_PTR v24; // rbx
  __int64 v25; // rcx
  int v26; // r9d
  __int64 v27; // rcx
  __int64 v28; // rax
  const char *v29; // rdx
  const char *v30; // rcx
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // [rsp+38h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v3 = 0;
  v37 = 0LL;
  v4 = DeviceExtension;
  v36 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( _bittest64((const signed __int64 *)(v4 + 8), 0x29u) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(v4);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  v8 = ACPIBuildFlushQueue(v4, v6);
  if ( v8 < 0 )
  {
    v21 = byte_140075A82;
    v22 = byte_140075A82;
    if ( v4 )
    {
      v25 = *(_QWORD *)(v4 + 8);
      v3 = v4;
      if ( (v25 & 0x200000000000LL) != 0 )
      {
        v21 = *(const char **)(v4 + 608);
        if ( (v25 & 0x400000000000LL) != 0 )
          v22 = *(const char **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v8;
    v26 = 16;
    goto LABEL_34;
  }
  v8 = ACPIDevicePowerFlushQueue(v4);
  if ( v8 < 0 )
  {
    v21 = byte_140075A82;
    v22 = byte_140075A82;
    if ( v4 )
    {
      v27 = *(_QWORD *)(v4 + 8);
      v3 = v4;
      if ( (v27 & 0x200000000000LL) != 0 )
      {
        v21 = *(const char **)(v4 + 608);
        if ( (v27 & 0x400000000000LL) != 0 )
          v22 = *(const char **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v8;
    v26 = 17;
LABEL_34:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      22,
      v26,
      (__int64)&WPP_d1301130f75538ac6625be8197f7663e_Traceguids,
      v8,
      v3,
      (__int64)v21,
      (__int64)v22);
    return (unsigned int)v8;
  }
  LOBYTE(v9) = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v10 = *(_QWORD *)(v4 + 800);
  if ( v10 == v4 + 800 )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = (_QWORD *)(v10 - 816);
    ACPIInitReferenceDeviceExtension(v11, v9);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
  while ( v11 )
  {
    v36 = 0LL;
    if ( (int)ACPIGet((_DWORD)v11, 1096045407, -1878783998, 0, 0, 0LL, 0LL, (__int64)&v36, 0LL) >= 0
      && ((v11[1] & 0x2000000000002LL) == 0
       || (_bittest(&AcpiOverrideAttributes, 0x17u) & ((*(_QWORD *)(v4 + 8) & 0x2000000LL) != 0)) != 0) )
    {
      v14 = ACPIDetectFilterMatch(v11, a2, &v37);
      v15 = v14;
      if ( v14 < 0 )
      {
        v32 = v11[1];
        v29 = byte_140075A82;
        v30 = byte_140075A82;
        if ( (v32 & 0x200000000000LL) != 0 )
        {
          v29 = (const char *)v11[76];
          if ( (v32 & 0x400000000000LL) != 0 )
            v30 = (const char *)v11[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = 19;
          goto LABEL_51;
        }
      }
      else
      {
        if ( !v37 )
          goto LABEL_13;
        v23 = ACPIBuildFilter(*(_QWORD *)(a1 + 8), v11);
        v15 = v23;
        if ( v23 < 0 )
        {
          v28 = v11[1];
          v29 = byte_140075A82;
          v30 = byte_140075A82;
          if ( (v28 & 0x200000000000LL) != 0 )
          {
            v29 = (const char *)v11[76];
            if ( (v28 & 0x400000000000LL) != 0 )
              v30 = (const char *)v11[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v31 = 18;
LABEL_51:
            v33 = (__int64)v29;
            LOBYTE(v29) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v29,
              22,
              v31,
              (__int64)&WPP_d1301130f75538ac6625be8197f7663e_Traceguids,
              v15,
              (char)v11,
              v33,
              (__int64)v30);
          }
        }
        else
        {
          v24 = v11[96];
          if ( (int)AcpiQueryPciBusInterface(v24) >= 0 )
            ACPIInternalIsPci(v24);
          ACPIFilterQueryBusD3ColdSupport(v24);
        }
      }
    }
LABEL_13:
    v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v17 = v11[102];
    LOBYTE(v18) = v16;
    if ( v17 == v4 + 800 )
    {
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
      ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v11);
      break;
    }
    ACPIInitReferenceDeviceExtension(v17 - 816, v18);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v19);
    ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v11);
    v11 = (_QWORD *)(v17 - 816);
  }
  if ( (*(_DWORD *)(v4 + 8) & 0x2000000) != 0 || (*(_QWORD *)(v4 + 1008) & 0x8000LL) != 0 )
  {
    LOBYTE(v12) = 1;
    LOBYTE(v13) = (*(_QWORD *)(v4 + 1008) & 0x8000) != 0;
    EnableDisableRegions(*(_QWORD *)(v4 + 760), v12, v13);
  }
  return 0LL;
}
