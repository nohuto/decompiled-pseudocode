/*
 * XREFs of ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x18028DDE4
 * Callers:
 *     ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1801F7330 (-HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180201B20 (-HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802F2350 (-UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180023B58 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180023D68 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x1800E64A0 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     ?_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1801904BC (-_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180286CC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAAX_NW4Report.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=21
char __fastcall CClassicWindowManager::_HandleDestructionOrHide(
        CClassicWindowManager *a1,
        __int64 a2,
        int a3,
        unsigned int a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // r14
  unsigned __int64 v10; // r12
  unsigned __int64 i; // r15
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct IClassicWindow **); // rcx
  int v16; // eax
  __int64 v17; // r9
  char v18; // bl
  __int64 v19; // rcx
  int v20; // r8d
  unsigned __int64 v21; // r15
  unsigned __int64 j; // rdi
  __int64 v23; // rbx
  int v24; // r12d
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rcx
  unsigned __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct IClassicWindow *v34; // rcx
  __int64 v36; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-28h] BYREF
  __int64 v38; // [rsp+30h] [rbp-20h]
  __int64 v39; // [rsp+38h] [rbp-18h]
  __int64 v40; // [rsp+40h] [rbp-10h]
  struct IClassicWindow *v41; // [rsp+90h] [rbp+40h] BYREF
  __int64 v42; // [rsp+98h] [rbp+48h] BYREF
  int v43; // [rsp+A0h] [rbp+50h]

  v42 = a2;
  v41 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v41);
  v41 = 0LL;
  v37 = *((_QWORD *)a1 + 25);
  v9 = (_QWORD *)((char *)a1 + 184);
  v38 = 0LL;
  v10 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)a1 + 25); ++i )
  {
    v39 = 0LL;
    v12 = *(_QWORD *)(*((_QWORD *)a1 + 24) + 8 * i);
    v40 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v36 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
           v12,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v36) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 192LL))(v36, v42) )
    {
      v43 = 0;
    }
    else
    {
      v43 = -1;
    }
    v13 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( !v43 )
    {
      v10 = i;
      v14 = 0;
      goto LABEL_15;
    }
  }
  v14 = -2147319765;
LABEL_15:
  if ( v14 < 0
    || (v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IClassicWindow **))(*((_QWORD *)a1 + 24) + 8 * v10),
        v16 = (**v15)(v15, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v41),
        v37 = v10,
        v16 < 0) )
  {
    v18 = 0;
    if ( a3 == 1 )
    {
      v40 = 0LL;
      v21 = 0LL;
      for ( j = 0LL; j < *((_QWORD *)a1 + 30); ++j )
      {
        v39 = 0LL;
        v23 = *(_QWORD *)(*((_QWORD *)a1 + 29) + 8 * j);
        v38 = v23;
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        v36 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v23)(
               v23,
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v36) >= 0
          && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 192LL))(v36, v42) )
        {
          v24 = 0;
        }
        else
        {
          v24 = -1;
        }
        v25 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( !v24 )
        {
          v21 = j;
          v26 = 0;
          goto LABEL_43;
        }
      }
      v26 = -2147319765;
LABEL_43:
      if ( v26 < 0 )
      {
        v18 = 0;
        goto LABEL_51;
      }
      v18 = 1;
      CClassicWindowManager::RemoveApplicationView(v7, *(_QWORD *)(*((_QWORD *)a1 + 29) + 8 * v21), 0);
      v27 = *((_QWORD *)a1 + 28);
      v28 = v21;
      v29 = (_QWORD *)((char *)a1 + 224);
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_51;
      if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
                  (__int64)a1 + 224,
                  &v42,
                  v8,
                  &v37) < 0 )
        goto LABEL_51;
      v18 = 1;
      v30 = v37;
      v31 = *(_QWORD *)(*((_QWORD *)a1 + 29) + 8 * v37);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 208LL))(v31, a4);
      CClassicWindowManager::_ChangeWindowType(
        a1,
        *(struct IClassicWindow **)(*((_QWORD *)a1 + 29) + 8 * v30),
        (a4 & 1) << 14);
      v32 = *(_QWORD *)(*((_QWORD *)a1 + 29) + 8 * v30);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v32 + 152LL))(v32) )
        goto LABEL_51;
      CClassicWindowManager::RemoveApplicationView(v33, *(_QWORD *)(*((_QWORD *)a1 + 29) + 8 * v30), 0);
      v27 = *((_QWORD *)a1 + 28);
      v28 = v30;
      v29 = (_QWORD *)((char *)a1 + 224);
    }
    (*(void (__fastcall **)(_QWORD *, unsigned __int64))(v27 + 16))(v29, v28);
    goto LABEL_51;
  }
  v18 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl,
    1u,
    v8,
    v17);
  if ( a3 == 2 )
  {
    (*(void (__fastcall **)(struct IClassicWindow *, _QWORD))(*(_QWORD *)v41 + 208LL))(v41, a4);
    CClassicWindowManager::_ChangeWindowType(a1, v41, (a4 & 1) << 14);
    if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v41 + 152LL))(v41) || !v10 )
      goto LABEL_51;
    a3 = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v41 + 136LL))(v41) )
    CClassicWindowManager::_HandleOwnerBecameDestroyed(a1, v41);
  if ( a3
    || (*(int (__fastcall **)(_QWORD *, struct IClassicWindow **))(*((_QWORD *)a1 + 28) + 8LL))((_QWORD *)a1 + 28, &v41) < 0 )
  {
    (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v9 + 16LL))((_QWORD *)a1 + 23, v10);
    v20 = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v9 + 16LL))((_QWORD *)a1 + 23, v10);
    v20 = 1;
  }
  CClassicWindowManager::RemoveApplicationView(v19, (__int64)v41, v20);
LABEL_51:
  v34 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v34 + 16LL))(v34);
  }
  return v18;
}
