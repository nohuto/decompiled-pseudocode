/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x140373CC0
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x14034BD5C (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?AcquireLocks@?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAAXXZ @ 0x14000DC50 (-AcquireLocks@-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqPR1XR1pq_EtwWriteTransfer @ 0x140012C58 (McTemplateK0pqPR1XR1pq_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x14002FCE0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1400469A4 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140061770 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        PERESOURCE *a3,
        void *a4)
{
  void *v4; // rdi
  char v8; // r14
  struct _KEVENT **v9; // rbx
  volatile signed __int64 *Blink; // rcx
  struct _LIST_ENTRY *v11; // rcx
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v14; // rbx
  _BYTE *v15; // rbx
  int v16; // eax
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v18; // eax
  NTSTATUS v19; // edi
  unsigned __int64 ObjectCount; // rdi
  _QWORD *v21; // r13
  unsigned __int64 v22; // rdi
  __int64 i; // r14
  unsigned __int64 v24; // rdi
  volatile signed __int32 *v25; // rdi
  D3DKMT_HANDLE v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rdi
  __int64 v33; // r12
  char *v34; // rcx
  struct DXGDEVICE *v35; // r8
  __int64 v36; // rcx
  _BYTE *v37; // rcx
  unsigned int v38; // r9d
  __int64 v39; // r9
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // rdx
  struct _KEVENT *v44; // rsi
  PVOID v45; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rax
  PERESOURCE v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  PVOID v53; // rcx
  const wchar_t *v54; // r9
  struct _KEVENT *v55; // rdi
  __int64 v56; // rcx
  PVOID v57; // r13
  const D3DKMT_HANDLE *v58; // rax
  const D3DKMT_HANDLE *v59; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  const D3DKMT_HANDLE *v61; // rax
  int Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v65; // [rsp+40h] [rbp-C0h]
  struct DXGGLOBAL *v66; // [rsp+50h] [rbp-B0h] BYREF
  char v67; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  _BYTE Src[32]; // [rsp+68h] [rbp-98h] BYREF
  int v70; // [rsp+88h] [rbp-78h]
  PVOID v71; // [rsp+90h] [rbp-70h]
  _BYTE v72[32]; // [rsp+98h] [rbp-68h] BYREF
  int v73; // [rsp+B8h] [rbp-48h]
  PVOID v74; // [rsp+C0h] [rbp-40h] BYREF
  struct DXGDEVICE *v75; // [rsp+C8h] [rbp-38h] BYREF
  char v76; // [rsp+D0h] [rbp-30h]
  PVOID v77; // [rsp+D8h] [rbp-28h]
  struct DXGPROCESS *v78; // [rsp+E0h] [rbp-20h] BYREF
  void *v79; // [rsp+E8h] [rbp-18h]
  void *Base; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v81[16]; // [rsp+F8h] [rbp-8h] BYREF
  size_t NumOfElements; // [rsp+108h] [rbp+8h]
  __int16 v83; // [rsp+110h] [rbp+10h]
  PVOID v84; // [rsp+118h] [rbp+18h] BYREF
  PVOID Pool2; // [rsp+120h] [rbp+20h]
  _QWORD v86[4]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v87; // [rsp+148h] [rbp+48h]
  char v88[8]; // [rsp+160h] [rbp+60h] BYREF
  char v89[8]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v90; // [rsp+170h] [rbp+70h]
  DXGADAPTER *v91; // [rsp+178h] [rbp+78h]
  char v92; // [rsp+180h] [rbp+80h]
  __int64 v93; // [rsp+188h] [rbp+88h]
  char v94[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v95; // [rsp+1B0h] [rbp+B0h]
  struct _LIST_ENTRY *v96; // [rsp+1B8h] [rbp+B8h]
  char v97; // [rsp+1C0h] [rbp+C0h]
  __int64 v98; // [rsp+1C8h] [rbp+C8h]
  struct DXGDEVICE *v99; // [rsp+1E8h] [rbp+E8h]
  char v100; // [rsp+1F0h] [rbp+F0h]

  v79 = a4;
  v78 = a2;
  v4 = a4;
  v74 = 0LL;
  v77 = 0LL;
  Pool2 = 0LL;
  v75 = (struct DXGDEVICE *)a3;
  v8 = 0;
  v76 = 0;
  v9 = (struct _KEVENT **)(a3 + 2);
  if ( a3 )
  {
    v55 = *v9;
    if ( !KeReadStateEvent(*v9 + 4) )
      KeWaitForSingleObject(&v55[4], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(a3[17], 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)(*v9)->Header.WaitListHead.Blink);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v56, (__int64)"g");
      ExAcquireResourceSharedLite(a3[17], 1u);
      DXGADAPTER::EnableD3Requests((DXGADAPTER *)(*v9)->Header.WaitListHead.Blink);
    }
    v4 = v79;
    v8 = 1;
    v76 = 1;
  }
  Blink = (volatile signed __int64 *)(*v9)->Header.WaitListHead.Blink;
  v91 = (DXGADAPTER *)Blink;
  v92 = 0;
  v93 = 0LL;
  if ( Blink )
  {
    _InterlockedIncrement64(Blink + 3);
    v90 = -1LL;
  }
  v11 = (*v9)->Header.WaitListHead.Blink;
  v96 = v11;
  v97 = 0;
  v98 = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)&v11[1].Blink);
    v95 = -1LL;
  }
  v99 = (struct DXGDEVICE *)a3;
  v100 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v91 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v91 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)"g");
      KeWaitForSingleObject((char *)v91 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v91, 0LL);
  }
  v93 = 0LL;
  v92 = 1;
  if ( *((_DWORD *)v99 + 152) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v89);
    if ( v100 )
      COREACCESS::Release((COREACCESS *)v94);
    v19 = -1073741130;
    goto LABEL_127;
  }
  Global = DXGGLOBAL::GetGlobal();
  v66 = Global;
  v67 = 0;
  if ( !Global )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3058;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 3058LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 76)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3063;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursiveSharedLock",
      3063LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = v66;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v14 + 76), 1u);
  v67 = 1;
  v15 = 0LL;
  P = 0LL;
  v71 = 0LL;
  v73 = 0;
  v70 = 0;
  if ( !v4 )
  {
    v16 = *((_DWORD *)a2 + 102);
    if ( (v16 & 0x10) != 0 && (v16 & 0x100) == 0 && a1->hAsyncEvent )
    {
      Pool2 = (PVOID)ExAllocatePool2(64LL, 40LL, 1265072196LL);
      v57 = Pool2;
      if ( !Pool2 )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 5445;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
          5445LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v19 = -1073741801;
        if ( P != Src && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v70 = 0;
        if ( v71 != v72 && v71 )
          ExFreePoolWithTag(v71, 0);
        v71 = 0LL;
        v73 = 0;
LABEL_149:
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v66);
LABEL_127:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v75);
        return (unsigned int)v19;
      }
      *((_QWORD *)Pool2 + 1) = a1->hAsyncEvent;
      v79 = v57;
      *((_BYTE *)v57 + 16) = 1;
      *((_BYTE *)v57 + 19) = 1;
      DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)v57);
    }
    else
    {
      hAsyncEvent = a1->hAsyncEvent;
      if ( hAsyncEvent )
      {
        v84 = 0LL;
        v18 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v84, 0LL);
        v19 = v18;
        v77 = v84;
        if ( v18 < 0 )
        {
          WdLogSingleEntry2(3LL, a1->hAsyncEvent, v18);
          WdLogGlobalForLineNumber = 5469;
          if ( P != Src && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v70 = 0;
          if ( v71 != v72 && v71 )
            ExFreePoolWithTag(v71, 0);
          v71 = 0LL;
          v73 = 0;
          if ( v67 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v66);
          COREACCESS::~COREACCESS((COREACCESS *)v94, v51);
          COREACCESS::~COREACCESS((COREACCESS *)v89, v52);
          if ( v8 )
          {
            ExReleaseResourceLite(a3[17]);
            KeLeaveCriticalRegion();
          }
LABEL_98:
          v44 = (struct _KEVENT *)v77;
          if ( !v77 )
            goto LABEL_99;
          goto LABEL_111;
        }
      }
      else
      {
        v86[0] = 48LL;
        v86[3] = 512LL;
        v86[1] = 0LL;
        v86[2] = 0LL;
        v87 = 0LL;
        v19 = ObCreateObject(0LL, ExEventObjectType, v86, 0LL, 0LL, 24, 0, 0, &v74);
        if ( v19 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 5489;
          if ( P != Src && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v70 = 0;
          if ( v71 != v72 && v71 )
            ExFreePoolWithTag(v71, 0);
          v71 = 0LL;
          v73 = 0;
          goto LABEL_149;
        }
        KeInitializeEvent((PRKEVENT)v74, SynchronizationEvent, 0);
        v77 = v74;
      }
    }
    v15 = P;
  }
  ObjectCount = a1->ObjectCount;
  if ( (unsigned int)ObjectCount > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
      goto LABEL_159;
    v71 = (PVOID)ExAllocatePool2(64LL, 8 * ObjectCount, 1265072196LL);
  }
  else
  {
    v71 = v72;
    if ( !(_DWORD)ObjectCount )
      goto LABEL_23;
    memset(v72, 0, 8LL * (unsigned int)ObjectCount);
  }
  v15 = P;
LABEL_23:
  v21 = v71;
  v73 = ObjectCount;
  if ( !v71 )
    goto LABEL_159;
  if ( (*((_DWORD *)a2 + 102) & 0x180) == 0 || a1->ObjectCount != 1 || *a1->ObjectHandleArray )
  {
    v22 = a1->ObjectCount;
    if ( (unsigned int)v22 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v22 < 8 )
        goto LABEL_159;
      v15 = (_BYTE *)ExAllocatePool2(256LL, 8 * v22, 1265072196LL);
      P = v15;
    }
    else
    {
      v15 = Src;
      P = Src;
      if ( (_DWORD)v22 )
      {
        memset(Src, 0, 8LL * (unsigned int)v22);
        v15 = P;
      }
    }
    v70 = v22;
    if ( v15 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v24 = a1->ObjectCount;
        if ( (unsigned int)i >= (unsigned int)v24 )
          break;
        v25 = (volatile signed __int32 *)((char *)v78 + 248);
        v26 = a1->ObjectHandleArray[i];
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v25, 0LL) )
        {
          DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v25, v27, v28);
          ExAcquirePushLockSharedEx(v25, 0LL);
        }
        _InterlockedIncrement(v25 + 4);
        v29 = (v26 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v29 < *((_DWORD *)v78 + 74)
          && (v30 = *((_QWORD *)v78 + 35),
              v31 = *(_DWORD *)(v30 + 16 * v29 + 8),
              ((v26 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60))
          && (v31 & 0x2000) == 0
          && (v31 & 0x1F) != 0 )
        {
          if ( (*(_BYTE *)(v30 + 16 * (((unsigned __int64)v26 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
          {
            v32 = *(_QWORD *)(v30 + 16 * (((unsigned __int64)v26 >> 6) & 0xFFFFFF));
          }
          else
          {
            WdLogSingleEntry0(2LL);
            v32 = 0LL;
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        else
        {
          v32 = 0LL;
        }
        v33 = (__int64)v78;
        v34 = (char *)v78 + 248;
        _InterlockedDecrement((volatile signed __int32 *)v78 + 66);
        ExReleasePushLockSharedEx(v34, 0LL);
        KeLeaveCriticalRegion();
        if ( !v32 )
        {
          v19 = -1073741811;
          WdLogSingleEntry4(2LL, v33, a1->ObjectHandleArray[i], (unsigned int)i, -1073741811LL);
          ObjectHandleArray = a1->ObjectHandleArray;
          WdLogGlobalForLineNumber = 5542;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%I64x passed an invalid wait for hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
            v33,
            ObjectHandleArray[i],
            (unsigned int)i,
            -1073741811LL,
            0LL);
          goto LABEL_103;
        }
        if ( (*(_DWORD *)(v32 + 72) & 0x20) != 0 )
        {
          WdLogSingleEntry1(2LL);
          v59 = a1->ObjectHandleArray;
          WdLogGlobalForLineNumber = 5550;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%I64x object is opened as signal only and thus cannot be waited on.",
            v59[i],
            0LL,
            0LL,
            0LL,
            0LL);
          v19 = -1073741790;
          goto LABEL_103;
        }
        v35 = *(struct DXGDEVICE **)(v32 + 16);
        if ( v35 != (struct DXGDEVICE *)a3 )
        {
          WdLogSingleEntry3(2LL, a1->ObjectHandleArray[i], v35, a3);
          v58 = a1->ObjectHandleArray;
          WdLogGlobalForLineNumber = 5562;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%x object belongs to a different device 0x%p that 0x%p passed to the wait from CPU call.",
            v58[i],
            *(_QWORD *)(v32 + 16),
            (__int64)a3,
            0LL,
            0LL);
          goto LABEL_165;
        }
        if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305952)
          && *(_DWORD *)(*(_QWORD *)(v32 + 32) + 420LL) == 7
          && !*(_QWORD *)(v32 + 96) )
        {
          WdLogSingleEntry1(2LL);
          v54 = L"DXGDEVICESYNCOBJECT 0x%x is a native fence object and has a NULL Driver Handle, returning STATUS_INVALID_PARAMETER";
          WdLogGlobalForLineNumber = 5573;
          goto LABEL_119;
        }
        v36 = *(_QWORD *)(v32 + 32);
        if ( *(_DWORD *)(v36 + 420) == 7 && *(_DWORD *)(v36 + 316) == 1 )
        {
          WdLogSingleEntry1(2LL);
          v54 = L"DXGDEVICESYNCOBJECT 0x%x. Queuing Wait/Signals not supported on native fence of type D3DDDI_NATIVEFENCE_"
                 "TYPE_INTRA_GPU, returning STATUS_INVALID_PARAMETER";
          WdLogGlobalForLineNumber = 5582;
LABEL_119:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v54, v32, 0LL, 0LL, 0LL, 0LL);
LABEL_165:
          v19 = -1073741811;
          goto LABEL_103;
        }
        *(_QWORD *)&v15[8 * i] = v36;
      }
      v37 = 0LL;
      Base = 0LL;
      LODWORD(NumOfElements) = 0;
      if ( (unsigned int)v24 > 2 )
      {
        v38 = 0;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v24 < 8 )
        {
LABEL_50:
          v83 = 1;
          if ( v37 )
          {
            memmove(v37, v15, 8LL * v38);
            qsort(
              Base,
              (unsigned int)NumOfElements,
              8uLL,
              (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::AcquireLocks((__int64)&Base);
            v39 = 0LL;
            LOBYTE(v83) = 0;
            while ( 1 )
            {
              if ( (unsigned int)v39 >= a1->ObjectCount )
              {
                DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
                goto LABEL_54;
              }
              v47 = *(_QWORD *)&v15[8 * v39];
              v48 = (unsigned int)v39;
              v49 = (*(_DWORD *)(v47 + 424) & 4) != 0
                  ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                                  (DXGSYNCOBJECTCA *)v47,
                                  (struct ADAPTER_RENDER *)a3[2])
                    + 4)
                  : *(_QWORD *)(v47 + 472);
              v21[v39] = v49;
              if ( !v49 )
                break;
              v39 = (unsigned int)(v39 + 1);
            }
            WdLogSingleEntry1(2LL);
            v61 = a1->ObjectHandleArray;
            WdLogGlobalForLineNumber = 5620;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"0x%x object adapter state has been destroyed, so it cannot be waited on.",
              v61[v48],
              0LL,
              0LL,
              0LL,
              0LL);
            v19 = -1073741811;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
          }
          else
          {
            v19 = -1073741801;
            DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)&Base);
          }
LABEL_103:
          v53 = P;
          if ( P == Src || !P )
            goto LABEL_106;
          goto LABEL_105;
        }
        v37 = (_BYTE *)ExAllocatePool2(256LL, 8 * v24, 1265072196LL);
        Base = v37;
      }
      else
      {
        v37 = v81;
        Base = v81;
        if ( (_DWORD)v24 )
        {
          memset(v81, 0, 8 * v24);
          v37 = Base;
        }
      }
      LODWORD(NumOfElements) = v24;
      v38 = v24;
      goto LABEL_50;
    }
LABEL_159:
    v19 = -1073741801;
    if ( v15 == Src || !v15 )
      goto LABEL_106;
    v53 = v15;
LABEL_105:
    ExFreePoolWithTag(v53, 0);
LABEL_106:
    P = 0LL;
    v70 = 0;
    if ( v71 != v72 && v71 )
      ExFreePoolWithTag(v71, 0);
    v71 = 0LL;
    v73 = 0;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v66);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v88);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v75);
    goto LABEL_98;
  }
  v50 = a3[2];
  v78 = 0LL;
  (*(void (__fastcall **)(PERESOURCE, _QWORD, struct DXGPROCESS **, PVOID))(*((_QWORD *)v50[7].SharedWaiters + 1) + 936LL))(
    a3[99],
    0LL,
    &v78,
    v71);
LABEL_54:
  if ( v74 )
    ObfReferenceObject(v74);
  LOBYTE(HandleInformation) = v79 == 0LL;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, const UINT64 *, PVOID, int, int, PERESOURCE, void *))a3[2][7].SystemResourcesList.Blink->Blink[43].Flink)(
          a1->ObjectCount,
          v21,
          a1->FenceValueArray,
          v77,
          Object,
          HandleInformation,
          a3[100],
          v79);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v65) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    McTemplateK0pqPR1XR1pq_EtwWriteTransfer(v41, v40, v42, a3, Objecta, v21, a1->FenceValueArray, a1->hAsyncEvent, v65);
  }
  if ( P != Src && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v70 = 0;
  if ( v71 != v72 && v71 )
    ExFreePoolWithTag(v71, 0);
  v71 = 0LL;
  v73 = 0;
  if ( v67 )
  {
    v67 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v66 + 76));
    KeLeaveCriticalRegion();
  }
  COREACCESS::~COREACCESS((COREACCESS *)v94, v40);
  COREACCESS::~COREACCESS((COREACCESS *)v89, v43);
  if ( v76 )
  {
    ExReleaseResourceLite(a3[17]);
    KeLeaveCriticalRegion();
  }
  if ( v19 < 0 )
  {
    if ( v74 )
      ObfDereferenceObject(v74);
    goto LABEL_98;
  }
  v44 = (struct _KEVENT *)v77;
  if ( !v77 )
  {
LABEL_76:
    v45 = v74;
    goto LABEL_66;
  }
  v45 = v74;
  if ( v77 == v74 )
  {
    do
    {
      v19 = KeWaitForSingleObject(v44, Executive, 0, 1u, 0LL);
      if ( PsIsThreadTerminating(KeGetCurrentThread()) )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 5683;
        v19 = -1073741130;
        goto LABEL_111;
      }
    }
    while ( v19 == 257 );
    if ( v19 >= 0 )
      goto LABEL_76;
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5692;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Failed to wait for event!", 5692LL, 0LL, 0LL, 0LL, 0LL);
LABEL_111:
    KeSetEvent(v44, 0, 0);
    ObfDereferenceObject(v44);
LABEL_99:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4B677844u);
    return (unsigned int)v19;
  }
LABEL_66:
  if ( v45 )
    ObfDereferenceObject(v45);
  return 0LL;
}
