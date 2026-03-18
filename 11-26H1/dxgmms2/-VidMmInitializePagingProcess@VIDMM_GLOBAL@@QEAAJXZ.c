/*
 * XREFs of ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400A320C
 * Callers:
 *     VidMmInitializePagingProcess @ 0x14004D660 (VidMmInitializePagingProcess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x140057C78 (VidSchiCreateNodeSchedulingLog.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009A9A8 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009D390 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?CreatePagingProcessPagingQueues@VIDMM_DEVICE@@QEAAJXZ @ 0x1400A70A8 (-CreatePagingProcessPagingQueues@VIDMM_DEVICE@@QEAAJXZ.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400AAA6C (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     VidSchCreateSystemDevices @ 0x1400FC140 (VidSchCreateSystemDevices.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmInitializePagingProcess(VIDMM_GLOBAL *this)
{
  int inited; // edi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int i; // ebx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int j; // ebx
  unsigned int v10; // edx
  struct _VIDSCH_NODE **v11; // r8
  struct _VIDSCH_NODE **v12; // rax
  int NodeSchedulingLog; // eax
  unsigned int k; // ebx
  _DWORD *v15; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  *((_BYTE *)this + 41068) = 1;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  inited = VIDMM_PAGING_PROCESS::InitPagingProcess((VIDMM_GLOBAL *)((char *)this + 40512), this);
  if ( inited < 0 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 22088;
    goto LABEL_3;
  }
  inited = VidSchCreateSystemDevices(*(struct _VIDSCH_GLOBAL **)(*((_QWORD *)this + 2) + 744LL));
  if ( inited < 0 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 22099;
    goto LABEL_3;
  }
  inited = VIDMM_DEVICE::CreatePagingProcessPagingQueues(*((VIDMM_DEVICE **)this + 5065));
  if ( inited < 0 )
    goto LABEL_30;
  inited = VIDMM_GLOBAL::InitDmaPools(this);
  if ( inited < 0 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 22120;
    goto LABEL_3;
  }
  inited = VIDMM_GLOBAL::CreatePagingFenceObjects(this);
  if ( inited < 0 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 22131;
LABEL_3:
    WdLogGlobalForLineNumber = v4;
LABEL_4:
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    goto LABEL_30;
  }
  for ( i = 0; i < *((_DWORD *)this + 1738); ++i )
  {
    v6 = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0);
    inited = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(1LL, v6);
      WdLogGlobalForLineNumber = 22143;
      goto LABEL_4;
    }
  }
  v7 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 41068) = 1;
  v8 = *(_QWORD *)(v7 + 744);
  if ( *(int *)(*(_QWORD *)(v8 + 16) + 3044LL) >= 2500 )
  {
    for ( j = 0; j < *(_DWORD *)(v8 + 88); ++j )
    {
      v10 = *(_DWORD *)(v8 + 768);
      v11 = *(struct _VIDSCH_NODE ***)(v8 + 696);
      if ( j >= v10 )
        v12 = *(struct _VIDSCH_NODE ***)(v8 + 696);
      else
        v12 = &v11[j];
      if ( (*((_DWORD *)*v12 + 3) & 2) != 0 )
      {
        if ( j < v10 )
          v11 += j;
        NodeSchedulingLog = VidSchiCreateNodeSchedulingLog(*v11, 0x800u);
        inited = NodeSchedulingLog;
        if ( NodeSchedulingLog < 0 )
        {
          WdLogSingleEntry1(1LL, NodeSchedulingLog);
          WdLogGlobalForLineNumber = 22159;
          goto LABEL_4;
        }
      }
    }
  }
  inited = 0;
LABEL_30:
  for ( k = 0; k < *((_DWORD *)this + 1738); ++k )
  {
    v15 = *(_DWORD **)(*((_QWORD *)this + 5040) + 8LL * k);
    if ( v15[137] == 1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 352LL))(v15);
  }
  *((_BYTE *)this + 41068) = 0;
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)inited;
}
