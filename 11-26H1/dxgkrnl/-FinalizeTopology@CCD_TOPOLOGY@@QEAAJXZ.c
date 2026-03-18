/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x140364738
 * Callers:
 *     DxgkFinalizePathsModality @ 0x140412AA0 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x140364B10 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this)
{
  DXGGLOBAL *Global; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct _KPROCESS *v13; // rbx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // r14
  int v16; // ebx
  bool v17; // di
  unsigned int i; // ebx
  int v19; // eax
  int v20; // esi
  bool v21[8]; // [rsp+20h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-48h] BYREF
  char v23; // [rsp+58h] [rbp-18h]

  v23 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v3, v4, v5);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v9, v10);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 3760;
LABEL_3:
    if ( v23 )
      KeUnstackDetachProcess(&ApcState);
    return 3221225485LL;
  }
  v13 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v8) != v13 )
  {
    KeStackAttachProcess(v13, &ApcState);
    v23 = 1;
  }
  Current = DXGPROCESS::GetCurrent(v14);
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3777;
    goto LABEL_3;
  }
  v16 = DxgkAcquireSessionModeChangeLock(1);
  v17 = v16 >= 0;
  v21[0] = v16 >= 0;
  if ( v16 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3797;
LABEL_22:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v21);
    CPROCESSATTACHHELPER::Detach(&ApcState);
    return (unsigned int)v16;
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 8) + 40LL); ++i )
    {
      v19 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, i);
      v20 = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry2(2LL, i, v19);
        WdLogGlobalForLineNumber = 3809;
        v16 = v20;
        goto LABEL_22;
      }
    }
    if ( v17 )
      DxgkReleaseSessionModeChangeLock();
    if ( v23 )
      KeUnstackDetachProcess(&ApcState);
    return 0LL;
  }
}
