/*
 * XREFs of ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402CB1B0
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402EBEC0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     _DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14004C03C (_DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79___ @ 0x140052F78 (DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79___.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140058AF8 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     _lambda_21eb3c429198df5c8698fb68fbe0024f_::operator() @ 0x1402CC48C (_lambda_21eb3c429198df5c8698fb68fbe0024f_--operator().c)
 *     ?MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@@Z @ 0x1402FED38 (-MonitorGetAdvancedColorMetadataOverride@@YAJPEAUHDXGMONITOR__@@PEAU_D3DDDI_HDR_METADATA_HDR10@@.c)
 */

__int64 __fastcall AllocateAndPopulateHDRMetadataFromDisplay(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        unsigned __int8 **a2,
        enum _D3DDDI_HDR_METADATA_TYPE *a3,
        unsigned int *a4)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // r14
  struct DXGPROCESS *v8; // rsi
  struct DXGPROCESS *v9; // rdi
  D3DKMT_HANDLE v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // eax
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 VidPnSourceId; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rdi
  struct HDXGMONITOR__ *v32; // rsi
  __int64 i; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rcx
  struct HDXGMONITOR__ *v40; // rbx
  struct _ERESOURCE *v41; // rcx
  char v42; // bl
  int v44; // ebx
  __int64 v45; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct _D3DDDI_HDR_METADATA_HDR10 *v49; // rax
  __int64 v50; // rcx
  unsigned __int8 *v51; // rbx
  int AdvancedColorMetadataOverride; // eax
  __int64 v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int128 v58; // [rsp+58h] [rbp-69h] BYREF
  char *v59; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v60[2]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v61; // [rsp+80h] [rbp-41h] BYREF
  struct HDXGMONITOR__ *v62; // [rsp+88h] [rbp-39h] BYREF
  __int64 v63; // [rsp+90h] [rbp-31h] BYREF
  char v64; // [rsp+98h] [rbp-29h]
  _BYTE v65[8]; // [rsp+A0h] [rbp-21h] BYREF
  _BYTE v66[16]; // [rsp+A8h] [rbp-19h] BYREF
  char v67; // [rsp+B8h] [rbp-9h]
  _QWORD v68[2]; // [rsp+C0h] [rbp-1h] BYREF
  char v69; // [rsp+D0h] [rbp+Fh]
  unsigned __int64 retaddr; // [rsp+120h] [rbp+5Fh]
  struct _D3DDDI_HDR_METADATA_HDR10 *v71; // [rsp+128h] [rbp+67h] BYREF
  unsigned __int8 **v72; // [rsp+130h] [rbp+6Fh]
  enum _D3DDDI_HDR_METADATA_TYPE *v73; // [rsp+138h] [rbp+77h]
  unsigned int *v74; // [rsp+140h] [rbp+7Fh]

  v74 = a4;
  v73 = a3;
  v72 = a2;
  if ( !a1 || !a2 || !a3 || !a4 )
    return -1073741811LL;
  v61 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = 2LL;
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v9 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v9 )
        goto LABEL_8;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v9 )
        goto LABEL_8;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3080;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 3080LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v9 = v8;
LABEL_8:
  v10 = *a1->pContextList;
  if ( v9 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v9 + 32) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v9 + 248, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((struct DXGPROCESS *)((char *)v9 + 248), v11, v12);
    ExAcquirePushLockSharedEx((char *)v9 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v9 + 66);
  v13 = (v10 >> 6) & 0xFFFFFF;
  if ( v13 < *((_DWORD *)v9 + 74) )
  {
    v14 = *(_DWORD *)(*((_QWORD *)v9 + 35) + 16LL * v13 + 8);
    if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v9 + 35) + 16LL * v13 + 8) & 0x60)
      && (v14 & 0x2000) == 0
      && (v14 & 0x1F) != 0 )
    {
      v15 = *((_QWORD *)v9 + 35);
      if ( (*(_BYTE *)(v15 + 16LL * v13 + 8) & 0x1F) == 7 )
      {
        v16 = *(_QWORD *)(v15 + 16LL * v13);
        goto LABEL_19;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v16 = 0LL;
LABEL_19:
  v63 = v16;
  v64 = 0;
  if ( v16 )
  {
    _m_prefetchw((const void *)(v16 + 32));
    v17 = *(_QWORD *)(v16 + 32);
    while ( v17 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 32), v17 + 1, v17);
      if ( v18 == v17 )
        goto LABEL_25;
    }
    v16 = 0LL;
    v63 = 0LL;
  }
LABEL_25:
  v61 = v16;
  _InterlockedDecrement((volatile signed __int32 *)v9 + 66);
  ExReleasePushLockSharedEx((char *)v9 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v61 )
    goto LABEL_59;
  v19 = *(_QWORD *)(v61 + 16);
  if ( !v19 )
    goto LABEL_59;
  v20 = *(_QWORD *)(v19 + 1896);
  if ( !v20 )
    goto LABEL_59;
  v21 = *(_QWORD *)(v20 + 3160);
  VidPnSourceId = a1->VidPnSourceId;
  if ( *(_DWORD *)(v21 + 96) <= (unsigned int)VidPnSourceId
    || !*(_BYTE *)(4024 * VidPnSourceId + *(_QWORD *)(v21 + 128) + 760) )
  {
    goto LABEL_59;
  }
  v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 16) + 16LL) + 16LL);
  v68[1] = v23;
  _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
  v68[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v23 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v23 + 152));
  v69 = 1;
  v24 = 4024LL * a1->VidPnSourceId;
  v25 = *(_QWORD *)(*(_QWORD *)(v61 + 16) + 1896LL);
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 3160) + 128LL);
  v27 = *(unsigned int *)(v24 + v26 + 1072);
  v28 = WdLogNewEntry5_WdTrace(v26, v24);
  v30 = (unsigned int)v27;
  *(_QWORD *)(v28 + 24) = v27;
  *(_QWORD *)(v28 + 32) = v25;
  WdLogGlobalForLineNumber = 2340;
  if ( !v25 || (_DWORD)v27 == -1 )
    goto LABEL_71;
  v62 = 0LL;
  if ( !*(_QWORD *)(v25 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2361;
  }
  v31 = *(_QWORD *)(*(_QWORD *)(v25 + 3160) + 112LL);
  if ( !v31 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2371;
LABEL_71:
    v44 = -1073741811;
    goto LABEL_65;
  }
  *((_QWORD *)&v58 + 1) = 0LL;
  *(_QWORD *)&v58 = AllocateAndPopulateHDRMetadataFromDisplay;
  v32 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v58);
  v59 = (char *)retaddr;
  v60[0] = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v59);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v65, (struct DXGFASTMUTEX *)(v31 + 104));
  for ( i = *(_QWORD *)(v31 + 40); ; i = *(_QWORD *)(v34 + 152) )
  {
    if ( i == v31 + 40 )
    {
      v34 = 0LL;
    }
    else
    {
      v34 = i - 152;
      if ( !i )
        v34 = 0LL;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v59);
    v60[0] = v34;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v59);
    v36 = 0LL;
    if ( !v34 )
      break;
    if ( *(_DWORD *)(v34 + 180) == (_DWORD)v30 )
    {
      if ( *(_DWORD *)(v34 + 280) != 1 )
      {
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v59);
        v34 = *(_QWORD *)(v34 + 296);
        v59 = (char *)retaddr;
        v60[0] = v34;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v59);
      }
      if ( v34 )
      {
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v58);
        *((_QWORD *)&v58 + 1) = v34;
        v32 = (struct HDXGMONITOR__ *)v34;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v58);
        v37 = 0;
        goto LABEL_45;
      }
      break;
    }
  }
  v38 = WdLogNewEntry5_WdTrace(v36, v35);
  v37 = -1073741275;
  *(_QWORD *)(v38 + 24) = v30;
  *(_QWORD *)(v38 + 32) = v31;
  WdLogGlobalForLineNumber = 2734;
LABEL_45:
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v65);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v59);
  if ( v37 == -1073741275 )
  {
    WdLogSingleEntry2(7LL, v30, v31);
    WdLogGlobalForLineNumber = 2386;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v58);
    v44 = -1073741275;
LABEL_65:
    v45 = PsGetCurrentProcess(v29);
    WdLogSingleEntry2(3LL, v44, v45);
    WdLogGlobalForLineNumber = 2369;
    _InterlockedDecrement((volatile signed __int32 *)(v23 + 152));
    ExReleasePushLockSharedEx(v23 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v23);
LABEL_66:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v63);
    return (unsigned int)v44;
  }
  if ( !v32 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2398;
  }
  *((_QWORD *)&v58 + 1) = 0LL;
  if ( !v32 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 661;
  }
  v62 = v32;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v58);
  *(_QWORD *)&v58 = &v61;
  *((_QWORD *)&v58 + 1) = &v62;
  DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79_((__int64)v66, &v58);
  v40 = v62;
  if ( !v62 )
  {
    v56 = PsGetCurrentProcess(v39);
    v44 = -1073741811;
    WdLogSingleEntry2(3LL, -1073741811LL, v56);
    WdLogGlobalForLineNumber = 2391;
    if ( v67 )
      lambda_21eb3c429198df5c8698fb68fbe0024f_::operator()(v66);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
    goto LABEL_66;
  }
  v58 = retaddr;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v58);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v58);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v58);
  *((_QWORD *)&v58 + 1) = v40;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v58);
  v59 = (char *)v40;
  MonitorResourceLock::AcquireShared((PERESOURCE)((char *)v40 + 40));
  v60[0] = retaddr;
  do
  {
    v60[1] = v40;
    --v7;
  }
  while ( v7 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v60);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v58);
  v41 = (struct _ERESOURCE *)((char *)v40 + 40);
  v42 = *(_BYTE *)(*((_QWORD *)v40 + 28) + 516LL);
  ExReleaseResourceLite(v41);
  KeLeaveCriticalRegion();
  v59 = 0LL;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v60);
  if ( v59 )
  {
    ExReleaseResourceLite((PERESOURCE)(v59 + 40));
    KeLeaveCriticalRegion();
  }
  if ( !v42 )
    goto LABEL_56;
  v49 = (struct _D3DDDI_HDR_METADATA_HDR10 *)operator new[](0x1CuLL, 0x4B677844u, 256LL);
  v71 = v49;
  v51 = (unsigned __int8 *)v49;
  if ( v49 )
  {
    AdvancedColorMetadataOverride = MonitorGetAdvancedColorMetadataOverride(v62, v49);
    v54 = AdvancedColorMetadataOverride;
    if ( AdvancedColorMetadataOverride >= 0 )
    {
      *v73 = D3DDDI_HDR_METADATA_TYPE_HDR10;
      *v74 = 28;
      *v72 = v51;
LABEL_56:
      if ( v67 )
        lambda_21eb3c429198df5c8698fb68fbe0024f_::operator()(v66);
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 152));
      ExReleasePushLockSharedEx(v23 + 136, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v23);
LABEL_59:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v63);
      return 0LL;
    }
    v57 = PsGetCurrentProcess(v53);
    WdLogSingleEntry2(3LL, v54, v57);
    WdLogGlobalForLineNumber = 2416;
  }
  else
  {
    v55 = PsGetCurrentProcess(v50);
    LODWORD(v54) = -1073741801;
    WdLogSingleEntry2(3LL, -1073741801LL, v55);
    WdLogGlobalForLineNumber = 2404;
  }
  DXGKCALLONEXIT__lambda_21eb3c429198df5c8698fb68fbe0024f____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v66);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v63);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v71);
  return (unsigned int)v54;
}
