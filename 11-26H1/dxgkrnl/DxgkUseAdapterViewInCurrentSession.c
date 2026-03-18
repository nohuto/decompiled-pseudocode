/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1403654B0
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x140257550 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x140364670 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1403653C0 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1403670C0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x14040B4CC (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1404227C8 (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  char v3; // bl
  __int64 v4; // r13
  DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdi
  bool v16; // r12
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // r14
  struct DXGADAPTER *v18; // rbx
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rax
  struct DISPLAY_SOURCE *v22; // rdx
  int v23; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v31; // rbx
  const wchar_t *v32; // r9
  int v33; // eax
  __int64 HighPart; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+20h] [rbp-E0h]
  __int64 v36; // [rsp+20h] [rbp-E0h]
  __int64 LowPart; // [rsp+28h] [rbp-D8h]
  __int64 v38; // [rsp+28h] [rbp-D8h]
  __int64 v39; // [rsp+28h] [rbp-D8h]
  __int64 v40; // [rsp+38h] [rbp-C8h]
  char v41; // [rsp+50h] [rbp-B0h]
  bool v43[6]; // [rsp+52h] [rbp-AEh] BYREF
  struct SESSION_ADAPTER *v44; // [rsp+58h] [rbp-A8h] BYREF
  DXGSESSIONDATA *SessionData; // [rsp+60h] [rbp-A0h]
  _BYTE v46[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = a3;
  v4 = a2;
  v44 = 0LL;
  v41 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v7, v8, v9);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v12, v13);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 522;
    v29 = PsGetCurrentProcessSessionId(v26, v25, v27, v28);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v29,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v14 = DxgkAcquireSessionModeChangeLock(1);
  v15 = v14;
  v16 = v14 >= 0;
  v43[0] = v14 >= 0;
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 536;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_24:
    if ( v16 )
      DxgkReleaseSessionModeChangeLock();
    return (unsigned int)v15;
  }
  if ( v3 )
  {
    LODWORD(v15) = DXGSESSIONDATA::AddAdapterToSession(SessionData, a1, 0LL, &v44);
    if ( (int)v15 >= 0 )
    {
      SessionAdapterFromLuid = v44;
      v41 = 1;
LABEL_5:
      if ( (_DWORD)v4 == -1 )
        goto LABEL_15;
      v18 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 2);
      if ( v18 )
      {
        if ( !*((_QWORD *)v18 + 395) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 591;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
            591LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v18, 0LL);
        v20 = COREADAPTERACCESS::AcquireExclusive((__int64)v46, (unsigned int)(v19 + 1));
        v15 = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v20);
          LowPart = a1->LowPart;
          HighPart = a1->HighPart;
          WdLogGlobalForLineNumber = 603;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire the lock shared on DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.",
            HighPart,
            LowPart,
            v15,
            0LL,
            0LL);
        }
        else
        {
          v21 = *((_QWORD *)v18 + 395);
          if ( (unsigned int)v4 >= *(_DWORD *)(v21 + 96) )
          {
            LODWORD(v15) = -1073741811;
            WdLogSingleEntry4(2LL, v4, a1->HighPart, a1->LowPart, -1073741811LL);
            v32 = L"The VidPnSourceId 0x%I64x caller specified does not exit on DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.";
            v40 = -1073741811LL;
            WdLogGlobalForLineNumber = 617;
          }
          else
          {
            v22 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v21 + 128) + 4024 * v4);
            if ( a3 )
            {
              v23 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v22);
              LODWORD(v15) = v23;
              if ( v23 >= 0 )
              {
                KeSetEvent(*(PRKEVENT *)(*((_QWORD *)v18 + 395) + 672LL), 0, 0);
LABEL_14:
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
                v3 = a3;
LABEL_15:
                if ( v3 )
                  goto LABEL_24;
LABEL_23:
                DXGSESSIONDATA::RemoveAdapterFromSession(SessionData, a1);
                goto LABEL_24;
              }
              v31 = v23;
              WdLogSingleEntry4(2LL, v4, a1->HighPart, a1->LowPart, v23);
              v32 = L"Failed to take owner on VidPnSourceId 0x%I64x from DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.";
              WdLogGlobalForLineNumber = 636;
            }
            else
            {
              v33 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v22);
              LODWORD(v15) = v33;
              if ( v33 >= 0 )
                goto LABEL_14;
              v31 = v33;
              WdLogSingleEntry4(2LL, v4, a1->HighPart, a1->LowPart, v33);
              v32 = L"Failed to remove the session ownership on VidPnSourceId 0x%I64x from DXGADAPTER 0x%I64x%08I64x, returning 0x%I64x.";
              WdLogGlobalForLineNumber = 654;
            }
            v40 = v31;
          }
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v32, v4, a1->HighPart, a1->LowPart, v40, 0LL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
      }
      else
      {
        LODWORD(v15) = -1073741811;
        WdLogSingleEntry4(2LL, a1->HighPart, a1->LowPart, v4, -1073741811LL);
        v39 = a1->LowPart;
        v36 = a1->HighPart;
        WdLogGlobalForLineNumber = 587;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to take the adapter view ownership since adapter 0x%I64x%08I64x does not have the caller speci"
                    "fied VidPn Source ID 0x%I64x, returning 0x%I64x.",
          v36,
          v39,
          v4,
          -1073741811LL,
          0LL);
      }
      if ( !v41 )
        goto LABEL_24;
      goto LABEL_23;
    }
  }
  else
  {
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionData, a1);
    if ( SessionAdapterFromLuid )
      goto LABEL_5;
    WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1073741811LL);
    v38 = a1->LowPart;
    v35 = a1->HighPart;
    WdLogGlobalForLineNumber = 567;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the caller specified session adapter 0x%I64x%08I64x, returning 0x%I64x.",
      v35,
      v38,
      -1073741811LL,
      0LL,
      0LL);
    LODWORD(v15) = -1073741811;
  }
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v43);
  return (unsigned int)v15;
}
