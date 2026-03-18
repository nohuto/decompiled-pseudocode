/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403FDED8
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403FDDC0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1400626A0 (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x140204500 (-StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403FE2EC (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1403FEAE8 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcessSessionId; // rdi
  int v6; // esi
  __int64 v8; // r8
  struct DXGGLOBAL *Global; // rax
  int v10; // ebp
  DXGSESSIONMGR *i; // rsi
  DXGSESSIONDATA *v12; // rax
  DXGSESSIONDATA *v13; // rcx
  __int64 v14; // rax
  _BYTE v15[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-28h] BYREF

  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2, a3, a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(this + 11), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 20) )
  {
    v6 = DXGSESSIONMGR::IncreaseNumSessions((DXGSESSIONMGR *)this, CurrentProcessSessionId);
    if ( v6 < 0 )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
      return (unsigned int)v6;
    }
  }
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5491;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"SessionId < m_SessionDataArraySize",
      5491LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this[6] + CurrentProcessSessionId) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5492;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pSessionData[SessionId] == NULL",
      5492LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((_QWORD *)this[6] + CurrentProcessSessionId);
  if ( v8 )
  {
    WdLogSingleEntry2(3LL, CurrentProcessSessionId, v8);
    WdLogGlobalForLineNumber = 5496;
    goto LABEL_10;
  }
  v12 = (DXGSESSIONDATA *)operator new(0x4B60uLL, 0x4B677844u, 64LL);
  if ( v12 )
    v13 = DXGSESSIONDATA::DXGSESSIONDATA(v12, CurrentProcessSessionId);
  else
    v13 = 0LL;
  *((_QWORD *)this[6] + CurrentProcessSessionId) = v13;
  if ( *((_QWORD *)this[6] + CurrentProcessSessionId) )
  {
LABEL_10:
    Global = DXGGLOBAL::GetGlobal();
    v10 = DXGVALIDATION::InitializeForSession(
            (struct DXGGLOBAL *)((char *)Global + 1668),
            *((struct DXGSESSIONDATA **)this[6] + CurrentProcessSessionId));
    if ( v10 >= 0 )
    {
      for ( i = this[40]; i != (DXGSESSIONMGR *)(this + 40); i = *(DXGSESSIONMGR **)i )
      {
        v14 = *((_QWORD *)i + 4);
        if ( v14 == 0x100000000LL || v14 == CurrentProcessSessionId )
          DXGSESSIONDATA::StartPnPTransitionOnSession(
            *((DXGSESSIONDATA **)this[6] + CurrentProcessSessionId),
            (DXGSESSIONMGR *)((char *)i - 8));
      }
      WdLogSingleEntry3(
        4LL,
        CurrentProcessSessionId,
        *((_QWORD *)this[6] + CurrentProcessSessionId),
        *((unsigned int *)this + 20));
      WdLogGlobalForLineNumber = 5543;
    }
    goto LABEL_23;
  }
  *((_DWORD *)this + 37) |= 1u;
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 5505;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Unable to allocate dxg session data for session 0x%I64x",
    CurrentProcessSessionId,
    0LL,
    0LL,
    0LL,
    0LL);
  v10 = -1073741801;
LABEL_23:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
  return (unsigned int)v10;
}
