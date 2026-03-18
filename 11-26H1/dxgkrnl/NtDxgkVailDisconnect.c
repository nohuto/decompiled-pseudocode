/*
 * XREFs of NtDxgkVailDisconnect @ 0x140211380
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
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x140080674 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1401F6D94 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x14020DED8 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x14020EC54 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkVailDisconnect(__int64 a1)
{
  struct DXGPROCESS *Current; // rbx
  __int64 v2; // rcx
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v5; // rdi
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  DXGSESSIONDATA *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v13; // eax
  struct DXGPROCESS *v14; // r14
  char v15; // al
  __int64 v16; // rcx
  PVOID Object[2]; // [rsp+58h] [rbp-29h] BYREF
  int v18; // [rsp+68h] [rbp-19h] BYREF
  __int64 v19; // [rsp+70h] [rbp-11h]
  char v20; // [rsp+78h] [rbp-9h]
  _BYTE v21[16]; // [rsp+80h] [rbp-1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp+Fh] BYREF
  char v23; // [rsp+C0h] [rbp+3Fh]

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2217;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2217);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    if ( *((_QWORD *)Current + 72) )
    {
      v4 = (struct _EX_RUNDOWN_REF *)DXGPROCESS::ReferenceVailObject(Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
      ExWaitForRundownProtectionRelease(v4 + 11);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)Object, (struct DXGFASTMUTEX *const)&v4[5], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)Object);
      DXGVAILOBJECT::DisableVmBusChannel((DXGVAILOBJECT *)v4);
      LODWORD(v5) = DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v4);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)Object);
      DxgkCompositionObject::Release((DxgkCompositionObject *)v4);
    }
    else if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 125) && (*((_DWORD *)Current + 102) & 4) != 0 )
    {
      Object[0] = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(Global);
      v8 = SessionData;
      if ( SessionData )
      {
        v11 = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, (struct _EPROCESS **)Object);
        v5 = v11;
        if ( v11 >= 0 )
        {
          v23 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object[0]);
          v14 = DXGPROCESS::GetCurrent();
          if ( *((_BYTE *)v14 + 584) )
          {
            LODWORD(v5) = DXGSESSIONDATA::VailGuestDisconnect(v8);
            if ( (int)v5 >= 0 )
            {
              v15 = 0;
            }
            else
            {
              WdLogSingleEntry1(3LL);
              v15 = 1;
              WdLogGlobalForLineNumber = 1243;
            }
            *((_BYTE *)v14 + 584) = v15;
          }
          else
          {
            LODWORD(v5) = -2147483611;
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1232;
          }
          CPROCESSATTACHHELPER::Detach(&ApcState);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, v5);
          WdLogGlobalForLineNumber = 1214;
          v13 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v13,
            v5,
            0LL,
            0LL,
            0LL);
        }
        if ( Object[0] )
          ObfDereferenceObject(Object[0]);
      }
      else
      {
        v9 = PsGetCurrentProcessSessionId();
        WdLogSingleEntry2(2LL, v9, -1073741790LL);
        WdLogGlobalForLineNumber = 1203;
        v10 = PsGetCurrentProcessSessionId();
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v10,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v5) = -1073741790;
      }
    }
    else
    {
      LODWORD(v5) = -1073741790;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1266;
    }
    KeLeaveCriticalRegion();
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1141;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
