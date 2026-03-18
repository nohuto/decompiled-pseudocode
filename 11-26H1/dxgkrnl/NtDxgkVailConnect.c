/*
 * XREFs of NtDxgkVailConnect @ 0x140210E60
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x14006B110 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x140083134 (-EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1401F6D94 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x14020D9F0 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x14020DED8 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x14020EAEC (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkVailConnect(__int64 a1)
{
  struct DXGPROCESS *Current; // rbx
  __int64 v2; // rcx
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int VmBusHostSubscribers; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  DXGSESSIONDATA *v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v18; // eax
  struct DXGPROCESS *v19; // rsi
  char v20; // al
  struct DXGGLOBAL *v21; // rax
  __int64 v22; // rcx
  PVOID Object[2]; // [rsp+58h] [rbp-29h] BYREF
  int v24; // [rsp+68h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp-11h]
  char v26; // [rsp+78h] [rbp-9h]
  _BYTE v27[16]; // [rsp+80h] [rbp-1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp+Fh] BYREF
  char v29; // [rsp+C0h] [rbp+3Fh]

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2216;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2216);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    if ( *((_QWORD *)Current + 72) )
    {
      v4 = (struct _EX_RUNDOWN_REF *)DXGPROCESS::ReferenceVailObject(Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)Object, (struct DXGFASTMUTEX *const)&v4[5], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)Object);
      if ( v4[14].Count )
      {
        VmBusHostSubscribers = DXGVAILOBJECT::CreateVmBusHostSubscribers((DXGVAILOBJECT *)v4);
        LODWORD(v8) = VmBusHostSubscribers;
        if ( VmBusHostSubscribers == -1073740528 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 976;
        }
        else if ( VmBusHostSubscribers >= 0 )
        {
          LODWORD(v8) = DXGVAILOBJECT::EnableVmBusChannel((DXGVAILOBJECT *)v4);
          if ( (int)v8 < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 995;
            DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v4);
          }
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 982;
        }
      }
      else
      {
        LODWORD(v8) = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5) + 24) = -1071775727LL;
        WdLogGlobalForLineNumber = 1004;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)Object);
      if ( (int)v8 >= 0 )
        ExReInitializeRundownProtection(v4 + 11);
      DxgkCompositionObject::Release((DxgkCompositionObject *)v4);
    }
    else if ( (*((_DWORD *)Current + 102) & 4) != 0 )
    {
      if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 125) )
      {
        Object[0] = 0LL;
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        v13 = SessionData;
        if ( SessionData )
        {
          v16 = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, (struct _EPROCESS **)Object);
          v8 = v16;
          if ( v16 >= 0 )
          {
            v29 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object[0]);
            v19 = DXGPROCESS::GetCurrent();
            if ( *((_BYTE *)v19 + 584) )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1064;
              LODWORD(v8) = -1073740528;
            }
            else
            {
              LODWORD(v8) = DXGSESSIONDATA::VailGuestConnect(v13);
              if ( (int)v8 >= 0 )
              {
                v20 = 1;
              }
              else
              {
                WdLogSingleEntry1(3LL);
                v20 = 0;
                WdLogGlobalForLineNumber = 1074;
              }
              *((_BYTE *)v19 + 584) = v20;
            }
            CPROCESSATTACHHELPER::Detach(&ApcState);
          }
          else
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            WdLogSingleEntry2(2LL, CurrentProcessSessionId, v8);
            WdLogGlobalForLineNumber = 1047;
            v18 = PsGetCurrentProcessSessionId();
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
              v18,
              v8,
              0LL,
              0LL,
              0LL);
          }
          if ( Object[0] )
            ObfDereferenceObject(Object[0]);
        }
        else
        {
          v14 = PsGetCurrentProcessSessionId();
          LODWORD(v8) = -1073741790;
          WdLogSingleEntry2(2LL, v14, -1073741790LL);
          WdLogGlobalForLineNumber = 1036;
          v15 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v15,
            -1073741790LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        LODWORD(v8) = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = -1071775727LL;
        WdLogGlobalForLineNumber = 1097;
      }
    }
    else
    {
      LODWORD(v8) = -1073741790;
      v21 = DXGGLOBAL::GetGlobal();
      WdLogSingleEntry4(
        3LL,
        -1073741790LL,
        *((_QWORD *)Current + 72) != 0LL,
        (*((_DWORD *)Current + 102) >> 2) & 1,
        *((_QWORD *)v21 + 125));
      WdLogGlobalForLineNumber = 1107;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
    KeLeaveCriticalRegion();
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 931;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
