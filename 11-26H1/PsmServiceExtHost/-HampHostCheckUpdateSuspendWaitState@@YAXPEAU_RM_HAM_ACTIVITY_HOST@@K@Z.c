/*
 * XREFs of ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18000C220 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000CEE0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18003F860 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006AED4 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18007F970 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180014294 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800142F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F27C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F30C (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180042B9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180061E60 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006372C (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampHostCheckUpdateSuspendWaitState(struct _RM_HAM_ACTIVITY_HOST *a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  struct _HOST_ACTIVITY_MANAGER *v8; // rcx
  struct _HAM_PACKAGE *v9; // rdi
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // ecx
  _BYTE v13[4]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-35h] BYREF
  __int64 v15; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v18; // [rsp+70h] [rbp-9h]
  int v19; // [rsp+78h] [rbp-1h]
  int v20; // [rsp+7Ch] [rbp+3h]
  __int64 *v21; // [rsp+80h] [rbp+7h]
  __int64 v22; // [rsp+88h] [rbp+Fh]
  _BYTE *v23; // [rsp+90h] [rbp+17h]
  __int64 v24; // [rsp+98h] [rbp+1Fh]

  v14 = 0;
  LODWORD(v15) = 0;
  if ( (*((_QWORD *)a1 + 83) & 0x10000000000LL) != 0 )
  {
    v4 = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v14, (union _RM_OPTIMIZATION_STATE *)&v15);
    if ( (v14 & 0x80u) == 0 || (v15 & 0x80u) != 0LL )
    {
      if ( (v14 & 0x100) == 0 || (v15 & 0x100) != 0 )
      {
        v6 = *((_QWORD *)a1 + 83);
        if ( (v6 & 0x800000000LL) != 0 )
        {
          v4 = 0;
        }
        else if ( (v6 & 0x40000000000LL) == 0 || (v4 = 0, (v6 & 0x30000) == 0) )
        {
          v4 = 1;
        }
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  if ( a2 != v4 )
  {
    if ( !v4 && a2 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                 + 120)
                     + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
      HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)(v7 + 184));
      v8 = *(struct _HOST_ACTIVITY_MANAGER **)(v7 + 184);
      if ( *(_DWORD *)(v7 + 268) )
      {
        ++*(_QWORD *)(v7 + 280);
        HampManagerReleaseLockExclusive(v8);
        RtlWakeAddressAll(v7 + 280);
      }
      else
      {
        HampManagerReleaseLockExclusive(v8);
      }
      if ( HampHostIsQuiesceSerialized(a1) && HampHostIsResumed(a1) )
      {
        v9 = *(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL);
        HampPkgAcquireLockExclusive(v9);
        HampPkgReleaseLockExclusive(v9);
        RtlWakeAllConditionVariable((char *)v9 + 320);
      }
    }
    v5 = *((_QWORD *)a1 + 88);
    if ( v5 )
    {
      HampDepGroupAcquireLockExclusive(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 88));
      if ( !a2 || v4 )
        ++*(_DWORD *)(v5 + 88);
      else
        --*(_DWORD *)(v5 + 88);
      v12 = *(_DWORD *)(v5 + 88);
      if ( (unsigned int)dword_1800E12B0 > 5 )
      {
        v15 = *((_QWORD *)a1 - 3);
        *(_QWORD *)&EventDescriptor.Id = *(_QWORD *)v5;
        v13[0] = v4;
        v14 = v12;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v12,
          (unsigned int)&unk_1800CD093,
          v10,
          v11,
          (__int64)&EventDescriptor,
          (__int64)&v14,
          (__int64)&v15,
          (__int64)v13);
      }
      HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v5);
    }
    else if ( (unsigned int)dword_1800E12B0 > 5 )
    {
      v15 = *((_QWORD *)a1 - 3);
      v13[0] = v4;
      v23 = v13;
      v24 = 1LL;
      v21 = &v15;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800E12B8;
      v22 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)off_1800E12B8;
      v18 = &unk_1800CD8FC;
      UserData.Reserved = 2;
      v19 = 52;
      v20 = 1;
      v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E12D0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
  }
}
