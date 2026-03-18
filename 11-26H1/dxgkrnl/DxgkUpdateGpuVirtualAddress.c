/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x140376110
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234690 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x14000D554 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140037E2C (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x14004240C (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x14019345C (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402E5CE4 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x14037732C (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x14042E594 (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a1)
{
  char CurrentThreadPreviousMode; // r13
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // r14
  struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *v5; // r12
  DXGCONTEXT *v6; // r13
  DXGCONTEXT *v7; // r14
  DXGCONTEXT *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  int updated; // esi
  int v12; // r15d
  unsigned __int64 NumOperations; // rdx
  int v14; // ecx
  unsigned __int64 v15; // rax
  DXGDEVICESYNCOBJECT *v16; // rax
  DXGDEVICESYNCOBJECT *v17; // rcx
  int v18; // r9d
  UINT v19; // edx
  UINT v20; // r10d
  __int64 v21; // rax
  bool v22; // cf
  unsigned __int64 v23; // rax
  char *v24; // rax
  unsigned int v25; // edx
  DXGCONTEXT *v26; // rax
  unsigned __int64 v27; // rax
  char *v28; // rax
  int v29; // r9d
  UINT v30; // r8d
  char *v31; // r11
  DXGCONTEXT *v32; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v34; // ecx
  __int64 v35; // r8
  int v36; // edx
  DXGPUSHLOCK *v37; // rax
  DXGCONTEXT *v38; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v40; // eax
  ADAPTER_RENDER **v41; // rcx
  __int64 v42; // rcx
  unsigned __int64 v44; // rax
  int v45; // r8d
  int v46; // r8d
  unsigned __int64 v47; // rax
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  int v49; // r10d
  unsigned int v50; // edx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v52; // r8
  ADAPTER_RENDER **v53; // rcx
  __int64 v54; // rcx
  void *v55; // rcx
  ADAPTER_RENDER **v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v60; // [rsp+58h] [rbp-1F0h]
  char v61; // [rsp+60h] [rbp-1E8h]
  char v62; // [rsp+68h] [rbp-1E0h]
  DXGCONTEXT *v63; // [rsp+70h] [rbp-1D8h] BYREF
  unsigned __int64 v64; // [rsp+78h] [rbp-1D0h]
  void *v65; // [rsp+80h] [rbp-1C8h]
  DXGDEVICESYNCOBJECT *v66; // [rsp+88h] [rbp-1C0h]
  struct DXGDEVICE *v67; // [rsp+90h] [rbp-1B8h] BYREF
  size_t Size; // [rsp+98h] [rbp-1B0h]
  DXGPUSHLOCK *v69; // [rsp+A0h] [rbp-1A8h]
  PVOID Object; // [rsp+A8h] [rbp-1A0h] BYREF
  struct DXGPROCESS *v71; // [rsp+B0h] [rbp-198h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v72; // [rsp+B8h] [rbp-190h] BYREF
  char v73; // [rsp+C0h] [rbp-188h]
  DXGCONTEXT *v74; // [rsp+C8h] [rbp-180h] BYREF
  char v75; // [rsp+D0h] [rbp-178h]
  _BYTE v76[16]; // [rsp+D8h] [rbp-170h] BYREF
  _QWORD v77[2]; // [rsp+E8h] [rbp-160h] BYREF
  struct VIDMM_COMPANION_CONTEXT *VidMmCompanionContext; // [rsp+F8h] [rbp-150h]
  _BYTE v79[24]; // [rsp+100h] [rbp-148h] BYREF
  struct _EX_RUNDOWN_REF *v80; // [rsp+118h] [rbp-130h] BYREF
  char *v81; // [rsp+120h] [rbp-128h]
  char *v82; // [rsp+128h] [rbp-120h]
  _OWORD v83[3]; // [rsp+130h] [rbp-118h] BYREF
  __int64 v84; // [rsp+160h] [rbp-E8h]
  _BYTE v85[160]; // [rsp+170h] [rbp-D8h] BYREF

  v59 = -1;
  v60 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v61 = 1;
    v59 = 2106;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v59, 2106);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v62 = CurrentThreadPreviousMode;
  Current = DXGPROCESS::GetCurrent(v3);
  v71 = Current;
  if ( !Current )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 13591;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_82;
  }
  memset(v83, 0, sizeof(v83));
  v84 = 0LL;
  v5 = (struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *)v83;
  v65 = v83;
  if ( CurrentThreadPreviousMode == 1 )
  {
    RtlCopyFromUser(v83, a1, 0x38uLL);
  }
  else
  {
    v5 = a1;
    v65 = a1;
  }
  if ( !v5->NumOperations )
  {
    updated = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 13618;
    goto LABEL_82;
  }
  v63 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v67, v5->hDevice, (struct _KTHREAD **)Current, &v63);
  v6 = v63;
  if ( !v63 )
  {
    updated = -1073741811;
    WdLogSingleEntry2(2LL, v5->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 13626;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v5->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_119:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v67);
LABEL_82:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
    if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v54, (__int64)&EventProfilerExit);
    return (unsigned int)updated;
  }
  v63 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v76,
    v5->hContext,
    (struct _KTHREAD **)Current,
    &v63,
    0,
    1);
  v7 = v63;
  if ( !v63 )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, v71, v5->hContext, -1073741811LL);
    WdLogGlobalForLineNumber = 13635;
LABEL_118:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
    goto LABEL_119;
  }
  v8 = (DXGCONTEXT *)*((_QWORD *)v63 + 2);
  if ( v8 != v6 )
  {
    updated = -1073741811;
    WdLogSingleEntry3(2LL, v8, v6, -1073741811LL);
    WdLogGlobalForLineNumber = 13642;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Context device 0x%p does not match user provided device 0x%p, returning 0x%I64x",
      *((_QWORD *)v7 + 2),
      (__int64)v6,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_118;
  }
  v9 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL);
  if ( *(_BYTE *)(v9 + 209) )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v9 + 4712),
                v71,
                *((_DWORD *)v6 + 118),
                *((_DWORD *)v63 + 7),
                v5);
    goto LABEL_118;
  }
  v74 = v6;
  v75 = 0;
  DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v74);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v79, (struct _KTHREAD **)v7 + 55);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v85, (__int64)v6, 0, v10, 0);
  updated = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v85, 0LL);
  if ( updated < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 13669;
LABEL_124:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v79);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v74);
    goto LABEL_118;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 2508LL) & 0x40) == 0 )
  {
    updated = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 13675;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v79);
    if ( v74 && v75 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v74 + 17));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
    v53 = (ADAPTER_RENDER **)v67;
    if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(v53[2], (struct DXGDEVICE *)v53);
    goto LABEL_82;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v7) )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, v71, v5->hContext, -1073741811LL);
    WdLogGlobalForLineNumber = 13683;
    goto LABEL_124;
  }
  VidMmCompanionContext = DXGCONTEXT::GetVidMmCompanionContext(v7);
  if ( !VidMmCompanionContext )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, v71, v5->hContext, -1073741811LL);
    WdLogGlobalForLineNumber = 13691;
    goto LABEL_124;
  }
  updated = -1073741811;
  v12 = -1073741811;
  HIDWORD(Size) = -1073741811;
  v63 = 0LL;
  LODWORD(v64) = 0;
  NumOperations = v5->NumOperations;
  v14 = -1;
  if ( NumOperations << 6 <= 0xFFFFFFFF )
    v14 = (_DWORD)NumOperations << 6;
  LODWORD(Size) = v14;
  if ( NumOperations << 6 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 13708;
    goto LABEL_124;
  }
  v15 = NumOperations << 6;
  if ( !is_mul_ok(NumOperations, 0x40uLL) )
    v15 = -1LL;
  v16 = (DXGDEVICESYNCOBJECT *)operator new[](v15, 0x4B677844u, 256LL);
  v66 = v16;
  if ( !v16 )
  {
    v12 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 13714;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v79);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v74);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v67);
    goto LABEL_97;
  }
  if ( v62 == 1 )
    RtlCopyFromUser(v16, v5->Operations, (unsigned int)Size);
  else
    memmove(v16, v5->Operations, (unsigned int)Size);
  v17 = v66;
  v5->Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v66;
  v18 = 0;
  v19 = 0;
  v20 = v5->NumOperations;
  while ( v19 < v20 )
  {
    v44 = (unsigned __int64)v19 << 6;
    v45 = *(_DWORD *)((char *)v17 + v44);
    if ( v45 && v45 != 3 )
    {
      if ( (unsigned int)(v45 - 1) > 1 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 13764;
        goto LABEL_131;
      }
    }
    else
    {
      v46 = *(_DWORD *)((char *)v17 + v44 + 24);
      if ( !v46 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 13751;
LABEL_131:
        v55 = 0LL;
LABEL_89:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v55);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5->Operations);
        if ( v63 )
          DXGALLOCATIONREFERENCE::`vector deleting destructor'(v63);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v79);
        if ( v74 && v75 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v74 + 17));
          KeLeaveCriticalRegion();
        }
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
        v56 = (ADAPTER_RENDER **)v67;
        if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(v56[2], (struct DXGDEVICE *)v56);
LABEL_97:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
        if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v57, (__int64)&EventProfilerExit);
        return (unsigned int)v12;
      }
      if ( v18 != v46 )
      {
        LODWORD(v64) = v64 + 1;
        v18 = v46;
      }
    }
    ++v19;
  }
  v21 = 8LL * (unsigned int)v64;
  if ( !is_mul_ok((unsigned int)v64, 8uLL) )
    v21 = -1LL;
  v22 = __CFADD__(v21, 8LL);
  v23 = v21 + 8;
  if ( v22 )
    v23 = -1LL;
  v24 = (char *)operator new[](v23, 0x4B677844u, 256LL);
  if ( v24 )
  {
    v25 = v64;
    *(_QWORD *)v24 = (unsigned int)v64;
    v63 = (DXGCONTEXT *)(v24 + 8);
    `vector constructor iterator'(
      v24 + 8,
      8LL,
      v25,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v26 = v63;
  }
  else
  {
    v26 = 0LL;
    v63 = 0LL;
  }
  if ( !v26 )
  {
    v12 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 13773;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGALLOCATIONREFERENCE array, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_131;
  }
  v27 = 8LL * (unsigned int)v64;
  if ( !is_mul_ok((unsigned int)v64, 8uLL) )
    v27 = -1LL;
  v28 = (char *)operator new[](v27, 0x4B677844u, 256LL);
  v65 = v28;
  if ( !v28 )
  {
    v12 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 13781;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VIDMM_MULTI_ALLOC* array, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_88:
    v55 = v65;
    goto LABEL_89;
  }
  Size = 0LL;
  v29 = -1;
  v30 = 0;
  v31 = v28 - 8;
  v32 = v63;
  v81 = (char *)(v63 - (DXGCONTEXT *)v28);
  while ( 1 )
  {
    LODWORD(v69) = v29;
    if ( v30 >= v5->NumOperations )
      break;
    v47 = (unsigned __int64)v30 << 6;
    v77[0] = v47;
    Operations = v5->Operations;
    v72 = Operations;
    v49 = *(D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE *)((char *)&Operations->OperationType + v47);
    if ( !v49 || v49 == 3 )
    {
      v50 = *(D3DKMT_HANDLE *)((char *)&Operations->Map.hAllocation + v47);
      LODWORD(v66) = v50;
      if ( (_DWORD)Size != v50 )
      {
        LODWORD(Size) = v50;
        LODWORD(Object) = v29 + 1;
        v82 = v31 + 8;
        v69 = (DXGCONTEXT *)((char *)v32 + 8 * (int)v69 + 8);
        AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v71, (DXGALLOCATIONREFERENCE *)&v80, v50);
        DXGALLOCATIONREFERENCE::MoveAssign(v69, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80);
        v31 = v82;
        v52 = *(_QWORD *)&v81[(_QWORD)v82];
        if ( !v52 )
        {
          WdLogSingleEntry2(3LL, (unsigned int)v66, -1073741811LL);
          WdLogGlobalForLineNumber = 13812;
          goto LABEL_88;
        }
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 8) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) )
        {
          WdLogSingleEntry3(2LL, v6, v52, -1073741811LL);
          WdLogGlobalForLineNumber = 13820;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)v6,
            *(_QWORD *)v69,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_88;
        }
        *(_QWORD *)v82 = *(_QWORD *)(v52 + 24);
        v32 = v63;
        v47 = v77[0];
        v30 = HIDWORD(Size);
        v29 = (int)Object;
      }
      *(D3DKMT_HANDLE *)((char *)&v72->Map.hAllocation + v47) = v29;
    }
    HIDWORD(Size) = ++v30;
  }
  v69 = (struct DXGPROCESS *)((char *)v71 + 248);
  while ( 1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v72, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v72);
    LODWORD(v66) = v5->hFenceObject;
    DXGPUSHLOCK::AcquireShared(v69);
    v34 = ((unsigned int)v66 >> 6) & 0xFFFFFF;
    if ( v34 < *((_DWORD *)v71 + 74) )
    {
      v35 = *((_QWORD *)v71 + 35);
      v36 = *(_DWORD *)(v35 + 16LL * v34 + 8);
      if ( (((unsigned int)v66 >> 25) & 0x60) == (v36 & 0x60) && (v36 & 0x2000) == 0 && (v36 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(v35 + 16 * (((unsigned __int64)(unsigned int)v66 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
        {
          v66 = *(DXGDEVICESYNCOBJECT **)(v35 + 16 * (((unsigned __int64)(unsigned int)v66 >> 6) & 0xFFFFFF));
          goto LABEL_46;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v66 = 0LL;
LABEL_46:
    v37 = v69;
    _InterlockedDecrement((volatile signed __int32 *)v69 + 4);
    ExReleasePushLockSharedEx(v37, 0LL);
    KeLeaveCriticalRegion();
    if ( !v66 )
    {
      WdLogSingleEntry2(3LL, v5->hFenceObject, -1073741811LL);
      WdLogGlobalForLineNumber = 13855;
      goto LABEL_143;
    }
    v38 = (DXGCONTEXT *)*((_QWORD *)v66 + 2);
    if ( v38 != v6 )
    {
      WdLogSingleEntry3(2LL, v38, v6, -1073741811LL);
      WdLogGlobalForLineNumber = 13862;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Monitored fence device 0x%p does not match user provided device 0x%p, returning 0x%I64x",
        *((_QWORD *)v66 + 2),
        (__int64)v6,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_143;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v77, *((struct DXGSYNCOBJECT **)v66 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v77);
    VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(v66);
    Object = 0LL;
    v40 = (*(__int64 (__fastcall **)(_QWORD, struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *, struct VIDMM_COMPANION_CONTEXT *, _QWORD, void *, struct _VIDSCH_SYNC_OBJECT *, PVOID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 760LL) + 8LL) + 968LL))(
            *(_QWORD *)(*((_QWORD *)v6 + 2) + 768LL),
            v5,
            VidMmCompanionContext,
            (unsigned int)v64,
            v65,
            VidSchSyncObject,
            &Object);
    v12 = v40;
    if ( v40 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v85);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v77);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v72);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v58, (__int64)"g");
    v12 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    if ( !v12 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 13909;
      v12 = -1073741130;
LABEL_138:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77);
LABEL_143:
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v72);
      goto LABEL_88;
    }
    if ( v12 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 13916;
      goto LABEL_138;
    }
    v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v85, 0LL);
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 13926;
      goto LABEL_138;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77);
    if ( v73 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v72);
  }
  if ( v40 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 13933;
    goto LABEL_138;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v77);
  if ( v73 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v72);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v63);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v79);
  if ( v74 && v75 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v74 + 17));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v76);
  v41 = (ADAPTER_RENDER **)v67;
  if ( v67 && _InterlockedExchangeAdd64((volatile signed __int64 *)v67 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(v41[2], (struct DXGDEVICE *)v41);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
  if ( v61 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit);
  }
  return 0LL;
}
