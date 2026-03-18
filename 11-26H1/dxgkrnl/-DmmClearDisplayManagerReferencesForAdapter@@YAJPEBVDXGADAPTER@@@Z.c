/*
 * XREFs of ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x14025965C
 * Callers:
 *     _lambda_764f9ce4d2491a111d9246978db4db1b_::_lambda_invoker_cdecl_ @ 0x140078060 (_lambda_764f9ce4d2491a111d9246978db4db1b_--_lambda_invoker_cdecl_.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z @ 0x14019896C (-EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x14006B3D8 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14006BE90 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x140260820 (-ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 *     ?ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14031E4B8 (-ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall DmmClearDisplayManagerReferencesForAdapter(const struct DXGADAPTER *a1)
{
  __int64 v2; // rbx
  DMMVIDEOPRESENTTARGETSET *v3; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  _QWORD *v5; // rcx
  DMMVIDEOPRESENTTARGETSET *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 395) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v8, v2);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v2 + 120) + 72LL));
  v3 = *(DMMVIDEOPRESENTTARGETSET **)(v2 + 120);
  NextTarget = 0LL;
  v7 = v3;
  v5 = (_QWORD *)*((_QWORD *)v3 + 3);
  if ( v5 != (_QWORD *)((char *)v3 + 24) )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v5 - 1);
  for ( ; NextTarget; NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(v3, NextTarget) )
    DMMVIDEOPRESENTTARGET::ReleaseDisplayManagerObject(NextTarget);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v7, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 40));
  ADAPTER_DISPLAY::ReleasePendingVidPnSourceOwner(*((ADAPTER_DISPLAY **)a1 + 395));
  return 0LL;
}
