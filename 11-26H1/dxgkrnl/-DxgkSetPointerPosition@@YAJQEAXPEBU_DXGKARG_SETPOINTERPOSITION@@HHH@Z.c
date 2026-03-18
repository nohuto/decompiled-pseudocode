/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1402C7800
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1402C7790 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1403E7A10 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402A4718 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B0730 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1402C7ED4 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        DXGADAPTER *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        int a3,
        int a4,
        int a5)
{
  __int64 VidPnSourceId; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGSESSIONDATA *SessionData; // r14
  int v20; // esi
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // r15
  _QWORD *i; // rax
  _QWORD *v25; // rdx
  _QWORD *j; // rax
  _QWORD *v27; // rcx
  struct SESSION_VIEW *v28; // rsi
  _QWORD *v29; // rbx
  _QWORD *v30; // r14
  struct DISPLAY_SOURCE *v31; // rbx
  int v32; // ebx
  __int64 v33; // rcx
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  bool v38; // zf
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // eax
  __int64 v51; // rcx
  _QWORD *v52; // rcx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  int v54; // [rsp+50h] [rbp-30h] BYREF
  __int64 v55; // [rsp+58h] [rbp-28h]
  char v56; // [rsp+60h] [rbp-20h]

  v54 = -1;
  v55 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v56 = 1;
    v54 = 3011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v54, 3011);
  if ( !a2 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v51, (__int64)&EventProfilerExit);
    return (unsigned int)-1073741811;
  }
  if ( !a3 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    if ( !this )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8820;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 8820LL, 0LL, 0LL, 0LL, 0LL);
    }
    v9 = *((_QWORD *)this + 395);
    if ( v9 )
    {
      if ( (unsigned int)VidPnSourceId < *(_DWORD *)(v9 + 96) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)this + 3);
        if ( !*((_QWORD *)this + 395) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2047;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
            2047LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v10 = *(_QWORD *)((char *)this + 412);
        DXGADAPTER::ReleaseReference(this);
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global, v12, v13, v14);
        if ( !SessionData )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15, v17, v18);
          v20 = -1073741811;
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          WdLogGlobalForLineNumber = 2061;
          v50 = PsGetCurrentProcessSessionId(v47, v46, v48, v49);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
            v50,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
          if ( !v56 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
            return (unsigned int)v20;
LABEL_66:
          McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit);
          return (unsigned int)v20;
        }
        v20 = DxgkAcquireSessionModeChangeLock(0);
        v23 = v20 >= 0;
        if ( v20 >= 0 )
        {
          for ( i = (_QWORD *)*((_QWORD *)SessionData + 2323); ; i = (_QWORD *)*i )
          {
            if ( i == (_QWORD *)((char *)SessionData + 18584) )
              goto LABEL_57;
            if ( *(i - 3) == v10 )
              break;
          }
          v25 = i + 10;
          for ( j = (_QWORD *)i[10]; j != v25; j = (_QWORD *)*j )
          {
            v27 = j - 4;
            if ( *((_DWORD *)j - 4) == a2->VidPnSourceId )
              goto LABEL_21;
          }
          v27 = 0LL;
LABEL_21:
          if ( v27 )
          {
            v28 = (struct SESSION_VIEW *)v27[6];
            if ( v28 )
            {
              if ( *(struct DXGSESSIONDATA **)v28 != SessionData )
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
              v29 = (_QWORD *)*((_QWORD *)v28 + 6);
              v30 = (_QWORD *)((char *)v28 + 48);
              if ( v29 == (_QWORD *)((char *)v28 + 48) )
                v31 = 0LL;
              else
                v31 = (struct DISPLAY_SOURCE *)(v29 - 7);
              if ( a5 )
              {
                while ( v31 )
                {
                  if ( *((_DWORD *)v31 + 4) == a2->VidPnSourceId
                    && this == *(DXGADAPTER **)(*((_QWORD *)v31 + 1) + 16LL) )
                  {
                    v32 = SetPointerPositionForDisplaySource(v31, v28, a2, a4, a5);
                    if ( v32 >= 0 )
                      break;
                    if ( v23 )
                      DxgkReleaseSessionModeChangeLock();
                    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
                    if ( v56 )
                    {
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                        McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit);
                    }
                    return (unsigned int)v32;
                  }
                  v52 = (_QWORD *)*((_QWORD *)v31 + 7);
                  v31 = 0LL;
                  if ( v52 != v30 )
                    v31 = (struct DISPLAY_SOURCE *)(v52 - 7);
                }
              }
              else
              {
                while ( v31 )
                {
                  if ( (int)SetPointerPositionForDisplaySource(v31, v28, a2, a4, 0) < 0 )
                    break;
                  v35 = (_QWORD *)*((_QWORD *)v31 + 7);
                  v31 = 0LL;
                  if ( v35 != v30 )
                    v31 = (struct DISPLAY_SOURCE *)(v35 - 7);
                }
              }
              if ( v23 )
                DxgkReleaseSessionModeChangeLock();
              goto LABEL_45;
            }
          }
          else
          {
LABEL_57:
            WdLogSingleEntry4(3LL, a2->VidPnSourceId, SHIDWORD(v10), (unsigned int)v10, SessionData);
            WdLogGlobalForLineNumber = 4346;
          }
          v39 = PsGetCurrentProcessSessionId(v27, v25, v21, v22);
          v20 = -1073741811;
          WdLogSingleEntry5(2LL, a2->VidPnSourceId, SHIDWORD(v10), (unsigned int)v10, v39, -1073741811LL);
          WdLogGlobalForLineNumber = 2086;
          v44 = PsGetCurrentProcessSessionId(v41, v40, v42, v43);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x,"
                      " returning 0x%I64x.",
            a2->VidPnSourceId,
            SHIDWORD(v10),
            (unsigned int)v10,
            v44,
            -1073741811LL);
          goto LABEL_60;
        }
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 2072;
LABEL_60:
        if ( v23 )
          DxgkReleaseSessionModeChangeLock();
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
        v38 = v56 == 0;
LABEL_52:
        if ( v38 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
          return (unsigned int)v20;
        goto LABEL_66;
      }
      v20 = -1073741811;
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
    }
    else
    {
      WdLogSingleEntry2(4LL, this, -1073741637LL);
      WdLogGlobalForLineNumber = 8846;
      v20 = -1073741637;
    }
    WdLogSingleEntry3(4LL, this, a2->VidPnSourceId, v20);
    WdLogGlobalForLineNumber = 2041;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    v38 = v56 == 0;
    goto LABEL_52;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
LABEL_45:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit);
  return 0LL;
}
