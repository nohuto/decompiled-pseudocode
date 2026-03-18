/*
 * XREFs of ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140034CF8
 * Callers:
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14003DB8C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     xxxTranslateAccelerator @ 0x14016E680 (xxxTranslateAccelerator.c)
 *     xxxSetMenuInfo @ 0x1401B2AB8 (xxxSetMenuInfo.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402BEEBC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxMNUpdateShownMenu @ 0x1402E23B4 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(_QWORD *a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax

  v4 = PtiCurrent();
  *a1 = *((_QWORD *)v4 + 57);
  *((_QWORD *)v4 + 57) = a1;
  a1[1] = a2;
  if ( a2 )
    HMLockObject(a2);
  return a1;
}
