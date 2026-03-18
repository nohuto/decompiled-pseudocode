/*
 * XREFs of ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403C698C
 * Callers:
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401E9FAC (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1401EBF60 (DxgkOpenSyncObjectFromNtHandle.c)
 *     NtDxgkCreateNativeFenceInternal @ 0x140200CD8 (NtDxgkCreateNativeFenceInternal.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403C442C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1403C6950 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkDestroySynchronizationObject @ 0x1403C6970 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F49D0 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426E20 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x14003CC28 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectImpl(const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1, int a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rcx
  bool v7; // zf
  unsigned int ULongFromUser; // r12d
  volatile signed __int64 *v9; // r14
  unsigned int v10; // edi
  bool v11; // al
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v18; // r14
  unsigned int v19; // ecx
  int v20; // ecx
  struct DXGSYNCOBJECT *v21; // r14
  __int64 v22; // rdx
  unsigned int v23; // ecx
  PERESOURCE *Global; // rax
  __int64 v25; // r9
  const char *v26; // rdx
  unsigned int v27; // edx
  __int64 v28; // r14
  unsigned int v29; // ecx
  DXGDEVICESYNCOBJECT *v30; // r14
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // rcx
  unsigned int v34; // [rsp+50h] [rbp-128h]
  int v35; // [rsp+58h] [rbp-120h] BYREF
  __int64 v36; // [rsp+60h] [rbp-118h]
  char v37; // [rsp+68h] [rbp-110h]
  volatile signed __int64 *v38; // [rsp+70h] [rbp-108h]
  volatile signed __int64 *v39; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v40[24]; // [rsp+80h] [rbp-F8h] BYREF
  unsigned int v41; // [rsp+98h] [rbp-E0h]
  _BYTE v42[16]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v43[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v35 = -1;
  v36 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2042);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 723;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    v7 = v37 == 0;
LABEL_39:
    if ( !v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( a2 )
  {
    ULongFromUser = RtlReadULongFromUser(&a1->hSyncObject);
    v41 = ULongFromUser;
  }
  else
  {
    ULongFromUser = a1->hSyncObject;
  }
  v9 = 0LL;
  v38 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v40, (struct _KTHREAD **)Current);
  v10 = (ULongFromUser >> 6) & 0xFFFFFF;
  v34 = ULongFromUser >> 30;
  v11 = v10 < *((_DWORD *)Current + 74)
     && (v12 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v10 + 8), ULongFromUser >> 30 == ((v12 >> 5) & 3))
     && (v12 & 0x2000) == 0
     && (v12 & 0x1F) != 0;
  if ( v11 && (v14 = *((_QWORD *)Current + 35), (*(_BYTE *)(v14 + 16LL * v10 + 8) & 0x1F) == 0xB) )
    v13 = *(_QWORD *)(v14 + 16LL * v10);
  else
    v13 = 0LL;
  v15 = 16LL * v10;
  if ( v13 )
  {
    if ( (*(_BYTE *)(v13 + 92) & 2) == 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 764;
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
      return 3221225506LL;
    }
    v9 = *(volatile signed __int64 **)(v13 + 16);
    v38 = v9;
    _InterlockedIncrement64(v9 + 8);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40);
  if ( v9 )
  {
    v39 = v9;
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v42,
      (struct DXGDEVICE *)v9);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v9, 2, v25, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v43, v26);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40, Current);
    v27 = *((_DWORD *)Current + 74);
    if ( v10 < v27
      && (v28 = *((_QWORD *)Current + 35), v29 = *(_DWORD *)(v15 + v28 + 8), v34 == ((v29 >> 5) & 3))
      && (v29 & 0x2000) == 0
      && (v29 & 0x1F) == 0xB )
    {
      v30 = *(DXGDEVICESYNCOBJECT **)(v15 + v28);
    }
    else
    {
      v30 = 0LL;
    }
    if ( v30 && *((volatile signed __int64 **)v30 + 2) == v38 )
    {
      if ( v10 < v27 )
      {
        v31 = *((_QWORD *)Current + 35);
        v32 = *(_DWORD *)(v15 + v31 + 8);
        if ( v34 == ((v32 >> 5) & 3) && (v32 & 0x2000) == 0 && (v32 & 0x1F) != 0 )
          *(_DWORD *)(v15 + v31 + 8) = v32 | 0x2000;
      }
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v30);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 833;
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v39);
  }
  else
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40, Current);
    if ( v10 < *((_DWORD *)Current + 74)
      && (v18 = *((_QWORD *)Current + 35), v19 = *(_DWORD *)(v15 + v18 + 8), v34 == ((v19 >> 5) & 3))
      && (v19 & 0x2000) == 0
      && (v20 = v19 & 0x1F) != 0 )
    {
      if ( v20 == 8 )
      {
        v21 = *(struct DXGSYNCOBJECT **)(v15 + v18);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        v21 = 0LL;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v21 = 0LL;
    }
    if ( !v21 )
    {
      WdLogSingleEntry2(3LL, ULongFromUser, -1073741811LL);
      WdLogGlobalForLineNumber = 790;
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      v7 = v37 == 0;
      goto LABEL_39;
    }
    if ( v10 < *((_DWORD *)Current + 74) )
    {
      v22 = *((_QWORD *)Current + 35);
      v23 = *(_DWORD *)(v15 + v22 + 8);
      if ( v34 == ((v23 >> 5) & 3) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
        *(_DWORD *)(v15 + v22 + 8) = v23 | 0x2000;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, v21, ULongFromUser, 0);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit);
  return 0LL;
}
