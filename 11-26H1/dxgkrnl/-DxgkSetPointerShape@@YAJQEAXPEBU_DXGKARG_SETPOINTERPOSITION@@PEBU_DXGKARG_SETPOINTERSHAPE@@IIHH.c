/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1402CE01C
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1402CE9E0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x14040CCE0 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1401EF3DC (OutputDuplProcessRemoteSessionSetPointerShape.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402CED44 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x140340220 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        char *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8)
{
  int v12; // r12d
  int v13; // edi
  __int64 VidPnSourceId; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v19; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGSESSIONDATA *SessionData; // r13
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rdx
  _QWORD *i; // rcx
  _QWORD *v33; // rax
  int v34; // edi
  _QWORD *v35; // rcx
  _QWORD *j; // rax
  _QWORD *v37; // r14
  struct SESSION_VIEW *v38; // r14
  _QWORD *v39; // rdi
  struct DISPLAY_SOURCE *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // eax
  __int64 v49; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // eax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  __int64 v57; // r13
  __int64 v58; // r12
  ADAPTER_DISPLAY **v59; // rdi
  int v60; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rdi
  _QWORD *v64; // rcx
  __int64 Value; // [rsp+20h] [rbp-E0h]
  int v66; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+58h] [rbp-A8h]
  char v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+68h] [rbp-98h]
  unsigned int v70; // [rsp+6Ch] [rbp-94h]
  BOOL v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h]
  struct _DXGKARG_SETPOINTERPOSITION *v73; // [rsp+80h] [rbp-80h]
  _QWORD v74[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v75; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v76[144]; // [rsp+B0h] [rbp-50h] BYREF

  v70 = a4;
  v73 = a2;
  v66 = -1;
  v67 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v68 = 1;
    v66 = 3012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v68 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v66, 3012);
  v12 = 0;
  v13 = -1073741811;
  v75 = 0LL;
  if ( !a3 || !a2 )
    goto LABEL_14;
  v75 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, a3, a4, a5);
LABEL_48:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
    if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit);
    return (unsigned int)v12;
  }
  if ( a3->Flags.Value >= 8 )
  {
    WdLogSingleEntry2(2LL, a3->Flags.Value, a1);
    Value = a3->Flags.Value;
    WdLogGlobalForLineNumber = 1436;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"invalid Flags specified: 0x%I64x DXGADAPTER=0x%I64x",
      Value,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
    goto LABEL_14;
  }
  VidPnSourceId = a3->VidPnSourceId;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8820;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 8820LL, 0LL, 0LL, 0LL, 0LL);
  }
  v15 = *((_QWORD *)a1 + 395);
  if ( !v15 )
  {
    v13 = -1073741637;
    WdLogSingleEntry2(4LL, a1, -1073741637LL);
    WdLogGlobalForLineNumber = 8846;
LABEL_13:
    WdLogSingleEntry3(4LL, a1, a3->VidPnSourceId, v13);
    WdLogGlobalForLineNumber = 1455;
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
    v17 = v68 == 0;
LABEL_15:
    if ( !v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    return (unsigned int)v13;
  }
  if ( (unsigned int)VidPnSourceId >= *(_DWORD *)(v15 + 96) )
  {
    WdLogSingleEntry2(2LL, VidPnSourceId, -1073741811LL);
    WdLogGlobalForLineNumber = 8833;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      VidPnSourceId,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_13;
  }
  _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
  if ( !*((_QWORD *)a1 + 395) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1461;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1461LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v19 = *(_QWORD *)(a1 + 412);
  v72 = v19;
  DXGADAPTER::ReleaseReference((DXGADAPTER *)a1);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v21, v22, v23);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v25, v24, v26, v27);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 1475;
    v55 = PsGetCurrentProcessSessionId(v52, v51, v53, v54);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v55,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
    v17 = v68 == 0;
    goto LABEL_15;
  }
  v12 = DxgkAcquireSessionModeChangeLock(0);
  v71 = v12 >= 0;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 1486;
    goto LABEL_48;
  }
  v31 = (_QWORD *)((char *)SessionData + 18584);
  for ( i = (_QWORD *)*((_QWORD *)SessionData + 2323); ; i = (_QWORD *)*i )
  {
    if ( i == v31 )
    {
      v34 = HIDWORD(v72);
LABEL_56:
      WdLogSingleEntry4(3LL, a3->VidPnSourceId, v34, (unsigned int)v19, SessionData);
      WdLogGlobalForLineNumber = 4346;
      goto LABEL_57;
    }
    v33 = i - 4;
    if ( *((_DWORD *)i - 6) == (_DWORD)v19 )
    {
      v34 = HIDWORD(v72);
      if ( *((_DWORD *)v33 + 3) == HIDWORD(v72) )
        break;
    }
  }
  if ( i == (_QWORD *)32 )
    goto LABEL_56;
  v35 = v33 + 14;
  for ( j = (_QWORD *)v33[14]; j != v35; j = (_QWORD *)*j )
  {
    v37 = j - 4;
    if ( *((_DWORD *)j - 4) == a3->VidPnSourceId )
      goto LABEL_32;
  }
  v37 = 0LL;
LABEL_32:
  if ( !v37 )
    goto LABEL_56;
  v38 = (struct SESSION_VIEW *)v37[6];
  if ( v38 && *(struct DXGSESSIONDATA **)v38 != SessionData )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4356;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pSessionView == NULL) || (&pSessionView->GetOwnedSession() == this)",
      4356LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v38 )
  {
    v39 = (_QWORD *)*((_QWORD *)v38 + 6);
    v74[0] = (char *)v38 + 48;
    if ( v39 == (_QWORD *)((char *)v38 + 48) )
      v40 = 0LL;
    else
      v40 = (struct DISPLAY_SOURCE *)(v39 - 7);
    if ( a8 )
    {
      v12 = -1073741823;
      v69 = -1073741823;
      while ( v40 )
      {
        if ( *((_DWORD *)v40 + 4) == a3->VidPnSourceId && a1 == *(char **)(*((_QWORD *)v40 + 1) + 16LL) )
        {
          v12 = SetPointerShapeForDisplaySource(v40, v73, a3, v38, a1, v70, a5, 0, a7 != 0, 1);
          v69 = v12;
LABEL_45:
          if ( v12 < 0 )
            break;
          goto LABEL_46;
        }
        v64 = (_QWORD *)*((_QWORD *)v40 + 7);
        v40 = 0LL;
        if ( v64 != (_QWORD *)((char *)v38 + 48) )
          v40 = (struct DISPLAY_SOURCE *)(v64 - 7);
      }
LABEL_66:
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v38);
      if ( PrimaryDisplaySource )
      {
        v57 = v74[0];
        v58 = SHIDWORD(v72);
        do
        {
          v59 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          if ( !v59 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1544;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1544LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( !v59[395] )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1545;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
              1545LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v76, (struct DXGADAPTER *const)v59, 0LL);
          v60 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v76, 0LL);
          if ( v60 < 0 )
          {
            v63 = v60;
            WdLogSingleEntry3(2LL, v58, (unsigned int)v19, v60);
            WdLogGlobalForLineNumber = 1578;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to aquire adapter access on adapter = 0x%I64x%08I64x , Status = 0x%I64x.",
              v58,
              (unsigned int)v19,
              v63,
              0LL,
              0LL);
          }
          else
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v74, (ADAPTER_DISPLAY *)((char *)v59[395] + 480), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v74);
            if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v59[395], *((_DWORD *)PrimaryDisplaySource + 4)) )
            {
              v61 = *((_DWORD *)PrimaryDisplaySource + 4);
              v75.Flags.Value &= ~1u;
              v75.VidPnSourceId = v61;
              *(_QWORD *)&v75.X = 0LL;
              ADAPTER_DISPLAY::DdiSetPointerPosition(v59[395], &v75);
            }
            *((_BYTE *)PrimaryDisplaySource + 766) = 0;
            *((_DWORD *)PrimaryDisplaySource + 949) = -1;
            *((_DWORD *)PrimaryDisplaySource + 950) = -1;
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v74);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v76);
          v62 = *((_QWORD *)PrimaryDisplaySource + 7);
          PrimaryDisplaySource = 0LL;
          if ( v62 != v57 )
            PrimaryDisplaySource = (struct DISPLAY_SOURCE *)(v62 - 56);
        }
        while ( PrimaryDisplaySource );
        v12 = v69;
      }
    }
    else if ( v40 )
    {
      while ( 1 )
      {
        v69 = SetPointerShapeForDisplaySource(v40, v73, a3, v38, a1, v70, a5, 0, a7 != 0, 0);
        v12 = v69;
        if ( v69 < 0 )
          goto LABEL_66;
        v41 = *((_QWORD *)v40 + 7);
        v40 = 0LL;
        if ( v41 != v74[0] )
          v40 = (struct DISPLAY_SOURCE *)(v41 - 56);
        if ( !v40 )
          goto LABEL_45;
      }
    }
LABEL_46:
    if ( v71 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_48;
  }
LABEL_57:
  v43 = PsGetCurrentProcessSessionId(v35, v31, v29, v30);
  WdLogSingleEntry5(2LL, a3->VidPnSourceId, v34, (unsigned int)v19, v43, -1071774937LL);
  WdLogGlobalForLineNumber = 1501;
  v48 = PsGetCurrentProcessSessionId(v45, v44, v46, v47);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, returning 0x%I64x.",
    a3->VidPnSourceId,
    v34,
    (unsigned int)v19,
    v48,
    -1071774937LL);
  if ( v71 )
    DxgkReleaseSessionModeChangeLock();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
  if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v49, (__int64)&EventProfilerExit);
  return 3223192359LL;
}
