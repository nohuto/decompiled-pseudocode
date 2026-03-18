/*
 * XREFs of DxgkGetWddmRemoteSessionGdiViewRange @ 0x140413FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetWddmRemoteSessionGdiViewRange@DXGSESSIONDATA@@QEAAXPEAK0@Z @ 0x140414100 (-GetWddmRemoteSessionGdiViewRange@DXGSESSIONDATA@@QEAAXPEAK0@Z.c)
 */

__int64 __fastcall DxgkGetWddmRemoteSessionGdiViewRange(unsigned int *a1, unsigned int *a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  DXGSESSIONDATA *SessionData; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax

  if ( a1 && a2 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global, v5, v6, v7);
    if ( SessionData )
    {
      DXGSESSIONDATA::GetWddmRemoteSessionGdiViewRange(SessionData, a1, a2);
      return 0LL;
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v11, v12);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 1736;
    v18 = PsGetCurrentProcessSessionId(v15, v14, v16, v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v18,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1723;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified NULL pointer to DxgkGetWddmRemoteSessionGdiViewRange, returning 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
