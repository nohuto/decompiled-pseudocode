/*
 * XREFs of SendDwmIconChange @ 0x14005C6EC
 * Callers:
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140068988 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018FE40 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401E47E0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x140226FA0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     DwmAsyncIconChange @ 0x14005C78C (DwmAsyncIconChange.c)
 *     _HasCaptionIcon @ 0x1400B2A98 (_HasCaptionIcon.c)
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x1400C1194 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall SendDwmIconChange(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6);
  if ( (unsigned int)HasCaptionIcon(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && GetWindowSmIcon(a1) )
    GetWindowSmIcon(a1);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v6);
  v4 = (void *)ReferenceDwmApiPort(v3, v2);
  return DwmAsyncIconChange(v4);
}
