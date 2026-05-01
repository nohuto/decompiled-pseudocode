/*
 * XREFs of ?GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1@Z @ 0x1800E37A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800CA0DC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E3EA0 (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800E48C4 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEA.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18016D02C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CShellSnapComponent::GetAdjacentSnappedViews(
        CShellSnapComponent *this,
        struct IApplicationView *a2,
        int a3,
        struct IObjectArray **a4,
        struct IObjectArray **a5)
{
  int Instance; // eax
  int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  const struct _GUID *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  const struct _GUID *v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  struct IImmersiveMonitor *v26; // rdx
  int v27; // r14d
  __int64 *v28; // r15
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r8
  bool v32; // r9
  void *v33; // rbx
  __int64 (__fastcall *v34)(void *, _QWORD); // rsi
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r9
  bool v38; // cc
  void *v39; // rbx
  __int64 (__fastcall *v40)(void *, _QWORD); // rsi
  _QWORD *v41; // rax
  int v43; // [rsp+20h] [rbp-B1h]
  void *v44; // [rsp+30h] [rbp-A1h] BYREF
  void *v45; // [rsp+38h] [rbp-99h] BYREF
  SnapRectHelpers *v46; // [rsp+40h] [rbp-91h] BYREF
  __int64 v47; // [rsp+48h] [rbp-89h] BYREF
  int v48; // [rsp+50h] [rbp-81h]
  __int64 *v49; // [rsp+58h] [rbp-79h] BYREF
  unsigned __int64 v50; // [rsp+60h] [rbp-71h]
  __int64 v51; // [rsp+68h] [rbp-69h]
  __int64 v52; // [rsp+70h] [rbp-61h]
  int v53; // [rsp+78h] [rbp-59h]
  int v54; // [rsp+7Ch] [rbp-55h]
  int v55; // [rsp+80h] [rbp-51h]
  int v56; // [rsp+84h] [rbp-4Dh]
  unsigned int v57; // [rsp+88h] [rbp-49h]
  unsigned int v58; // [rsp+8Ch] [rbp-45h]
  unsigned int v59; // [rsp+90h] [rbp-41h]
  unsigned int v60; // [rsp+94h] [rbp-3Dh]
  __int64 v61; // [rsp+98h] [rbp-39h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-29h] BYREF
  __int64 *i; // [rsp+B0h] [rbp-21h]
  __int128 v65; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v66; // [rsp+C8h] [rbp-9h] BYREF
  int v67; // [rsp+D8h] [rbp+7h] BYREF
  int v68; // [rsp+DCh] [rbp+Bh]
  unsigned int v69; // [rsp+E0h] [rbp+Fh]
  int v70; // [rsp+E4h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v48 = a3;
  *a4 = 0LL;
  *a5 = 0LL;
  v47 = 0LL;
  Instance = CSnappedWindowModel_CreateInstance(0LL, *((_QWORD *)this + 13), *((_QWORD *)this + 12), 1LL);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C8,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)v9;
  }
  v10 = *(_QWORD *)a2;
  v46 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, SnapRectHelpers **))(v10 + 80))(a2, &v46);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CB,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v11);
LABEL_87:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v46);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
    return (unsigned int)v9;
  }
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, SnapRectHelpers *, __int64 **))(*(_QWORD *)v47 + 24LL))(v47, v46, &v49);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CE,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v12);
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v49);
    if ( v46 )
      (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    return (unsigned int)v9;
  }
  v44 = 0LL;
  v15 = CEnumerableObjectCollection::CreateInstance(v14, v13, &v44);
  v9 = v15;
  if ( v15 < 0 )
  {
    v16 = (unsigned int)v15;
    v17 = 721LL;
LABEL_85:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)v16);
LABEL_86:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44);
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v49);
    goto LABEL_87;
  }
  if ( (**(int (__fastcall ***)(void *, GUID *, struct IObjectArray **))v44)(
         v44,
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         a4) < 0 )
  {
    v9 = -2147467261;
    v16 = 2147500035LL;
    v17 = 722LL;
    goto LABEL_85;
  }
  v45 = 0LL;
  v20 = CEnumerableObjectCollection::CreateInstance(v19, v18, &v45);
  v9 = v20;
  if ( v20 < 0 )
  {
    v21 = (unsigned int)v20;
    v22 = 725LL;
    goto LABEL_82;
  }
  if ( (**(int (__fastcall ***)(void *, GUID *, struct IObjectArray **))v45)(
         v45,
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         a5) < 0 )
  {
    v9 = -2147467261;
    v21 = 2147500035LL;
    v22 = 726LL;
LABEL_82:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)v21);
LABEL_83:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v45);
    goto LABEL_86;
  }
  if ( v50 < 2 )
  {
    if ( v45 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v45 + 16LL))(v45);
    if ( v44 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v44 + 16LL))(v44);
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v49);
    if ( v46 )
      (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v46 + 16LL))(v46);
    goto LABEL_78;
  }
  LOBYTE(v23) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::__private_IsEnabledPreCheck(
    &`wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
    v23);
  if ( *((_QWORD *)this + 58) )
  {
    v66 = 0LL;
    v24 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)v46 + 88LL))(v46, &v66);
    v9 = v24;
    if ( v24 < 0 )
    {
      v21 = (unsigned int)v24;
      v22 = 739LL;
      goto LABEL_82;
    }
    v65 = 0LL;
    v25 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)a2 + 128LL))(a2, &v65);
    v9 = v25;
    if ( v25 < 0 )
    {
      v21 = (unsigned int)v25;
      v22 = 742LL;
      goto LABEL_82;
    }
    v27 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(v46, v26);
    v28 = v49;
    v29 = &v49[v50];
    for ( i = v29; ; v29 = i )
    {
      if ( v28 == v29 )
      {
        if ( v45 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v45 + 16LL))(v45);
        if ( v44 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v44 + 16LL))(v44);
        CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v49);
        if ( v46 )
          (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v46 + 16LL))(v46);
        goto LABEL_78;
      }
      v30 = *v28;
      v61 = v30;
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v30 + 88LL))(v30, a2) )
      {
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 48LL))(v30, &v67);
        v53 = v65 - v27;
        v60 = 2 * v27;
        v31 = v69;
        v54 = DWORD2(v65) - v27;
        v59 = 2 * v27;
        v55 = DWORD1(v65) - v27;
        v58 = 2 * v27;
        v56 = HIDWORD(v65) - v27;
        v57 = 2 * v27;
        v32 = v68 - (HIDWORD(v65) - v27) <= (unsigned int)(2 * v27);
        switch ( v48 )
        {
          case 10:
            v32 = v69 - ((_DWORD)v65 - v27) <= 2 * v27;
            break;
          case 11:
            v32 = v67 - (DWORD2(v65) - v27) <= (unsigned int)(2 * v27);
            break;
          case 12:
            v32 = v70 - (DWORD1(v65) - v27) <= (unsigned int)(2 * v27);
            break;
          case 15:
            break;
          default:
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2FB,
              (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)0x8000FFFFLL,
              v43);
        }
        if ( v32 )
        {
          v33 = v44;
          v34 = *(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v44 + 40LL);
          v35 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 112LL))(v30, &v62);
          v9 = v34(v33, *v35);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
          if ( v9 < 0 )
          {
            v36 = 768LL;
LABEL_46:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v36,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)(unsigned int)v9);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v61);
            goto LABEL_83;
          }
        }
        else
        {
          v37 = (unsigned int)(v67 - v53);
          if ( v48 == 10 )
          {
            if ( (unsigned int)v37 > v60 || v67 - ((int)v66 - v27) <= (unsigned int)(2 * v27) )
              goto LABEL_61;
          }
          else
          {
            if ( v48 == 11 )
            {
              if ( v69 - v54 > v59 )
                goto LABEL_61;
              v31 = v69 - (DWORD2(v66) - v27);
              v38 = (unsigned int)v31 <= 2 * v27;
            }
            else if ( v48 == 12 )
            {
              if ( v68 - v55 > v58 )
                goto LABEL_61;
              v38 = v68 - (DWORD1(v66) - v27) <= (unsigned int)(2 * v27);
            }
            else
            {
              if ( v70 - v56 > v57 )
                goto LABEL_61;
              v38 = v70 - (HIDWORD(v66) - v27) <= (unsigned int)(2 * v27);
            }
            if ( v38 )
              goto LABEL_61;
          }
          v39 = v45;
          v40 = *(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v45 + 40LL);
          v41 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v30 + 112LL))(
                            v30,
                            &v63,
                            v31,
                            v37);
          v9 = v40(v39, *v41);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v63);
          if ( v9 < 0 )
          {
            v36 = 802LL;
            goto LABEL_46;
          }
        }
      }
LABEL_61:
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      ++v28;
    }
  }
  if ( v45 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v45 + 16LL))(v45);
  if ( v44 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v44 + 16LL))(v44);
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v49);
  if ( v46 )
    (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v46 + 16LL))(v46);
LABEL_78:
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  return 0LL;
}
