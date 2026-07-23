/*
 * XREFs of LdrpPrepareModuleForExecution @ 0x18011AB50
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18007B430 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrpAddNodeServiceTag @ 0x1800E1CA0 (LdrpAddNodeServiceTag.c)
 *     LdrpInitializeGraphRecurse @ 0x1800E73B0 (LdrpInitializeGraphRecurse.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180117E90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpCondenseGraph @ 0x180118F64 (LdrpCondenseGraph.c)
 *     LdrpNotifyLoadOfGraph @ 0x1801195E0 (LdrpNotifyLoadOfGraph.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x1801196CC (LdrpSendShimEngineInitialNotifications.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpPrepareModuleForExecution(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  void *SubProcessTag; // rdx
  int v7; // ebp
  __int64 *v8; // r15
  int v9; // eax
  _WORD *v10; // rbx
  unsigned int (__fastcall *v11)(_WORD *, _QWORD, __int64); // r14
  __int64 v12; // rax
  __int64 (__fastcall *v14)(__int64 *); // rbx
  __int64 v15; // rax
  __int64 *v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rcx
  unsigned int (__fastcall *v19)(_WORD *, _QWORD, __int64); // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  if ( LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    return v4;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) )
  {
    case 5:
      LdrpCondenseGraph(*(_QWORD *)(a1 + 152));
      break;
    case 6:
      break;
    case 7:
      goto LABEL_30;
    default:
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) - 8) >= 2 )
        return 3221225701LL;
      return v4;
  }
  if ( (*(_DWORD *)(a1 + 104) & 0x20) == 0 )
  {
    SubProcessTag = NtCurrentTeb()->SubProcessTag;
    if ( (_DWORD)SubProcessTag )
      LdrpAddNodeServiceTag(*(_QWORD *)(a1 + 152), (unsigned int)SubProcessTag);
  }
  v4 = LdrpNotifyLoadOfGraph(*(_QWORD *)(a1 + 152));
  if ( (v4 & 0x80000000) != 0 )
    return v4;
  v4 = 0;
  v7 = dword_1801C57CC;
  v8 = *(__int64 **)(a1 + 152);
  v19 = 0LL;
  if ( dword_1801C57CC )
  {
    if ( g_pShimmedModuleList )
    {
      dword_1801C57CC = 0;
      v9 = LdrpGetProcApphelpCheckModule(&v19);
      v4 = v9;
      if ( v9 >= 0 )
      {
        v10 = g_pShimmedModuleList;
        if ( *(_WORD *)g_pShimmedModuleList )
        {
          v11 = v19;
          while ( v11(v10, 0LL, 1LL) )
          {
            v12 = -1LL;
            while ( v10[++v12] != 0 )
              ;
            v10 += v12 + 1;
            if ( !*v10 )
              goto LABEL_22;
          }
          v4 = -1073741502;
        }
        else
        {
LABEL_22:
          v14 = (__int64 (__fastcall *)(__int64 *))(__ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
          RtlEnterCriticalSection(&LdrpDllNotificationLock);
          if ( LdrInitState < 3 && (*(_DWORD *)(*v8 - 56) & 0x800) == 0 )
            LdrpSendShimEngineInitialNotifications(v8, v14);
          RtlLeaveCriticalSection(&LdrpDllNotificationLock);
        }
      }
      else
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          4338,
          (__int64)"LdrpDynamicShimModule",
          0,
          "Getting ApphelpCheckModule failed with status 0x%08lx\n",
          v9);
        v4 = 0;
      }
    }
    if ( v7 == 1 && g_pShimmedModuleList )
    {
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
      g_pShimmedModuleList = 0LL;
      g_pShimmedModuleListLength = 0LL;
    }
  }
  dword_1801C57CC = v7;
  if ( (v4 & 0x80000000) != 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      2644,
      (__int64)"LdrpPrepareModuleForExecution",
      1,
      "Failed to load for appcompat reasons\n");
    return v4;
  }
LABEL_30:
  v15 = *(_QWORD *)(a1 + 176);
  if ( v15 && (*(_BYTE *)(v15 + 32) & 1) == 0 )
  {
    LdrpAcquireLoaderLock();
    v16 = *(__int64 **)(a1 + 152);
    LOBYTE(v19) = 0;
    v17 = LdrpInitializeGraphRecurse(v16, a2, &v19);
    LdrpReleaseLoaderLock(v18, 2, v17);
    return v17;
  }
  return v4;
}
