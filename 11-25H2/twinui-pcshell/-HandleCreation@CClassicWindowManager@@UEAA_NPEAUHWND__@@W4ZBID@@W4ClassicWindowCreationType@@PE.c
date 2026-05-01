/*
 * XREFs of ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x180286450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x180022D94 (-RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180023170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800231E8 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180023714 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180023B58 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180023D68 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800D9130 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180142FFC (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180144014 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18014445C (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x1801E2650 (CClassicWindowManager--ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180286CC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___ @ 0x1802871A4 (CIAMGlobals--QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=25
bool __fastcall CClassicWindowManager::HandleCreation(
        _QWORD *a1,
        HWND a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        unsigned int a7,
        _BYTE *a8)
{
  CApplicationManagerUtility *v9; // r14
  _BYTE *v11; // r15
  CClassicWindowManager *v12; // r12
  _QWORD *v13; // rax
  unsigned __int64 i; // rdi
  __int64 v15; // rbx
  struct IClassicWindow *v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  CApplicationManagerUtility *v20; // rax
  HWND v21; // rdx
  int v22; // r14d
  struct IClassicWindow *v23; // rbx
  __int64 v24; // rdx
  unsigned int v25; // r12d
  int v26; // edi
  int v27; // esi
  int v28; // ebx
  int v29; // esi
  bool IsOwnedWindow; // al
  int v31; // ecx
  __int64 v32; // rdx
  int v33; // esi
  __int64 *ClassicWindowOwner; // rax
  struct IClassicWindow *v35; // rdi
  char v36; // bl
  __int64 v37; // rcx
  _QWORD *v38; // rax
  unsigned __int64 v39; // r14
  void *v40; // r15
  __int64 v41; // rbx
  struct IClassicWindow *v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  struct IClassicWindow *v45; // rbx
  __int64 v46; // rdx
  unsigned __int8 v47; // al
  unsigned int v48; // r13d
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // ebx
  int v52; // esi
  _QWORD *v53; // rax
  _QWORD *v54; // rbx
  __int64 v55; // rcx
  struct IClassicWindow *v56; // rbx
  __int64 v57; // rcx
  struct IClassicWindow *v58; // rcx
  struct IClassicWindow *v60; // [rsp+30h] [rbp-40h] BYREF
  __int64 v61; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v62; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v63; // [rsp+48h] [rbp-28h]
  __int64 v64; // [rsp+50h] [rbp-20h]
  __int64 v65; // [rsp+58h] [rbp-18h]
  void **v66; // [rsp+60h] [rbp-10h] BYREF
  _QWORD *v67; // [rsp+68h] [rbp-8h]
  struct IClassicWindow *v68; // [rsp+B0h] [rbp+40h] BYREF
  void *v69; // [rsp+B8h] [rbp+48h] BYREF

  v69 = a2;
  v9 = (CApplicationManagerUtility *)a2;
  LODWORD(v68) = 0;
  v11 = a8;
  if ( a8 )
    *a8 = 0;
  v12 = (CClassicWindowManager *)(a1 - 9);
  v13 = a1 + 14;
  v63 = a1 + 14;
  v62 = 0LL;
  v60 = 0LL;
  for ( i = 0LL; i < v13[2]; ++i )
  {
    v64 = 0LL;
    v15 = *(_QWORD *)(v13[1] + 8 * i);
    v65 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v68 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, struct IClassicWindow **))v15)(
           v15,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v68) >= 0
      && (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *, CApplicationManagerUtility *))(*(_QWORD *)v68
                                                                                                  + 192LL))(
           v68,
           v9) )
    {
      LODWORD(a8) = 0;
    }
    else
    {
      LODWORD(a8) = -1;
    }
    v16 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( !(_DWORD)a8 )
    {
      v17 = i;
      v60 = (struct IClassicWindow *)i;
      v18 = 0;
      goto LABEL_17;
    }
    v13 = a1 + 14;
  }
  v18 = -2147319765;
  v17 = (unsigned __int64)v60;
LABEL_17:
  if ( v18 >= 0 )
  {
    v19 = *(_QWORD *)(a1[15] + 8 * v17);
    v20 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
    if ( CApplicationManagerUtility::IsValidWindow(v20, v21) )
    {
      v22 = -2147024713;
      if ( v11 )
        *v11 = 1;
      v23 = *(struct IClassicWindow **)(a1[15] + 8LL * (_QWORD)v60);
      v68 = v23;
      if ( v23 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v23 + 8LL))(v23);
      LOBYTE(a2) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
        a2);
      v25 = a7;
      v26 = (a7 & 1) << 13;
      if ( a4 )
      {
        v27 = a4 - 1;
        if ( v27 )
        {
          if ( v27 == 1 )
            CClassicWindowManager::_ChangeWindowType((CClassicWindowManager *)(a1 - 9), v23, v26 | 8);
        }
        else
        {
          LOBYTE(v24) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
            v24);
          if ( (CClassicWindowManager::_ChangeWindowType((CClassicWindowManager *)(a1 - 9), v23, v26 | 4u) & 4) != 0 )
          {
            a8 = a1 - 9;
            v69 = v23;
            v66 = &v69;
            v67 = &a8;
            CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___(
              (__int64)(a1 - 9),
              (__int64)&v66);
          }
        }
      }
      else
      {
        LOBYTE(v24) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
          v24);
        CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType((CClassicWindowManager *)(a1 - 9), v23, v26 | 9);
      }
      LOBYTE(v24) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
        v24);
      if ( v25 )
        (*(void (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)v23 + 200LL))(v23, v25);
      if ( v23 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v23 + 16LL))(v23);
      return v22 >= 0;
    }
  }
  v28 = 0;
  if ( a4 )
  {
    v29 = a4 - 1;
    if ( v29 )
    {
      if ( v29 != 1 )
        goto LABEL_44;
    }
    else
    {
      v28 = 1;
    }
    IsOwnedWindow = CApplicationManagerUtility::IsOwnedWindow(v9, a2);
    v31 = v28 | 4;
    if ( !IsOwnedWindow )
      v31 = v28;
    v28 = v31;
  }
  else
  {
    v28 = 4;
  }
LABEL_44:
  v33 = v28 | 8;
  if ( !(unsigned int)GetPropW((HWND)v9, L"ITaskList_Deleted") )
    v33 = v28;
  if ( (v33 & 4) == 0 )
  {
    a8 = 0LL;
    ClassicWindowOwner = (__int64 *)&a8;
    v36 = 2;
    v61 = 0LL;
LABEL_50:
    v35 = (struct IClassicWindow *)*ClassicWindowOwner;
    v61 = *ClassicWindowOwner;
    *ClassicWindowOwner = 0LL;
    goto LABEL_51;
  }
  ClassicWindowOwner = CClassicWindowManager::GetClassicWindowOwner((__int64)v12, (__int64 *)&v62, (HWND)v9);
  v35 = 0LL;
  v61 = 0LL;
  v36 = 1;
  if ( &v61 != ClassicWindowOwner )
    goto LABEL_50;
LABEL_51:
  if ( (v36 & 2) != 0 )
  {
    v36 &= ~2u;
    if ( a8 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a8 + 16LL))(a8);
  }
  if ( (v36 & 1) != 0 )
  {
    v37 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
  }
  v60 = 0LL;
  v38 = a1 + 19;
  v65 = 0LL;
  v62 = 0LL;
  v39 = 0LL;
  v40 = v69;
  while ( v39 < v38[2] )
  {
    v64 = 0LL;
    v41 = *(_QWORD *)(v38[1] + 8 * v39);
    v66 = (void **)v41;
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
    v68 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, struct IClassicWindow **))v41)(
           v41,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v68) >= 0
      && (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *, void *))(*(_QWORD *)v68 + 192LL))(v68, v40) )
    {
      LODWORD(a8) = 0;
    }
    else
    {
      LODWORD(a8) = -1;
    }
    v42 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v42 + 16LL))(v42);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    if ( !(_DWORD)a8 )
    {
      v43 = v39;
      v62 = v39;
      v22 = 0;
      v44 = 0;
      goto LABEL_71;
    }
    ++v39;
    v38 = a1 + 19;
  }
  v43 = v62;
  v44 = -2147319765;
  v22 = 0;
LABEL_71:
  if ( v44 < 0 )
  {
    LOBYTE(v32) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
      v32);
    v48 = a7;
    v51 = 16 * (a7 & 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v60);
    v52 = v51 | v33;
    v60 = 0LL;
    v53 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v54 = v53;
    if ( v53 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)v53);
      *v54 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindow>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v54 = &CClassicWindow::`vftable';
      v54[2] = v69;
      v54[3] = a5;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v54 + 3);
      v54[5] = 0LL;
      v54[6] = 0LL;
      v54[7] = 0LL;
      v54[8] = v35;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v54 + 8);
      *((_DWORD *)v54 + 18) = v52;
      *((_DWORD *)v54 + 19) = 0;
      v54[10] = 0LL;
      v54[4] = 0LL;
      v60 = (struct IClassicWindow *)v54;
      (*(void (__fastcall **)(_QWORD *))(*v54 + 8LL))(v54);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release((volatile signed __int32 *)v54);
    }
    else
    {
      v22 = -2147024882;
    }
  }
  else
  {
    v45 = *(struct IClassicWindow **)(a1[20] + 8 * v43);
    if ( v60 != v45 )
    {
      if ( v45 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v45 + 8LL))(v45);
      v60 = v45;
    }
    (*(void (__fastcall **)(_QWORD *, unsigned __int64))(a1[19] + 16LL))(a1 + 19, v62);
    LOBYTE(v46) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
      v46);
    v47 = (*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v60 + 216LL))(v60);
    v48 = a7;
    v22 = (*(__int64 (__fastcall **)(struct IClassicWindow *, struct IClassicWindow *, __int64, _QWORD))(*(_QWORD *)v60 + 32LL))(
            v60,
            v35,
            a5,
            v33 | (16 * (((unsigned __int8)a7 | v47) & 1u)));
  }
  if ( v22 < 0 )
    goto LABEL_92;
  LOBYTE(v49) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    v49);
  (*(void (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)v60 + 200LL))(v60, v48);
  CClassicWindowManager::RecomputeOwnerForDirectOwnees(v12, v35, v60);
  if ( CClassicWindowManager::IsWindowPseudoTrayAfterChange(v55, (__int64)v60, 0) )
    (*(void (__fastcall **)(struct IClassicWindow *, __int64))(*(_QWORD *)v60 + 112LL))(v60, 32LL);
  v22 = (*(__int64 (__fastcall **)(_QWORD *, struct IClassicWindow **))(*v63 + 8LL))(v63, &v60);
  if ( v22 < 0 )
  {
LABEL_92:
    if ( v60 )
      CClassicWindowManager::RemoveApplicationView(v50, (__int64)v60, 0);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v60 + 120LL))(v60) )
  {
    v56 = v60;
    if ( v60 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v60 + 8LL))(v60);
    v66 = (void **)v56;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v66);
    LODWORD(v67) = a6;
    CIAMGlobals::QueueViewManagementTask__lambda_9cd1b560a470dbb5c6e1d5da28bd3866___(v57, &v66);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v66);
    if ( v56 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v56 + 16LL))(v56);
  }
  v58 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v58 + 16LL))(v58);
  }
  if ( v35 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v35 + 16LL))(v35);
  return v22 >= 0;
}
