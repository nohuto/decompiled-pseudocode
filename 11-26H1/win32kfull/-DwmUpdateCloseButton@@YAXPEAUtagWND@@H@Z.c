/*
 * XREFs of ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x1400A703C
 * Callers:
 *     xxxEnableMenuItem @ 0x14000E684 (xxxEnableMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000E8C4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x1400A6E6C (-DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z.c)
 *     xxxGetSystemMenu @ 0x140121614 (xxxGetSystemMenu.c)
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 * Callees:
 *     MNLookUpItem @ 0x1400344B8 (MNLookUpItem.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 */

void __fastcall DwmUpdateCloseButton(struct tagWND *a1, int a2)
{
  int v2; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rax

  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 8LL) & 0x200) != 0
    || (v5 = (_QWORD *)*((_QWORD *)a1 + 20)) != 0LL
    && ((v6 = MNLookUpItem(*((_QWORD **)a1 + 20), 0xF060u, 0, 0LL)) == 0
     && (v6 = MNLookUpItem(v5, 0x8060u, 0, 0LL)) == 0
     && (v6 = MNLookUpItem(v5, 0xC070u, 0, 0LL)) == 0
     || (*(_DWORD *)(*(_QWORD *)v6 + 4LL) & 3) != 0) )
  {
    v2 = 1;
  }
  SetOrClrWF(v2, a1, 0xDA01u, a2);
}
