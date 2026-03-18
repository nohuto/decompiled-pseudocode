/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x14000822C
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x140074E90 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x14037AFC0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x140398B0C (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 * Callees:
 *     ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x140007B18 (-VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x140007CEC (McTemplateK0qqx_EtwWriteTransfer.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x140007DFC (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLINTERRUPT2 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // edi
  char v5; // r13
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v9; // rbx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rbx
  int v15; // r15d
  LARGE_INTEGER v16; // rax
  enum _DXGK_CRTC_VSYNC_STATE v17; // r12d
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  KIRQL CurrentIrql; // al
  __int64 v25; // r13
  struct DXGTHREAD *v26; // rbx
  struct DXGTHREAD *v27; // rax
  int v28; // r12d
  __int64 v29; // r15
  KIRQL v30; // al
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  KIRQL v34; // al
  __int64 v35; // r13
  struct DXGTHREAD *v36; // rbx
  struct DXGTHREAD *v37; // rax
  int v38; // r12d
  KIRQL v39; // al
  __int64 v40; // rax
  unsigned int v41; // r12d
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  enum _DXGK_CRTC_VSYNC_STATE v45; // r13d
  unsigned int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // r8
  signed __int64 v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // rdx
  signed __int64 v54; // rdi
  unsigned int v55; // eax
  LARGE_INTEGER v56; // rbx
  struct _KDPC *v57; // r8
  struct _KTIMER *v58; // rcx
  struct DXGTHREAD *v59; // rbx
  unsigned __int64 v62; // r10
  unsigned __int64 v63; // r9
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // r10
  struct DXGGLOBAL *Global; // rdi
  int v67; // ecx
  struct DXGPROCESS *v68; // rax
  int v69; // ecx
  DXGGLOBAL *v70; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v72; // rcx
  __int64 i; // rbx
  unsigned int j; // edx
  __int64 v75; // rcx
  unsigned int k; // edx
  __int64 v77; // rcx
  __int64 v78; // [rsp+30h] [rbp-99h]
  enum _DXGK_CRTC_VSYNC_STATE CrtcVsyncState; // [rsp+6Ch] [rbp-5Dh]
  _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v82; // [rsp+78h] [rbp-51h]
  struct DXGTHREAD *v83; // [rsp+80h] [rbp-49h]
  __int64 v84; // [rsp+88h] [rbp-41h]
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-39h] BYREF
  char v86[8]; // [rsp+A8h] [rbp-21h] BYREF
  _KAPC_STATE ApcState; // [rsp+B0h] [rbp-19h] BYREF

  v4 = a4;
  v84 = qword_1401664C0 & 2;
  v5 = a3;
  CrtcVsyncState = a2.CrtcVsyncState;
  v82 = -1;
  v83 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v82 = 5054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5054LL);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v83 = Current;
    v9 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 186;
        DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount >= 0", 186LL, 0LL, 0LL, 0LL, 0LL);
      }
      v10 = *((_DWORD *)v9 + 13);
      if ( !v10 )
        *((_DWORD *)v9 + 14) = 5054;
      *((_DWORD *)v9 + 13) = v10 + 1;
    }
  }
  v11 = *((_DWORD *)this + 754) & 0x10;
  if ( !v11 || v4 != -3 )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v12 = v11 != 0 ? v4 : 0;
    v13 = *((_QWORD *)this + 557);
    v14 = 112LL * v12;
    v15 = *(_DWORD *)(*((_QWORD *)this + 544) + 4LL * v12);
    v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v17 = CrtcVsyncState;
    if ( CrtcVsyncState )
    {
      if ( CrtcVsyncState == DXGK_VSYNC_DISABLE_KEEP_PHASE )
      {
        if ( !v15 )
        {
          LockHandle.LockQueue.Next = 0LL;
          v18 = v16.QuadPart - *(_QWORD *)(v14 + v13);
          if ( is_mul_ok(v18, 0x3E8uLL) )
            v19 = v18 * (unsigned __int128)0x3E8uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
          else
            v19 = 1000 * (v18 / PerformanceFrequency.QuadPart)
                + 1000 * (v18 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
          *(_QWORD *)(v14 + v13 + 16) += v19;
          goto LABEL_19;
        }
LABEL_21:
        v4 = a4;
        goto LABEL_22;
      }
      if ( CrtcVsyncState != DXGK_VSYNC_DISABLE_NO_PHASE || v15 != 1 )
        goto LABEL_21;
      LockHandle.LockQueue.Next = 0LL;
      v64 = v16.QuadPart - *(_QWORD *)(v14 + v13);
      if ( is_mul_ok(v64, 0x3E8uLL) )
        v65 = v64 * (unsigned __int128)0x3E8uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      else
        v65 = 1000 * (v64 / PerformanceFrequency.QuadPart)
            + 1000 * (v64 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      *(_QWORD *)(v14 + v13 + 24) += v65;
    }
    else
    {
      if ( (unsigned int)(v15 - 1) > 1 )
        goto LABEL_21;
      LockHandle.LockQueue.Next = 0LL;
      v62 = v16.QuadPart - *(_QWORD *)(v14 + v13);
      if ( is_mul_ok(v62, 0x3E8uLL) )
        v63 = v62 * (unsigned __int128)0x3E8uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      else
        v63 = 1000 * (v62 / PerformanceFrequency.QuadPart)
            + 1000 * (v62 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      if ( v15 == 1 )
        *(_QWORD *)(v14 + v13 + 24) += v63;
      else
        *(_QWORD *)(v14 + v13 + 32) += v63;
    }
LABEL_19:
    *(LARGE_INTEGER *)(v14 + v13) = v16;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
    {
      v78 = *(_QWORD *)(v14 + v13 + 32);
      McTemplateK0qxxx_EtwWriteTransfer();
    }
    goto LABEL_21;
  }
  v17 = CrtcVsyncState;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 474); i = (unsigned int)(i + 1) )
    VSYNC_TIME_STATS::VSyncStateChange(
      (VSYNC_TIME_STATS *)(*((_QWORD *)this + 557) + 112LL * (unsigned int)i),
      *(enum _DXGK_CRTC_VSYNC_STATE *)(*((_QWORD *)this + 544) + 4 * i),
      CrtcVsyncState);
LABEL_22:
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v5 )
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 4400));
  v20 = *((_QWORD *)this + 396);
  if ( !v20
    || (v21 = *(_QWORD *)(v20 + 744)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v20 + 736) + 8LL) + 80LL))(v21)
    && *((struct _KTHREAD **)this + 397) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)this + 256)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, "g", v23, 73LL);
      KeWaitForSingleObject((char *)this + 256, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 35), 1u);
  }
  if ( *((int *)this + 761) >= 2700 && *((_QWORD *)this + 175) )
  {
    LockHandle.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)__PAIR64__(v17, a2.InterruptType);
    LODWORD(LockHandle.LockQueue.Lock) = v4;
    _InterlockedIncrement((volatile signed __int32 *)this + 1213);
    CurrentIrql = KeGetCurrentIrql();
    v25 = CurrentIrql;
    v26 = 0LL;
    if ( CurrentIrql < 2u && (v27 = DXGTHREAD::GetCurrent(), (v26 = v27) != 0LL) )
      v28 = *((_DWORD *)v27 + 12);
    else
      v28 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v86, this);
    v29 = (*((int (__fastcall **)(_QWORD, _KLOCK_QUEUE_HANDLE *))this + 175))(*((_QWORD *)this + 36), &LockHandle);
    if ( v86[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v25 != KeGetCurrentIrql() )
    {
      v30 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v25, v30, v78);
      WdLogGlobalForLineNumber = 1894;
    }
    if ( v26 && *((_DWORD *)v26 + 12) != v28 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v26 + 12), v28, 0LL, v78);
      WdLogGlobalForLineNumber = 73;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1213);
    if ( (_DWORD)v29 != -1073741823 && (_DWORD)v29 != -1073741822 && (_DWORD)v29 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1896;
LABEL_47:
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v32,
          v31,
          v33,
          0,
          0,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v29,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 1213);
    v34 = KeGetCurrentIrql();
    v35 = v34;
    v36 = 0LL;
    if ( v34 < 2u && (v37 = DXGTHREAD::GetCurrent(), (v36 = v37) != 0LL) )
      v38 = *((_DWORD *)v37 + 12);
    else
      v38 = 0;
    v86[0] = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( *((_DWORD *)Global + 417) )
      {
        v67 = *((_DWORD *)this + 111);
        if ( (v67 & 0x20) == 0 && (v67 & 4) == 0 )
        {
          v68 = DXGPROCESS::GetCurrent();
          if ( v68 )
          {
            if ( (*((_BYTE *)v68 + 408) & 1) == 0 && (*((_DWORD *)v68 + 102) & 2) == 0 )
            {
              v69 = *((_DWORD *)Global + 417);
              if ( v69 == 2 || v69 == 1 && *((_BYTE *)v68 + 573) )
              {
                v70 = DXGGLOBAL::GetGlobal();
                SessionData = DXGGLOBAL::GetSessionData(v70);
                if ( SessionData )
                {
                  v72 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                  if ( v72 )
                  {
                    KeStackAttachProcess(v72, &ApcState);
                    v86[0] = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v29 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 112))(*((_QWORD *)this + 36), a2);
    if ( v86[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v35 != KeGetCurrentIrql() )
    {
      v39 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v35, v39, v78);
      WdLogGlobalForLineNumber = 1906;
    }
    if ( v36 && *((_DWORD *)v36 + 12) != v38 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v36 + 12), v38, 0LL, v78);
      WdLogGlobalForLineNumber = 73;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1213);
    if ( (_DWORD)v29 != -1073741823 && (_DWORD)v29 != -1073741822 && (_DWORD)v29 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1908;
      goto LABEL_47;
    }
  }
  v40 = *((_QWORD *)this + 396);
  v41 = 0;
  if ( !v40
    || (v42 = *(_QWORD *)(v40 + 744)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v40 + 736) + 8LL) + 80LL))(v42)
    && *((struct _KTHREAD **)this + 397) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 35));
    KeLeaveCriticalRegion();
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v29 < 0 )
    {
      v45 = CrtcVsyncState;
    }
    else
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 554, &LockHandle);
      v45 = CrtcVsyncState;
      if ( (*((_DWORD *)this + 754) & 0x10) != 0 )
      {
        v46 = a4;
        if ( a4 == -3 )
        {
          for ( j = 0; j < *((_DWORD *)this + 474); *(_DWORD *)(*((_QWORD *)this + 544) + 4 * v75) = CrtcVsyncState )
            v75 = j++;
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)this + 544) + 4LL * a4) = CrtcVsyncState;
        }
      }
      else
      {
        v46 = a4;
        **((_DWORD **)this + 544) = CrtcVsyncState;
      }
      if ( CrtcVsyncState == DXGK_VSYNC_DISABLE_KEEP_PHASE )
      {
        if ( (*((_DWORD *)this + 754) & 0x10) != 0 )
        {
          if ( v46 == -3 )
          {
            for ( k = 0; k < *((_DWORD *)this + 474); *(_QWORD *)(*((_QWORD *)this + 555) + 8 * v77) = 0LL )
              v77 = k++;
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 555) + 8LL * v46) = 0LL;
          }
        }
        else
        {
          **((_QWORD **)this + 555) = 0LL;
        }
      }
      v47 = *((_QWORD *)this + 395);
      if ( v47 && CrtcVsyncState == DXGK_VSYNC_ENABLE && *(_QWORD *)(v47 + 1032) )
        *(_BYTE *)(v47 + 976) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( CrtcVsyncState != DXGK_VSYNC_DISABLE_NO_PHASE )
      {
        LOBYTE(v48) = CrtcVsyncState == DXGK_VSYNC_ENABLE;
        PoNotifyVSyncChange(v48);
      }
    }
    *((_QWORD *)this + 551) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 4400, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v45 = CrtcVsyncState;
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v43);
  v49[3] = (int)v29;
  v49[4] = a2.InterruptType;
  v51 = v45;
  v49[5] = v45;
  WdLogGlobalForLineNumber = 1999;
  if ( (int)v29 >= 0 && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && v45 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
  {
    if ( a4 == -3 || (v52 = a4, (*((_DWORD *)this + 754) & 0x10) == 0) )
      v52 = 0;
    v53 = *((_QWORD *)this + 556);
    v50 = v52;
    v51 = *(_QWORD *)(v53 + 8LL * v52);
    v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v53 + 8LL * v52), v51, v51);
    v55 = *((_DWORD *)this + 1116);
    if ( v54 )
      v56.QuadPart = -(v54 * v55);
    else
      v56.QuadPart = -166667 * v55;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    if ( (*((_DWORD *)this + 754) & 0x10) == 0 )
    {
      v57 = (struct _KDPC *)*((_QWORD *)this + 546);
      v58 = (struct _KTIMER *)*((_QWORD *)this + 545);
      goto LABEL_91;
    }
    if ( a4 != -3 )
    {
      v57 = (struct _KDPC *)(((unsigned __int64)a4 << 6) + *((_QWORD *)this + 546));
      v58 = (struct _KTIMER *)(*((_QWORD *)this + 545) + ((unsigned __int64)a4 << 6));
LABEL_91:
      KeSetTimer(v58, v56, v57);
      goto LABEL_92;
    }
    if ( *((_DWORD *)this + 474) )
    {
      do
      {
        KeSetTimer(
          (PKTIMER)(*((_QWORD *)this + 545) + ((unsigned __int64)v41 << 6)),
          v56,
          (PKDPC)(((unsigned __int64)v41 << 6) + *((_QWORD *)this + 546)));
        ++v41;
      }
      while ( v41 < *((_DWORD *)this + 474) );
    }
  }
LABEL_92:
  if ( bTracingEnabled
    && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0qqx_EtwWriteTransfer();
  }
  v59 = v83;
  if ( v83 )
  {
    if ( *((int *)v83 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 196;
      DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount > 0", 196LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v59 + 13))-- == 1 )
      *((_DWORD *)v59 + 14) = -1;
  }
  if ( v84 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v50, v82);
  return (unsigned int)v29;
}
