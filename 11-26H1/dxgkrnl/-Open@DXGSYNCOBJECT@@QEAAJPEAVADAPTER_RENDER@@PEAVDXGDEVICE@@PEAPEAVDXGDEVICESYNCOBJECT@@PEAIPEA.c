/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34
 * Callers:
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401E9FAC (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1401EBF60 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401EDEC0 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402292F0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1403527B8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140353BE0 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F49D0 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x140038920 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x14003CC28 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x14003D6E8 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140067CAC (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402003DC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@IPEAE@Z @ 0x140200460 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1402BF53C (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N5@Z @ 0x140372CF0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1403B5C28 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Open(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        struct DXGDEVICESYNCOBJECT **a4,
        unsigned int *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int a8,
        struct DXGADAPTERSYNCOBJECT **a9,
        bool a10,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a11,
        struct DXGPAGINGQUEUE *a12,
        unsigned __int8 *a13,
        bool a14,
        bool a15,
        unsigned int a16)
{
  bool v16; // di
  unsigned int v17; // esi
  bool v18; // bl
  int DxgAdapterSyncObject; // ebx
  struct DXGADAPTERSYNCOBJECT *v23; // rbx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v24; // edi
  int v25; // ecx
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // edi
  int *v31; // rdi
  PERESOURCE *Global; // rax
  _QWORD *v33; // r15
  unsigned int v34; // eax
  unsigned int v35; // edx
  int v36; // r15d
  unsigned int v37; // eax
  int v38; // ecx
  struct DXGGLOBAL *v39; // rax
  struct DXGPROCESS *v40; // rax
  struct DXGDEVICE *v42; // rdi
  DXGDEVICESYNCOBJECT *v43; // rax
  unsigned int *v44; // r13
  DXGDEVICESYNCOBJECT *v45; // rdi
  struct DXGSYNCOBJECT *v46; // r15
  struct DXGGLOBAL *v47; // rax
  unsigned __int64 *v48; // rcx
  struct DXGPROCESS *v49; // rax
  unsigned int *Current; // [rsp+50h] [rbp-30h]
  _BYTE v51[16]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v52[24]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGADAPTERSYNCOBJECT *v53; // [rsp+C0h] [rbp+40h] BYREF
  struct DXGDEVICE *v54; // [rsp+D0h] [rbp+50h]

  v54 = a3;
  v16 = a15;
  v17 = 0;
  v18 = a14;
  if ( a15 && a14 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2718;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"NativeFenceOpenedAsMonitoredFence == FALSE || MonitoredFenceOpenedAsNativeFence == FALSE",
      2718LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = (unsigned int *)DXGPROCESS::GetCurrent((__int64)this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v51, (DXGSYNCOBJECT *)((char *)this + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v51);
  v53 = 0LL;
  DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(this, a2, &v53, v54, a12, a13, a16, v18, v16);
  if ( DxgAdapterSyncObject < 0 && a2 )
    goto LABEL_62;
  v23 = v53;
  if ( a9 )
    *a9 = v53;
  v24 = a11.0;
  if ( ((*((_BYTE *)this + 424) ^ *(_BYTE *)&a11.0) & 0x80u) == 0 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v51);
    if ( v23 && *((_BYTE *)v23 + 25) )
    {
      WdLogSingleEntry2(4LL, this, -1073741823LL);
      WdLogGlobalForLineNumber = 2762;
LABEL_13:
      DxgAdapterSyncObject = -1073741823;
      goto LABEL_62;
    }
    v25 = *((_DWORD *)this + 107);
    if ( (v25 & 0x10) != 0 && (Current[102] & 0x180) == 0 && (v25 & 0x20) == 0 )
    {
      WdLogSingleEntry2(3LL, this, -1073741790LL);
      WdLogGlobalForLineNumber = 2780;
      goto LABEL_13;
    }
    v26 = *((_DWORD *)this + 105);
    v27 = *(_DWORD *)&v24 ^ (*((_DWORD *)this + 106) ^ *(_DWORD *)&v24) & 0x400;
    if ( v26 != 5 && (unsigned int)(v26 - 6) > 1 )
    {
      v28 = DXGSYNCOBJECT::AddReference(this);
      v30 = v28;
      if ( v28 < 0 )
      {
        WdLogSingleEntry2(3LL, this, v28);
        WdLogGlobalForLineNumber = 2915;
        DxgAdapterSyncObject = v30;
        goto LABEL_62;
      }
      v31 = (int *)a5;
      if ( a5 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
        if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(Global) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2925;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockSharedOwner()",
            2925LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
          (DXGHANDLETABLELOCKEXCLUSIVE *)v52,
          (struct DXGPROCESS *)Current);
        v33 = Current + 70;
        v34 = HMGRTABLE::AllocHandle(Current + 70, (__int64)this, 8, 0, 0);
        *v31 = v34;
        v35 = v34;
        if ( !v34 )
        {
          v36 = -1073741801;
          WdLogSingleEntry2(6LL, this, -1073741801LL);
          WdLogGlobalForLineNumber = 2939;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"pSyncObject 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
            (__int64)this,
            -1073741801LL,
            0LL,
            0LL,
            0LL);
          _InterlockedDecrement((volatile signed __int32 *)this + 6);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
LABEL_61:
          DxgAdapterSyncObject = v36;
          goto LABEL_62;
        }
        v37 = (v34 >> 6) & 0xFFFFFF;
        if ( v37 < Current[74] )
        {
          v38 = *(_DWORD *)(*v33 + 16LL * v37 + 8);
          if ( ((v35 >> 25) & 0x60) == (*(_BYTE *)(*v33 + 16LL * v37 + 8) & 0x60)
            && (v38 & 0x2000) == 0
            && (v38 & 0x1F) != 0 )
          {
            *(_DWORD *)(*v33 + 16LL * v37 + 8) = v38 | 0x2000;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
        if ( (*((_DWORD *)this + 107) & 2) != 0 && *((_DWORD *)this + 6) > 1u )
        {
          v39 = DXGGLOBAL::GetGlobal();
          DxgAdapterSyncObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                                   *((DXG_GUEST_GLOBAL_VMBUS **)v39 + 212),
                                   (struct DXGPROCESS *)Current,
                                   0LL,
                                   *v31,
                                   this,
                                   0LL,
                                   0,
                                   (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v27);
          if ( DxgAdapterSyncObject < 0 )
          {
            DXGPROCESS::FreeHandleSafe((DXGPROCESS *)Current, *v31);
            *v31 = 0;
            _InterlockedDecrement((volatile signed __int32 *)this + 6);
            goto LABEL_62;
          }
        }
      }
      v40 = DXGPROCESS::GetCurrent(v29);
      if ( v31 )
        v17 = *v31;
      WdLogSingleEntry3(4LL, this, v17, v40);
      WdLogGlobalForLineNumber = 3014;
LABEL_39:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51);
      return 0LL;
    }
    v42 = v54;
    if ( !v54 || !a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2794;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDevice != NULL && pRenderCore != NULL",
        2794LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v43 = (DXGDEVICESYNCOBJECT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(128LL);
    if ( v43 && (v44 = a5, (v45 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(v43, v42, a10, a5 != 0LL)) != 0LL) )
    {
      v36 = DXGDEVICESYNCOBJECT::Initialize(v45, this, (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v27, a8, a13);
      if ( v36 >= 0 )
      {
        v46 = (struct DXGSYNCOBJECT *)*((_QWORD *)v45 + 4);
        if ( (*((_DWORD *)v46 + 107) & 2) == 0
          || *((_DWORD *)this + 6) <= 1u
          || (v47 = DXGGLOBAL::GetGlobal(),
              v36 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                      *((DXG_GUEST_GLOBAL_VMBUS **)v47 + 212),
                      (struct DXGPROCESS *)Current,
                      v54,
                      0,
                      v46,
                      v45,
                      a8,
                      (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v27),
              v36 >= 0) )
        {
          if ( v44 )
            *v44 = *((_DWORD *)v45 + 10);
          if ( a6 )
            *a6 = (void *)*((_QWORD *)v45 + 7);
          v48 = a7;
          if ( a7 )
            *a7 = *((_QWORD *)v45 + 6);
          v49 = DXGPROCESS::GetCurrent((__int64)v48);
          WdLogSingleEntry3(4LL, this, *((unsigned int *)v45 + 10), v49);
          WdLogGlobalForLineNumber = 2876;
          if ( a4 )
            *a4 = v45;
          goto LABEL_39;
        }
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v45);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v45);
    }
    else
    {
      v36 = -1073741801;
      WdLogSingleEntry2(6LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 2815;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"pSyncObject 0x%I64x: Failed to allocate device sync object, returning 0x%I64x",
        (__int64)this,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a4 )
      *a4 = 0LL;
    goto LABEL_61;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2751;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"When opening a synchronization object, the NoGPUAccess flag specified at open time must match the flag spec"
              "ified at creation time.",
    2751LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DxgAdapterSyncObject = -1073741811;
LABEL_62:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51);
  return (unsigned int)DxgAdapterSyncObject;
}
