/*
 * XREFs of ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1403DA974
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402751FC (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403DA6B0 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x14005F700 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, unsigned int *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned int v6; // eax
  _QWORD *v7; // rbx
  const struct DMMVIDEOPRESENTTARGET *v8; // rsi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  _QWORD *v10; // rcx
  __int64 result; // rax
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 7181;
    return result;
  }
  *a2 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7198;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7204;
  }
  v4 = *((_QWORD *)a1 + 395);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7209;
    return 3223191554LL;
  }
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, v5);
    v6 = *(_DWORD *)(v5 + 548);
    if ( v6 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
      v7 = *(_QWORD **)(v5 + 120);
      v8 = 0LL;
      NextTarget = 0LL;
      v10 = (_QWORD *)v7[3];
      if ( v10 != v7 + 3 )
        NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v10 - 1);
      while ( NextTarget )
      {
        if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
        {
          if ( *((_QWORD *)NextTarget + 59) || !DMMVIDEOPRESENTTARGET::IsLeafTarget(NextTarget) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7256;
          }
          goto LABEL_18;
        }
        if ( !v8
          && DMMVIDEOPRESENTTARGET::IsLeafTarget(NextTarget)
          && !*((_QWORD *)NextTarget + 59)
          && !*((_DWORD *)NextTarget + 23) )
        {
          v8 = NextTarget;
        }
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v7, NextTarget);
      }
      NextTarget = v8;
      if ( v8 )
      {
LABEL_18:
        *a2 = *((_DWORD *)NextTarget + 6);
        if ( v7 )
          ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
        goto LABEL_20;
      }
      if ( v7 )
        ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
      return 3221226021LL;
    }
    else
    {
      *a2 = v6;
LABEL_20:
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 7223;
  }
  return result;
}
