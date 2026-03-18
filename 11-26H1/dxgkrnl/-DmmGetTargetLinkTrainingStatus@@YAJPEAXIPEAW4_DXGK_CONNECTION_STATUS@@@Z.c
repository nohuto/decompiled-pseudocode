/*
 * XREFs of ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x140364910
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140366154 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmGetTargetLinkTrainingStatus(PERESOURCE *a1, int a2, enum _DXGK_CONNECTION_STATUS *a3)
{
  unsigned int v6; // edi
  __int64 Flink; // rbx
  __int64 v8; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4474;
  }
  Flink = (__int64)a1[395][1].SystemResourcesList.Flink;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v11, Flink);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Flink + 120) + 72LL));
  v8 = *(_QWORD *)(Flink + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, a2);
  if ( TargetById )
  {
    *(_DWORD *)a3 = (unsigned __int8)*(_DWORD *)(*((_QWORD *)TargetById + 67) + 168LL);
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4492;
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    v6 = -1073741811;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return v6;
}
