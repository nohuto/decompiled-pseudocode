/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14035948C
 * Callers:
 *     DxgkDestroyAllocation @ 0x140358E90 (DxgkDestroyAllocation.c)
 *     DxgkDestroyAllocation2 @ 0x140359150 (DxgkDestroyAllocation2.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x14028D7E8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     OutputDuplCleanUpPendingList @ 0x14035B7CC (OutputDuplCleanUpPendingList.c)
 */

__int64 __fastcall DxgkDestroyAllocationHelper(
        struct DXGPROCESS *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7,
        char a8)
{
  unsigned int v9; // r15d
  __int64 v11; // rsi
  unsigned int *v12; // r14
  struct DXGALLOCATION **v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // esi
  struct _KEVENT *v22; // rbx
  struct _KEVENT *v23; // rcx
  volatile signed __int64 *v24; // rcx
  volatile signed __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned int v31; // eax
  unsigned int *v32; // r13
  __int64 v33; // rsi
  int v34; // r15d
  bool v35; // zf
  __int64 v37; // rcx
  DXGADAPTER *v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  struct DXGALLOCATION **v42; // rax
  unsigned int v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+64h] [rbp-9Ch]
  unsigned int v45; // [rsp+68h] [rbp-98h]
  unsigned int *v48; // [rsp+78h] [rbp-88h] BYREF
  struct DXGALLOCATION **v49; // [rsp+80h] [rbp-80h]
  unsigned int *v50; // [rsp+88h] [rbp-78h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v51; // [rsp+90h] [rbp-70h]
  _BYTE v52[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-50h]
  DXGADAPTER *v54; // [rsp+B8h] [rbp-48h]
  char v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  _BYTE v57[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-10h]
  DXGADAPTER *v59; // [rsp+F8h] [rbp-8h]
  char v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  char v63; // [rsp+130h] [rbp+30h]
  _DWORD v64[64]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v65[512]; // [rsp+240h] [rbp+140h] BYREF

  v9 = a5;
  v11 = a2;
  v45 = a5;
  v51 = a7;
  memset(v64, 0, sizeof(v64));
  v48 = a4;
  memset(v65, 0, sizeof(v65));
  v12 = 0LL;
  v50 = v64;
  v49 = (struct DXGALLOCATION **)v65;
  v13 = 0LL;
  if ( a3 && a5 )
  {
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 10519;
    return 3221225485LL;
  }
  v43 = a5;
  if ( a5 >= 0x41 )
  {
    v40 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v40 = -1LL;
    v12 = (unsigned int *)operator new[](v40, 0x4B677844u, 256LL);
    v41 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v41 = -1LL;
    v42 = (struct DXGALLOCATION **)operator new[](v41, 0x4B677844u, 256LL);
    v13 = v42;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && v12 && v42 )
    {
      v49 = v42;
      v50 = v12;
    }
    else
    {
      WdLogSingleEntry0(4LL);
      v9 = 64;
      WdLogGlobalForLineNumber = 10538;
      v45 = 64;
    }
  }
  if ( a1 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)a1 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 248, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((struct DXGPROCESS *)((char *)a1 + 248), v14, v15);
    ExAcquirePushLockSharedEx((char *)a1 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 66);
  v16 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( v16 >= *((_DWORD *)a1 + 74) )
    goto LABEL_69;
  v17 = *(_DWORD *)(*((_QWORD *)a1 + 35) + 16LL * v16 + 8);
  if ( (((unsigned int)v11 >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)a1 + 35) + 16LL * v16 + 8) & 0x60)
    || (v17 & 0x2000) != 0
    || (v17 & 0x1F) == 0 )
  {
    goto LABEL_69;
  }
  v18 = *((_QWORD *)a1 + 35);
  if ( (*(_BYTE *)(v18 + 16LL * v16 + 8) & 0x1F) != 3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_69:
    v19 = 0LL;
    goto LABEL_15;
  }
  v19 = *(_QWORD *)(v18 + 16LL * v16);
  if ( v19 )
    _InterlockedIncrement64((volatile signed __int64 *)(v19 + 64));
LABEL_15:
  _InterlockedAdd((volatile signed __int32 *)a1 + 66, 0xFFFFFFFF);
  ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    WdLogSingleEntry2(2LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 10555;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v13 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
    if ( v12 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
    return 3221225485LL;
  }
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
  if ( *(int *)(v20 + 2776) >= 0x2000 || *(_BYTE *)(v20 + 3076) )
    v21 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 344);
  else
    v21 = 0;
  v22 = *(struct _KEVENT **)(v19 + 16);
  v44 = v21;
  if ( *(_DWORD *)(v19 + 464) != 2 )
  {
    if ( KeReadStateEvent(v22 + 4) )
      goto LABEL_22;
    v23 = v22 + 4;
    goto LABEL_21;
  }
  if ( !KeReadStateEvent(v22 + 5) )
  {
    v23 = v22 + 5;
LABEL_21:
    KeWaitForSingleObject(v23, Executive, 0, 0, 0LL);
  }
LABEL_22:
  if ( v21 )
  {
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v19 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 160));
    }
    else
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v37, (__int64)"g");
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
    }
  }
  v24 = *(volatile signed __int64 **)(*(_QWORD *)(v19 + 16) + 16LL);
  v54 = (DXGADAPTER *)v24;
  v55 = 0;
  v56 = 0LL;
  if ( v24 )
  {
    _InterlockedIncrement64(v24 + 3);
    v53 = -1LL;
  }
  v25 = *(volatile signed __int64 **)(v19 + 1896);
  if ( !v25 )
    v25 = *(volatile signed __int64 **)(*(_QWORD *)(v19 + 16) + 16LL);
  v59 = (DXGADAPTER *)v25;
  v60 = 0;
  v61 = 0LL;
  if ( v25 )
  {
    _InterlockedIncrement64(v25 + 3);
    v58 = -1LL;
  }
  v26 = *(_QWORD *)(v19 + 16);
  v27 = *(_QWORD *)(v19 + 1896);
  v62 = v19;
  if ( v27 == *(_QWORD *)(v26 + 16) || !v27 )
  {
    v63 = 0;
  }
  else
  {
    v63 = 1;
    v38 = v59;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v59 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v59 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v39, (__int64)"g");
        KeWaitForSingleObject((char *)v59 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v59, 0LL);
      v38 = v59;
    }
    v61 = 0LL;
    v60 = 1;
    if ( *((_DWORD *)v38 + 50) != 1 )
    {
LABEL_84:
      COREACCESS::Release((COREACCESS *)v57);
      goto LABEL_38;
    }
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v54 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v54 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)"g");
      KeWaitForSingleObject((char *)v54 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v54, 0LL);
  }
  v56 = 0LL;
  v55 = 1;
  if ( *(_DWORD *)(v62 + 608) == 1 )
  {
    OutputDuplCleanUpPendingList((struct DXGDEVICE *)v19);
    goto LABEL_38;
  }
  COREACCESS::Release((COREACCESS *)v52);
  if ( v63 )
    goto LABEL_84;
LABEL_38:
  COREACCESS::~COREACCESS((COREACCESS *)v57, v29);
  COREACCESS::~COREACCESS((COREACCESS *)v52, v30);
  v31 = a5;
  v32 = v48;
  while ( 1 )
  {
    v33 = v9;
    if ( v31 < v9 )
      v33 = v31;
    v34 = DxgkDestroyAllocationInternal(
            a1,
            (struct DXGDEVICE *)v19,
            v50,
            v49,
            a3,
            (const unsigned int **)&v48,
            v33,
            a6,
            v32,
            v51,
            a8);
    if ( v34 < 0 )
      break;
    v32 += v33;
    v9 = v45;
    v35 = v43 == (_DWORD)v33;
    v31 = v43 - v33;
    v43 -= v33;
    if ( v35 )
    {
      if ( v44 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v19 + 160), 0xFFFFFFFF);
        ExReleasePushLockSharedEx(v19 + 144, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
      }
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v19 + 16), (struct DXGDEVICE *)v19);
      if ( v13 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
      if ( v12 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
      return 0LL;
    }
  }
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 10599;
  if ( v44 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v19 + 160), 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v19 + 144, 0LL);
  }
  else
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
  }
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v19 + 16), (struct DXGDEVICE *)v19);
  if ( v13 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
  if ( v12 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
  return (unsigned int)v34;
}
