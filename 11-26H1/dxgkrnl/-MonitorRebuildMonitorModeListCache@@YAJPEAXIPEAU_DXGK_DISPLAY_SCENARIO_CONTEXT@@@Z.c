/*
 * XREFs of ?MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026F85C
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140270300 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1403407AC (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall MonitorRebuildMonitorModeListCache(void *a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned int i; // edx
  int NextVideoPresentTarget; // eax
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  v6 = 0;
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = 4294967293LL;
  WdLogGlobalForLineNumber = 4723;
  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 395) )
    {
      v10 = 0;
      for ( i = -1; ; i = v10 )
      {
        NextVideoPresentTarget = DmmGetNextVideoPresentTarget(a1, i, &v10);
        if ( NextVideoPresentTarget < 0 )
          break;
        RebuildMonitorModeListCacheHelper((struct DXGADAPTER *)a1, v10, a3);
      }
      if ( NextVideoPresentTarget != -1073741275 )
        return (unsigned int)NextVideoPresentTarget;
    }
    return v6;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 4727;
  }
  return result;
}
