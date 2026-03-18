/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x14040C5C8
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x14003E9F0 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z.c)
 *     ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x1400A1BC0 (-AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400A2138 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14040C2E0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1400174D0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x140035930 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?VidSchSubmitSignalToHwQueue@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x140045CDC (-VidSchSubmitSignalToHwQueue@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@IPEAPEAU_VIDSCH_SYNC_O.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x14018D368 (-VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402BE420 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N5@Z @ 0x140372CF0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(int *a1, unsigned __int64 a2, unsigned int a3)
{
  struct DXGPROCESS *Current; // r14
  struct _VIDSCH_CONTEXT *v6; // rdi
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  int DxgAdapterSyncObject; // eax
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // eax
  struct _VIDSCH_CONTEXT *v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[16]; // [rsp+70h] [rbp-90h] BYREF
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v25[24]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v26[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v27[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v28[64]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v29; // [rsp+138h] [rbp+38h]
  char v30; // [rsp+140h] [rbp+40h]

  v20 = a2;
  v19 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v25, a3, (struct _KTHREAD **)Current, &v19, 0, 1);
  v6 = v19;
  if ( v19 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v22,
      *((struct DXGDEVICE **)v19 + 2));
    COREACCESS::COREACCESS(
      (COREACCESS *)v27,
      *(struct DXGADAPTER *const *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v28, *(struct DXGADAPTER *const *)(*(_QWORD *)(v8 + 16) + 16LL));
    v29 = v9;
    v30 = 0;
    v7 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26, 0LL);
    if ( v7 < 0 )
    {
LABEL_27:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
      goto LABEL_28;
    }
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v21, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v21);
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)v6 + 2) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1411;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDxgContext->GetRenderCore()->IsCoreResourceSharedOwner()",
        1411LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)Current + 102) & 0x180) != 0 )
    {
      v11 = (__int64)a1;
    }
    else
    {
      v11 = *(_QWORD *)a1;
      LOBYTE(v19) = (*(_DWORD *)(*(_QWORD *)a1 + 428LL) & 2) != 0;
      if ( (_BYTE)v19 )
      {
        if ( *((_BYTE *)v6 + 434) )
        {
          v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL) + 4712LL),
                 Current,
                 v6,
                 a1[2],
                 v20);
LABEL_26:
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v21);
          goto LABEL_27;
        }
        goto LABEL_11;
      }
      if ( *((_BYTE *)v6 + 434) )
      {
LABEL_11:
        WdLogSingleEntry2(2LL, v11, v6);
        WdLogGlobalForLineNumber = 1432;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Sync object and context must both be paravirtualized, sync object: 0x%I64x, context: 0x%I64x",
          v11,
          (__int64)v6,
          0LL,
          0LL,
          0LL);
        if ( v21[8] )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v21);
        COREACCESS::~COREACCESS((COREACCESS *)v28, v12);
        COREACCESS::~COREACCESS((COREACCESS *)v27, v13);
        goto LABEL_14;
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(v11 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                             (DXGSYNCOBJECT *)v11,
                             *(struct ADAPTER_RENDER **)(*((_QWORD *)v6 + 2) + 16LL),
                             (struct ADAPTER_RENDER ***)&v19,
                             0LL,
                             0LL,
                             0LL,
                             0,
                             0,
                             0);
    v15 = DxgAdapterSyncObject;
    if ( DxgAdapterSyncObject < 0 )
    {
      WdLogSingleEntry3(2LL, Current, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL), DxgAdapterSyncObject);
      v16 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL);
      WdLogGlobalForLineNumber = 1463;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
        (__int64)Current,
        *(_QWORD *)(v16 + 16),
        v15,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v21);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
      v7 = v15;
      goto LABEL_28;
    }
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         (DXGSYNCOBJECT *)v11,
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v6 + 2) + 16LL));
    if ( VidSchSyncObject )
    {
      if ( (*((_DWORD *)v6 + 98) & 0x10) != 0 )
      {
        v19 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)v6 + 36);
        v17 = VIDSCH_EXPORT::VidSchSubmitSignalToHwQueue(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 736LL),
                1u,
                &v19,
                1u,
                &VidSchSyncObject,
                0,
                &v20);
      }
      else
      {
        v19 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)v6 + 32);
        v17 = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 736LL),
                0,
                0LL,
                1u,
                &v19,
                1u,
                &VidSchSyncObject,
                0,
                &v20,
                0);
      }
      v7 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1514;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(ntStatus)", 1514LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
      goto LABEL_26;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1474;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v21);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
LABEL_14:
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
    v7 = -1073741811;
    goto LABEL_28;
  }
  v7 = -1073741811;
  WdLogSingleEntry3(2LL, Current, 0LL, -1073741811LL);
  WdLogGlobalForLineNumber = 1387;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
    (__int64)Current,
    0LL,
    -1073741811LL,
    0LL,
    0LL);
LABEL_28:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v25);
  return (unsigned int)v7;
}
