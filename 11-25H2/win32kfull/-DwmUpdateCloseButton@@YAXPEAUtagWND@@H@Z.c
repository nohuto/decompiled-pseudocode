/*
 * XREFs of ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x140190294
 * Callers:
 *     xxxEnableMenuItem @ 0x140045E50 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140046AC4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140049828 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxSetClassData @ 0x1400C2294 (xxxSetClassData.c)
 *     ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x140190008 (-DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z.c)
 *     xxxGetSystemMenu @ 0x1402CA414 (xxxGetSystemMenu.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     MNLookUpItem @ 0x1400476D8 (MNLookUpItem.c)
 */

void __fastcall DwmUpdateCloseButton(struct tagWND *a1, int a2)
{
  int v2; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rax

  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 8LL) & 0x200) != 0
    || (v5 = (_QWORD *)*((_QWORD *)a1 + 20)) != 0LL
    && ((v6 = MNLookUpItem(*((_QWORD **)a1 + 20), 61536LL, 0, 0LL)) == 0
     && (v6 = MNLookUpItem(v5, 32864LL, 0, 0LL)) == 0
     && (v6 = MNLookUpItem(v5, 49264LL, 0, 0LL)) == 0
     || (*(_DWORD *)(*(_QWORD *)v6 + 4LL) & 3) != 0) )
  {
    v2 = 1;
  }
  SetOrClrWF(v2, a1, 0xDA01u, a2);
}
