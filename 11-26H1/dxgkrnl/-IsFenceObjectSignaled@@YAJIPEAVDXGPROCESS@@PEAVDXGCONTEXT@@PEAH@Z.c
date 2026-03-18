/*
 * XREFs of ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1402BE124
 * Callers:
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1402BE088 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402BE420 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1402BE46C (-VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJEC.c)
 */

__int64 __fastcall IsFenceObjectSignaled(unsigned int a1, struct DXGPROCESS *a2, struct DXGCONTEXT *a3, int *a4)
{
  __int64 v4; // rbp
  unsigned int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  struct ADAPTER_RENDER *v12; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v14; // rdx
  int v15; // eax
  int IsSyncObjectSignaled; // ebx
  DXG_GUEST_VIRTUALGPU_VMBUS *v18; // rcx
  _BYTE v19[16]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int8 v20; // [rsp+90h] [rbp+8h] BYREF

  v4 = a1;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)a3 + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 991;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pContext->GetRenderCore()->IsCoreResourceSharedOwner()",
      991LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 248));
  v8 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)a2 + 74) )
  {
    v9 = *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * v8 + 8);
    if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a2 + 35) + 16LL * v8 + 8) & 0x60)
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0 )
    {
      v10 = *((_QWORD *)a2 + 35);
      if ( (*(_BYTE *)(v10 + 16LL * v8 + 8) & 0x1F) == 8 )
      {
        v11 = *(_DWORD **)(v10 + 16LL * v8);
        goto LABEL_9;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = 0LL;
LABEL_9:
  _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
  ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 )
  {
    if ( v11[105] == 3 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(v11 + 8), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      v12 = *(struct ADAPTER_RENDER **)(*((_QWORD *)a3 + 2) + 16LL);
      if ( *((_BYTE *)a3 + 434) )
      {
        v18 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)v12 + 2) + 4712LL);
        v20 = 0;
        IsSyncObjectSignaled = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
                                 v18,
                                 a2,
                                 (struct DXGSYNCOBJECT *)v11,
                                 v4,
                                 &v20);
        if ( IsSyncObjectSignaled < 0 )
          goto LABEL_14;
        v15 = v20 == 1;
      }
      else
      {
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v11, v12);
        v15 = (*(unsigned __int8 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL)
                                                                              + 896LL))(VidSchSyncObject);
      }
      *a4 = v15;
      IsSyncObjectSignaled = 0;
LABEL_14:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
      return (unsigned int)IsSyncObjectSignaled;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1008;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Call only valid for fence objects",
      1008LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, v4);
    WdLogGlobalForLineNumber = 999;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid sync object, process 0x%I64x, handle 0x%I64x",
      (__int64)a2,
      v4,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
