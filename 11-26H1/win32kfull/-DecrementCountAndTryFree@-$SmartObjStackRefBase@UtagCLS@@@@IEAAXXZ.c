/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C
 * Callers:
 *     xxxSetMenuInfo @ 0x14000CF70 (xxxSetMenuInfo.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxGetMenuBarInfo @ 0x14000D8F8 (xxxGetMenuBarInfo.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000E8C4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x14000EA1C (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _RegisterClassEx @ 0x14014ECE0 (_RegisterClassEx.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x14014FD14 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     GetCPD @ 0x140150018 (GetCPD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  void *CurrentWin32kStackRefLookAside; // rax

  result = *a1;
  if ( *a1 != gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = *a1;
      if ( *(_BYTE *)(*a1 + 12) )
      {
        v2 = *a1;
        CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
        return Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v2);
      }
    }
  }
  return result;
}
