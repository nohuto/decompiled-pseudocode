/*
 * XREFs of ?DmmAreAllVidpnTargetsPowerComponents@@YAEPEAVVIDPN_MGR@@@Z @ 0x1402595C0
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1401A3838 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

char __fastcall DmmAreAllVidpnTargetsPowerComponents(struct VIDPN_MGR *a1)
{
  _QWORD *v2; // rbx
  char v3; // di
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  _QWORD *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v7, (__int64)a1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
  v2 = (_QWORD *)*((_QWORD *)a1 + 15);
  v3 = 0;
  NextTarget = 0LL;
  v5 = (_QWORD *)v2[3];
  if ( v5 != v2 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v5 - 1);
  while ( NextTarget )
  {
    if ( *((_DWORD *)NextTarget + 100) == -1 )
    {
      if ( v2 )
        ReferenceCounted::Release((ReferenceCounted *)(v2 + 8));
      goto LABEL_11;
    }
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v2, NextTarget);
  }
  if ( v2 )
    ReferenceCounted::Release((ReferenceCounted *)(v2 + 8));
  v3 = 1;
LABEL_11:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v7 + 40));
  return v3;
}
