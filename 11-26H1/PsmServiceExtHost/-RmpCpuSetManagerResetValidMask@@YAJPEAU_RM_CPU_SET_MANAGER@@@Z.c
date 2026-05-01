/*
 * XREFs of ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180086694
 * Callers:
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18005BDB0 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800847B8 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$07@@@Z @ 0x1800030F4 (--$Write@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180006CE0 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800083CC (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18005F0EC (-RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z.c)
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18006EB6C (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18006FDF4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800849A4 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x180085544 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180085B84 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180086AE4 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x18008C5E8 (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x18008C74C (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerResetValidMask(struct _RM_CPU_SET_MANAGER *a1)
{
  int CpuSetInformation; // eax
  struct _SYSTEM_CPU_SET_INFORMATION *v3; // r15
  unsigned int v4; // ebx
  unsigned int v5; // r10d
  __int64 i; // r8
  int v7; // eax
  __int64 v8; // rbx
  char *v9; // rdx
  signed __int64 v10; // r13
  char *v11; // r12
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rsi
  char v23; // al
  HANDLE CurrentProcess; // rax
  HANDLE v25; // rax
  unsigned int SystemReserveTarget; // esi
  struct _RM_CPU_SET_ALLOCATION *Next; // rax
  char *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v33[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _SYSTEM_CPU_SET_INFORMATION *v34; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v36[32]; // [rsp+60h] [rbp-A0h] BYREF

  v33[0] = 0;
  v34 = 0LL;
  CpuSetInformation = RmpCpuSetManagerGetCpuSetInformation(&v34, v33);
  v3 = v34;
  v4 = CpuSetInformation;
  if ( CpuSetInformation >= 0 )
  {
    memset_0(v36, 0, sizeof(v36));
    v5 = v33[0];
    for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(*(DWORD *)((char *)&v3->Size + i) + i) )
    {
      if ( *(CPU_SET_INFORMATION_TYPE *)((char *)&v3->Type + i) == CpuSetInformation )
      {
        v7 = *(DWORD *)((char *)&v3->CpuSet.Id + i);
        if ( v7 != *((_DWORD *)a1 + 348) )
          v36[(unsigned __int64)(unsigned int)(v7 - 256) >> 16] |= 1LL << v7;
      }
    }
    LOBYTE(v3) = 0;
    v8 = 0LL;
    v9 = (char *)a1 + 88;
    *(_QWORD *)v33 = 32LL;
    v10 = (char *)v36 - (char *)a1;
    v11 = (char *)a1 + 88;
    v12 = 32LL;
    do
    {
      v13 = *(_QWORD *)&v9[v8 + 512];
      v14 = *(_QWORD *)&v9[v8 - 88 + v10];
      v15 = *(_QWORD *)&v9[v8];
      v16 = v14 & ~v13;
      *(_QWORD *)&v35[0] = v13;
      *(_QWORD *)&v9[v8 - 88 + v10] = v16;
      if ( v16 != v15 )
      {
        v17 = v14 & ~(v13 | v15);
        if ( v17 )
        {
          v18 = RtlNumberOfSetBitsUlongPtr(v17, v9, v12);
          *(_QWORD *)&v11[v8] |= v17;
          v9 = (char *)a1 + 88;
          *((_DWORD *)a1 + 349) += v18;
          *(_QWORD *)((char *)a1 + v8 + 344) |= v17;
          *((_DWORD *)a1 + 350) += v18;
          *((_DWORD *)a1 + 353) |= 1u;
          v12 = *(_QWORD *)v33;
          v13 = *(_QWORD *)&v35[0];
        }
        v19 = *(_QWORD *)&v9[v8] & (v13 | ~v14);
        if ( v19 )
        {
          LODWORD(v3) = (unsigned __int8)v3;
          if ( (~*(_QWORD *)&v9[v8 + 256] & v19) != 0 )
            LODWORD(v3) = 1;
          *(_QWORD *)&v11[v8] &= ~v19;
          *((_DWORD *)a1 + 349) -= RtlNumberOfSetBitsUlongPtr(v19, v9, v12);
          v22 = *(_QWORD *)&v11[v8 + 256] & v19;
          if ( v22 )
          {
            *(_QWORD *)((char *)a1 + v8 + 344) &= ~v22;
            *((_DWORD *)a1 + 350) -= RtlNumberOfSetBitsUlongPtr(v22, v20, v21);
          }
          *((_DWORD *)a1 + 353) |= 1u;
          v9 = (char *)a1 + 88;
          v12 = *(_QWORD *)v33;
        }
      }
      v8 += 8LL;
      *(_QWORD *)v33 = --v12;
    }
    while ( v12 );
    v33[0] = (unsigned int)v3;
    v23 = IsNotifyGameModeExtensionRecipientsPresentPresent();
    v3 = v34;
    if ( !v23 )
    {
      CurrentProcess = GetCurrentProcess();
      RmpSystemSetProcessAllowedCpuSets(CurrentProcess, (char *)a1 + 88);
      v25 = GetCurrentProcess();
      RmpSystemSetProcessDefaultCpuSets(v25, (char *)a1 + 88);
    }
    if ( LOBYTE(v33[0]) )
      RmpCpuSetManagerSweepInvalidAllocations(a1);
    SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
    if ( SystemReserveTarget > *((_DWORD *)a1 + 350) )
    {
      memset(v35, 0, sizeof(v35));
      RmpObjectTableEnumerationBegin(
        (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
        (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v35);
      while ( 1 )
      {
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v35);
        v28 = (char *)Next;
        if ( !Next )
          break;
        RmpCpuSetManagerInvalidateAllocation(a1, Next);
        RmpObjectRelease(v28);
      }
      RmpObjectTableEnumerationEnd((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v35);
      RmpCpuSetManagerApplyAllPolicyChanges(a1);
    }
    *((_DWORD *)a1 + 352) = SystemReserveTarget;
    *((_DWORD *)a1 + 351) = 1;
    RmpCpuSetManagerApplyAllPolicyChanges(a1);
    v4 = 0;
  }
  if ( v3 )
    HampFreeHeap(v3);
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
  {
    WORD4(v35[0]) = 32;
    *(_QWORD *)&v35[0] = (char *)a1 + 88;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<8>>(
      v29,
      (__int64)&unk_1800D28AD,
      v30,
      v31,
      (__int64)v35);
  }
  return v4;
}
