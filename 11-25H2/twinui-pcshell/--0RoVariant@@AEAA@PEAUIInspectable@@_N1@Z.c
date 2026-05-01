/*
 * XREFs of ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x1801A78F0
 * Callers:
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x1801A7190 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801A71E8 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18037BE30 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18037D0D0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180385768 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180386B80 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038B5C0 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18038DF00 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x180400A88 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1804014B8 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

RoVariant *__fastcall RoVariant::RoVariant(RoVariant *this, struct IInspectable *a2)
{
  struct IInspectableVtbl *lpVtbl; // rax
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    lpVtbl = a2->lpVtbl;
    v7 = 0LL;
    v5 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a2,
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           &v7);
    if ( v5 < 0 )
    {
      if ( v5 == -2147467262 )
      {
        *(_QWORD *)this = a2;
        *((_DWORD *)this + 2) = 3;
      }
      else
      {
        *(_QWORD *)this = 0LL;
        *((_DWORD *)this + 2) = v5;
        ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->Release)(a2);
      }
    }
    else
    {
      *(_QWORD *)this = v7;
      ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->Release)(a2);
      *((_DWORD *)this + 2) = 7;
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_DWORD *)this + 2) = 0;
  }
  return this;
}
