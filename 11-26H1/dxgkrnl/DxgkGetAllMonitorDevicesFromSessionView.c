/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x14033F860
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x140257550 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000C890 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000D0FC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140320470 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x14032078C (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x140340108 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x140340220 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        unsigned int a2,
        bool *a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 v6; // r14
  unsigned int v7; // edi
  DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGSESSIONDATA *SessionData; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  unsigned int v25; // ecx
  __int64 v26; // rbx
  bool v27; // al
  __int64 v28; // rcx
  SESSION_VIEW *v29; // rdx
  bool v30; // cf
  __int64 result; // rax
  unsigned int CurrentProcessSessionId; // eax
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  int v48; // edx
  unsigned int v49; // edx
  MONITOR_MGR *v50; // r10
  int MonitorInstance; // eax
  __int64 v52; // rbx
  __int64 v53; // rax
  const wchar_t *v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdi
  bool v60; // al
  __int64 v61; // rcx
  struct DXGGLOBAL *v62; // rax
  unsigned int v63; // r8d
  DXGADAPTERSOURCEHASH *v64; // rcx
  __int64 v65; // rax
  int HashForAdapterAndSource; // eax
  DXGADAPTERSOURCEHASH *v67; // rcx
  unsigned int v68; // esi
  unsigned int v69; // edi
  char HashBitShift; // al
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v79; // [rsp+54h] [rbp-ACh]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v80; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTERSOURCEHASH *v81; // [rsp+60h] [rbp-A0h]
  unsigned int v82; // [rsp+68h] [rbp-98h]
  __int64 v83; // [rsp+70h] [rbp-90h]
  void *v84; // [rsp+78h] [rbp-88h] BYREF
  __int64 v85; // [rsp+80h] [rbp-80h]
  __int64 v86; // [rsp+88h] [rbp-78h]
  unsigned int *v87; // [rsp+90h] [rbp-70h]
  SESSION_VIEW *v88; // [rsp+98h] [rbp-68h]
  _BYTE v89[144]; // [rsp+A0h] [rbp-60h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  v6 = a2;
  v87 = a4;
  v7 = 0;
  v82 = a2;
  v83 = a5;
  v79 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v11, v12, v13);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15, v17, v18);
    v33 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 1270;
    v38 = PsGetCurrentProcessSessionId(v35, v34, v36, v37);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v38,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v33;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, a1, v6);
  v88 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v39 = PsGetCurrentProcessSessionId(v21, v20, v22, v23);
    WdLogSingleEntry4(4LL, v6, a1->HighPart, a1->LowPart, v39);
    *a3 = 1;
    result = 0LL;
    *a4 = 0;
    WdLogGlobalForLineNumber = 1293;
    return result;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1310;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplaySource != NULL", 1310LL, 0LL, 0LL, 0LL, 0LL);
  }
  v25 = v82;
  v26 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL);
  v27 = *((_DWORD *)PrimaryDisplaySource + 4) == v82 && *a1 == v26;
  *a3 = v27;
  while ( 1 )
  {
    if ( *((_DWORD *)PrimaryDisplaySource + 4) == v25 )
    {
      v28 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
      if ( a1->LowPart == *(_DWORD *)(v28 + 412) && a1->HighPart == *(_DWORD *)(v28 + 416) )
        goto LABEL_12;
    }
    v40 = *((_QWORD *)PrimaryDisplaySource + 1);
    v78 = 0;
    v80 = D3DKMDT_VOT_HD15;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v89, *(struct DXGADAPTER *const *)(v40 + 16), 0LL);
    v41 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v89, 0LL);
    v42 = *((_QWORD *)PrimaryDisplaySource + 1);
    if ( v41 < 0 )
    {
      WdLogSingleEntry3(
        4LL,
        *(int *)(*(_QWORD *)(v42 + 16) + 416LL),
        *(unsigned int *)(*(_QWORD *)(v42 + 16) + 412LL),
        v41);
      WdLogGlobalForLineNumber = 1348;
      goto LABEL_44;
    }
    if ( !*(_BYTE *)(v42 + 290) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1356;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplaySource->GetDisplayCore()->IsVirtualTopologyEnabled()",
        1356LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !v83 || v7 >= *v87 )
      goto LABEL_43;
    if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
                *(_QWORD **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                *((_DWORD *)PrimaryDisplaySource + 4),
                1LL,
                &v78) < 0
      || v78 != -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1374;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"NT_SUCCESS(DmmEnumClientVidPnPathTargetsFromSource( pDisplaySource->GetAdapter(), pDisplaySource->GetVi"
                  "dPnSourceId(), 1, &VidPnTargetId)) && (VidPnTargetId == D3DDDI_ID_UNINITIALIZED)",
        1374LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v43 = DmmEnumClientVidPnPathTargetsFromSource(
            *(_QWORD **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
            *((_DWORD *)PrimaryDisplaySource + 4),
            0LL,
            &v78);
    v33 = v43;
    if ( v43 < 0 )
    {
      v52 = v43;
      WdLogSingleEntry4(
        2LL,
        *((unsigned int *)PrimaryDisplaySource + 4),
        *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 416LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL),
        v43);
      v71 = *((_QWORD *)PrimaryDisplaySource + 1);
      v54 = L"Failed to get the attached target from VidPn source 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
      WdLogGlobalForLineNumber = 1386;
      v72 = *(_QWORD *)(v71 + 16);
      v56 = *(unsigned int *)(v72 + 412);
      v57 = *(int *)(v72 + 416);
      v58 = *((unsigned int *)PrimaryDisplaySource + 4);
      goto LABEL_38;
    }
    v45 = *((_QWORD *)PrimaryDisplaySource + 1);
    LODWORD(v81) = v78;
    if ( v78 == -1 )
      break;
    v46 = *(_QWORD *)(v45 + 16);
    v47 = WdLogNewEntry5_WdTrace(v78, v44);
    v48 = (int)v81;
    *(_QWORD *)(v47 + 24) = (unsigned int)v81;
    *(_QWORD *)(v47 + 32) = v46;
    WdLogGlobalForLineNumber = 2037;
    if ( !v46 || v48 == -1 )
      goto LABEL_56;
    if ( !*(_QWORD *)(v46 + 3160) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2059;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(v46 + 3160) + 112LL) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2069;
LABEL_56:
      v33 = -1073741811;
LABEL_37:
      v52 = v33;
      WdLogSingleEntry4(
        2LL,
        v78,
        *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 416LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL),
        v33);
      v53 = *((_QWORD *)PrimaryDisplaySource + 1);
      v54 = L"Failed to check monitor connection to target 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
      WdLogGlobalForLineNumber = 1416;
      v55 = *(_QWORD *)(v53 + 16);
      v56 = *(unsigned int *)(v55 + 412);
      v57 = *(int *)(v55 + 416);
      v58 = v78;
LABEL_38:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v54, v58, v57, v56, v52, 0LL);
      goto LABEL_39;
    }
    v84 = retaddr;
    v85 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v84);
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v50, v49, 1, (struct MONITOR_REF_ACCESSOR *)&v84);
    v33 = MonitorInstance;
    if ( MonitorInstance != -1073741275 )
    {
      if ( MonitorInstance < 0 )
      {
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v84);
        goto LABEL_37;
      }
      if ( !v85 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2090;
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v84);
      DmmGetVideoOutputTechnology(*(_QWORD **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL), v78, &v80, 0LL);
      v59 = 5LL * v79;
      v86 = v59;
      v60 = IsInternalVideoOutput(v80);
      v61 = v83;
      v80 = D3DKMDT_VOT_HD15;
      *(_BYTE *)(v83 + 4 * v59 + 16) = v60;
      *(_DWORD *)(v61 + 4 * v59) = 536870913;
      v62 = DXGGLOBAL::GetGlobal();
      v63 = *((_DWORD *)PrimaryDisplaySource + 4);
      v64 = (struct DXGGLOBAL *)((char *)v62 + 1400);
      v65 = *((_QWORD *)PrimaryDisplaySource + 1);
      v81 = v64;
      HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                  v64,
                                  (const struct _LUID *)(*(_QWORD *)(v65 + 16) + 412LL),
                                  v63,
                                  (unsigned int *)&v80);
      if ( HashForAdapterAndSource < 0 )
      {
        v73 = HashForAdapterAndSource;
        WdLogSingleEntry4(
          2LL,
          *((unsigned int *)PrimaryDisplaySource + 4),
          *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 416LL),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL),
          HashForAdapterAndSource);
        v74 = *((_QWORD *)PrimaryDisplaySource + 1);
        WdLogGlobalForLineNumber = 1457;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to find hash for VidPn source (0x%I64x) on adapter (0x%I64x%08I64x), status 0x%lx",
          *((unsigned int *)PrimaryDisplaySource + 4),
          *(int *)(*(_QWORD *)(v74 + 16) + 416LL),
          *(unsigned int *)(*(_QWORD *)(v74 + 16) + 412LL),
          v73,
          0LL);
        v75 = v83;
        v76 = v86;
        *(_QWORD *)(v83 + 4 * v86 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL);
        *(_DWORD *)(v75 + 4 * v76 + 4) = v78;
      }
      else
      {
        v67 = v81;
        v68 = v78;
        *(_QWORD *)(v83 + 4 * v59 + 8) = v26;
        v69 = ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v67);
        HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v81);
        *(_DWORD *)(v83 + 4 * v86 + 4) = (v69 & v68) + (v80 << HashBitShift);
      }
      v7 = v79;
LABEL_43:
      v79 = ++v7;
LABEL_44:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v89);
      goto LABEL_12;
    }
    if ( v85 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2083;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v84);
    WdLogSingleEntry4(
      4LL,
      v78,
      *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 416LL),
      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 412LL),
      0LL);
    WdLogGlobalForLineNumber = 1425;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v89);
    v7 = v79;
LABEL_12:
    v29 = (SESSION_VIEW *)*((_QWORD *)PrimaryDisplaySource + 7);
    PrimaryDisplaySource = 0LL;
    if ( v29 != (SESSION_VIEW *)((char *)v88 + 48) )
      PrimaryDisplaySource = (SESSION_VIEW *)((char *)v29 - 56);
    if ( !PrimaryDisplaySource )
    {
      v30 = *v87 < v7;
      *v87 = v7;
      return v30 ? 0x80000005 : 0;
    }
    v25 = v82;
  }
  v33 = -1073741811;
  WdLogSingleEntry4(
    2LL,
    *((unsigned int *)PrimaryDisplaySource + 4),
    *(int *)(*(_QWORD *)(v45 + 16) + 416LL),
    *(unsigned int *)(*(_QWORD *)(v45 + 16) + 412LL),
    -1073741811LL);
  v77 = *((_QWORD *)PrimaryDisplaySource + 1);
  WdLogGlobalForLineNumber = 1396;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Cannot find the attached target from VidPn source 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.",
    *((unsigned int *)PrimaryDisplaySource + 4),
    *(int *)(*(_QWORD *)(v77 + 16) + 416LL),
    *(unsigned int *)(*(_QWORD *)(v77 + 16) + 412LL),
    -1073741811LL,
    0LL);
LABEL_39:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v89);
  return (unsigned int)v33;
}
