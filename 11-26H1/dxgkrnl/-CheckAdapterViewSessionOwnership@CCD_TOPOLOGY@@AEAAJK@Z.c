/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x140366D34
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x140268F3C (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1403659E4 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1403670C0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(CCD_TOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONDATA *SessionData; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  SESSION_ADAPTER *SessionAdapterFromLuid; // r15
  unsigned int v18; // ebx
  unsigned int i; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v28; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v5, v6, v7);
  if ( SessionData )
  {
    v12 = 340 * v2;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionData,
                               (const struct _LUID *)(340 * v2 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)));
    if ( SessionAdapterFromLuid )
    {
      v18 = *(_DWORD *)(v13 + 84);
      for ( i = 0; v18; v18 >>= 1 )
      {
        if ( (v18 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, i) )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21, v20, v22, v23);
          WdLogSingleEntry5(
            2LL,
            *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v12 + 4),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v12),
            i,
            CurrentProcessSessionId,
            -1073741790LL);
          v28 = *((_QWORD *)this + 8);
          WdLogGlobalForLineNumber = 2218;
          *(_DWORD *)(*(_QWORD *)(v28 + 48) + v12 + 84) &= ~(1 << i);
          CCD_TOPOLOGY::MarkPathsApplyFailure(
            this,
            (const struct _LUID *)(v12 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
            i,
            -1073741790);
        }
        ++i;
      }
      return 0LL;
    }
    else
    {
      v25 = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
      WdLogSingleEntry4(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v2 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340 * v2),
        v25,
        -1073741790LL);
      result = 3221225506LL;
      WdLogGlobalForLineNumber = 2195;
    }
  }
  else
  {
    v26 = PsGetCurrentProcessSessionId(v9, v8, 0LL, v11);
    WdLogSingleEntry2(2LL, v26, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 2180;
  }
  return result;
}
