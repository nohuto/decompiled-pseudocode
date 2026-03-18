/*
 * XREFs of ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14003D97C
 * Callers:
 *     xxxGetMenuItemRect @ 0x14003D798 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x14026C8F0 (xxxMenuItemFromPoint.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x140045940 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 */

__int64 __fastcall GetMenuPwnd(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  v2 = a2;
  v3 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0 )
  {
    if ( !a1 || (a2 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF, (_DWORD)a2 != 668) )
    {
      v5 = PtiCurrent(a1, a2);
      v8 = gSmartObjNullRef;
      v9 = *((_QWORD *)v5 + 209);
      *((_QWORD *)v5 + 209) = &v9;
      v6 = *(_QWORD *)(v2 + 16);
      if ( !v6 )
        v6 = **(_QWORD **)v2;
      v7 = MNGetPopupFromMenu(v6, 0LL);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v8, v7);
      if ( *(_QWORD *)v8 )
        v3 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v8);
    }
  }
  return v3;
}
