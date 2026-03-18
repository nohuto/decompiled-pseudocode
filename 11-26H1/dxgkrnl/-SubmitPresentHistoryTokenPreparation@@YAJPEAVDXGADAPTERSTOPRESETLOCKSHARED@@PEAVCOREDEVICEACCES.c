/*
 * XREFs of ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140331FD4
 * Callers:
 *     DxgkSubmitPresentToHwQueue @ 0x1402B6190 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x140330FD0 (DxgkPresentRedirected.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001EDE0 (-DxgkQuerySwapChainBindingStatus@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400A2AE4 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x14018D4F4 (-VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGS.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x140332AC8 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 */

__int64 __fastcall SubmitPresentHistoryTokenPreparation(
        struct DXGADAPTERSTOPRESETLOCKSHARED *this,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTER *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        __int64 Handle,
        bool a6)
{
  __int64 v6; // rsi
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _LUID v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int SwapChainBindingStatus; // ebx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v27; // rsi
  struct DXGPROCESS *v28; // r14
  struct DXGGLOBAL *v29; // rax
  struct DXGGLOBAL *v30; // rbx
  void *v31; // rcx
  struct _DXGSHAREDSYNCOBJECT *v32; // rsi
  UINT64 FenceValue; // rax
  struct DXGADAPTER *v34; // rcx
  __int64 v36; // rcx
  char *v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rcx
  const char *v40; // rdx
  NTSTATUS v41; // eax
  PVOID v42; // r14
  unsigned int v43; // esi
  const char *v44; // rdx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  const char *v48; // rdx
  struct DXGGLOBAL *v49; // [rsp+50h] [rbp-30h] BYREF
  char v50; // [rsp+58h] [rbp-28h]
  int v51; // [rsp+60h] [rbp-20h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v52; // [rsp+68h] [rbp-18h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v53; // [rsp+70h] [rbp-10h]
  struct COREDEVICEACCESS *v54; // [rsp+78h] [rbp-8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF
  struct DXGADAPTER *v57; // [rsp+D0h] [rbp+50h]

  v57 = a3;
  v6 = *((_QWORD *)a3 + 396);
  if ( v6 != -976 && *(struct _KTHREAD **)(v6 + 984) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 976, 0LL) )
  {
    if ( bTracingEnabled && *(_DWORD *)(v6 + 1000) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)"g");
    ExAcquirePushLockSharedEx(v6 + 976, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 992));
  CurrentProcess = PsGetCurrentProcess(v11);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v6 + 1008)
    || (v14 = ProcessSessionId,
        v15 = *(_QWORD *)(v6 + 1016),
        HandleInformation.HandleAttributes = 1,
        !*(_QWORD *)(v15 + 8 * v14)) )
  {
    HandleInformation.HandleAttributes = 0;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 992));
  ExReleasePushLockSharedEx(v6 + 976, 0LL);
  KeLeaveCriticalRegion();
  v16 = *(struct _LUID *)((char *)a3 + 412);
  if ( *((_BYTE *)this + 16) )
  {
    v17 = *((_QWORD *)this + 1) + 136LL;
    *((_BYTE *)this + 16) = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v17 + 16));
    ExReleasePushLockSharedEx(v17, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 1));
  }
  if ( !*((_BYTE *)a2 + 32) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 8, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7763;
  }
  v18 = *((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v18, *((const char **)a2 + 5));
  *((_QWORD *)a2 + 5) = 0LL;
  if ( *((_BYTE *)a2 + 144) )
  {
    if ( !*((_BYTE *)a2 + 96) )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 72, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7763;
    }
    v19 = *((_QWORD *)a2 + 11);
    *((_BYTE *)a2 + 96) = 0;
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 184) )
      DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v19, *((const char **)a2 + 13));
    *((_QWORD *)a2 + 13) = 0LL;
  }
  if ( Handle )
  {
    Object = 0LL;
    v41 = ObReferenceObjectByHandle((HANDLE)Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
    v42 = Object;
    v43 = v41;
    if ( v41 < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 817;
      goto LABEL_72;
    }
    if ( a6 )
    {
      Handle = 0LL;
      if ( KeWaitForSingleObject(Object, Executive, 0, 1u, (PLARGE_INTEGER)&Handle) == 258 )
      {
        ObfDereferenceObject(v42);
        v43 = -1071775486;
        goto LABEL_72;
      }
    }
    else
    {
      Handle = -20000000LL;
      KeWaitForSingleObject(Object, Executive, 0, 1u, (PLARGE_INTEGER)&Handle);
    }
    ObfDereferenceObject(v42);
  }
  SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(HandleInformation.HandleAttributes, v16, a4);
  if ( SwapChainBindingStatus >= 0 )
  {
    v51 = -1073741823;
    v52 = a4;
    v53 = this;
    v54 = a2;
    if ( !a4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 122;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pToken", 122LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( !*((_BYTE *)this + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
      v21 = *((_QWORD *)this + 1);
      *(_QWORD *)this = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v21 + 136, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 152));
      *((_BYTE *)this + 16) = 1;
    }
    if ( *((_BYTE *)a2 + 144) )
    {
      if ( *((_BYTE *)a2 + 96) )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 72, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7648;
      }
      v36 = *((_QWORD *)a2 + 11);
      v37 = (char *)a2 + 72;
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v36 + 184) )
      {
        if ( !KeReadStateEvent((PRKEVENT)(v36 + 48)) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v38, (__int64)"g");
          KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 11) + 48LL), Executive, 0, 0, 0LL);
          v37 = (char *)a2 + 72;
        }
        DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 11), 0LL);
      }
      *((_QWORD *)a2 + 13) = 0LL;
      *((_BYTE *)a2 + 96) = 1;
      if ( *(_DWORD *)(*((_QWORD *)a2 + 11) + 200LL) != 1 )
      {
        if ( !v37[24] )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v37, 0LL, 0LL);
          WdLogGlobalForLineNumber = 7763;
        }
        v39 = *((_QWORD *)v37 + 2);
        v37[24] = 0;
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v39 + 184) )
          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v39, *((const char **)a2 + 13));
        *((_QWORD *)a2 + 13) = 0LL;
        goto LABEL_67;
      }
    }
    if ( *((_BYTE *)a2 + 32) )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 8, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v22 = *((_QWORD *)a2 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v22 + 184) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v22 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)"g");
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3), 0LL);
    }
    *((_QWORD *)a2 + 5) = 0LL;
    *((_BYTE *)a2 + 32) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 17) + 608LL) != 1 )
    {
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
      if ( *((_BYTE *)a2 + 144) )
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
LABEL_67:
      v24 = -1073741130;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 878;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire shared code device acess, returning 0x%I64x",
        -1073741130LL,
        0LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v40);
LABEL_68:
      TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v51);
      return (unsigned int)v24;
    }
    v24 = 0;
    if ( a4->Model != D3DKMT_PM_REDIRECTED_FLIP || !*((_QWORD *)&a4->Token.SurfaceComplete + 16) )
      return (unsigned int)v24;
    v25 = PsGetCurrentProcess(v22);
    ProcessDxgProcess = PsGetProcessDxgProcess(v25);
    v27 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
      goto LABEL_41;
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v28 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( !v28 )
        goto LABEL_41;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v28 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( !v28 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 3080;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
LABEL_41:
        v28 = v27;
      }
    }
    HandleInformation = 0LL;
    v29 = DXGGLOBAL::GetGlobal();
    v49 = v29;
    v50 = 0;
    if ( !v29 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3058;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 3058LL, 0LL, 0LL, 0LL, 0LL);
      v29 = 0LL;
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v29 + 76)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3063;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursiveSharedLock",
        3063LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v30 = v49;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)v30 + 76), 1u);
    v31 = (void *)*((_QWORD *)&a4->Token.SurfaceComplete + 16);
    v50 = 1;
    Handle = 0LL;
    v24 = ObReferenceObjectByHandle(v31, 0x20000u, g_pDxgkSharedSyncObjectType, 1, (PVOID *)&Handle, &HandleInformation);
    if ( v24 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 930;
    }
    else
    {
      v32 = (struct _DXGSHAREDSYNCOBJECT *)Handle;
      FenceValue = *(_QWORD *)(*(_QWORD *)Handle + 120LL);
      if ( FenceValue <= a4->Token.Flip.FenceValue )
        FenceValue = a4->Token.Flip.FenceValue;
      v34 = v57;
      *(_QWORD *)(*(_QWORD *)Handle + 120LL) = FenceValue;
      *((_QWORD *)&a4->Token.SurfaceComplete + 16) = 0LL;
      if ( *((_BYTE *)v34 + 209) )
      {
        v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
                (struct DXGADAPTER *)((char *)v34 + 4712),
                v28,
                v32,
                a4->Token.Flip.FenceValue);
        if ( v24 < 0 )
        {
          ObfDereferenceObject(v32);
          if ( v50 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v49);
          goto LABEL_68;
        }
      }
      ObfDereferenceObject(v32);
    }
    if ( v50 )
    {
      v50 = 0;
      ExReleaseResourceLite(*((PERESOURCE *)v49 + 76));
      KeLeaveCriticalRegion();
    }
    if ( v24 < 0 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(this);
      COREDEVICEACCESS::Release(a2);
      DxgkCancelSwapChainBinding(a4);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v48);
    }
    return (unsigned int)v24;
  }
  if ( SwapChainBindingStatus != -1071775733 && SwapChainBindingStatus != -1071775730 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 862;
  }
  v43 = SwapChainBindingStatus;
LABEL_72:
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
  COREDEVICEACCESS::AcquireSharedUncheck(a2, v44);
  return v43;
}
