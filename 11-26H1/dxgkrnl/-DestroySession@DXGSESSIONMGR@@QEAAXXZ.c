/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x140330590
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1403FDDC0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1400820E4 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ @ 0x14018B454 (-CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x140330710 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x140409050 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONMGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentProcessSessionId; // eax
  __int64 v6; // rsi
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v8; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // r8
  DXGSESSIONDATA *v11; // rcx
  _BYTE v12[16]; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-18h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  v6 = CurrentProcessSessionId;
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(this, CurrentProcessSessionId);
  v8 = SessionDataForSpecifiedSession;
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession == *((struct DXGSESSIONDATA **)this + 17) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pConsoleSessionData != pSessionData",
        5575LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v8 == *((struct DXGSESSIONDATA **)this + 17) )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 123), 0);
      }
    }
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueSession();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( (unsigned int)v6 >= *((_DWORD *)this + 20) )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6);
  WdLogSingleEntry3(4LL, v6, v10, *((unsigned int *)this + 20));
  WdLogGlobalForLineNumber = 5598;
  if ( (unsigned int)v6 < *((_DWORD *)this + 20) )
  {
    v11 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8 * v6);
    if ( v11 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v11);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6) = 0LL;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
}
