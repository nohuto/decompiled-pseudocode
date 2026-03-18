/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14
 * Callers:
 *     ?DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z @ 0x1401F5A30 (-DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x140215B4C (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x140395514 (--1DXGPROCESS@@MEAA@XZ.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013530 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x14003B9D8 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x14003CB24 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x140046930 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14004A5A0 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14004DD44 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1400597EC (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x14006798C (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x14006AFD4 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x140075F40 (-DisconnectDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x14018DFF4 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Destroy@DXGK_TRANSPORT_BUFFER@@QEAAXXZ @ 0x140191408 (-Destroy@DXGK_TRANSPORT_BUFFER@@QEAAXXZ.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1401A2DC0 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1401F5444 (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401F608C (-FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401F6CF0 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1401F6F28 (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1401F795C (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x140204FC0 (DxgkDestroyCsrssProcess.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x14020EC54 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022E68C (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1402E6FB8 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     VidSchTerminateProcessX @ 0x1402E705C (VidSchTerminateProcessX.c)
 *     VidMmTerminateProcessX @ 0x1402E70F0 (VidMmTerminateProcessX.c)
 *     OutputDuplProcessTerminateForSession @ 0x1402E7184 (OutputDuplProcessTerminateForSession.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1402E7248 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1402E75F4 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1402E98A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x140314280 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1403516A8 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x14036BB68 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14037C198 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A1ADC (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403B7534 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403B77F0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403EA650 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     OutputDuplProcessTerminateForWddm @ 0x1403F608C (OutputDuplProcessTerminateForWddm.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2, char a3)
{
  char v4; // r12
  unsigned int v6; // r13d
  DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v12; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS ProcessExitStatus; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v20; // r15
  __int64 v21; // rbx
  __int64 v22; // r14
  struct DXGADAPTER *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  char v26; // r12
  const char *v27; // rdx
  const char *v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rbx
  unsigned __int64 v38; // rdx
  int v39; // r8d
  unsigned int v40; // ecx
  unsigned int v41; // esi
  _QWORD *v42; // r14
  unsigned int v43; // edx
  __int64 v44; // rsi
  HMGRTABLE *v45; // r12
  unsigned int v46; // r14d
  __int64 v47; // rdx
  __int64 v48; // r8
  unsigned int v49; // ebx
  __int64 v50; // rsi
  int v51; // edx
  __int64 v52; // r14
  volatile signed __int64 *v53; // rax
  __int64 v54; // rbx
  unsigned __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // r8
  DXGSYNCOBJECT *EntryObject; // rbx
  unsigned int v60; // r15d
  PERESOURCE *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // r12
  __int64 v65; // rsi
  int v66; // edx
  unsigned int v67; // ebx
  DXGKEYEDMUTEX *v68; // rcx
  int v69; // r8d
  struct DXGPROTECTEDSESSION *v70; // rbx
  unsigned int v71; // eax
  struct DXGGLOBAL *v72; // rax
  DXGK_TRANSPORT_BUFFER *v73; // rax
  _QWORD *v74; // rbx
  __int64 v75; // rcx
  _QWORD *v76; // rax
  unsigned int v77; // esi
  int v78; // eax
  unsigned int v79; // ebx
  DXGSHAREDVMOBJECT *v80; // rax
  DXGVIRTUALMACHINE *v81; // rcx
  DXGVIRTUALMACHINE *v82; // rcx
  struct DXGPROCESS *v83; // rbx
  DXGGLOBAL *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  DXGGLOBAL *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  DXGSESSIONDATA *v92; // rax
  struct DXGGLOBAL *v93; // rax
  struct DXGGLOBAL *v94; // rax
  __int64 v95; // [rsp+28h] [rbp-D8h]
  __int64 v96; // [rsp+30h] [rbp-D0h]
  char v98; // [rsp+54h] [rbp-ACh] BYREF
  char v99; // [rsp+55h] [rbp-ABh]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v101; // [rsp+60h] [rbp-A0h]
  char v102; // [rsp+68h] [rbp-98h]
  _BYTE v103[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v104; // [rsp+98h] [rbp-68h]
  DXGADAPTER *v105; // [rsp+A0h] [rbp-60h]
  char v106; // [rsp+A8h] [rbp-58h]
  __int64 v107; // [rsp+B0h] [rbp-50h]
  _BYTE v108[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v109[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v110[64]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v111; // [rsp+158h] [rbp+58h]
  char v112; // [rsp+160h] [rbp+60h]

  v4 = a3;
  v6 = 0;
  if ( (((*((_DWORD *)this + 102) & 4) != 0) & (unsigned __int8)~BYTE1(*((_DWORD *)this + 102))) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global, v8, v9, v10);
    if ( SessionData )
      DispBrokerClient::DisconnectDisplayBroker((struct _KTHREAD **)SessionData + 2373);
    Interval.QuadPart = 0LL;
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v12);
    ProcessExitStatus = PsGetProcessExitStatus(CurrentProcess);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15, v17, v18);
    DxgkLogCodePointPacketForSession(115, CurrentProcessSessionId, ProcessExitStatus, 0, 0, 0LL);
  }
  while ( *((_DWORD *)this + 106) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v99 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v98);
  if ( (*((_BYTE *)this + 408) & 1) != 0 && (*((_DWORD *)this + 102) & 0x100) == 0 )
    DxgkDestroyCsrssProcess();
  v20 = (_QWORD *)((char *)this + 320);
  if ( (_QWORD *)*v20 != v20 )
  {
    if ( !v4 )
      DXGPROCESS::ReleaseVidPnSourceOwners(this, a2);
    while ( (_QWORD *)*v20 != v20 )
    {
      v21 = (*v20 - 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v20 >> 64);
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 0x10) + 16LL);
      OutputDuplProcessTerminateForWddm((struct DXGADAPTER *)v22, *(struct DXGADAPTER **)(v21 + 0x768));
      COREACCESS::COREACCESS((COREACCESS *)v109, *(struct DXGADAPTER *const *)(*(_QWORD *)(v21 + 16) + 16LL));
      v23 = *(struct DXGADAPTER **)(v21 + 1896);
      if ( !v23 )
        v23 = *(struct DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v110, v23);
      v111 = v21;
      v24 = *(_QWORD *)(v21 + 1896);
      if ( v24 == *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) || (v112 = 1, !v24) )
        v112 = 0;
      v25 = *(_QWORD *)(v22 + 3168);
      if ( *(_DWORD *)(v21 + 464) == 2 )
      {
        v26 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v25 + 48, 0LL);
        *(_QWORD *)(v25 + 56) = KeGetCurrentThread();
      }
      else
      {
        v26 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v25 + 24, 0LL);
        *(_QWORD *)(v25 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v108, v27);
      if ( !*(_QWORD *)(v22 + 3168) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2137;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter->IsRenderAdapter()", 2137LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 200LL) == 4 )
      {
        v74 = (_QWORD *)(v21 + 24);
        v75 = *v74;
        if ( *(_QWORD **)(*v74 + 8LL) != v74 || (v76 = (_QWORD *)v74[1], (_QWORD *)*v76 != v74) )
          __fastfail(3u);
        *v76 = v75;
        *(_QWORD *)(v75 + 8) = v76;
      }
      else
      {
        if ( *(_DWORD *)(v21 + 608) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v108);
          v101 = v22;
          v102 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&Interval);
          if ( *(_DWORD *)(v22 + 200) == 1 )
            DXGDEVICE::FlushScheduler(v21, 4LL, 4294967293LL, 0LL);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Interval);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v108, v28);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&Interval);
        }
        ADAPTER_RENDER::DestroyDevice(*(ADAPTER_RENDER **)(v22 + 3168), (struct DXGDEVICE *)v21, 0LL);
      }
      if ( v26 )
      {
        *(_QWORD *)(v25 + 56) = 0LL;
        v29 = v25 + 48;
      }
      else
      {
        *(_QWORD *)(v25 + 32) = 0LL;
        v29 = v25 + 24;
      }
      ExReleasePushLockExclusiveEx(v29, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v110, v30);
      COREACCESS::~COREACCESS((COREACCESS *)v109, v31);
    }
    v4 = a3;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
  {
    OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
  }
  else
  {
    WdLogNewEntry5_WdTrace(v34, v33);
    WdLogGlobalForLineNumber = 3115;
  }
  OutputDuplProcessTerminateForSession();
  v35 = (_QWORD *)((char *)this + 344);
  if ( (_QWORD *)*v35 != v35 )
  {
    DXGFASTMUTEX::Acquire((DXGPROCESS *)((char *)this + 360));
    while ( (_QWORD *)*v35 != v35 )
    {
      v36 = (*v35 - 24LL) & -(__int64)(*v35 != 0LL);
      v37 = *(_QWORD *)(*(_QWORD *)(v36 + 0x10) + 16LL);
      v105 = (DXGADAPTER *)v37;
      v106 = 0;
      v107 = 0LL;
      if ( v37 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v37 + 24));
        v104 = -1LL;
      }
      COREACCESS::AcquireShared((COREACCESS *)v103, 0LL);
      if ( !*(_QWORD *)(v37 + 3160) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2212;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pAdapter->IsDisplayAdapter()",
          2212LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *(_DWORD *)(v37 + 200) == 4 )
        DXGPROCESS::RemoveCopyProtection(this, v36);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(DXGADAPTER ***)(v37 + 3160),
          *(_DWORD *)(v36 + 52),
          *(_DWORD *)(v36 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v103, v38);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 45);
  }
  if ( (*((_DWORD *)this + 102) & 0x80u) != 0 )
  {
    v81 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 74);
    if ( v81 )
      DXGVIRTUALMACHINE::FlushDevicesForTermination(v81);
    v82 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 74);
    if ( v82 )
      DXGVIRTUALMACHINE::PauseVmBusChannels(v82);
  }
  v39 = *((_DWORD *)this + 75);
  v40 = *((_DWORD *)this + 74);
  if ( v39 != v40 )
  {
    v41 = 0;
    if ( v40 )
    {
      v42 = (_QWORD *)((char *)this + 280);
      do
      {
        if ( v41 >= *((_DWORD *)this + 74) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 228;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 228LL, 0LL, 0LL, 0LL, 0LL);
        }
        switch ( *(_DWORD *)(*v42 + 16LL * v41 + 8) & 0x1F )
        {
          case 8:
            EntryObject = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v41);
            v60 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v41);
            if ( (*((_DWORD *)this + 102) & 0x80) != 0 )
            {
              v72 = DXGGLOBAL::GetGlobal();
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&Interval, v72, 0);
              DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)&Interval);
              DXGSYNCOBJECT::SetVmSyncObject(EntryObject, 0LL);
              *((_DWORD *)EntryObject + 20) = 0;
              DXGPROCESS::FreeHandleSafe(this, v60);
              if ( (_BYTE)v101 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&Interval);
            }
            else
            {
              v61 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(v61, EntryObject, v60, 0);
            }
            break;
          case 9:
            HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v41);
            v67 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v41);
            DXGKEYEDMUTEX::SignalAbandoned(v68, v67, v69);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v67) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2295;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bStatus", 2295LL, 0LL, 0LL, 0LL, 0LL);
            }
            break;
          case 14:
            v70 = (struct DXGPROTECTEDSESSION *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v41);
            v71 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v41);
            DXGPROTECTEDSESSION::DestroyProtectedSession(v70, v71);
            break;
        }
        v40 = *((_DWORD *)this + 74);
        ++v41;
      }
      while ( v41 < v40 );
      v39 = *((_DWORD *)this + 75);
    }
  }
  v43 = v40;
  if ( (*((_DWORD *)this + 102) & 0x80u) != 0 && v39 != v40 )
  {
    v77 = 0;
    if ( v40 )
    {
      do
      {
        v78 = HMGRTABLE::GetEntryType((char *)this + 280) - 12;
        if ( v78 )
        {
          if ( v78 == 1 )
          {
            v79 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 280), v77);
            v80 = (DXGSHAREDVMOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v77);
            DXGSHAREDVMOBJECT::ReleaseReference(v80);
            DXGPROCESS::FreeHandleSafe(this, v79);
          }
        }
        else
        {
          v83 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 280), v77);
          if ( (*((_DWORD *)v83 + 102) & 0x100) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2334;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess->IsVmProcess()", 2334LL, 0LL, 0LL, 0LL, 0LL);
          }
          CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&Interval, v83, 1u);
          DXGPROCESS::DestroyDxgProcess(v83);
          CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&Interval);
        }
        v43 = *((_DWORD *)this + 74);
        ++v77;
      }
      while ( v77 < v43 );
    }
  }
  if ( *((_DWORD *)this + 75) != v43 )
  {
    v44 = 0LL;
    if ( v43 )
    {
      v45 = (DXGPROCESS *)((char *)this + 280);
      do
      {
        if ( v6 >= *((_DWORD *)v45 + 4) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 228;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 228LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*(_DWORD *)(*(_QWORD *)v45 + 16LL * v6 + 8) & 0x1F) == 1 )
        {
          if ( v6 >= *((_DWORD *)v45 + 4) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 212;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 212LL, 0LL, 0LL, 0LL, 0LL);
          }
          v46 = (*(_DWORD *)(*(_QWORD *)v45 + 16LL * v6 + 8) >> 7) & 0x3F | ((v6 & 0xFFFFFF | ((*(_DWORD *)(*(_QWORD *)v45 + 16LL * v6 + 8) & 0xFFFFFFE0) << 19)) << 6);
          if ( this != (DXGPROCESS *)-248LL && *((struct _KTHREAD **)this + 32) == KeGetCurrentThread() )
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
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 248, 0LL) )
          {
            DXGPUSHLOCK::LogEvent((DXGPROCESS *)((char *)this + 248), v47, v48);
            ExAcquirePushLockExclusiveEx((char *)this + 248, 0LL);
          }
          *((_QWORD *)this + 32) = KeGetCurrentThread();
          v49 = (v46 >> 6) & 0xFFFFFF;
          if ( (*((_DWORD *)this + 102) & 0x100) != 0 )
          {
            v63 = *((_QWORD *)this + 74);
            v64 = v63 + 248;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v63 + 248));
            if ( v49 < *(_DWORD *)(v63 + 296)
              && (v65 = *(_QWORD *)(v63 + 280),
                  v66 = *(_DWORD *)(v65 + 16LL * v49 + 8),
                  ((v46 >> 25) & 0x60) == (*(_BYTE *)(v65 + 16LL * v49 + 8) & 0x60))
              && (v66 & 0x2000) == 0
              && (v66 & 0x1F) != 0 )
            {
              if ( (*(_BYTE *)(v65 + 16LL * ((v46 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 1 )
              {
                v44 = *(_QWORD *)(v65 + 16LL * ((v46 >> 6) & 0xFFFFFF));
              }
              else
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 318;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Handle type mismatch",
                  318LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v44 = 0LL;
              }
            }
            else
            {
              v44 = 0LL;
            }
            _InterlockedDecrement((volatile signed __int32 *)(v64 + 16));
            ExReleasePushLockSharedEx(v64, 0LL);
            KeLeaveCriticalRegion();
            v45 = (DXGPROCESS *)((char *)this + 280);
          }
          else if ( v49 < *((_DWORD *)v45 + 4) )
          {
            v50 = *(_QWORD *)v45;
            v51 = *(_DWORD *)(*(_QWORD *)v45 + 16LL * v49 + 8);
            if ( ((v46 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v45 + 16LL * v49 + 8) & 0x60)
              && (v51 & 0x2000) == 0
              && (v51 & 0x1F) != 0 )
            {
              if ( (*(_BYTE *)(v50 + 16 * (((unsigned __int64)v46 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 1 )
              {
                v44 = *(_QWORD *)(v50 + 16 * (((unsigned __int64)v46 >> 6) & 0xFFFFFF));
              }
              else
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 318;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Handle type mismatch",
                  318LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v44 = 0LL;
              }
            }
            else
            {
              v44 = 0LL;
            }
          }
          if ( v44 )
          {
            Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline();
            HMGRTABLE::FreeHandle(v45, v46);
            *((_QWORD *)this + 32) = 0LL;
            ExReleasePushLockExclusiveEx((char *)this + 248, 0LL);
            KeLeaveCriticalRegion();
            KeEnterCriticalRegion();
            ExAcquirePushLockSharedEx(v44 + 136, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(v44 + 152));
            v52 = *(_QWORD *)(v44 + 3168);
            if ( v52 )
            {
              if ( *(_DWORD *)(v44 + 240) == -1 )
              {
                WdLogSingleEntry0(3LL);
                WdLogGlobalForLineNumber = 3399;
              }
              else
              {
                v53 = *(volatile signed __int64 **)(v52 + 16);
                v105 = (DXGADAPTER *)v53;
                v106 = 0;
                v107 = 0LL;
                if ( v53 )
                {
                  _InterlockedIncrement64(v53 + 3);
                  v104 = -1LL;
                }
                while ( 1 )
                {
                  KeEnterCriticalRegion();
                  ExAcquirePushLockExclusiveEx(v52 + 72, 0LL);
                  *(_QWORD *)(v52 + 80) = KeGetCurrentThread();
                  v54 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(*(_QWORD *)(v52 + 16) + 240LL));
                  if ( !v54 )
                    break;
                  if ( !*(_DWORD *)(v54 + 56) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 2857;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pAdapterInfo->AdapterInfoReferenceCount > 0",
                      2857LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( (*(_DWORD *)(v54 + 56))-- != 1 )
                    break;
                  if ( v52 != *(_QWORD *)(v54 + 80) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 2860;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"pRenderCore == pAdapterInfo->pRenderCore",
                      2860LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( !*(_BYTE *)(v54 + 109) || DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v52 + 16)) )
                  {
                    DXGPROCESS::DestroyAdapterInfo(this, (struct DXGPROCESS_RENDER_ADAPTER_INFO *)v54);
                    break;
                  }
                  ++*(_DWORD *)(v54 + 56);
                  *(_QWORD *)(v52 + 80) = 0LL;
                  ExReleasePushLockExclusiveEx(v52 + 72, 0LL);
                  KeLeaveCriticalRegion();
                  if ( v106 )
                  {
                    WdLogSingleEntry5(0LL, 275LL, 4LL, v103, 0LL, 0LL);
                    WdLogGlobalForLineNumber = 7648;
                  }
                  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v105 + 23) )
                  {
                    if ( !KeReadStateEvent((PRKEVENT)v105 + 2) )
                    {
                      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                        McTemplateK0q_EtwWriteTransfer(v62, (__int64)"g");
                      KeWaitForSingleObject((char *)v105 + 48, Executive, 0, 0, 0LL);
                    }
                    DXGADAPTER::AcquireCoreResourceShared(v105, 0LL);
                  }
                  v107 = 0LL;
                  v106 = 1;
                }
                *(_QWORD *)(v52 + 80) = 0LL;
                ExReleasePushLockExclusiveEx(v52 + 72, 0LL);
                KeLeaveCriticalRegion();
                COREACCESS::~COREACCESS((COREACCESS *)v103, v56);
              }
            }
            _InterlockedDecrement((volatile signed __int32 *)(v44 + 152));
            ExReleasePushLockSharedEx(v44 + 136, 0LL);
            KeLeaveCriticalRegion();
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v44 + 16), (struct DXGADAPTER *)v44);
            v44 = 0LL;
          }
          else
          {
            *((_QWORD *)this + 32) = 0LL;
            ExReleasePushLockExclusiveEx((char *)this + 248, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else if ( (*(_DWORD *)(*(_QWORD *)v45 + 16LL * v6 + 8) & 0x1F) == 0x14 )
        {
          v73 = (DXGK_TRANSPORT_BUFFER *)HMGRTABLE::GetEntryObject(v45, v6);
          if ( *((_BYTE *)v73 + 40) )
            DXGK_TRANSPORT_BUFFER::Destroy(v73);
        }
        else if ( (*(_DWORD *)(*(_QWORD *)v45 + 16LL * v6 + 8) & 0x1F) != 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2376;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"EntryType == HMGRENTRY_TYPE_FREE",
            2376LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ++v6;
        v45 = (DXGPROCESS *)((char *)this + 280);
      }
      while ( v6 < *((_DWORD *)this + 74) );
      v4 = a3;
    }
  }
  if ( *((_QWORD *)this + 72) )
  {
    DXGPROCESS::SetVailObject(this, 0LL);
    if ( *((_QWORD *)this + 72) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2389;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsVailProcess()", 2389LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( *((_BYTE *)this + 584) )
  {
    v84 = DXGGLOBAL::GetGlobal();
    if ( !DXGGLOBAL::GetSessionData(v84, v85, v86, v87) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2397;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DXGGLOBAL::GetGlobal()->GetSessionData()",
        2397LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v88 = DXGGLOBAL::GetGlobal();
    v92 = DXGGLOBAL::GetSessionData(v88, v89, v90, v91);
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v92) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2399;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 2399LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_BYTE *)this + 584) = 0;
  }
  VidSchTerminateProcessX((__int64)this);
  VidMmTerminateProcessX((__int64)this);
  while ( *((int *)this + 107) > 0 )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v57 = *((_DWORD *)this + 102);
  if ( v4 )
  {
    if ( (v57 & 0x80u) != 0 )
      DXGPROCESSVMWP::ResetVirtualMachine(this);
  }
  else if ( (v57 & 0x40) != 0 )
  {
    v93 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(v93, DestroyProcessCallback, this, 2LL);
  }
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v98);
  if ( (*((_DWORD *)this + 102) & 0x100) != 0 )
  {
    DXGPROCESSVM::DestroyVmProcess(this);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v96) = *((_DWORD *)this + 102);
    LODWORD(v95) = *((_DWORD *)this + 122);
    McTemplateK0pxqt_EtwWriteTransfer(
      *((_QWORD *)this + 8),
      &EventDestroyDxgProcess,
      v58,
      this,
      *(_QWORD *)(*((_QWORD *)this + 8) + 80LL),
      v95,
      v96);
  }
  if ( !v4 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 122) )
  {
    v94 = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyProcess(*((DXG_GUEST_GLOBAL_VMBUS **)v94 + 212), *((_DWORD *)this + 122));
    *((_DWORD *)this + 122) = 0;
  }
  if ( v99 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v98);
}
