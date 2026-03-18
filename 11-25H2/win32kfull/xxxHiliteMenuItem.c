/*
 * XREFs of xxxHiliteMenuItem @ 0x1402E16B0
 * Callers:
 *     NtUserHiliteMenuItem @ 0x140299C40 (NtUserHiliteMenuItem.c)
 * Callees:
 *     xxxMNRecomputeBarIfNeeded @ 0x14003DA44 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x14016EC10 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxHiliteMenuItem(struct tagWND *a1, __int64 *a2, unsigned int a3, __int16 a4)
{
  char v4; // si
  int TopLevelMenuIndex; // edi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 *v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  TopLevelMenuIndex = a3;
  if ( (a4 & 0x400) == 0 )
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex((__int64)a2, a3);
  v8 = *(_QWORD *)*a2;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 40LL) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded((__int64)a1, a2, v8, a4);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v11, 0LL);
  xxxMNInvertItem(v11, (struct tagMENU ***)a2, TopLevelMenuIndex, a1, v4 & 0x80);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v11, v9);
  return 1LL;
}
