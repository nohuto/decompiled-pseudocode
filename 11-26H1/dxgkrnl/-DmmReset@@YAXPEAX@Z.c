/*
 * XREFs of ?DmmReset@@YAXPEAX@Z @ 0x14025BD1C
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401A4780 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14006BE90 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1404041E0 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DmmReset(DXGADAPTER *a1)
{
  __int64 v2; // rdi
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  _QWORD *v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8705;
  }
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 395) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v5, v2);
  NextTarget = 0LL;
  v4 = (_QWORD *)(*(_QWORD *)(v2 + 120) + 24LL);
  if ( (_QWORD *)*v4 != v4 )
    NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v4 - 8LL);
  for ( ;
        NextTarget;
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*(DMMVIDEOPRESENTTARGETSET **)(v2 + 120), NextTarget) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(NextTarget);
    *(_BYTE *)(*((_QWORD *)NextTarget + 67) + 168LL) = 13;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v5 + 40));
}
