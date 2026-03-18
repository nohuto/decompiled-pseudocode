/*
 * XREFs of ACPIDetectDockDevices @ 0x14001CBDC
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1400C5BD8 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x14001E418 (ACPIExtListTestElement.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 *     ACPIBuildPdo @ 0x14004FAEC (ACPIBuildPdo.c)
 *     ACPIExtListExitEnumEarly @ 0x140055C8C (ACPIExtListExitEnumEarly.c)
 *     ACPIExtListIsMemberOfRelation @ 0x140060660 (ACPIExtListIsMemberOfRelation.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIDetectDockDevices(__int64 a1, PVOID *a2)
{
  char v2; // bl
  int v4; // esi
  unsigned int *v5; // r14
  unsigned int v6; // r15d
  __int64 i; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int64 Pool2; // rax
  _DWORD *v12; // rsi
  __int64 v13; // rcx
  const char *v14; // rax
  const char *v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 j; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int *v23; // r14
  unsigned int v24; // ecx
  PVOID *v25; // r12
  __int64 v26; // r13
  PVOID *v27; // r15
  NTSTATUS v28; // eax
  int v29; // edx
  __int64 v30; // rdx
  void *v31; // rcx
  __int64 v32; // [rsp+40h] [rbp-29h]
  __int64 v33; // [rsp+50h] [rbp-19h] BYREF
  __int64 v34; // [rsp+58h] [rbp-11h]
  KSPIN_LOCK *v35; // [rsp+60h] [rbp-9h]
  __int128 v36; // [rsp+68h] [rbp-1h]
  __int64 v37; // [rsp+78h] [rbp+Fh]
  int v38; // [rsp+80h] [rbp+17h]
  int v39; // [rsp+84h] [rbp+1Bh]
  __int64 v40; // [rsp+D0h] [rbp+67h] BYREF
  PVOID *v41; // [rsp+D8h] [rbp+6Fh]
  unsigned int *v42; // [rsp+E0h] [rbp+77h]

  v41 = a2;
  v2 = 0;
  v39 = 0;
  v42 = 0LL;
  v4 = 0;
  v40 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v36 = 0LL;
  if ( a2 && *a2 )
  {
    v6 = *(_DWORD *)*a2;
    v5 = (unsigned int *)*a2;
    v42 = (unsigned int *)*a2;
  }
  v34 = 0LL;
  v33 = a1 + 800;
  v37 = 816LL;
  v35 = &AcpiDeviceTreeLock;
  v38 = 1;
  for ( i = ACPIExtListStartEnum(&v33); ; i = ACPIExtListEnumNext(&v33) )
  {
    v8 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(&v33, v4 >= 0) )
      break;
    if ( !v8 )
    {
      ACPIExtListExitEnumEarly(&v33);
      break;
    }
    if ( _bittest64((const signed __int64 *)(v8 + 8), 0x39u) )
    {
      v40 = 0LL;
      v4 = ACPIGet(v8, 1096045407, -1878783998, 0, 0, 0LL, 0LL, (__int64)&v40, 0LL);
      if ( (*(_QWORD *)(v8 + 8) & 0x2000000000002LL) == 0
        || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v8 + 1008) & 0x200000) != 0 )
      {
        if ( !*(_QWORD *)(v8 + 768) )
          v4 = ACPIBuildPdo(*(_QWORD *)(*(_QWORD *)(a1 + 768) + 8LL), v8, *(_QWORD *)(a1 + 768), 0LL);
        v13 = *(_QWORD *)(v8 + 768);
        if ( v13 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v13, v5) )
            ++v6;
        }
      }
    }
  }
  if ( v4 < 0 )
  {
    v14 = byte_140075A82;
    v15 = byte_140075A82;
    if ( v8 )
    {
      v16 = *(_QWORD *)(v8 + 8);
      v2 = v8;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v14 = *(const char **)(v8 + 608);
        if ( (v16 & 0x400000000000LL) != 0 )
          v15 = *(const char **)(v8 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = (__int64)v15;
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v15,
        18,
        10,
        (__int64)&WPP_d1301130f75538ac6625be8197f7663e_Traceguids,
        v4,
        v2,
        (__int64)v14,
        v32);
    }
    return (unsigned int)v4;
  }
  else
  {
    if ( v5 )
      v9 = v6 == *v5;
    else
      v9 = v6 == 0;
    if ( v9 )
      return 0LL;
    Pool2 = ExAllocatePool2(64LL, 8 * v6 + 8, 1148216129LL);
    v12 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      if ( v5 )
      {
        memmove((void *)(Pool2 + 8), v5 + 2, 8LL * *v5);
        v17 = *v5;
      }
      else
      {
        v17 = 0;
      }
      v34 = 0LL;
      v33 = a1 + 800;
      v37 = 816LL;
      v35 = &AcpiDeviceTreeLock;
      v38 = 2;
      for ( j = ACPIExtListStartEnum(&v33); ; j = ACPIExtListEnumNext(&v33) )
      {
        v20 = j;
        LOBYTE(v19) = v6 > v17;
        if ( !(unsigned __int8)ACPIExtListTestElement(&v33, v19) )
          break;
        if ( v17 < v6 )
        {
          v21 = *(_QWORD *)(v20 + 8);
          if ( ((v21 & 0x2000000000002LL) == 0
             || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v20 + 1008) & 0x200000) != 0)
            && (v21 & 0x200000000000000LL) != 0
            && *(_QWORD *)(v20 + 768) )
          {
            v22 = v17++;
            *(_QWORD *)&v12[2 * v22 + 2] = *(_QWORD *)(v20 + 784);
          }
        }
      }
      v23 = v42;
      *v12 = v17;
      if ( v23 )
        v24 = *v23;
      else
        v24 = 0;
      v25 = v41;
      if ( v24 < v17 )
      {
        v26 = v17 - v24;
        v27 = (PVOID *)&v12[2 * v24 + 2];
        do
        {
          v28 = ObReferenceObjectByPointer(*v27, 0, 0LL, 0);
          if ( v28 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v29) = 2;
              WPP_RECORDER_SF_qL(
                WPP_GLOBAL_Control->DeviceExtension,
                v29,
                21,
                11,
                (__int64)&WPP_d1301130f75538ac6625be8197f7663e_Traceguids,
                (char)*v27,
                v28);
            }
            v30 = (unsigned int)--*v12;
            v31 = *(void **)&v12[2 * v30 + 2];
            *(_QWORD *)&v12[2 * v30 + 2] = *v27;
            *v27 = v31;
          }
          ++v27;
          --v26;
        }
        while ( v26 );
        v25 = v41;
      }
      if ( v23 )
        ExFreePoolWithTag(*v25, 0);
      *v25 = v12;
      return 0LL;
    }
    return 3221225626LL;
  }
}
