/*
 * XREFs of DxgkModifyVSyncWaiterInternal @ 0x1402A1E80
 * Callers:
 *     <none>
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140016D90 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14003C2B4 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402A12F8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x140360A60 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ @ 0x1403ED684 (-EnableVSyncEventSignaling@REMOTE_VSYNC@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkModifyVSyncWaiterInternal(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v3; // r15
  unsigned int v5; // esi
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // r14
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // edi
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rax
  struct DXGADAPTER *v20; // rbx
  DXGADAPTER *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned int v25; // r15d
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r13
  int v30; // eax
  __int64 v31; // rdi
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // rdx
  signed __int32 v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  int (__fastcall *v39)(__int64, __int64, __int64, _QWORD, int, signed __int32); // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rbx
  struct DXGGLOBAL *v43; // rax
  int IndirectDisplayPairedAdapter; // eax
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // r14
  int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // r14
  DXGGLOBAL *Global; // rax
  REMOTE_VSYNC *v52; // rcx
  __int64 v53; // rdx
  int Timeout; // [rsp+20h] [rbp-E0h]
  signed __int32 v55; // [rsp+28h] [rbp-D8h]
  struct DXGADAPTER *v58[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v59; // [rsp+68h] [rbp-98h]
  struct DXGPROCESS *v60; // [rsp+70h] [rbp-90h]
  _QWORD v61[2]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v62[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v63[56]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v64[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v65[16]; // [rsp+D8h] [rbp-28h] BYREF
  DXGADAPTER *v66; // [rsp+E8h] [rbp-18h]
  _BYTE v67[16]; // [rsp+118h] [rbp+18h] BYREF
  DXGADAPTER *v68; // [rsp+128h] [rbp+28h]
  char v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]

  v3 = a2;
  v59 = a2;
  v5 = 0;
  if ( !KeAreApcsDisabled() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7990;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"KeAreApcsDisabled()", 7990LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  v60 = Current;
  v7 = Current;
  if ( !Current )
  {
    v25 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7995;
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
    return v25;
  }
  v8 = (volatile signed __int32 *)((char *)Current + 248);
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v8, v9, v10);
    ExAcquirePushLockSharedEx(v8, 0LL);
  }
  _InterlockedIncrement(v8 + 4);
  v11 = (a1 >> 6) & 0xFFFFFF;
  if ( (*((_DWORD *)v7 + 102) & 0x100) != 0 )
  {
    v61[0] = *((_QWORD *)v7 + 74);
    v58[0] = (struct DXGADAPTER *)(v61[0] + 248LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v61[0] + 248LL));
    if ( v11 >= *(_DWORD *)(v61[0] + 296LL) )
    {
      v14 = a1;
    }
    else
    {
      v46 = 2LL * v11;
      v47 = v11;
      v14 = a1;
      v48 = *(_DWORD *)(*(_QWORD *)(v61[0] + 280LL) + 8 * v46 + 8);
      if ( ((a1 >> 25) & 0x60) == (v48 & 0x60) && (v48 & 0x2000) == 0 && (v48 & 0x1F) != 0 )
      {
        v49 = *(_QWORD *)(v61[0] + 280LL);
        v50 = 2 * v47;
        if ( (*(_BYTE *)(v49 + 8 * v50 + 8) & 0x1F) == 1 )
        {
          v18 = *(_QWORD *)(v49 + 8 * v50);
LABEL_95:
          _InterlockedDecrement((volatile signed __int32 *)v58[0] + 4);
          ExReleasePushLockSharedEx(v58[0], 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_16;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v18 = 0LL;
    goto LABEL_95;
  }
  if ( v11 >= *((_DWORD *)v7 + 74) )
  {
    v14 = a1;
  }
  else
  {
    v12 = 2LL * v11;
    v13 = v11;
    v14 = a1;
    v15 = *(_DWORD *)(*((_QWORD *)v60 + 35) + 8 * v12 + 8);
    if ( ((a1 >> 25) & 0x60) == (v15 & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
    {
      v16 = *((_QWORD *)v60 + 35);
      v17 = 2 * v13;
      if ( (*(_BYTE *)(v16 + 8 * v17 + 8) & 0x1F) == 1 )
      {
        v18 = *(_QWORD *)(v16 + 8 * v17);
        goto LABEL_16;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v18 = 0LL;
LABEL_16:
  v62[0] = (DXGADAPTER *)v18;
  if ( v18 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
    v62[1] = (DXGADAPTER *)-1LL;
  }
  _InterlockedDecrement(v8 + 4);
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v25 = -1073741811;
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
    WdLogGlobalForLineNumber = 8006;
    return v25;
  }
  if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    if ( a3 )
    {
      if ( *(_BYTE *)(v18 + 209)
        && (Global = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(Global) + 4742)) )
      {
        v52 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1088);
      }
      else
      {
        v52 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1032);
      }
      v25 = REMOTE_VSYNC::EnableVSyncEventSignaling(v52);
      goto LABEL_39;
    }
    goto LABEL_62;
  }
  v19 = *(_QWORD *)(v18 + 3160);
  v58[0] = 0LL;
  if ( !v19 )
  {
    v25 = -1073741637;
    WdLogSingleEntry2(4LL, v18, -1073741637LL);
    WdLogGlobalForLineNumber = 8846;
LABEL_44:
    v27 = v59;
    WdLogSingleEntry3(2LL, v18, v59, (int)v25);
    WdLogGlobalForLineNumber = 8045;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      v18,
      v27,
      (int)v25,
      0LL,
      0LL);
    goto LABEL_39;
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(v19 + 96) )
  {
    v42 = v3;
    v25 = -1073741811;
    WdLogSingleEntry2(2LL, v42, -1073741811LL);
    WdLogGlobalForLineNumber = 8833;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v42,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_44;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
  if ( *(_QWORD *)(v18 + 3168) )
  {
    v58[0] = (struct DXGADAPTER *)v18;
    _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
    v58[1] = (struct DXGADAPTER *)-1LL;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v18 + 444) & 0x100) != 0 )
  {
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER *)v18, 0, v58);
    v45 = IndirectDisplayPairedAdapter;
    if ( IndirectDisplayPairedAdapter < 0 )
    {
      WdLogSingleEntry2(2LL, v18, IndirectDisplayPairedAdapter);
      WdLogGlobalForLineNumber = 8875;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
        v18,
        v45,
        0LL,
        0LL,
        0LL);
      if ( v58[0] )
        DXGADAPTER::ReleaseReference(v58[0]);
      v58[0] = 0LL;
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
      v25 = v45;
      goto LABEL_44;
    }
  }
  else
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v61);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
    v43 = DXGGLOBAL::GetGlobal();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v58, *((struct DXGADAPTER **)v43 + 126));
    if ( !v58[0] )
    {
      v25 = -1073741637;
      WdLogSingleEntry2(2LL, v18, -1073741637LL);
      WdLogGlobalForLineNumber = 8889;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
        v18,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
      if ( v58[0] )
        DXGADAPTER::ReleaseReference(v58[0]);
      v58[0] = 0LL;
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
      goto LABEL_44;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
  }
LABEL_24:
  v20 = v58[0];
  v58[0] = 0LL;
  if ( !v20 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8049;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != nullptr) && (pDisplayAdapter != nullptr)",
      8049LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v64, v20, (struct DXGADAPTER *const)v18);
  DXGADAPTER::ReleaseReference(v20);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
  if ( *(_DWORD *)(v18 + 160) == 1 )
  {
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
      (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v63,
      v20,
      (struct DXGADAPTER *)v18);
    if ( *((_DWORD *)v20 + 50) != 1 || *(_DWORD *)(v18 + 200) != 1 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v63);
      goto LABEL_84;
    }
    if ( (unsigned int)v3 >= *(_DWORD *)(*(_QWORD *)(v18 + 3160) + 96LL) )
    {
      v53 = v3;
      v25 = -1073741811;
      WdLogSingleEntry2(3LL, v53, -1073741811LL);
      WdLogGlobalForLineNumber = 8072;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v63);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      goto LABEL_39;
    }
    if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v18, v3) )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v63);
LABEL_38:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      v25 = -1071775738;
LABEL_39:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v62, v24);
      return v25;
    }
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v63);
  }
  if ( v69 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v67, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7648;
  }
  v21 = v68;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v68 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v68 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)"g");
      KeWaitForSingleObject((char *)v68 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v68, 0LL);
    v21 = v68;
  }
  v70 = 0LL;
  v69 = 1;
  if ( *((_DWORD *)v21 + 50) != 1 )
    goto LABEL_83;
  if ( v66 != v68 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v65, 0LL);
    if ( *((_DWORD *)v66 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v65);
LABEL_83:
      COREACCESS::Release((COREACCESS *)v67);
LABEL_84:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      v25 = -1073741130;
      goto LABEL_39;
    }
  }
  v64[1] = 1;
  if ( !*((_QWORD *)v20 + 396) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8088;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      8088LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_QWORD *)(v18 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8089;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      8089LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( !*(_QWORD *)(v18 + 3160) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10648;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10648LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v23 = *(_QWORD *)(v18 + 3160);
  if ( !v23 )
    goto LABEL_38;
  if ( (unsigned int)v3 >= *(_DWORD *)(v23 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6468;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6468LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v28 = 4024 * v3;
  if ( !*(_BYTE *)(4024 * v3 + *(_QWORD *)(v23 + 128) + 760) )
    goto LABEL_38;
  if ( *(_QWORD *)(v18 + 3168) )
  {
    if ( (struct DXGADAPTER *)v18 != v20 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8098;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter == pRenderAdapter",
        8098LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v29 = *((_QWORD *)v20 + 396);
    v30 = *((_DWORD *)v20 + 754) & 0x10;
    if ( a3 )
    {
      v34 = v30 != 0 ? (unsigned int)v3 : 0;
      if ( (unsigned int)v34 < 0x10 )
      {
        v35 = _InterlockedIncrement((volatile signed __int32 *)v20 + v34 + 798);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          v55 = v35;
          Timeout = v30 != 0 ? v3 : 0;
          McTemplateK0pqq_EtwWriteTransfer(v28, (__int64)&VSyncWaiterChange);
        }
      }
      WdLogSingleEntry2(4LL, v18, v60);
      v36 = *(_QWORD *)(v29 + 736);
      v37 = *(_QWORD *)(v29 + 744);
      WdLogGlobalForLineNumber = 8105;
      v38 = *(_QWORD *)(v36 + 8);
      v39 = *(int (__fastcall **)(__int64, __int64, __int64, _QWORD, int, signed __int32))(v38 + 576);
      LOBYTE(v38) = 1;
      if ( v39(v37, 1LL, v38, (unsigned int)v3, Timeout, v55) < 0 )
      {
        v41 = (*((_DWORD *)v20 + 754) & 0x10) != 0 ? (unsigned int)v3 : 0;
        if ( (unsigned int)v41 < 0x10 )
        {
          if ( _InterlockedDecrement((volatile signed __int32 *)v20 + v41 + 798) < 0 )
          {
            WdLogSingleEntry5(0LL, 275LL, 37LL, v20, *((unsigned int *)v20 + v41 + 798), 0LL);
            WdLogGlobalForLineNumber = 2783;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
            McTemplateK0pqq_EtwWriteTransfer(v40, (__int64)&VSyncWaiterChange);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
        v5 = -1071775738;
        goto LABEL_62;
      }
    }
    else
    {
      v31 = v30 != 0 ? (unsigned int)v3 : 0;
      if ( (unsigned int)v31 < 0x10 )
      {
        v32 = _InterlockedDecrement((volatile signed __int32 *)v20 + v31 + 798);
        if ( v32 < 0 )
        {
          WdLogSingleEntry5(0LL, 275LL, 37LL, v20, *((unsigned int *)v20 + v31 + 798), 0LL);
          WdLogGlobalForLineNumber = 2783;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          v55 = v32;
          Timeout = v31;
          McTemplateK0pqq_EtwWriteTransfer(v28, (__int64)&VSyncWaiterChange);
        }
        LODWORD(v3) = v59;
      }
      WdLogSingleEntry2(4LL, v18, v60);
      v33 = *(_QWORD *)(v29 + 736);
      WdLogGlobalForLineNumber = 8120;
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, signed __int32))(*(_QWORD *)(v33 + 8) + 576LL))(
             *(_QWORD *)(v29 + 744),
             1LL,
             0LL,
             (unsigned int)v3,
             Timeout,
             v55);
    }
  }
  else if ( a3 )
  {
    WdLogSingleEntry2(4LL, v18, v60);
    WdLogGlobalForLineNumber = 8133;
    ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v18 + 3160), v3);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
LABEL_62:
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
  return v5;
}
