/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638
 * Callers:
 *     DxgkDeviceIoctl @ 0x140078F90 (DxgkDeviceIoctl.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401DD97C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140213900 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EE.c)
 *     ?PrepareLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU_GPUP_MIGRATION_BUFFER@@PEAI@Z @ 0x140215348 (-PrepareLiveMigration@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@PEAU_DXGKARG_GPUP_.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x14021CAB0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x14021F4C0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224650 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1403AEB20 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1403AF3A0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x14000CCF4 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013530 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?InsertProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z @ 0x140053094 (-InsertProcess@DXGGLOBAL@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z @ 0x14005625C (--2-$DXGQUOTAALLOCATOR@$0BAA@$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x140080440 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1403AF9DC (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1403AFF64 (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::CreateDxgProcess(
        struct DXGPROCESS **a1,
        struct DXGPROCESS *a2,
        struct DXGPROCESS *a3,
        char a4,
        struct _EPROCESS *a5)
{
  __int64 CurrentProcess; // rax
  unsigned int v10; // edi
  struct _EPROCESS *v11; // rbx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v13; // rax
  DXGPROCESS *v14; // rsi
  struct DXGGLOBAL *v15; // rax
  DXGPROCESSVM *v16; // rax
  __int64 v17; // rsi
  struct _KPROCESS *v18; // rcx
  HANDLE ProcessId; // rax
  __int64 v20; // rcx
  void *v21; // r12
  __int64 ProcessServerSilo; // rax
  int v23; // r14d
  DXGGLOBAL *v24; // rax
  __int64 v25; // r8
  DXGPROCESSVM *v27; // rsi
  _QWORD *v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rbp
  _QWORD *v31; // rax
  __int64 v32; // rbx
  struct DXGGLOBAL *v33; // rax
  struct DXGGLOBAL *Global; // rax
  struct _EPROCESS *v35; // rax
  _BYTE v36[16]; // [rsp+50h] [rbp-28h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1);
  v10 = 0;
  v11 = (struct _EPROCESS *)CurrentProcess;
  if ( !a2 )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *a1 = ProcessDxgProcess;
      return 0LL;
    }
  }
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v36);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
  if ( a2 )
  {
    v27 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<256,1348958276>::operator new(640LL);
    if ( !v27 )
      goto LABEL_22;
    Global = DXGGLOBAL::GetGlobal();
    v16 = DXGPROCESSVM::DXGPROCESSVM(v27, Global, v11, a2, a3);
    goto LABEL_8;
  }
  v13 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v11);
  if ( v13 )
  {
    *a1 = v13;
    goto LABEL_23;
  }
  if ( a4 )
  {
    v17 = DXGQUOTAALLOCATOR<256,1348958276>::operator new(624LL);
    if ( v17 )
    {
      v33 = DXGGLOBAL::GetGlobal();
      DXGPROCESS::DXGPROCESS((DXGPROCESS *)v17, v33, v11);
      *(_DWORD *)(v17 + 408) |= 0x80u;
      *(_QWORD *)v17 = &DXGPROCESSVMWP::`vftable';
      *(_QWORD *)(v17 + 592) = 0LL;
      *(_QWORD *)(v17 + 600) = 0LL;
      *(_QWORD *)(v17 + 608) = 0LL;
      *(_BYTE *)(v17 + 616) = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v14 = (DXGPROCESS *)DXGQUOTAALLOCATOR<256,1348958276>::operator new(592LL);
    if ( v14 )
    {
      v15 = DXGGLOBAL::GetGlobal();
      v16 = DXGPROCESS::DXGPROCESS(v14, v15, v11);
LABEL_8:
      v17 = (__int64)v16;
      goto LABEL_9;
    }
  }
  v17 = 0LL;
LABEL_9:
  if ( !v17 )
  {
LABEL_22:
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 270;
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate DXGPROCESS", 270LL, 0LL, 0LL, 0LL, 0LL);
    v10 = -1073741801;
    goto LABEL_23;
  }
LABEL_10:
  v18 = *(struct _KPROCESS **)(v17 + 56);
  if ( v18 )
  {
    ProcessId = PsGetProcessId(v18);
    v20 = *(_QWORD *)(v17 + 56);
    v21 = ProcessId;
  }
  else
  {
    v21 = 0LL;
    v20 = 0LL;
  }
  if ( a4 )
  {
    v35 = a5;
    if ( !a5 )
      v35 = v11;
    *(_QWORD *)(v17 + 608) = v35;
  }
  ProcessServerSilo = PsGetProcessServerSilo(v20);
  *(_DWORD *)(v17 + 408) = *(_DWORD *)(v17 + 408) & 0xFFFFFDFF | ((unsigned __int8)PsIsHostSilo(ProcessServerSilo) != 0
                                                                ? 0
                                                                : 0x200);
  v23 = DXGPROCESS::Initialize((DXGPROCESS *)v17, v21);
  if ( v23 >= 0 )
  {
    if ( (*(_DWORD *)(v17 + 408) & 2) == 0 )
    {
      v24 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::InsertProcess(v24, (struct DXGPROCESS *)v17);
    }
    if ( a2 )
    {
      v28 = (_QWORD *)(v17 + 608);
      v29 = *(_QWORD *)(*(_QWORD *)(v17 + 592) + 592LL);
      v30 = v29 + 128;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v29 + 128));
      v31 = *(_QWORD **)(v29 + 32);
      v32 = v29 + 24;
      if ( *v31 != v32 )
        __fastfail(3u);
      *v28 = v32;
      *(_QWORD *)(v17 + 616) = v31;
      *v31 = v28;
      *(_QWORD *)(v32 + 8) = v28;
      *(_QWORD *)(v30 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v30, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      PsSetProcessDxgProcess(v11, v17);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pxqt_EtwWriteTransfer(
          *(_QWORD *)(v17 + 64),
          &EventCreateDxgProcess,
          v25,
          v17,
          *(_QWORD *)(*(_QWORD *)(v17 + 64) + 80LL),
          *(_DWORD *)(v17 + 488),
          *(_DWORD *)(v17 + 408));
    }
    *a1 = (struct DXGPROCESS *)v17;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
    return 0LL;
  }
  (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1LL);
  v10 = v23;
LABEL_23:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
  return v10;
}
