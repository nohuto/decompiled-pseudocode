/*
 * XREFs of DxgkGetPresentStats @ 0x140372490
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1400206F4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentStats(__int64 a1, unsigned int a2, unsigned int a3, DXGADAPTER *a4)
{
  DXGADAPTER *v4; // r14
  __int64 v6; // r15
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rdi
  struct DXGPROCESS *v11; // rbx
  DXGFASTMUTEX *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdi
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdi
  DXGADAPTER *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 result; // rax
  unsigned int v25; // ebx
  unsigned __int64 v26; // rdx
  __int64 v27; // r14
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rdi
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  DXGFASTMUTEX *v34; // [rsp+50h] [rbp-B0h] BYREF
  char v35; // [rsp+58h] [rbp-A8h]
  DXGADAPTER *v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[16]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v39; // [rsp+88h] [rbp-78h]
  _BYTE v40[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v41; // [rsp+C8h] [rbp-38h]
  char v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]

  v4 = a4;
  v36[0] = a4;
  v6 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v11 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v11 )
        goto LABEL_4;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = v10;
  if ( !v10 )
  {
    v23 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 641;
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
    return v23;
  }
LABEL_4:
  if ( (*(unsigned int (**)(void))(*((_QWORD *)v11 + 11) + 232LL))() )
  {
    v12 = (struct DXGPROCESS *)((char *)v11 + 104);
    v35 = 0;
    v34 = (struct DXGPROCESS *)((char *)v11 + 104);
    if ( v11 == (struct DXGPROCESS *)-104LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 628;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
      v12 = v34;
    }
    if ( DXGFASTMUTEX::IsOwner(v12) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 635;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
    if ( v11 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v11 + 32) == KeGetCurrentThread() )
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
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 248, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((struct DXGPROCESS *)((char *)v11 + 248), v13, v14);
      ExAcquirePushLockSharedEx((char *)v11 + 248, 0LL);
    }
    _InterlockedIncrement((volatile signed __int32 *)v11 + 66);
    v15 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
    if ( (*((_DWORD *)v11 + 102) & 0x100) != 0 )
    {
      v27 = *((_QWORD *)v11 + 74);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 248));
      if ( (unsigned int)v15 < *(_DWORD *)(v27 + 296)
        && (v28 = *(_DWORD *)(*(_QWORD *)(v27 + 280) + 16 * v15 + 8),
            (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v27 + 280) + 16 * v15 + 8) & 0x60))
        && (v28 & 0x2000) == 0
        && (v28 & 0x1F) != 0 )
      {
        v29 = *(_QWORD *)(v27 + 280);
        v30 = 2 * v15;
        if ( (*(_BYTE *)(v29 + 8 * v30 + 8) & 0x1F) == 1 )
        {
          v19 = *(_QWORD *)(v29 + 8 * v30);
        }
        else
        {
          WdLogSingleEntry0(2LL);
          v19 = 0LL;
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      else
      {
        v19 = 0LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v27 + 264));
      ExReleasePushLockSharedEx(v27 + 248, 0LL);
      KeLeaveCriticalRegion();
      v4 = v36[0];
    }
    else if ( (unsigned int)v15 < *((_DWORD *)v11 + 74)
           && (v16 = *(_DWORD *)(*((_QWORD *)v11 + 35) + 16LL * (unsigned int)v15 + 8),
               (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v11 + 35) + 16LL * (unsigned int)v15 + 8) & 0x60))
           && (v16 & 0x2000) == 0
           && (v16 & 0x1F) != 0 )
    {
      v17 = *((_QWORD *)v11 + 35);
      v18 = 2 * v15;
      if ( (*(_BYTE *)(v17 + 8 * v18 + 8) & 0x1F) == 1 )
      {
        v19 = *(_QWORD *)(v17 + 8 * v18);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        v19 = 0LL;
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v19 = 0LL;
    }
    v36[0] = (DXGADAPTER *)v19;
    if ( v19 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
      v36[1] = (DXGADAPTER *)-1LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)v11 + 66);
    ExReleasePushLockSharedEx((char *)v11 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v19 )
    {
      v23 = -1073741811;
      WdLogSingleEntry2(2LL, v6, -1073741811LL);
      WdLogGlobalForLineNumber = 674;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
        v6,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_34;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, (struct DXGADAPTER *const)v19, 0LL);
    if ( v42 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v40, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    v20 = v41;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v41 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v41 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)"g");
        KeWaitForSingleObject((char *)v41 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v41, 0LL);
      v20 = v41;
    }
    v43 = 0LL;
    v42 = 1;
    if ( *((_DWORD *)v20 + 50) != 1 )
      goto LABEL_42;
    if ( v39 != v41 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v38, 0LL);
      if ( *((_DWORD *)v39 + 50) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v38);
LABEL_42:
        COREACCESS::Release((COREACCESS *)v40);
        v23 = -1073741130;
        WdLogSingleEntry2(2LL, v19, -1073741130LL);
        WdLogGlobalForLineNumber = 686;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire shared access for DXGADAPTER 0x%I64x, returning 0x%I64x",
          v19,
          -1073741130LL,
          0LL,
          0LL,
          0LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v36, v26);
        goto LABEL_34;
      }
    }
    v37[1] = 1;
    if ( *(_BYTE *)(v19 + 3057) || (v22 = *(_QWORD *)(v19 + 3168)) == 0 )
    {
      v23 = -1073741811;
      WdLogSingleEntry2(2LL, v19, -1073741811LL);
      WdLogGlobalForLineNumber = 695;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGADAPTER 0x%I64x is not an active render adapter, returning 0x%I64x",
        v19,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v19);
LABEL_34:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v34);
      return v23;
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGADAPTER *))(*(_QWORD *)(*(_QWORD *)(v22 + 736) + 8LL)
                                                                          + 520LL))(
            *(_QWORD *)(v22 + 744),
            a2,
            a3,
            v4);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v19);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v34);
    return v25;
  }
  else
  {
    WdLogSingleEntry2(3LL, v11, -1073741790LL);
    result = 3221225506LL;
    WdLogGlobalForLineNumber = 653;
  }
  return result;
}
