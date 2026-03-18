/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x140338A90
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x140338918 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140039FEC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1400615D4 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x140340108 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x140340220 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x140347FD8 (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v7; // r13
  DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGSESSIONDATA *SessionData; // r15
  DXGPROCESS *Current; // rax
  __int64 v19; // rdi
  SESSION_VIEW *SessionViewFromSource; // r15
  unsigned __int16 v21; // di
  unsigned __int16 v22; // si
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v24; // r13
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // r15
  __int64 v28; // rax
  VIDPN_MGR *v29; // r13
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v31; // r12
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int16 v35; // di
  __int64 v37; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  const wchar_t *v39; // rbx
  _QWORD *v40; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // eax
  const wchar_t *v47; // r9
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // [rsp+20h] [rbp-E0h]
  __int64 psz; // [rsp+28h] [rbp-D8h]
  unsigned __int16 *v52; // [rsp+30h] [rbp-D0h]
  __int64 LowPart; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v54; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v55[3]; // [rsp+54h] [rbp-ACh] BYREF
  struct DISPLAY_SOURCE *v56; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v57; // [rsp+68h] [rbp-98h]
  unsigned int v58[2]; // [rsp+70h] [rbp-90h] BYREF
  STRSAFE_PCNZWCH v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  _BYTE v62[144]; // [rsp+90h] [rbp-70h] BYREF

  v61 = a3;
  LODWORD(v4) = 0;
  v5 = (unsigned int)a2;
  v7 = a3;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v10, v11, v12);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 213;
    v46 = PsGetCurrentProcessSessionId(v43, v42, v44, v45);
    v47 = L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.";
    LowPart = 0LL;
    psz = -1073741811LL;
    v50 = v46;
LABEL_40:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v47, v50, psz, LowPart, 0LL, 0LL);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v14);
  v19 = (__int64)Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 224;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get current DXGPROCESS",
      224LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 234;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkDisplayOnOff is not called from console session (Current DXGPROCESS 0x%I64x).",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225506LL;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, this, v5);
  if ( !SessionViewFromSource )
  {
    WdLogSingleEntry3(2LL, v5, this->HighPart, this->LowPart);
    v47 = L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.";
    LowPart = this->LowPart;
    psz = this->HighPart;
    v50 = v5;
    WdLogGlobalForLineNumber = 250;
    goto LABEL_40;
  }
  if ( a4 )
    LOBYTE(a4->Length) = 0;
  if ( (*(_BYTE *)(v7 + 2) & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 261;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"io_MonitorId->MaximumLength % sizeof(WCHAR) == 0",
      261LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v21 = *(_WORD *)(v7 + 2) >> 1;
  v22 = v21;
  v59 = *(STRSAFE_PCNZWCH *)(v7 + 8);
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  v56 = PrimaryDisplaySource;
  if ( !PrimaryDisplaySource )
  {
LABEL_23:
    v35 = v21 - v22;
    *(_WORD *)v7 = 2 * v35;
    if ( !(2 * v35) )
    {
      LODWORD(v4) = -1073741637;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 415;
    }
    return (unsigned int)v4;
  }
  v24 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
  if ( !v24 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 276;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 276LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v24 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 277;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      277LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v25 = *(_QWORD *)(v24 + 412);
  *(_QWORD *)v58 = v25;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, (struct DXGADAPTER *const)v24, 0LL);
  v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62, 0LL);
  v27 = v26;
  if ( v26 < 0 )
  {
    WdLogSingleEntry3(2LL, v26, (int)v58[1], (unsigned int)v25);
    WdLogGlobalForLineNumber = 288;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed (0x%I64x) to acquire shared access for adapter LUID: 0x%I64x%08I64x",
      v27,
      (int)v58[1],
      (unsigned int)v25,
      0LL,
      0LL);
    goto LABEL_37;
  }
  if ( a4 )
    LOBYTE(a4->Length) = (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(*(ADAPTER_DISPLAY **)(v24 + 3160)) != 0;
  v57 = *((_DWORD *)v56 + 4);
  v28 = *(_QWORD *)(v24 + 3160);
  v29 = *(VIDPN_MGR **)(v28 + 104);
  if ( !v29 )
  {
    WdLogSingleEntry2(2LL, (int)v58[1], (unsigned int)v25);
    WdLogGlobalForLineNumber = 308;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Specified display adapter 0x%I64x%08I64x does not have a valid VidPN manager associated with it",
      (int)v58[1],
      (unsigned int)v25,
      0LL,
      0LL,
      0LL);
    LODWORD(v27) = -1071774923;
    goto LABEL_37;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v56, *(_QWORD *)(v28 + 104));
  *(_QWORD *)&v55[1] = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v29);
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v55[1], (__int64)ClientCommittedVidPnRef);
  if ( !*(_QWORD *)&v55[1] )
  {
    v48 = (int)v58[1];
    WdLogSingleEntry2(2LL, (int)v58[1], (unsigned int)v25);
    WdLogGlobalForLineNumber = 325;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Client VidPN is not set on adapter 0x%I64x%08I64x (i.e. no user initiated mode changes took place yet)",
      v48,
      (unsigned int)v25,
      0LL,
      0LL,
      0LL);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v55[1], 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v56 + 5);
    LODWORD(v27) = -1071774884;
    goto LABEL_37;
  }
  v27 = *(_QWORD *)&v55[1] + 96LL;
  v31 = 0LL;
  v60 = *(_QWORD *)&v55[1] + 96LL;
  while ( 1 )
  {
    v55[0] = -1;
    v32 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)v27, v57, v31, v55);
    v4 = v32;
    if ( v32 < 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v33);
      v40[4] = v57;
      v40[3] = v31;
      v40[5] = v27;
      v40[6] = v4;
      WdLogGlobalForLineNumber = 349;
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v55[1], 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)v56 + 5);
      LODWORD(v27) = v4;
      goto LABEL_37;
    }
    if ( v55[0] == -1 )
    {
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v55[1], 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)v56 + 5);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
      v7 = v61;
      goto LABEL_23;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v29 + 15) + 72LL));
    v37 = *((_QWORD *)v29 + 15);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v37, v55[0]);
    if ( TargetById && *((_DWORD *)TargetById + 23) )
    {
      if ( v37 )
        ReferenceCounted::Release((ReferenceCounted *)(v37 + 64));
      goto LABEL_32;
    }
    if ( v37 )
      ReferenceCounted::Release((ReferenceCounted *)(v37 + 64));
    v39 = v59;
    v54 = 0;
    if ( v22 )
    {
      if ( v22 != v21 )
        break;
    }
LABEL_30:
    LODWORD(v27) = DpiPersistence::AppendMonitorId(
                     (DpiPersistence *)v55[0],
                     (unsigned int)v58,
                     (const struct _LUID *)v29,
                     (struct VIDPN_MGR *)v22,
                     (unsigned __int16)&v54,
                     v39,
                     v52);
    if ( (int)v27 < 0 )
      goto LABEL_52;
    v22 -= v54;
    v27 = v60;
    v59 = &v39[v54];
LABEL_32:
    ++v31;
  }
  v49 = RtlStringCchCopyW((char *)v59, v22, (char *)L"^");
  LODWORD(v27) = v49;
  if ( v49 != -2147483643 )
  {
    if ( v49 < 0 )
      goto LABEL_52;
    --v22;
    ++v39;
    goto LABEL_30;
  }
  LODWORD(v27) = -1073741789;
LABEL_52:
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v55[1], 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)v56 + 5);
LABEL_37:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
  return (unsigned int)v27;
}
