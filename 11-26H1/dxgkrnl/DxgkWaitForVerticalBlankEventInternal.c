/*
 * XREFs of DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0
 * Callers:
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1401B9270 (DxgkWaitForVerticalBlankEvent2.c)
 *     DxgkWaitForVerticalBlankEvent @ 0x1403863C0 (DxgkWaitForVerticalBlankEvent.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@4355555@Z @ 0x140001008 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x140011108 (McTemplateK0tt_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011790 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x140016D70 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140016D90 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x14003B9D8 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Acquire@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14003E18C (-Acquire@DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x14003E5E8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x14004C058 (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@EI@Z @ 0x14005D500 (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     __chkstk_0 @ 0x1400A5964 (__chkstk_0.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x140292700 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1402A1460 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402A3410 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1403ED638 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403EF9BC (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        __int64 a1,
        NTSTATUS a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        union _LARGE_INTEGER *a6)
{
  unsigned int v7; // r12d
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v12; // rdi
  struct DXGPROCESS *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // rbx
  char *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  struct DXGADAPTER *v23; // rsi
  struct DXGPROCESS *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct DXGADAPTER *v27; // rdi
  unsigned __int64 v28; // rdx
  DXGADAPTER *v29; // rcx
  __int64 v30; // rcx
  bool v31; // zf
  __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __int64 result; // rax
  int v35; // r15d
  NTSTATUS v36; // edx
  __int64 v37; // rax
  ULONG v38; // esi
  NTSTATUS v39; // eax
  NTSTATUS v40; // r8d
  int v41; // r12d
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // si
  unsigned int v46; // r15d
  __int64 v47; // rsi
  unsigned int v48; // esi
  unsigned __int64 v49; // rdx
  volatile signed __int64 *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // rsi
  __int64 v60; // rcx
  DXGADAPTER *v61; // rcx
  __int64 v62; // rcx
  int v63; // eax
  unsigned __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // r8
  unsigned int v67; // eax
  __int64 v68; // r13
  int v69; // edx
  char *v70; // rcx
  DXGADAPTER *v71; // rcx
  __int64 v72; // rcx
  int LiveDumpWithWdLogs2; // r15d
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  struct DXGGLOBAL *v77; // rax
  unsigned int v78; // ebx
  __int64 v79; // rax
  unsigned int v80; // ecx
  __int64 v81; // rsi
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rdx
  int IndirectDisplayPairedAdapter; // eax
  __int64 v85; // rsi
  __int64 v86; // r12
  __int64 v87; // rbx
  int v88; // edx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *v92; // rax
  struct _ETHREAD *v93; // rdi
  KSPIN_LOCK *v94; // rax
  struct DXGGLOBAL *v95; // rax
  unsigned int v96; // edi
  __int64 v97; // rdx
  __int64 v98; // rcx
  DXGGLOBAL *v99; // rax
  struct DXGGLOBAL *v100; // rax
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rdx
  _BYTE v103[5]; // [rsp+A0h] [rbp-80h] BYREF
  bool v104; // [rsp+A5h] [rbp-7Bh]
  char v105; // [rsp+A6h] [rbp-7Ah]
  char v106; // [rsp+A7h] [rbp-79h]
  char v107; // [rsp+A8h] [rbp-78h]
  unsigned int v108; // [rsp+ACh] [rbp-74h]
  struct DXGADAPTER *v109; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v110; // [rsp+B8h] [rbp-68h]
  int v111; // [rsp+C0h] [rbp-60h] BYREF
  NTSTATUS v112; // [rsp+C4h] [rbp-5Ch] BYREF
  NTSTATUS v113; // [rsp+C8h] [rbp-58h]
  __int64 i; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v115; // [rsp+D8h] [rbp-48h] BYREF
  int v116; // [rsp+E0h] [rbp-40h] BYREF
  int IsDebuggerPresent; // [rsp+E4h] [rbp-3Ch] BYREF
  int v118; // [rsp+E8h] [rbp-38h] BYREF
  int v119; // [rsp+ECh] [rbp-34h] BYREF
  int v120; // [rsp+F0h] [rbp-30h] BYREF
  int v121; // [rsp+F4h] [rbp-2Ch] BYREF
  int v122; // [rsp+F8h] [rbp-28h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+100h] [rbp-20h] BYREF
  void *Src; // [rsp+108h] [rbp-18h] BYREF
  void *v125[2]; // [rsp+110h] [rbp-10h] BYREF
  _QWORD v126[2]; // [rsp+120h] [rbp+0h] BYREF
  __int64 v127; // [rsp+130h] [rbp+10h] BYREF
  char v128[8]; // [rsp+138h] [rbp+18h] BYREF
  struct DXGADAPTER *v129; // [rsp+140h] [rbp+20h]
  char v130; // [rsp+148h] [rbp+28h]
  __int64 v131; // [rsp+158h] [rbp+38h]
  char v132; // [rsp+160h] [rbp+40h]
  bool v133; // [rsp+168h] [rbp+48h]
  char v134; // [rsp+169h] [rbp+49h]
  char v135; // [rsp+170h] [rbp+50h] BYREF
  char v136; // [rsp+171h] [rbp+51h]
  _BYTE v137[16]; // [rsp+178h] [rbp+58h] BYREF
  DXGADAPTER *v138; // [rsp+188h] [rbp+68h]
  char v139; // [rsp+190h] [rbp+70h]
  char *v140; // [rsp+198h] [rbp+78h]
  _BYTE v141[16]; // [rsp+1B8h] [rbp+98h] BYREF
  DXGADAPTER *v142; // [rsp+1C8h] [rbp+A8h]
  char v143; // [rsp+1D0h] [rbp+B0h]
  char *v144; // [rsp+1D8h] [rbp+B8h]
  PVOID Object[64]; // [rsp+200h] [rbp+E0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+400h] [rbp+2E0h] BYREF

  Src = a5;
  v7 = a2;
  v8 = 0LL;
  Timeout = a6;
  v112 = a4;
  v108 = a3;
  v113 = a2;
  v9 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v13 )
        goto LABEL_4;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v13 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v13 )
        goto LABEL_4;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v13 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7466;
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
    return 3221225485LL;
  }
LABEL_4:
  if ( a4 >= 0x3F )
  {
    WdLogSingleEntry1(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 7474;
    return result;
  }
  KeEnterCriticalRegion();
  v103[1] = 1;
  if ( !(_DWORD)v9 && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    v77 = DXGGLOBAL::GetGlobal();
    v78 = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)v77 + 1032));
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v103);
    return v78;
  }
  if ( v13 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v13 + 32) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v13 + 248, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)v13 + 68) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)"g");
    ExAcquirePushLockSharedEx((char *)v13 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v13 + 66);
  v15 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
  if ( (*((_DWORD *)v13 + 102) & 0x100) != 0 )
  {
    v86 = *((_QWORD *)v13 + 74);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v86 + 248));
    if ( (unsigned int)v15 < *(_DWORD *)(v86 + 296) )
    {
      v87 = *(_QWORD *)(v86 + 280) + 16 * v15;
      if ( (((unsigned int)v9 >> 25) & 0x60) == (*(_BYTE *)(v87 + 8) & 0x60) && (*(_DWORD *)(v87 + 8) & 0x2000) == 0 )
      {
        v88 = *(_DWORD *)(v87 + 8) & 0x1F;
        if ( v88 )
        {
          if ( v88 == 1 )
          {
            v18 = *(_QWORD *)v87;
LABEL_279:
            _InterlockedDecrement((volatile signed __int32 *)(v86 + 264));
            ExReleasePushLockSharedEx(v86 + 248, 0LL);
            KeLeaveCriticalRegion();
            v7 = v113;
            goto LABEL_22;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v18 = 0LL;
    goto LABEL_279;
  }
  if ( (unsigned int)v15 < *((_DWORD *)v13 + 74) )
  {
    v16 = *((_QWORD *)v13 + 35) + 16 * v15;
    if ( (((unsigned int)v9 >> 25) & 0x60) == (*(_BYTE *)(v16 + 8) & 0x60) && (*(_DWORD *)(v16 + 8) & 0x2000) == 0 )
    {
      v17 = *(_DWORD *)(v16 + 8) & 0x1F;
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          v18 = *(_QWORD *)v16;
          goto LABEL_22;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v18 = 0LL;
LABEL_22:
  v125[0] = (void *)v18;
  v19 = (char *)v13 + 248;
  if ( !v18 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v13 + 66);
    ExReleasePushLockSharedEx(v19, 0LL);
    KeLeaveCriticalRegion();
    v35 = -1073741811;
    WdLogSingleEntry2(3LL, v9, -1073741811LL);
    WdLogGlobalForLineNumber = 7502;
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v125, v102);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v103);
    return (unsigned int)v35;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
  _InterlockedDecrement((volatile signed __int32 *)v13 + 66);
  v125[1] = (void *)-1LL;
  ExReleasePushLockSharedEx(v19, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    if ( v13 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v13 + 32) == KeGetCurrentThread() )
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
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v13 + 248, 0LL) )
    {
      DXGPUSHLOCK::LogEvent((struct DXGPROCESS *)((char *)v13 + 248), v65, v66);
      ExAcquirePushLockSharedEx((char *)v13 + 248, 0LL);
    }
    _InterlockedIncrement((volatile signed __int32 *)v13 + 66);
    v67 = (v7 >> 6) & 0xFFFFFF;
    if ( v67 < *((_DWORD *)v13 + 74) )
    {
      v68 = *((_QWORD *)v13 + 35) + 16LL * v67;
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v68 + 8) & 0x60) && (*(_DWORD *)(v68 + 8) & 0x2000) == 0 )
      {
        v69 = *(_DWORD *)(v68 + 8) & 0x1F;
        if ( v69 )
        {
          if ( v69 == 3 )
          {
            v8 = *(_QWORD *)v68;
            v70 = (char *)v13 + 248;
            if ( v8 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v8 + 64));
              _InterlockedDecrement((volatile signed __int32 *)v13 + 66);
              ExReleasePushLockSharedEx(v70, 0LL);
              KeLeaveCriticalRegion();
              _InterlockedIncrement64((volatile signed __int64 *)(v8 + 64));
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
              goto LABEL_24;
            }
LABEL_294:
            _InterlockedDecrement((volatile signed __int32 *)v13 + 66);
            ExReleasePushLockSharedEx(v70, 0LL);
            KeLeaveCriticalRegion();
            WdLogSingleEntry2(3LL, v18, v7);
            WdLogGlobalForLineNumber = 7517;
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
            KeLeaveCriticalRegion();
            return -1073741811LL;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v70 = (char *)v13 + 248;
    goto LABEL_294;
  }
LABEL_24:
  v115 = v8;
  v21 = PsGetCurrentProcess(v20);
  v22 = PsGetProcessDxgProcess(v21);
  v23 = (struct DXGADAPTER *)v22;
  if ( v22 && (*(_DWORD *)(v22 + 408) & 0x80) == 0 )
  {
LABEL_26:
    v24 = v23;
    if ( !v23 )
      goto LABEL_29;
    goto LABEL_27;
  }
  v92 = DXGTHREAD::GetCurrent();
  if ( v92 )
  {
    v24 = (struct DXGPROCESS *)*((_QWORD *)v92 + 3);
    if ( !v24 )
      goto LABEL_26;
  }
  else
  {
    v93 = KeGetCurrentThread();
    v94 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v24 = DXGGLOBAL::SearchDxgThreadList(v94, v93);
    if ( !v24 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_26;
    }
  }
LABEL_27:
  v25 = *((_QWORD *)v24 + 11);
  v23 = 0LL;
  if ( v25 )
  {
    v111 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v25 + 240))(0LL, 0LL, &v111) )
    {
      if ( !v111 )
      {
        if ( *(_BYTE *)(v18 + 209) && (v99 = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(v99) + 4742)) )
        {
          v100 = DXGGLOBAL::GetGlobal();
          v96 = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)v100 + 1088));
          if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
        }
        else
        {
          v95 = DXGGLOBAL::GetGlobal();
          v96 = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)v95 + 1032));
          if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
        }
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
        DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v103);
        return v96;
      }
    }
  }
LABEL_29:
  v26 = *(_QWORD *)(v18 + 3160);
  v109 = v23;
  if ( !v26 )
  {
    WdLogSingleEntry2(4LL, v18, -1073741637LL);
    WdLogGlobalForLineNumber = 8846;
    v35 = -1073741637;
    goto LABEL_70;
  }
  if ( v108 >= *(_DWORD *)(v26 + 96) )
  {
    v35 = -1073741811;
    WdLogSingleEntry2(2LL, v108, -1073741811LL);
    WdLogGlobalForLineNumber = 8833;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v108,
      -1073741811LL,
      (__int64)v23,
      (__int64)v23,
      (__int64)v23);
LABEL_70:
    WdLogSingleEntry3(2LL, v18, v108, v35);
    WdLogGlobalForLineNumber = 7555;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      v18,
      v108,
      v35,
      0LL,
      0LL);
    if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    KeLeaveCriticalRegion();
    return (unsigned int)v35;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
  if ( *(_QWORD *)(v18 + 3168) )
  {
    v109 = (struct DXGADAPTER *)v18;
    _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
    v110 = -1LL;
    goto LABEL_33;
  }
  if ( (*(_DWORD *)(v18 + 444) & 0x100) == 0 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v126);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v126);
    v50 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 126);
    v109 = (struct DXGADAPTER *)v50;
    if ( v50 )
    {
      _InterlockedIncrement64(v50 + 3);
      v110 = -1LL;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v126);
      goto LABEL_33;
    }
    WdLogSingleEntry2(2LL, v18, -1073741637LL);
    WdLogGlobalForLineNumber = 8889;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
      v18,
      -1073741637LL,
      (__int64)v23,
      (__int64)v23,
      (__int64)v23);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v126);
    v109 = v23;
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    v35 = -1073741637;
    goto LABEL_70;
  }
  IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(
                                   (struct DXGADAPTER *)v18,
                                   0,
                                   (struct DXGADAPTER_REFERENCE *)&v109);
  v85 = IndirectDisplayPairedAdapter;
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
      v85,
      0LL,
      0LL,
      0LL);
    if ( v109 )
      DXGADAPTER::ReleaseReference(v109);
    v109 = 0LL;
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    v35 = v85;
    goto LABEL_70;
  }
  v23 = 0LL;
LABEL_33:
  v27 = v109;
  v109 = v23;
  if ( !v27 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7561;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
      7561LL,
      (__int64)v23,
      (__int64)v23,
      (__int64)v23,
      (__int64)v23);
  }
  if ( !v8 || v27 == *(struct DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL) && v18 == *(_QWORD *)(v8 + 1896) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v135, v27, (struct DXGADAPTER *const)v18);
    DXGADAPTER::ReleaseReference(v27);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    if ( *(_DWORD *)(v18 + 160) != 1 )
      goto LABEL_37;
    v129 = v27;
    v130 = 0;
    v133 = v18 == (_QWORD)v27;
    v131 = v18;
    v132 = 0;
    v134 = 0;
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::Acquire((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v128);
    if ( *((_DWORD *)v27 + 50) != 1 || *(_DWORD *)(v18 + 200) != 1 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v128);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v135);
      if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
      goto LABEL_211;
    }
    v79 = *(_QWORD *)(v18 + 3160);
    v80 = v108;
    if ( v108 < *(_DWORD *)(v79 + 96) )
    {
      if ( !v79 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10648;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"IsDisplayAdapter()",
          10648LL,
          (__int64)v23,
          (__int64)v23,
          (__int64)v23,
          (__int64)v23);
        v80 = v108;
      }
      v81 = *(_QWORD *)(v18 + 3160);
      if ( !v81 )
        goto LABEL_235;
      if ( v80 >= *(_DWORD *)(v81 + 96) )
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
        v80 = v108;
      }
      if ( !*(_BYTE *)(4024LL * v80 + *(_QWORD *)(v81 + 128) + 760) )
      {
LABEL_235:
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v128);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v135);
        if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
        goto LABEL_305;
      }
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v128);
      v23 = 0LL;
LABEL_37:
      if ( v143 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v141, v23, v23);
        WdLogGlobalForLineNumber = 7648;
      }
      v29 = v142;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v142 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v142 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v30, (__int64)"g");
          KeWaitForSingleObject((char *)v142 + 48, Executive, 0, 0, (PLARGE_INTEGER)v23);
        }
        DXGADAPTER::AcquireCoreResourceShared(v142, 0LL);
        v29 = v142;
      }
      v144 = (char *)v23;
      v143 = 1;
      if ( *((_DWORD *)v29 + 50) != 1 )
        goto LABEL_219;
      if ( v138 != v142 )
      {
        if ( v139 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v137, v23, v23);
          WdLogGlobalForLineNumber = 7648;
        }
        v71 = v138;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v138 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v138 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v72, (__int64)"g");
            KeWaitForSingleObject((char *)v138 + 48, Executive, 0, 0, (PLARGE_INTEGER)v23);
          }
          DXGADAPTER::AcquireCoreResourceShared(v138, 0LL);
          v71 = v138;
        }
        v140 = (char *)v23;
        v139 = 1;
        if ( *((_DWORD *)v71 + 50) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v137);
LABEL_219:
          COREACCESS::Release((COREACCESS *)v141);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v135);
          if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
LABEL_211:
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
          DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v103);
          return 3221226166LL;
        }
      }
      v136 = 1;
      if ( !*((_QWORD *)v27 + 396) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7615;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pRenderAdapter->IsRenderAdapter()",
          7615LL,
          (__int64)v23,
          (__int64)v23,
          (__int64)v23,
          (__int64)v23);
      }
      if ( !*(_QWORD *)(v18 + 3160) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7616;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          7616LL,
          (__int64)v23,
          (__int64)v23,
          (__int64)v23,
          (__int64)v23);
      }
      if ( v7 && *(_DWORD *)(v8 + 608) != 1 )
      {
        if ( v136 )
        {
          if ( v138 != v142 )
          {
            if ( !v139 )
            {
              WdLogSingleEntry5(0LL, 275LL, 4LL, v137, v23, v23);
              WdLogGlobalForLineNumber = 7763;
            }
            v139 = 0;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v138 + 23) )
              DXGADAPTER::ReleaseCoreResource(v138, v140);
            v140 = (char *)v23;
          }
          if ( !v143 )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v141, v23, v23);
            WdLogGlobalForLineNumber = 7763;
          }
          v143 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v142 + 23) )
            DXGADAPTER::ReleaseCoreResource(v142, v144);
          v144 = (char *)v23;
          v136 = 0;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v141, v28);
        COREACCESS::~COREACCESS((COREACCESS *)v137, v64);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
        goto LABEL_180;
      }
      v31 = *(_QWORD *)(v18 + 3160) == 0LL;
      v105 = 0;
      v106 = 0;
      v107 = 0;
      v113 = (int)v23;
      if ( v31 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10648;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10648LL, 0LL, 0LL, 0LL, 0LL);
      }
      v32 = *(_QWORD *)(v18 + 3160);
      if ( !v32 )
        goto LABEL_52;
      if ( v108 >= *(_DWORD *)(v32 + 96) )
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
      v28 = v108;
      if ( !*(_BYTE *)(*(_QWORD *)(v32 + 128) + 4024LL * v108 + 760) )
      {
LABEL_52:
        if ( v136 )
        {
          if ( v138 != v142 )
          {
            if ( !v139 )
            {
              WdLogSingleEntry5(0LL, 275LL, 4LL, v137, 0LL, 0LL);
              WdLogGlobalForLineNumber = 7763;
            }
            v139 = 0;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v138 + 23) )
              DXGADAPTER::ReleaseCoreResource(v138, v140);
            v140 = 0LL;
          }
          if ( !v143 )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v141, 0LL, 0LL);
            WdLogGlobalForLineNumber = 7763;
          }
          v143 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v142 + 23) )
            DXGADAPTER::ReleaseCoreResource(v142, v144);
          v144 = 0LL;
          v136 = 0;
        }
        COREACCESS::~COREACCESS((COREACCESS *)v141, v28);
        COREACCESS::~COREACCESS((COREACCESS *)v137, v33);
        if ( v8 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
        }
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
        KeLeaveCriticalRegion();
        return 3223191558LL;
      }
      if ( !*(_QWORD *)(v18 + 3168) )
      {
        v51 = *(_QWORD *)(*(_QWORD *)(v18 + 3160) + 464LL);
        if ( v51 )
          BLTQUEUE::EnableVSyncEventSignaling((BLTQUEUE *)(*(_QWORD *)(v51 + 8) + 3040LL * v108));
LABEL_139:
        if ( v138 != v142 )
        {
          if ( !v139 )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v137, 0LL, 0LL);
            WdLogGlobalForLineNumber = 7763;
          }
          v139 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v138 + 23) )
            DXGADAPTER::ReleaseCoreResource(v138, v140);
          v140 = 0LL;
        }
        if ( !v143 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v141, 0LL, 0LL);
          WdLogGlobalForLineNumber = 7763;
        }
        v143 = 0;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v142 + 23) )
          DXGADAPTER::ReleaseCoreResource(v142, v144);
        v144 = 0LL;
        v136 = 0;
        v57 = *((_QWORD *)v13 + 8);
        v111 = 60;
        v104 = *(_BYTE *)(v57 + 138) != 0;
        v58 = 4024LL * v108;
        for ( i = v58; ; v58 = i )
        {
          v59 = *(_QWORD *)(v18 + 3160);
          v60 = *(_QWORD *)(v59 + 16);
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v60 + 184)
            || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v60 + 168)) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7588;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"!IsCoreResourceSharedOwner()",
              7588LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          memset(Object, 0, sizeof(Object));
          v36 = v112;
          if ( v112 )
          {
            if ( !Src )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 7598;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid object array in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x",
                -1073741811LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v40 = v112;
              v41 = -1073741811;
              goto LABEL_82;
            }
            memmove(Object, Src, 8LL * (unsigned int)v112);
            v36 = v112;
          }
          v37 = *(_QWORD *)(v59 + 128);
          v38 = v36 + 1;
          Object[v36] = *(PVOID *)(v37 + v58 + 904);
          if ( (unsigned int)(v36 + 1) > 0x40 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7618;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Count <= _countof(Objects)",
              7618LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v39 = KeWaitForMultipleObjects(v38, Object, WaitAny, UserRequest, 0, 0, Timeout, &WaitBlockArray);
          v40 = v112;
          v41 = v39;
          if ( v39 >= 0 && v39 <= v112 || v39 == 258 )
            v113 = v39;
LABEL_82:
          v42 = *(_QWORD *)(v18 + 3160);
          v43 = (unsigned int)--v111;
          v44 = *(_QWORD *)(v42 + 128);
          v45 = *(_BYTE *)(v44 + i + 944);
          v103[4] = v45;
          if ( v41 != v40 || v104 || v45 )
          {
            if ( (_DWORD)v43 )
              goto LABEL_86;
LABEL_224:
            if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v18 + 5032)) < 2 )
            {
              i = 1LL;
              LiveDumpWithWdLogs2 = DxgCreateLiveDumpWithWdLogs2(403LL, 2073LL, 0LL, 0LL, 0LL, 1LL);
              LODWORD(v115) = *(_DWORD *)(v18 + 412);
              v44 = *(unsigned int *)(v18 + 416);
              HIDWORD(v115) = *(_DWORD *)(v18 + 416);
              if ( (unsigned int)dword_140166660 > 5 )
              {
                v43 = 0x400000400000LL;
                if ( (qword_140166670 & 0x400000400000LL) != 0
                  && (qword_140166678 & 0x400000400000LL) == qword_140166678 )
                {
                  LOBYTE(v44) = 1;
                  v116 = *(unsigned __int8 *)(v18 + 209);
                  IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v44);
                  v118 = *(_DWORD *)(v18 + 3256);
                  v119 = *(unsigned __int8 *)(v18 + 3093);
                  v120 = LiveDumpWithWdLogs2;
                  LOWORD(v111) = *(_WORD *)(v18 + 3044);
                  v127 = *(_QWORD *)(v18 + 2048);
                  v125[0] = *(void **)(v18 + 2040);
                  v121 = *(_DWORD *)(v18 + 436);
                  v122 = *(_DWORD *)(v18 + 432);
                  LODWORD(Timeout) = *(_DWORD *)(v18 + 428);
                  LODWORD(Src) = *(_DWORD *)(v18 + 424);
                  LODWORD(i) = *(_DWORD *)(v18 + 420);
                  v126[0] = v115;
                  LOWORD(v112) = 1;
                  v109 = (struct DXGADAPTER *)0x1000000;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    v74,
                    (__int64)&unk_1401418F9,
                    v75,
                    v76,
                    (__int64)&v112,
                    (__int64)&v109,
                    (__int64)v126,
                    (__int64)&i,
                    (__int64)&Src,
                    (__int64)&Timeout,
                    (__int64)&v122,
                    (__int64)&v121,
                    v125,
                    (__int64)&v127,
                    (__int64)&v111,
                    (__int64)&v120,
                    (__int64)&v119,
                    (__int64)&v118,
                    (__int64)&IsDebuggerPresent,
                    (__int64)&v116);
                }
              }
            }
LABEL_86:
            v46 = v108;
            if ( v105 )
            {
              v47 = 0LL;
              if ( (*((_DWORD *)v27 + 754) & 0x10) != 0 )
                v47 = v108;
              if ( (unsigned int)v47 < 0x10 )
              {
                if ( _InterlockedDecrement((volatile signed __int32 *)v27 + v47 + 798) < 0 )
                {
                  WdLogSingleEntry5(0LL, 275LL, 37LL, v27, *((unsigned int *)v27 + v47 + 798), 0LL);
                  WdLogGlobalForLineNumber = 2783;
                }
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
                  McTemplateK0pqq_EtwWriteTransfer(v44, (__int64)&VSyncWaiterChange);
                v46 = v108;
              }
            }
            if ( !v106 )
            {
              if ( !v107 )
                goto LABEL_97;
              v41 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v135, 0LL);
              if ( v41 < 0 )
              {
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v135);
                if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
                DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
                DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v103);
                return (unsigned int)v41;
              }
              if ( *(_DWORD *)(v8 + 608) == 1 )
              {
                v63 = VIDSCH_EXPORT::VidSchControlVSyncDevice(
                        *(_QWORD *)(*((_QWORD *)v27 + 396) + 736LL),
                        *(_QWORD *)(v8 + 800),
                        0LL,
                        0,
                        v46);
LABEL_162:
                v41 = v63;
              }
LABEL_97:
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0tt_EtwWriteTransfer(v44, (__int64)&WaitForVerticalBlankEventInternal);
              if ( v41 >= 0 && (v48 = v113) != 0 )
              {
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v135);
                if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
                DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
                DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v103);
                return v48;
              }
              else
              {
                if ( v136 )
                {
                  if ( v138 != v142 )
                  {
                    if ( !v139 )
                    {
                      WdLogSingleEntry5(0LL, 275LL, 4LL, v137, 0LL, 0LL);
                      WdLogGlobalForLineNumber = 7763;
                    }
                    v139 = 0;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v138 + 23) )
                      DXGADAPTER::ReleaseCoreResource(v138, v140);
                    v140 = 0LL;
                  }
                  if ( !v143 )
                  {
                    WdLogSingleEntry5(0LL, 275LL, 4LL, v141, 0LL, 0LL);
                    WdLogGlobalForLineNumber = 7763;
                  }
                  v143 = 0;
                  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v142 + 23) )
                    DXGADAPTER::ReleaseCoreResource(v142, v144);
                  v144 = 0LL;
                  v136 = 0;
                }
                COREACCESS::~COREACCESS((COREACCESS *)v141, v43);
                COREACCESS::~COREACCESS((COREACCESS *)v137, v49);
                if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
                DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
                KeLeaveCriticalRegion();
                return (unsigned int)v41;
              }
            }
            if ( v143 )
            {
              WdLogSingleEntry5(0LL, 275LL, 4LL, v141, 0LL, 0LL);
              WdLogGlobalForLineNumber = 7648;
            }
            v61 = v142;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v142 + 23) )
            {
              if ( !KeReadStateEvent((PRKEVENT)v142 + 2) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v62, (__int64)"g");
                KeWaitForSingleObject((char *)v142 + 48, Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(v142, 0LL);
              v61 = v142;
            }
            v144 = 0LL;
            v143 = 1;
            if ( *((_DWORD *)v61 + 50) == 1 )
            {
              if ( v138 == v142 || (COREACCESS::AcquireShared((COREACCESS *)v137, 0LL), *((_DWORD *)v138 + 50) == 1) )
              {
                v136 = 1;
                v63 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(
                        *(_QWORD *)(*((_QWORD *)v27 + 396) + 736LL),
                        *(_QWORD *)(*((_QWORD *)v27 + 396) + 744LL),
                        1LL,
                        0,
                        v46);
                goto LABEL_162;
              }
              COREACCESS::Release((COREACCESS *)v137);
            }
            COREACCESS::Release((COREACCESS *)v141);
            if ( v136 )
            {
              if ( v138 != v142 )
              {
                if ( !v139 )
                {
                  WdLogSingleEntry5(0LL, 275LL, 4LL, v137, 0LL, 0LL);
                  WdLogGlobalForLineNumber = 7763;
                }
                v139 = 0;
                if ( KeGetCurrentThread() != *((struct _KTHREAD **)v138 + 23) )
                  DXGADAPTER::ReleaseCoreResource(v138, v140);
                v140 = 0LL;
              }
              if ( !v143 )
              {
                WdLogSingleEntry5(0LL, 275LL, 4LL, v141, 0LL, 0LL);
                WdLogGlobalForLineNumber = 7763;
              }
              v143 = 0;
              if ( KeGetCurrentThread() != *((struct _KTHREAD **)v142 + 23) )
                DXGADAPTER::ReleaseCoreResource(v142, v144);
              v144 = 0LL;
              v136 = 0;
            }
            COREACCESS::~COREACCESS((COREACCESS *)v141, v82);
            COREACCESS::~COREACCESS((COREACCESS *)v137, v83);
            if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
LABEL_180:
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
            KeLeaveCriticalRegion();
            return 3221226166LL;
          }
          if ( !(_DWORD)v43 )
            goto LABEL_224;
        }
      }
      if ( (struct DXGADAPTER *)v18 != v27 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7638;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter == pRenderAdapter",
          7638LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v52 = 0LL;
      if ( (*((_DWORD *)v27 + 754) & 0x10) != 0 )
        v52 = v108;
      if ( (unsigned int)v52 < 0x10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v27 + v52 + 798);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          McTemplateK0pqq_EtwWriteTransfer(v52, (__int64)&VSyncWaiterChange);
      }
      v53 = *((_QWORD *)v27 + 396);
      v105 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v53 + 736) + 8LL) + 568LL))(
             *(_QWORD *)(v53 + 744),
             v108) )
      {
LABEL_136:
        v54 = *((_QWORD *)v27 + 396);
        v55 = *((_QWORD *)v13 + 8);
        v56 = *(_QWORD *)(v54 + 736);
        if ( v55 && *(_QWORD *)(v55 + 8LL * (unsigned int)(*(_DWORD *)v56 - 1) + 16) )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v56 + 8) + 1088LL))(*(_QWORD *)(v54 + 744));
        goto LABEL_139;
      }
      v97 = *((_QWORD *)v27 + 396);
      v98 = *(_QWORD *)(v97 + 736);
      if ( !v8 )
      {
        if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter(v98, *(_QWORD *)(v97 + 744), 1LL, 1, v108) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v27, v108);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v135);
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v115);
          DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v125, v101);
          DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v103);
          return 3223191558LL;
        }
        v106 = 1;
        goto LABEL_136;
      }
      if ( (int)VIDSCH_EXPORT::VidSchControlVSyncDevice(v98, *(_QWORD *)(v8 + 800), 0LL, 1, v108) >= 0 )
      {
        v107 = 1;
        goto LABEL_136;
      }
      DXGADAPTER::DecrementVSyncWaiter(v27, v108);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v135);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
LABEL_305:
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
      DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v103);
      return 3223191558LL;
    }
    WdLogSingleEntry2(3LL, v108, -1073741811LL);
    WdLogGlobalForLineNumber = 7597;
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v128);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v135);
    if ( v8 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v103);
    return 3221225485LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, v18, v7);
    WdLogGlobalForLineNumber = 7569;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v8 + 16), (struct DXGDEVICE *)v8);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    KeLeaveCriticalRegion();
    return -1073741811LL;
  }
}
