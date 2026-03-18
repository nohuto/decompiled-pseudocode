/*
 * XREFs of DxgkCommitGdiViewIds @ 0x140204D64
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x140330710 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkCommitGdiViewIds(char a1, unsigned int a2)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v6; // rbx
  _BYTE v7[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !a1 )
    return DMgrWriteDeviceCountToRegistry();
  Global = DXGGLOBAL::GetGlobal();
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     *((DXGSESSIONMGR **)Global + 123),
                                     a2);
  v6 = SessionDataForSpecifiedSession;
  if ( SessionDataForSpecifiedSession )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v7,
      (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 19120),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
    if ( *((_QWORD *)v6 + 2398) )
    {
      *((_DWORD *)v6 + 4792) += *((_DWORD *)v6 + 4793);
      *((_DWORD *)v6 + 4793) = 0;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 1650;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      a2,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
