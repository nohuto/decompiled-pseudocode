/*
 * XREFs of ACPIDetectPdoDevices @ 0x14001DB6C
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1400C5BD8 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1400C67F8 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x14001C97C (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildMissingChildren @ 0x14001CAE4 (ACPIBuildMissingChildren.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x14001DAA0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 *     ACPIBuildPdo @ 0x14004FAEC (ACPIBuildPdo.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     ACPIDetectPdoMatch @ 0x1400C2330 (ACPIDetectPdoMatch.c)
 *     ACPIBuildFlushQueue @ 0x1400C7EBC (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPIDetectPdoDevices(ULONG_PTR a1, PVOID *a2)
{
  PVOID *v2; // r13
  ULONG_PTR v3; // rbp
  unsigned int *v4; // r12
  unsigned int v5; // esi
  __int64 DeviceExtension; // rbx
  KIRQL v7; // di
  __int64 v8; // rdx
  int v9; // edx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rdi
  ULONG_PTR v13; // rdi
  KIRQL v14; // dl
  ULONG_PTR v15; // r13
  char v16; // r14
  __int64 v17; // r9
  KIRQL v18; // al
  __int64 v19; // rcx
  __int64 v20; // rdx
  char v21; // bp
  __int64 v22; // rdx
  unsigned int v24; // eax
  __int64 v25; // rax
  _DWORD *v26; // rdi
  unsigned int v27; // r14d
  KIRQL v28; // al
  KIRQL v29; // r8
  __int64 v30; // rcx
  __int64 j; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // esi
  __int64 v35; // r13
  NTSTATUS v36; // eax
  int v37; // edx
  __int64 i; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r9
  const char *v42; // rcx
  const char *v43; // r8
  int v44; // r9d
  __int64 v45; // r9
  _DWORD *Pool2; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbp
  __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v56; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0LL;
  v5 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( v2 && *v2 )
  {
    v5 = *(_DWORD *)*v2;
    v4 = (unsigned int *)*v2;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x29u) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(DeviceExtension);
  }
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x2Au) )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFBFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(DeviceExtension + 1008) & 0x200LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 1008), 0xFFFFFFFFFFFFFDFFuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  LOBYTE(v8) = 1;
  v10 = ACPIBuildFlushQueue(DeviceExtension, v8);
  if ( v10 < 0 )
  {
    v41 = *(_QWORD *)(DeviceExtension + 8);
    v42 = byte_140075A82;
    v43 = byte_140075A82;
    if ( (v41 & 0x200000000000LL) != 0 )
    {
      v42 = *(const char **)(DeviceExtension + 608);
      if ( (v41 & 0x400000000000LL) != 0 )
        v43 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v10;
    v44 = 20;
    goto LABEL_76;
  }
  v10 = ACPIDevicePowerFlushQueue(DeviceExtension);
  if ( v10 < 0 )
  {
    v45 = *(_QWORD *)(DeviceExtension + 8);
    v42 = byte_140075A82;
    v43 = byte_140075A82;
    if ( (v45 & 0x200000000000LL) != 0 )
    {
      v42 = *(const char **)(DeviceExtension + 608);
      if ( (v45 & 0x400000000000LL) != 0 )
        v43 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v10;
    v44 = 21;
LABEL_76:
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      10,
      v44,
      (__int64)&WPP_d1301130f75538ac6625be8197f7663e_Traceguids,
      v10,
      DeviceExtension,
      (__int64)v42,
      (__int64)v43);
    return (unsigned int)v10;
  }
  LOBYTE(v11) = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v12 = *(_QWORD *)(DeviceExtension + 800);
  if ( v12 == DeviceExtension + 800 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
    goto LABEL_28;
  }
  v13 = v12 - 816;
  ACPIInitReferenceDeviceExtension(v13, v11);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  v15 = 0LL;
  v16 = 0;
  while ( 1 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v13 + 8), 0x100uLL);
    v56 = 0LL;
    if ( (int)ACPIGet(v13, 1096045407, -1878783998, 0, 0, 0LL, 0LL, (__int64)&v56, 0LL) < 0
      || (*(_QWORD *)(v13 + 8) & 0x2000000000002LL) != 0
      && ((AcpiOverrideAttributes & 0x80000) == 0 || (*(_DWORD *)(v13 + 1008) & 0x200000LL) == 0) )
    {
      goto LABEL_18;
    }
    if ( (unsigned __int8)ACPIDetectPdoMatch(v13, v4) )
    {
      if ( (*(_BYTE *)(v13 + 8) & 0x20) != 0 )
      {
        v22 = *(_QWORD *)(v13 + 768);
        if ( v22 )
        {
          if ( v4 )
          {
            for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
            {
              if ( *(_QWORD *)&v4[2 * i + 2] == v22 )
              {
                if ( (*(_DWORD *)(v13 + 1008) & 0x20000000) == 0 )
                  goto LABEL_18;
                --v5;
                goto LABEL_26;
              }
            }
          }
          if ( (*(_DWORD *)(v13 + 1008) & 0x20000000) == 0 )
          {
            ++v5;
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 8), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_26:
            v16 = 1;
          }
        }
      }
    }
    else
    {
      LOBYTE(v17) = (*(_BYTE *)(DeviceExtension + 8) & 0x10) == 0;
      if ( (int)ACPIBuildPdo(*(_QWORD *)(v3 + 8), v13, *(_QWORD *)(DeviceExtension + 784), v17) >= 0 )
      {
        ++v5;
        goto LABEL_26;
      }
    }
LABEL_18:
    v18 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v19 = *(_QWORD *)(v13 + 816);
    LOBYTE(v20) = v18;
    if ( v19 == DeviceExtension + 800 )
    {
      v21 = 1;
    }
    else
    {
      v15 = v19 - 816;
      ACPIInitReferenceDeviceExtension(v19 - 816, v20);
      v21 = 0;
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v20);
    ACPIInitDereferenceDeviceExtensionUnlocked(v13);
    if ( v21 )
      break;
    v3 = a1;
    v13 = v15;
  }
  v2 = a2;
  if ( !v16 )
  {
LABEL_28:
    if ( v4 )
      return 0LL;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 16LL, 1148216129LL);
    if ( Pool2 )
    {
      *Pool2 = 0;
      *v2 = Pool2;
      return 0LL;
    }
    return 3221225626LL;
  }
  v24 = 16;
  if ( v5 )
    v24 = 8 * v5 + 8;
  v25 = ExAllocatePool2(64LL, v24, 1148216129LL);
  v26 = (_DWORD *)v25;
  if ( !v25 )
    return 3221225626LL;
  if ( v4 )
  {
    memmove((void *)(v25 + 8), v4 + 2, 8LL * *v4);
    v27 = *v4;
  }
  else
  {
    v27 = 0;
  }
  v28 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v29 = v28;
  v30 = *(_QWORD *)(DeviceExtension + 800);
  if ( v30 == DeviceExtension + 800 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v28);
    ExFreePoolWithTag(v26, 0);
  }
  else
  {
    for ( j = v30 - 816; j; j = v33 - 816 )
    {
      v32 = *(_QWORD *)(j + 8);
      if ( (v32 & 0x20) != 0 )
      {
        v39 = *(_QWORD *)(j + 768);
        if ( v39 )
        {
          if ( ((v32 & 0x2000000000002LL) == 0
             || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(j + 1008) & 0x200000) != 0)
            && (*(_DWORD *)(j + 1008) & 0x20000000) == 0 )
          {
            if ( v27 >= v5 )
              break;
            v40 = v27++;
            *(_QWORD *)&v26[2 * v40 + 2] = v39;
            _InterlockedAnd64((volatile signed __int64 *)(j + 8), 0xFFFFFFFFFFFFFEFFuLL);
          }
        }
      }
      if ( v5 == v27 )
        break;
      v33 = *(_QWORD *)(j + 816);
      if ( v33 == DeviceExtension + 800 )
        break;
    }
    *v26 = v27;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v29);
    if ( v4 )
      v34 = *v4;
    else
      v34 = 0;
    if ( v34 < v27 )
    {
      do
      {
        v35 = v34;
        v36 = ObReferenceObjectByPointer(*(PVOID *)&v26[2 * v34 + 2], 0, 0LL, 0);
        if ( v36 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v37) = 2;
            WPP_RECORDER_SF_qL(
              WPP_GLOBAL_Control->DeviceExtension,
              v37,
              22,
              22,
              (__int64)&WPP_d1301130f75538ac6625be8197f7663e_Traceguids,
              *(_QWORD *)&v26[2 * v34 + 2],
              v36);
          }
          --*v26;
          --v34;
          v47 = (unsigned int)*v26;
          --v27;
          v48 = *(_QWORD *)&v26[2 * v47 + 2];
          *(_QWORD *)&v26[2 * v47 + 2] = *(_QWORD *)&v26[2 * v35 + 2];
          *(_QWORD *)&v26[2 * v35 + 2] = v48;
        }
        ++v34;
      }
      while ( v34 < v27 );
      v2 = a2;
    }
    if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x25u) )
    {
      v49 = 0LL;
      if ( *v26 )
      {
        do
        {
          v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v26[2 * v49 + 2] + 64LL) + 8LL);
          if ( (v50 & 0x12000000000LL) != 0 && (v50 & 0x40000000000000LL) != 0 )
            IoDuplicateDependency(*(_QWORD *)(DeviceExtension + 768));
          if ( (v50 & 0x3000000000LL) != 0 )
          {
            v51 = 0LL;
            if ( *v26 )
            {
              v52 = v50 & 0x1000000000LL;
              do
              {
                v53 = *(_QWORD *)&v26[2 * v51 + 2];
                if ( (_DWORD)v51 != (_DWORD)v49
                  && (((-(__int64)(v52 != 0) & 0x2000000000LL) + 0x10000000000LL) & *(_QWORD *)(*(_QWORD *)(v53 + 64)
                                                                                              + 8LL)) != 0
                  && (*(_QWORD *)(*(_QWORD *)(v53 + 64) + 8LL) & 0x40000000000000LL) != 0 )
                {
                  IoSetDependency(*(_QWORD *)&v26[2 * v49 + 2], v53, 2LL);
                }
                v51 = (unsigned int)(v51 + 1);
              }
              while ( (unsigned int)v51 < *v26 );
            }
          }
          v49 = (unsigned int)(v49 + 1);
        }
        while ( (unsigned int)v49 < *v26 );
        v2 = a2;
      }
    }
    if ( v4 )
      ExFreePoolWithTag(*v2, 0);
    *v2 = v26;
  }
  return 0LL;
}
