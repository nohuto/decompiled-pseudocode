/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C
 * Callers:
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14003D23C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14003DB8C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 *     LockPopupMenu @ 0x14015AD40 (LockPopupMenu.c)
 *     xxxMNStartMenu @ 0x14015D464 (xxxMNStartMenu.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxTranslateAccelerator @ 0x14016E680 (xxxTranslateAccelerator.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x14016ECFC (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1401ADA40 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     xxxLoadSysMenu @ 0x1401B260C (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x1401B2AB8 (xxxSetMenuInfo.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401CA474 (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _CheckMenuItem @ 0x1401D1DE0 (_CheckMenuItem.c)
 *     UnlockPopupMenu @ 0x14026E578 (UnlockPopupMenu.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxMNSetTop @ 0x1402C0490 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1402E23B4 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  _QWORD *v5; // r9
  struct tagTHREADINFO *v6; // r10
  _QWORD *result; // rax

  v4 = PtiCurrent();
  v5 = a1 + 1;
  v6 = v4;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 152);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 152) + 8LL);
  }
  *v5 = *((_QWORD *)v4 + 209);
  result = a1;
  *((_QWORD *)v6 + 209) = v5;
  a1[2] = 0LL;
  return result;
}
