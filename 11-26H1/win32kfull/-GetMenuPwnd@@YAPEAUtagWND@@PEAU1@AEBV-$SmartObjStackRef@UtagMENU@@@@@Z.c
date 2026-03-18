/*
 * XREFs of ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14020D7E4
 * Callers:
 *     xxxMenuItemFromPoint @ 0x14020D12C (xxxMenuItemFromPoint.c)
 *     xxxGetMenuItemRect @ 0x14020D69C (xxxGetMenuItemRect.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x14000EA1C (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetMenuPwnd(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0
    && (!a1 || (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) != 0x29C) )
  {
    v4 = PtiCurrent(a1);
    v8 = gSmartObjNullRef;
    v9 = *((_QWORD *)v4 + 209);
    *((_QWORD *)v4 + 209) = &v9;
    v5 = *(_QWORD *)(a2 + 16);
    if ( !v5 )
      v5 = **(_QWORD **)a2;
    v6 = MNGetPopupFromMenu(v5, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v8, v6);
    if ( *(_QWORD *)v8 )
      v3 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v8);
  }
  return v3;
}
