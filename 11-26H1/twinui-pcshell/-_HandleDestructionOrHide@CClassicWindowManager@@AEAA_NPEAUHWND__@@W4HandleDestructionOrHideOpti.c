/*
 * XREFs of ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802ED0A4
 * Callers:
 *     ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1801ED1C0 (-HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1801F5E30 (-HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802ECFD0 (-UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18004B1B4 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180095A68 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180096140 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800DE520 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1801893E0 (-_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18027E234 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::_HandleDestructionOrHide(
        CClassicWindowManager *a1,
        HWND a2,
        int a3,
        unsigned int a4)
{
  __int64 v8; // r8
  char v9; // si
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // r8d
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct IClassicWindow *v23; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v25[2]; // [rsp+30h] [rbp-10h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  if ( (int)CClassicWindowManager::_FindClassicWindow(a1, a2, &v23, &v24) < 0 )
  {
    v9 = 0;
    if ( a3 == 1 )
    {
      v13 = (_QWORD *)((char *)a1 + 224);
      v25[0] = a2;
      if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
                  (__int64)a1 + 224,
                  v25,
                  v8,
                  &v24) < 0 )
        goto LABEL_22;
      v9 = 1;
      v15 = *((_QWORD *)a1 + 29);
      v16 = v24;
      CClassicWindowManager::RemoveApplicationView(v14, *(_QWORD *)(v15 + 8 * v24), 0);
      v17 = v16;
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_22;
      v13 = (_QWORD *)((char *)a1 + 224);
      v25[0] = a2;
      if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
                  (__int64)a1 + 224,
                  v25,
                  v8,
                  &v24) < 0 )
        goto LABEL_22;
      v9 = 1;
      v18 = v24;
      v19 = *(_QWORD *)(*((_QWORD *)a1 + 29) + 8 * v24);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 208LL))(v19, a4);
      CClassicWindowManager::_ChangeWindowType(
        a1,
        *(struct IClassicWindow **)(*((_QWORD *)a1 + 29) + 8 * v18),
        (a4 & 1) << 14);
      v20 = *(_QWORD *)(*((_QWORD *)a1 + 29) + 8 * v18);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 152LL))(v20) )
        goto LABEL_22;
      CClassicWindowManager::RemoveApplicationView(v21, *(_QWORD *)(*((_QWORD *)a1 + 29) + 8 * v18), 0);
      v17 = v18;
    }
    (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v13 + 16LL))(v13, v17);
    goto LABEL_22;
  }
  v9 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    1u,
    v8);
  v10 = v24;
  if ( a3 == 2 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)v23 + 208LL))(v23, a4) )
      goto LABEL_22;
    CClassicWindowManager::_ChangeWindowType(a1, v23, (a4 & 1) << 14);
    if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v23 + 152LL))(v23) || !v10 )
      goto LABEL_22;
    a3 = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v23 + 136LL))(v23) )
    CClassicWindowManager::_HandleOwnerBecameDestroyed(a1, v23);
  if ( a3
    || (*(int (__fastcall **)(_QWORD *, struct IClassicWindow **))(*((_QWORD *)a1 + 28) + 8LL))((_QWORD *)a1 + 28, &v23) < 0 )
  {
    (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*((_QWORD *)a1 + 23) + 16LL))((_QWORD *)a1 + 23, v10);
    v12 = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*((_QWORD *)a1 + 23) + 16LL))((_QWORD *)a1 + 23, v10);
    v12 = 1;
  }
  CClassicWindowManager::RemoveApplicationView(v11, (__int64)v23, v12);
LABEL_22:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  return v9;
}
