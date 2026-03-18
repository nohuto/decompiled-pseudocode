/*
 * XREFs of DpiPdoPollingWorkItem @ 0x140256B00
 * Callers:
 *     DpiCleanUpGlobalState @ 0x14023E524 (DpiCleanUpGlobalState.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1400174A8 (DpiFdoGetChildDescriptor.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DpiFdoInvalidateChildStatus @ 0x140244D74 (DpiFdoInvalidateChildStatus.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x14024B800 (DpiFdoPendingCreatePdoCompletion.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

void __fastcall DpiPdoPollingWorkItem(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int128 *v3; // rbx
  int v4; // r12d
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbp
  _QWORD *ChildDescriptor; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // [rsp+40h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+48h] [rbp-30h]
  __int128 *v11; // [rsp+88h] [rbp+10h]

  LOBYTE(v9) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v9, 0LL, 0xEu, 0);
  v3 = v10;
  v11 = v10;
  v4 = 0;
  while ( 1 )
  {
    KeWaitForSingleObject(qword_140169070, Executive, 0, 0, 0LL);
    v5 = qword_140169060;
    if ( (__int64 *)qword_140169060 == &qword_140169060 )
    {
      v5 = 0LL;
      _InterlockedExchange(&dword_140169058, 0);
    }
    else
    {
      if ( *(__int64 **)(qword_140169060 + 8) != &qword_140169060
        || (v6 = *(_QWORD *)qword_140169060, *(_QWORD *)(*(_QWORD *)qword_140169060 + 8LL) != qword_140169060) )
      {
        __fastfail(3u);
      }
      qword_140169060 = *(_QWORD *)qword_140169060;
      *(_QWORD *)(v6 + 8) = &qword_140169060;
    }
    KeReleaseMutex((PRKMUTEX)qword_140169070, 0);
    if ( !v5 )
      break;
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL);
    if ( !Context )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 484) )
        DpiCheckForOutstandingD3Requests(v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( *(_DWORD *)(v7 + 236) == 2 )
      {
        if ( *(_DWORD *)(v7 + 4120) != 1 && *(_DWORD *)(v7 + 284) == 1 )
        {
          v4 = DpiFdoInvalidateChildStatus(
                 *(_QWORD *)(v5 + 24),
                 *(_DWORD *)(v5 + 32),
                 *(_BYTE *)(v5 + 40),
                 *(_BYTE *)(v5 + 41),
                 *(_BYTE *)(v5 + 42),
                 1,
                 v3);
LABEL_18:
          if ( *(_BYTE *)(v7 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
          KeLeaveCriticalRegion();
          goto LABEL_21;
        }
        v4 = -1073741661;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 6497;
      }
      else
      {
        v4 = -1073741810;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 6489;
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3440), 1u);
      ChildDescriptor = DpiFdoGetChildDescriptor(v7, *(_DWORD *)(v5 + 32));
      KeWaitForSingleObject((PVOID)(v7 + 3544), Executive, 0, 0, 0LL);
      DpiFdoPendingCreatePdoCompletion(*(_QWORD *)(v5 + 24), (__int64)ChildDescriptor);
      KeReleaseMutex((PRKMUTEX)(v7 + 3544), 0);
      ExReleaseResourceLite((PERESOURCE)(v7 + 3440));
      KeLeaveCriticalRegion();
      v3 = v11;
      goto LABEL_18;
    }
LABEL_21:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 64), (PVOID)v5, 0x20u);
    ExFreeToNPagedLookasideList(&stru_140168EC0, (PVOID)v5);
    if ( v4 == 259 )
    {
      _InterlockedExchange(&dword_140169058, 0);
      KeSetTimer(&stru_140168FD0, (LARGE_INTEGER)-3000000LL, &stru_140169010);
      break;
    }
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v9);
}
