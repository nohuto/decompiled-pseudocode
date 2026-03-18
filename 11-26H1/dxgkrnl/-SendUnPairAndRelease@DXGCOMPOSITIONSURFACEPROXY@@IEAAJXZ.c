/*
 * XREFs of ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1401C0F68
 * Callers:
 *     ?UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ @ 0x1401C1310 (-UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z @ 0x14020FFDC (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJI@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::SendUnPairAndRelease(DXGCOMPOSITIONSURFACEPROXY *this)
{
  int v2; // ebx
  struct DXGPROCESS *Current; // rdi
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  _BYTE v10[16]; // [rsp+50h] [rbp-18h] BYREF

  v2 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    if ( *((_DWORD *)Current + 122) && (*((_DWORD *)Current + 102) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 584) )
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData )
        {
          v9 = *((_DWORD *)this + 5);
          if ( v9 && *((_BYTE *)this + 40) )
          {
            v2 = DXGSESSIONDATA::VailSendReleaseCompositionSurfaceReference(SessionData, v9);
            if ( v2 >= 0 )
            {
              *((_BYTE *)this + 40) = 0;
            }
            else
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1441;
            }
          }
        }
        else
        {
          v2 = -1073741811;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          WdLogGlobalForLineNumber = 1430;
          v8 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v8,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v2 = -2147483611;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1430;
      }
    }
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 5) = 0;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
    return (unsigned int)v2;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1430;
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
    return 3221225485LL;
  }
}
