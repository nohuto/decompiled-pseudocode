/*
 * XREFs of ACPIDetectEjectDevices @ 0x1400398D4
 * Callers:
 *     ACPIDockIrpQueryEjectRelations @ 0x1400ABC08 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400C69F0 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x14001E418 (ACPIExtListTestElement.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     ACPIBuildMissingEjectionRelations @ 0x140039C58 (ACPIBuildMissingEjectionRelations.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 *     ACPIExtListExitEnumEarly @ 0x140055C8C (ACPIExtListExitEnumEarly.c)
 *     ACPIExtListIsMemberOfRelation @ 0x140060660 (ACPIExtListIsMemberOfRelation.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1400C2428 (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectEjectDevices(__int64 a1, PVOID *a2, __int64 a3)
{
  unsigned int *v3; // rsi
  unsigned int v4; // r14d
  char *i; // rax
  char *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  PVOID *v12; // r12
  __int64 v13; // rcx
  bool v14; // zf
  __int64 Pool2; // rax
  _DWORD *v16; // rdi
  unsigned int v18; // ebx
  char *j; // rax
  __int64 v20; // rdx
  char *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rbx
  PVOID *v30; // r14
  NTSTATUS v31; // eax
  int v32; // edx
  __int64 v33; // rdx
  void *v34; // rcx
  __int64 v35; // [rsp+40h] [rbp-40h] BYREF
  __int64 v36; // [rsp+48h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+68h] [rbp-18h]
  int v40; // [rsp+70h] [rbp-10h]
  int v41; // [rsp+74h] [rbp-Ch]
  __int64 v42; // [rsp+C0h] [rbp+40h] BYREF
  PVOID *v43; // [rsp+C8h] [rbp+48h]

  v43 = a2;
  *(_OWORD *)NewIrql = 0LL;
  v41 = 0;
  v3 = 0LL;
  v42 = 0LL;
  v4 = 0;
  ACPIBuildMissingEjectionRelations();
  if ( a2 && *a2 )
  {
    v4 = *(_DWORD *)*a2;
    v3 = (unsigned int *)*a2;
  }
  v36 = 0LL;
  v35 = a1 + 832;
  v39 = 848LL;
  SpinLock = &AcpiDeviceTreeLock;
  v40 = 1;
  for ( i = ACPIExtListStartEnum((__int64)&v35); ; i = ACPIExtListEnumNext((__int64)&v35) )
  {
    v9 = i;
    if ( *(_QWORD *)&NewIrql[8] + v39 == v35 )
      break;
    if ( v40 == 1 )
    {
      ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    if ( (*((_QWORD *)v9 + 1) & 0x2000000000002LL) == 0 )
    {
      if ( *((_QWORD *)v9 + 98) )
      {
        v10 = ACPIDetectCouldExtensionBeInRelation((_DWORD)v9, (_DWORD)v3, 0, 0, (__int64)&v42);
        if ( !v42 && v10 >= 0 )
        {
          v11 = *((_QWORD *)v9 + 98);
          if ( v11 )
          {
            if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v11, v3) )
              ++v4;
          }
        }
      }
    }
  }
  v12 = v43;
  if ( v40 )
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
  if ( a3 )
  {
    if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
    {
      v13 = *(_QWORD *)(a3 + 784);
      if ( v13 )
      {
        if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v13, v3) )
          ++v4;
      }
    }
  }
  if ( v3 )
    v14 = v4 == *v3;
  else
    v14 = v4 == 0;
  if ( !v14 )
  {
    Pool2 = ExAllocatePool2(256LL, 8 * v4 + 8, 1148216129LL);
    v16 = (_DWORD *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    if ( v3 )
    {
      memmove((void *)(Pool2 + 8), v3 + 2, 8LL * *v3);
      v18 = *v3;
    }
    else
    {
      v18 = 0;
    }
    v36 = 0LL;
    v35 = a1 + 832;
    v39 = 848LL;
    SpinLock = &AcpiDeviceTreeLock;
    v40 = 1;
    for ( j = ACPIExtListStartEnum((__int64)&v35); ; j = ACPIExtListEnumNext((__int64)&v35) )
    {
      v21 = j;
      LOBYTE(v20) = v4 > v18;
      if ( !ACPIExtListTestElement((__int64)&v35, v20) )
        break;
      if ( !v21 )
      {
        ACPIExtListExitEnumEarly(&v35);
        break;
      }
      if ( (*((_QWORD *)v21 + 1) & 0x202000000000002LL) == 0 )
      {
        v22 = *((_QWORD *)v21 + 98);
        if ( v22 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v22, v3) && v18 < v4 )
          {
            v24 = v18++;
            *(_QWORD *)&v16[2 * v24 + 2] = v23;
          }
        }
      }
    }
    if ( a3 )
    {
      if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
      {
        v25 = *(_QWORD *)(a3 + 784);
        if ( v25 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v25, v3) && v18 < v4 )
          {
            v27 = v18++;
            *(_QWORD *)&v16[2 * v27 + 2] = v26;
          }
        }
      }
    }
    *v16 = v18;
    if ( v3 )
      v28 = *v3;
    else
      v28 = 0;
    if ( v28 < v18 )
    {
      v29 = v18 - v28;
      v30 = (PVOID *)&v16[2 * v28 + 2];
      do
      {
        v31 = ObReferenceObjectByPointer(*v30, 0, 0LL, 0);
        if ( v31 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v32) = 2;
            WPP_RECORDER_SF_qL(
              WPP_GLOBAL_Control->DeviceExtension,
              v32,
              22,
              15,
              (__int64)&WPP_d1301130f75538ac6625be8197f7663e_Traceguids,
              (char)*v30,
              v31);
          }
          v33 = (unsigned int)--*v16;
          v34 = *(void **)&v16[2 * v33 + 2];
          *(_QWORD *)&v16[2 * v33 + 2] = *v30;
          *v30 = v34;
        }
        ++v30;
        --v29;
      }
      while ( v29 );
    }
    if ( v3 )
      ExFreePoolWithTag(*v12, 0);
    *v12 = v16;
  }
  return 0LL;
}
