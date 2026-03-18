/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1403527B8
 * Callers:
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x140206CB4 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x14020732C (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402292F0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x140350D18 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x140038920 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1400464C4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGGLOBAL::OpenSyncObject(
        PERESOURCE *this,
        unsigned int a2,
        struct DXGSYNCOBJECT **a3,
        unsigned int *a4,
        struct DXGADAPTERSYNCOBJECT **a5)
{
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  int v11; // ecx
  struct DXGGLOBAL *Global; // rax
  DXGSYNCOBJECT *ObjectA; // rbx
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned int v18; // eax
  int v19; // r8d
  __int64 v20; // rbx
  _BYTE v21[16]; // [rsp+80h] [rbp-28h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3434;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppSyncObject", 3434LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3435;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phSyncObject", 3435LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3436;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsSyncObjectLockSharedOwner()", 3436LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  *a4 = 0;
  Current = DXGPROCESS::GetCurrent(v9);
  v11 = *((_DWORD *)Current + 102);
  if ( (v11 & 0x180) == 0 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v21);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, a2, 8);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
    goto LABEL_9;
  }
  if ( (v11 & 0x100) != 0 )
    v16 = *((_QWORD *)Current + 74);
  else
    v16 = (unsigned __int64)Current & -(__int64)((v11 & 0x80u) != 0);
  v17 = v16 + 248;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v16 + 248));
  v18 = (a2 >> 6) & 0xFFFFFF;
  if ( v18 < *(_DWORD *)(v16 + 296) )
  {
    v19 = *(_DWORD *)(*(_QWORD *)(v16 + 280) + 16LL * v18 + 8);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v16 + 280) + 16LL * v18 + 8) & 0x60)
      && (v19 & 0x2000) == 0
      && (v19 & 0x1F) != 0 )
    {
      v20 = *(_QWORD *)(v16 + 280);
      if ( (*(_BYTE *)(v20 + 16LL * v18 + 8) & 0x1F) == 8 )
      {
        ObjectA = *(DXGSYNCOBJECT **)(v20 + 16LL * v18);
        goto LABEL_28;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  ObjectA = 0LL;
LABEL_28:
  _InterlockedDecrement((volatile signed __int32 *)(v17 + 16));
  ExReleasePushLockSharedEx(v17, 0LL);
  KeLeaveCriticalRegion();
LABEL_9:
  if ( !ObjectA )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3462;
    return 3221225485LL;
  }
  v14 = *((_DWORD *)ObjectA + 105);
  if ( v14 == 5 || v14 == 6 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3469;
    return 3221225485LL;
  }
  result = DXGSYNCOBJECT::Open(
             ObjectA,
             0LL,
             0LL,
             0LL,
             a4,
             0LL,
             0LL,
             0,
             a5,
             0,
             (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0,
             0LL,
             0LL,
             0,
             0,
             0);
  if ( (int)result >= 0 )
    *a3 = ObjectA;
  return result;
}
