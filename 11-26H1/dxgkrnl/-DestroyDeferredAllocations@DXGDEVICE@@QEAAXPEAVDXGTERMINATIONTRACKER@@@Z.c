/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14037B640
 * Callers:
 *     ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x14037B3E0 (-DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x140193298 (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1402A57A4 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1402A6174 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140355D6C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x14038BD00 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x14038F610 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1403A8C98 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(DXGDEVICE *this, struct DXGTERMINATIONTRACKER *a2)
{
  __int64 v2; // rax
  struct DXGTERMINATIONTRACKER *v3; // rdi
  DXGDEVICE *v4; // r14
  HANDLE *v5; // r15
  __int64 v6; // rax
  struct DXGALLOCATION *i; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // rdx
  ADAPTER_RENDER *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rdx
  char v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // zf
  unsigned int v18; // ebx
  __int64 k; // rcx
  __int64 j; // rcx
  volatile signed __int32 *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r13
  struct DXGADAPTERALLOCATION *v24; // rdx
  void *v25; // rcx
  void *v26; // rsi
  __int64 v28; // rcx
  __int64 v29; // rcx
  void *v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h]
  int v33; // [rsp+78h] [rbp-90h]
  struct _DXGKARG_CLOSEALLOCATION v34; // [rsp+80h] [rbp-88h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v35; // [rsp+90h] [rbp-78h] BYREF
  _OWORD v36[8]; // [rsp+B8h] [rbp-50h] BYREF

  v2 = *(_QWORD *)a2;
  v3 = a2;
  v4 = this;
  memset(v36, 0, sizeof(v36));
  if ( !v2 || (v5 = *(HANDLE **)(v2 + 64)) == 0LL )
    v5 = (HANDLE *)v36;
  v34 = 0LL;
  if ( v2 )
  {
    v6 = WdLogNewEntry5_WdTrace(this, a2);
    *(_QWORD *)(v6 + 24) = *(_QWORD *)v3;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v3 + 8LL);
    this = (DXGDEVICE *)*((_QWORD *)a2 + 5);
    *(_QWORD *)(v6 + 32) = this;
    WdLogGlobalForLineNumber = 1847;
  }
  for ( i = (struct DXGALLOCATION *)*((_QWORD *)v3 + 1); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
  {
    v8 = WdLogNewEntry5_WdTrace(this, a2);
    *(_QWORD *)(v8 + 24) = i;
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(*((_QWORD *)i + 1) + 40LL);
    v9 = *((_QWORD *)i + 3);
    WdLogGlobalForLineNumber = 1862;
    if ( v9 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 760LL)
                                                                          + 8LL)
                                                              + 144LL))(
        *(_QWORD *)(*((_QWORD *)v4 + 2) + 768LL),
        v9,
        0LL,
        *((unsigned int *)v3 + 12));
      *((_QWORD *)i + 3) = 0LL;
    }
    else
    {
      DXGDEVICE::TraceCloseParavirtualizedAllocation(v4, i);
    }
    this = (DXGDEVICE *)*((_QWORD *)i + 4);
    if ( this )
    {
      v5[v34.NumAllocations++] = this;
      *((_QWORD *)i + 4) = 0LL;
    }
  }
  if ( v34.NumAllocations )
  {
    v10 = (void *)*((_QWORD *)v4 + 77);
    v11 = (ADAPTER_RENDER *)*((_QWORD *)v4 + 2);
    v34.pOpenHandleList = v5;
    ADAPTER_RENDER::DdiCloseAllocation(v11, v10, &v34);
  }
  v12 = *(_QWORD *)v3;
  v13 = 0LL;
  v30 = 0LL;
  v14 = 1;
  if ( *(_QWORD *)v3 )
  {
    if ( (*(_DWORD *)(v12 + 4) & 1) != 0 )
    {
      v15 = *(_QWORD *)(v12 + 56);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 152);
        if ( v16 )
        {
          if ( *(DXGDEVICE **)(v16 + 80) == v4 )
          {
            v17 = (*(_DWORD *)(v16 + 72))-- == 1;
            if ( v17 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)&v31,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 56LL) + 152LL) + 8LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v31);
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 56LL) + 152LL) + 80LL) = 0LL;
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v31);
            }
          }
        }
        v18 = 0;
        if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v31, (struct DXGFASTMUTEX *const)(*(_QWORD *)v3 + 80LL), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v31);
          for ( j = *(_QWORD *)(*(_QWORD *)v3 + 24LL); j; ++v18 )
            j = *(_QWORD *)(j + 64);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v31);
        }
        else
        {
          for ( k = *(_QWORD *)(*(_QWORD *)v3 + 24LL); k; ++v18 )
            k = *(_QWORD *)(k + 64);
        }
        v21 = *(volatile signed __int32 **)(*(_QWORD *)v3 + 56LL);
        if ( _InterlockedExchangeAdd(v21 + 17, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v21, v5, v18);
        v13 = 0LL;
        *(_QWORD *)(*(_QWORD *)v3 + 56LL) = 0LL;
      }
      v14 = 0;
    }
    else
    {
      v13 = *(void **)(v12 + 56);
      v30 = v13;
    }
  }
  v22 = *((_QWORD *)v3 + 1);
  memset(&v35, 0, sizeof(v35));
  if ( v22 )
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)(v22 + 64);
      if ( (*(_DWORD *)(v22 + 72) & 0x800) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2000;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCurrentAlloc->m_Pinned == FALSE",
          2000LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (*(_DWORD *)(v22 + 72) & 0x7FE) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2001;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCurrentAlloc->m_DirectFlipIndex == 0",
          2001LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v24 = *(struct DXGADAPTERALLOCATION **)(v22 + 48);
      if ( v24 )
      {
        if ( !v14 )
          goto LABEL_44;
        DXGDEVICE::DestroyAdapterAllocation(v4, v24);
        v25 = *(void **)(*(_QWORD *)(v22 + 48) + 16LL);
        if ( v25 )
        {
          v5[v35.NumAllocations++] = v25;
          *(_QWORD *)(*(_QWORD *)(v22 + 48) + 16LL) = 0LL;
        }
      }
      else if ( !v14 )
      {
LABEL_44:
        if ( !*(_QWORD *)v3 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2023;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTracker->m_pResource", 2023LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*(_DWORD *)(*(_QWORD *)v3 + 4LL) & 1) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2024;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pTracker->m_pResource->m_SharedResource",
            2024LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      if ( !*(_QWORD *)v3 || (*(_DWORD *)(*(_QWORD *)v3 + 4LL) & 1) == 0 )
      {
        v26 = *(void **)(v22 + 48);
        if ( v26 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v22 + 48));
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
        }
      }
      DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v22);
      ExFreePoolWithTag((PVOID)v22, 0);
      v22 = v23;
      if ( !v23 )
      {
        v13 = v30;
        break;
      }
    }
  }
  if ( v14 )
  {
    v17 = *(_QWORD *)v3 == 0LL;
    v35.hResource = v13;
    v35.Flags.Value = !v17;
    if ( v35.NumAllocations )
    {
      v35.pAllocationList = v5;
LABEL_59:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)v4 + 2), &v35, 0);
      goto LABEL_60;
    }
    v35.pAllocationList = 0LL;
    if ( v13 )
      goto LABEL_59;
  }
LABEL_60:
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)&v31, (struct _KTHREAD **)v4 + 22);
  if ( --*((_DWORD *)v4 + 480) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1275;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_OutstandingDeferredDestroys >= 0",
      1275LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_DWORD *)v4 + 480) )
    KeSetEvent(*((PRKEVENT *)v4 + 241), 0, 0);
  if ( v33 == 1 )
  {
    v28 = v32;
    v33 = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v32 + 16));
    ExReleasePushLockSharedEx(v28, 0LL);
  }
  else
  {
    if ( v33 != 2 )
      return;
    v29 = v32;
    v33 = 0;
    *(_QWORD *)(v32 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v29, 0LL);
  }
  KeLeaveCriticalRegion();
}
