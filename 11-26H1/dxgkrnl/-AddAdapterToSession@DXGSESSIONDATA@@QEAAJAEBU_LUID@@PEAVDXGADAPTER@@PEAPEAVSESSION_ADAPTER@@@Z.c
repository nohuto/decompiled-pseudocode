/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x14040B4CC
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14007C49C (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1403654B0 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x140082134 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1403670C0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x14040B684 (-Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddAdapterToSession(
        DXGSESSIONDATA ***this,
        const struct _LUID *a2,
        struct DXGADAPTER *a3,
        struct SESSION_ADAPTER **a4)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // r14d
  DXGSESSIONDATA **v13; // rdx
  DXGSESSIONDATA *v14; // rax
  __int64 HighPart; // [rsp+20h] [rbp-38h]
  __int64 LowPart; // [rsp+28h] [rbp-30h]

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 12);
    if ( a4 )
      *a4 = SessionAdapterFromLuid;
    return 0LL;
  }
  v10 = operator new(0x80uLL, 0x4B677844u, 256LL);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = this;
    *(struct _LUID *)(v10 + 8) = *a2;
    *(_QWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_QWORD *)(v10 + 56) = 0LL;
    *(_QWORD *)(v10 + 64) = 0LL;
    *(_QWORD *)(v10 + 72) = 0LL;
    *(_DWORD *)(v10 + 96) = 0;
    *(_QWORD *)(v10 + 104) = 0LL;
    *(_QWORD *)(v10 + 120) = v10 + 112;
    *(_QWORD *)(v10 + 112) = v10 + 112;
    v12 = SESSION_ADAPTER::Initialize((SESSION_ADAPTER *)v10, a3);
    if ( v12 >= 0 )
    {
      v13 = this[2324];
      v14 = (DXGSESSIONDATA *)(v11 + 32);
      if ( *v13 != (DXGSESSIONDATA *)(this + 2323) )
        __fastfail(3u);
      *(_QWORD *)v14 = this + 2323;
      *(_QWORD *)(v11 + 40) = v13;
      *v13 = v14;
      this[2324] = (DXGSESSIONDATA **)v14;
      ++*(_DWORD *)(v11 + 48);
      if ( a4 )
        *a4 = (struct SESSION_ADAPTER *)v11;
      WdLogSingleEntry3(4LL, a2->HighPart, a2->LowPart, this);
      WdLogGlobalForLineNumber = 3903;
      return 0LL;
    }
    SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v11);
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry3(6LL, a2->HighPart, a2->LowPart, this);
    LowPart = a2->LowPart;
    HighPart = a2->HighPart;
    WdLogGlobalForLineNumber = 3865;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate session adapter for adapter 0x%I64x%08I64x in session 0x%I64x.",
      HighPart,
      LowPart,
      (__int64)this,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
