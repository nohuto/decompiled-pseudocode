/*
 * XREFs of ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1403653C0
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14007C49C (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1403654B0 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x140082134 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1403670C0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1403FD334 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveAdapterFromSession(DXGSESSIONDATA *this, const struct _LUID *a2)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  unsigned int *v5; // rdx
  SESSION_ADAPTER *v6; // rbx
  SESSION_ADAPTER **v9; // rdx
  SESSION_ADAPTER **v10; // rcx
  __int64 HighPart; // [rsp+20h] [rbp-38h]
  __int64 LowPart; // [rsp+28h] [rbp-30h]

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  v6 = SessionAdapterFromLuid;
  if ( SessionAdapterFromLuid )
  {
    if ( (*((_DWORD *)SessionAdapterFromLuid + 12))-- == 1 )
    {
      SESSION_ADAPTER::Cleanup(SessionAdapterFromLuid);
      v9 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 4);
      if ( v9[1] != (SESSION_ADAPTER *)((char *)v6 + 32)
        || (v10 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 5), *v10 != (SESSION_ADAPTER *)((char *)v6 + 32)) )
      {
        __fastfail(3u);
      }
      *v10 = (SESSION_ADAPTER *)v9;
      v9[1] = (SESSION_ADAPTER *)v10;
      SESSION_ADAPTER::`scalar deleting destructor'(v6);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry4(2LL, (int)v5[1], *v5, this, -1073741811LL);
    LowPart = a2->LowPart;
    HighPart = a2->HighPart;
    WdLogGlobalForLineNumber = 3949;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x%08I64x is NOT being used in session 0x%I64x, returning 0x%I64x.",
      HighPart,
      LowPart,
      (__int64)this,
      -1073741811LL,
      0LL);
    return 3221225485LL;
  }
}
