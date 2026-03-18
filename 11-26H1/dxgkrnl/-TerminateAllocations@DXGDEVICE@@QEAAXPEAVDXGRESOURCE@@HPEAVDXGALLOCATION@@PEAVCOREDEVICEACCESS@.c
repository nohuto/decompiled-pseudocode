/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9FEC
 * Callers:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402E9A60 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x140007D70 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x14004DDF4 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?VidMmIsAllocationAccessPending@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x14005A880 (-VidMmIsAllocationAccessPending@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1402E98A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E9A40 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?ReportDestructionBegun@DXGDEVICE@@AEAAXXZ @ 0x1402EA93C (-ReportDestructionBegun@DXGDEVICE@@AEAAXXZ.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402EAA6C (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402EAC9C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1403892E0 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1403D0248 (-RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        PVOID P,
        int a3,
        struct DXGALLOCATION *a4,
        const char **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  BOOL v6; // r12d
  struct DXGALLOCATION *v7; // r13
  BOOL v9; // ebp
  struct DXGALLOCATION *i; // rdi
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r8
  char *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rdi
  struct DXGTERMINATIONTRACKER *v24; // r14
  char v25; // r12
  unsigned __int64 v26; // rbp
  void *v27; // rcx
  ADAPTER_RENDER *v28; // rcx
  struct DXGALLOCATION *v29; // r9
  char v30; // r12
  __int64 v31; // rsi
  unsigned int v32; // edx
  unsigned int v33; // edx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v36; // rbp
  struct DXGPROCESS *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r8
  char v40; // bp
  const char *v41; // rcx
  char *v42; // rcx
  char *v43; // rcx
  const char *v44; // rdx
  __int64 v45; // rdi
  ADAPTER_RENDER *v46; // rcx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v50; // [rsp+50h] [rbp-48h]
  int v51; // [rsp+A0h] [rbp+8h]

  v50 = 0LL;
  v6 = *((_DWORD *)this + 116) == 2;
  v51 = 0;
  v7 = a4;
  v9 = (*(_BYTE *)&a6.0 & 2) == 0;
  for ( i = a4; i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
  {
    v12 = *(_DWORD *)(*((_QWORD *)i + 6) + 4LL);
    if ( (v12 & 0x2B) != 0
      || (v12 & 0x20000800) != 0
      || (*((_DWORD *)i + 18) & 0x800) != 0
      || (v13 = *((_QWORD *)this + 2), *(_BYTE *)(*(_QWORD *)(v13 + 16) + 209LL))
      || (v14 = *((_QWORD *)i + 3)) == 0 )
    {
      v9 = 0;
      break;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v13 + 760) + 8LL) + 592LL))(v14, 0LL);
    if ( !v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 997;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IndividualAllocationSize > 0", 997LL, 0LL, 0LL, 0LL, 0LL);
    }
    v50 += v15;
    v51 += (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 600LL))(*((_QWORD *)i + 3));
    if ( v6 && (*(_BYTE *)&a6.0 & 1) == 0 )
    {
      if ( (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationAccessPending(
                              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                              *((struct VIDMM_MULTI_ALLOC **)i + 3)) )
        v6 = 0;
    }
  }
  v16 = a3;
  if ( a3 )
  {
    if ( this != (DXGDEVICE *)-240LL && *((struct _KTHREAD **)this + 31) == KeGetCurrentThread() )
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
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 240, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((DXGDEVICE *)((char *)this + 240), v17, v18);
      ExAcquirePushLockExclusiveEx((char *)this + 240, 0LL);
    }
    *((_QWORD *)this + 31) = KeGetCurrentThread();
    if ( P == *((PVOID *)this + 7) )
    {
      v19 = (char *)this + 56;
    }
    else
    {
      if ( !*((_QWORD *)P + 4) )
      {
LABEL_28:
        *((_QWORD *)this + 31) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 240, 0LL);
        KeLeaveCriticalRegion();
        v16 = a3;
        goto LABEL_29;
      }
      v19 = (char *)this + 56;
    }
    v20 = *((_QWORD *)P + 5);
    v21 = (_QWORD *)((char *)this + 56);
    if ( v20 )
    {
      v21 = v19;
      *(_QWORD *)(v20 + 32) = *((_QWORD *)P + 4);
    }
    v22 = *((_QWORD *)P + 4);
    if ( v22 )
    {
      *(_QWORD *)(v22 + 40) = *((_QWORD *)P + 5);
    }
    else
    {
      if ( *((PVOID *)this + 7) != P )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 9390;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pResourceList == pResource",
          9390LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *v21 = *((_QWORD *)P + 5);
    }
    goto LABEL_28;
  }
LABEL_29:
  if ( !v9 || v6 || (!v16 || !*((_QWORD *)P + 3)) && P )
  {
LABEL_72:
    if ( a3 )
    {
      if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1797;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
          1797LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
        v46,
        (struct DXGRESOURCE *)P,
        (struct COREDEVICEACCESS *)a5);
      DXGDEVICE::DestroyAllocations(
        this,
        (struct DXGRESOURCE *)P,
        1,
        *((struct DXGALLOCATION **)P + 3),
        (struct COREDEVICEACCESS *)a5,
        a6);
      DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)P);
    }
    else
    {
      DXGDEVICE::DestroyAllocations(this, (struct DXGRESOURCE *)P, 0, v7, (struct COREDEVICEACCESS *)a5, a6);
    }
    return;
  }
  v23 = *((_QWORD *)this + 2);
  v24 = (struct DXGTERMINATIONTRACKER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v23 + 1536));
  if ( !v24 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 4934;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for deferred allocation tracker, destroying allocation synchronously.",
      4934LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_72;
  }
  v25 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v23 + 1392, 0LL);
  *(_QWORD *)(v23 + 1400) = KeGetCurrentThread();
  v26 = *(_QWORD *)(v23 + 1376) + v50;
  if ( ((*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 4) != 0 || v26 <= *((_QWORD *)DXGGLOBAL::GetGlobal() + 115))
    && v26 >= *(_QWORD *)(v23 + 1376) )
  {
    v25 = 1;
    *(_QWORD *)(v23 + 1376) = v26;
  }
  *(_QWORD *)(v23 + 1400) = 0LL;
  ExReleasePushLockExclusiveEx(v23 + 1392, 0LL);
  KeLeaveCriticalRegion();
  if ( !v25 )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 4925;
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v23, v24);
    v7 = a4;
    goto LABEL_72;
  }
  *((_QWORD *)v24 + 1) = a4;
  *(_QWORD *)v24 = P;
  v27 = *(void **)(*((_QWORD *)this + 5) + 56LL);
  *((_QWORD *)v24 + 5) = v50;
  *((_DWORD *)v24 + 8) = v51;
  *((_QWORD *)v24 + 2) = v27;
  *((_QWORD *)v24 + 3) = this;
  *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v24 + 12) = a6;
  ObfReferenceObject(v27);
  v30 = 0;
  if ( *(_QWORD *)v24 )
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
      v28,
      *(struct DXGRESOURCE **)v24,
      (struct COREDEVICEACCESS *)a5);
  v31 = *((_QWORD *)v24 + 1);
  if ( v31 )
  {
    do
    {
      v32 = *(_DWORD *)(*(_QWORD *)(v31 + 48) + 4LL);
      if ( (v32 & 0x2000) != 0 && *(_QWORD *)(v31 + 24) )
        DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList(
          this,
          (v32 >> 6) & 0xF,
          (struct DXGALLOCATION *)v31);
      v33 = *(_DWORD *)(*(_QWORD *)(v31 + 48) + 4LL);
      if ( (v33 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(this, (v33 >> 6) & 0xF, (const struct DXGALLOCATION *)v31, v29);
      CurrentProcess = PsGetCurrentProcess(v28);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v36 = (struct DXGPROCESS *)ProcessDxgProcess;
      if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
      {
        Current = DXGTHREAD::GetCurrent();
        if ( Current )
        {
          v37 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
          if ( v37 )
            goto LABEL_48;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
          v37 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
          if ( v37 )
            goto LABEL_48;
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 3080;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to find DXGPROCESS",
            3080LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v37 = v36;
LABEL_48:
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v37 + 248, 0LL) )
      {
        DXGPUSHLOCK::LogEvent((struct DXGPROCESS *)((char *)v37 + 248), v38, v39);
        ExAcquirePushLockExclusiveEx((char *)v37 + 248, 0LL);
      }
      *((_QWORD *)v37 + 32) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v37 + 280), *(_DWORD *)(v31 + 16));
      DxgkUnreferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v31);
      *((_QWORD *)v37 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v37 + 248, 0LL);
      KeLeaveCriticalRegion();
      v40 = 0;
      if ( a5 )
      {
        v41 = a5[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v41 + 23)
          && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v41 + 21)) )
        {
          v40 = 1;
          if ( !*((_BYTE *)a5 + 32) )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, a5 + 1, 0LL, 0LL);
            WdLogGlobalForLineNumber = 7763;
          }
          v42 = (char *)a5[3];
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v42 + 23) )
            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v42, a5[5]);
          a5[5] = 0LL;
          if ( *((_BYTE *)a5 + 144) )
          {
            if ( !*((_BYTE *)a5 + 96) )
            {
              WdLogSingleEntry5(0LL, 275LL, 4LL, a5 + 9, 0LL, 0LL);
              WdLogGlobalForLineNumber = 7763;
            }
            v43 = (char *)a5[11];
            *((_BYTE *)a5 + 96) = 0;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v43 + 23) )
              DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v43, a5[13]);
            a5[13] = 0LL;
          }
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v31 + 88));
      if ( v40 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a5, v44);
      v45 = *(_QWORD *)(v31 + 64);
      if ( *(_QWORD *)(v31 + 24) )
      {
        if ( !v30 )
        {
          v30 = 1;
          DXGDEVICE::ReportDestructionBegun(this);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct DXGTERMINATIONTRACKER *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                                                               + 136LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          *(_QWORD *)(v31 + 24),
          (*(_DWORD *)(*(_QWORD *)(v31 + 48) + 4LL) >> 6) & 0xF,
          a6.Value,
          v24);
      }
      v31 = v45;
    }
    while ( v45 );
  }
}
