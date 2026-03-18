/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008
 * Callers:
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1400809E8 (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1401A6A7C (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1401A9B50 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECE1C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     DxgkCreateProtectedSession @ 0x1401FA080 (DxgkCreateProtectedSession.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205EE8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140205FD4 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1402204F0 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1402E600C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkShareObjectsInternal @ 0x1403136A0 (DxgkShareObjectsInternal.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x140350D18 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140353BE0 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x140355BB0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14036CEC0 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403C3DA0 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403C698C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1403D1040 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x140035930 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14004DD44 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ @ 0x14004E0D0 (-IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     Feature_4100754745__private_IsEnabledDeviceUsageNoInline @ 0x140081E90 (Feature_4100754745__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1403531A0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1403A0420 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3, char a4)
{
  bool IsSyncObjectLockExclusiveOwner; // al
  __int64 v9; // rax
  const wchar_t *v10; // r9
  struct DXGGLOBAL *Global; // rax
  int v12; // eax
  struct DXGSYNCOBJECT *v13; // rax
  char *v14; // rdx
  __int64 v15; // rcx
  struct DXGSYNCOBJECT *v16; // rdx
  struct DXGSYNCOBJECT **v17; // rax
  struct _VIDSCH_SYNC_OBJECT *v18; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-40h] BYREF
  _BYTE v20[24]; // [rsp+68h] [rbp-30h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp+10h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3353;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject != NULL", 3353LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !(unsigned int)Feature_4100754745__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !DXGGLOBAL::IsSyncObjectLockExclusiveOwner(this) )
      goto LABEL_13;
    WdLogSingleEntry0(1LL);
    v9 = 3375LL;
    goto LABEL_11;
  }
  IsSyncObjectLockExclusiveOwner = DXGGLOBAL::IsSyncObjectLockExclusiveOwner(this);
  if ( !a4 )
  {
    if ( !IsSyncObjectLockExclusiveOwner )
      goto LABEL_13;
    WdLogSingleEntry0(1LL);
    v9 = 3370LL;
LABEL_11:
    v10 = L"!IsSyncObjectLockExclusiveOwner()";
    goto LABEL_12;
  }
  if ( !IsSyncObjectLockExclusiveOwner )
  {
    WdLogSingleEntry0(1LL);
    v9 = 3366LL;
    v10 = L"IsSyncObjectLockExclusiveOwner()";
LABEL_12:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_13:
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v20);
  if ( (*((_DWORD *)a2 + 106) & 4) != 0 )
  {
    v12 = *((_DWORD *)a2 + 105);
    if ( v12 != 5 && (unsigned int)(v12 - 6) > 1 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGSYNCOBJECT *)((char *)a2 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      v13 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 55);
      v14 = (char *)v13 - 152;
      if ( v13 == (struct DXGSYNCOBJECT *)((char *)a2 + 440) )
        v14 = 0LL;
      if ( v14 )
      {
        v18 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v14 + 4);
        if ( v18 )
        {
          v15 = *((_QWORD *)v14 + 2);
          v21 = -1LL;
          VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
            *(VIDSCH_EXPORT **)(v15 + 736),
            0,
            0LL,
            0,
            0LL,
            1u,
            &v18,
            0,
            &v21,
            0);
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
    }
  }
  if ( DXGSYNCOBJECT::Close(a2, a3) )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 68));
    v16 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v17 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v17 != a2) )
    {
      __fastfail(3u);
    }
    *v17 = v16;
    *((_QWORD *)v16 + 1) = v17;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 68);
    DXGSYNCOBJECT::Destroy(a2);
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20);
}
