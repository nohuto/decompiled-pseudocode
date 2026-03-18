/*
 * XREFs of ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005C2E0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402BE420 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusIsSyncObjectSignaled(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r15
  unsigned int v7; // r13d
  unsigned int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  struct ADAPTER_RENDER **v16; // [rsp+60h] [rbp-A8h]
  _BYTE v17[16]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v18[16]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v19[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v20[144]; // [rsp+A8h] [rbp-60h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v19,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4455;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4455LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v4 )
  {
    v16 = *(struct ADAPTER_RENDER ***)(*((_QWORD *)a1 + 10) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, (struct DXGADAPTER *const)v16, 0LL);
    LODWORD(v15) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
    if ( (int)v15 < 0 )
    {
LABEL_19:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v15, 4u);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
      v2 = 1;
      goto LABEL_20;
    }
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v18, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v18);
    v6 = *((_QWORD *)a1 + 11);
    v7 = *(_DWORD *)(v4 + 24);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 248));
    v8 = (v7 >> 6) & 0xFFFFFF;
    if ( v8 < *(_DWORD *)(v6 + 296) )
    {
      v9 = *(_DWORD *)(*(_QWORD *)(v6 + 280) + 16LL * v8 + 8);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v6 + 280) + 16LL * v8 + 8) & 0x60)
        && (v9 & 0x2000) == 0
        && (v9 & 0x1F) != 0 )
      {
        v10 = *(_QWORD *)(v6 + 280);
        if ( (*(_BYTE *)(v10 + 16LL * v8 + 8) & 0x1F) == 8 )
        {
          v11 = *(_QWORD *)(v10 + 16LL * v8);
          goto LABEL_12;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v11 = 0LL;
LABEL_12:
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 264));
    ExReleasePushLockSharedEx(v6 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v11 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(v11 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v11, v16[396]);
      if ( !(*(unsigned __int8 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v13 + 736) + 8LL)
                                                                            + 896LL))(VidSchSyncObject) )
        LODWORD(v15) = -1071775484;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
    }
    else
    {
      WdLogSingleEntry2(2LL, v6, *(unsigned int *)(v4 + 24));
      v14 = *(unsigned int *)(v4 + 24);
      WdLogGlobalForLineNumber = 4474;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid sync object, process 0x%I64x, handle 0x%I64x",
        v6,
        v14,
        0LL,
        0LL,
        0LL);
      LODWORD(v15) = -1073741811;
    }
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v18);
    goto LABEL_19;
  }
LABEL_20:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
  return v2;
}
