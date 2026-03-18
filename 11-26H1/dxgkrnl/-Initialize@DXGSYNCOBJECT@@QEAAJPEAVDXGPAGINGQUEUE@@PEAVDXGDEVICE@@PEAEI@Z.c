/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAEI@Z @ 0x1403517DC
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x140009150 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsNativeWslProcess@DXGPROCESS@@QEBAEXZ @ 0x140041CD0 (-IsNativeWslProcess@DXGPROCESS@@QEBAEXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x140052F90 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N11_K1PEAVVIDMM_DEVICE@@@Z @ 0x140056160 (-VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N11_K1PEA.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140056FF0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140061770 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N4@Z @ 0x140351D48 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x140401000 (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(
        DXGSYNCOBJECT *this,
        struct DXGPAGINGQUEUE *a2,
        struct VIDMM_DEVICE **a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  __int64 Pool2; // rsi
  struct DXGPROCESS *Current; // rcx
  int v11; // ecx
  unsigned int v12; // r14d
  int v13; // edx
  int v14; // eax
  unsigned int v15; // ecx
  struct DXGGLOBAL *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r9
  int FenceStorageSlot; // eax
  unsigned int v22; // edi
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  struct DXGPROCESS *v27; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v30; // r9
  int v31; // edx
  int v32; // eax
  void *v33; // rcx
  struct DXGPROCESS *v34; // rax
  int v35; // ecx
  __int64 v36; // rcx
  int Object; // [rsp+20h] [rbp-68h]
  bool HandleInformation; // [rsp+28h] [rbp-60h]
  _BYTE v39[16]; // [rsp+50h] [rbp-38h] BYREF
  PVOID v40; // [rsp+90h] [rbp+8h] BYREF

  Pool2 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( Current && DXGPROCESS::IsNativeWslProcess(Current) )
    *((_DWORD *)this + 107) |= 4u;
  if ( *((_DWORD *)this + 105) == 4
    && (*((_DWORD *)Current + 102) & 0x110) == 0
    && ((*((_DWORD *)this + 107) & 2) != 0 || (*((_DWORD *)this + 106) & 0x100) != 0) )
  {
    v33 = (void *)*((_QWORD *)this + 29);
    v40 = 0LL;
    v22 = ObReferenceObjectByHandle(v33, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v40, 0LL);
    *((_QWORD *)this + 11) = v40;
    if ( (v22 & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1729;
      return v22;
    }
    *((_DWORD *)this + 107) |= 0x40u;
  }
  v11 = *((_DWORD *)this + 107);
  v12 = a5;
  if ( (v11 & 2) == 0 )
  {
    v13 = *((_DWORD *)this + 105);
    if ( v13 == 4 )
    {
      if ( (v11 & 4) != 0 )
      {
        if ( !*((_QWORD *)this + 29) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 1743;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"WSL CPU event is NULL", 1743LL, 0LL, 0LL, 0LL, 0LL);
          return (unsigned int)-1073741811;
        }
        Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
        if ( !Pool2 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1750;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
            1750LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return (unsigned int)-1073741801;
        }
        *(_QWORD *)(Pool2 + 8) = *((_QWORD *)this + 29);
        *(_BYTE *)(Pool2 + 17) = 1;
        *(_BYTE *)(Pool2 + 19) = 1;
        *((_QWORD *)this + 29) = Pool2;
        DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
      }
    }
    else
    {
      if ( (unsigned int)(v13 - 5) > 1 )
      {
        if ( v13 != 7 )
          goto LABEL_15;
        Global = DXGGLOBAL::GetGlobal();
        LOBYTE(v30) = *((_BYTE *)this + 424) & 1;
        FenceStorageSlot = VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
                             *((VIDMM_EXPORT **)Global + 34),
                             (DXGSYNCOBJECT *)((char *)this + 128),
                             v12,
                             v30,
                             (*((_DWORD *)this + 107) & 0x20) != 0,
                             HandleInformation,
                             *((_QWORD *)this + 38),
                             1,
                             a3[99]);
      }
      else
      {
        v14 = *((_DWORD *)this + 106);
        if ( (v14 & 0x80u) == 0 )
        {
          v15 = v11 & 0xFFFFFFFE;
          if ( (v14 & 4) == 0 )
            v15 |= (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 57) + 16LL) + 2504LL) & 0x20) == 0;
        }
        else
        {
          v15 = v11 | 1;
        }
        *((_DWORD *)this + 107) = v15;
        v16 = DXGGLOBAL::GetGlobal();
        v18 = 0LL;
        v19 = *((_QWORD *)v16 + 34);
        if ( *((_DWORD *)this + 105) != 6 )
          v18 = *((_QWORD *)this + 29);
        LOBYTE(v17) = *((_BYTE *)this + 424) & 1;
        v20 = *((_DWORD *)this + 107) >> 5;
        LOBYTE(v20) = (*((_DWORD *)this + 107) & 0x20) != 0;
        LOBYTE(Object) = 0;
        FenceStorageSlot = (*(__int64 (__fastcall **)(char *, _QWORD, __int64, __int64, int, __int64, _BYTE, struct VIDMM_DEVICE *))(*(_QWORD *)(v19 + 8) + 872LL))(
                             (char *)this + 128,
                             v12,
                             v17,
                             v20,
                             Object,
                             v18,
                             *((_BYTE *)this + 428) & 1,
                             a3[99]);
      }
      v22 = FenceStorageSlot;
      if ( FenceStorageSlot < 0 )
        return v22;
      if ( a2 )
        v23 = *((_QWORD *)a2 + 4);
      else
        v23 = 0LL;
      *((_QWORD *)this + 19) = v23;
    }
  }
LABEL_15:
  if ( (*((_DWORD *)this + 106) & 4) != 0 )
    v24 = DXGSYNCOBJECTCA::Initialize(this);
  else
    v24 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject(
            (DXGSYNCOBJECT *)((char *)this + 440),
            this,
            (struct DXGDEVICE *)a3,
            a2,
            a4,
            v12,
            0,
            0);
  v22 = v24;
  if ( v24 < 0 )
    goto LABEL_20;
  v26 = *((_DWORD *)this + 106);
  if ( (v26 & 1) == 0 )
    goto LABEL_19;
  v31 = *((_DWORD *)this + 107);
  LOBYTE(v25) = (v31 & 0x10) == 0;
  if ( ((unsigned __int8)v25 & ((v26 & 2) != 0)) != 0 )
    goto LABEL_19;
  if ( (v31 & 0x10) != 0 )
  {
    v34 = DXGPROCESS::GetCurrent(v25);
    v35 = *((_DWORD *)v34 + 102);
    if ( (v35 & 0x100) != 0 )
      v36 = *((_QWORD *)v34 + 74);
    else
      v36 = (unsigned __int64)v34 & -(__int64)((v35 & 0x80u) != 0);
    *((_DWORD *)this + 20) = DXGPROCESS::AllocHandleSafe(v36, (__int64)this, 8u);
  }
  else
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v39);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
    *((_DWORD *)this + 20) = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 8u);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
  }
  v32 = *((_DWORD *)this + 20);
  if ( v32 )
  {
    *((_DWORD *)this + 74) = v32;
LABEL_19:
    v27 = DXGPROCESS::GetCurrent(v25);
    WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 20), v27);
    WdLogGlobalForLineNumber = 1877;
    goto LABEL_20;
  }
  v22 = -1073741801;
  WdLogSingleEntry2(6LL, this, -1073741801LL);
  WdLogGlobalForLineNumber = 1859;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"SyncObj 0x%I64x: Unable to create synchronization object handle, returning 0x%I64x",
    (__int64)this,
    -1073741801LL,
    0LL,
    0LL,
    0LL);
LABEL_20:
  if ( Pool2 )
  {
    DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
    *((_QWORD *)this + 29) = 0LL;
  }
  return v22;
}
