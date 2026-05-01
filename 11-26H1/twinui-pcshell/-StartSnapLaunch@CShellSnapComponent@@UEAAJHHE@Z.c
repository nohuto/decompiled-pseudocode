/*
 * XREFs of ?StartSnapLaunch@CShellSnapComponent@@UEAAJHHE@Z @ 0x1805A2090
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180282C10 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??$_Try_emplace@AEBH$$V@?$_Hash@V?$_Umap_traits@HIV?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHI@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBHI@std@@PEAX@std@@_N@1@AEBH@Z @ 0x18059BB30 (--$_Try_emplace@AEBH$$V@-$_Hash@V-$_Umap_traits@HIV-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@.c)
 *     ??$emplace@U?$pair@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@?$_Hash@V?$_Umap_traits@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@HV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@1@@Z @ 0x18059C010 (--$emplace@U-$pair@HV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x18059D014 (--0-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18059D750 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18059D89C (--1-$test_data_control@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@1@XZ @ 0x18059DF20 (--C-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805A49F4 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV.c)
 *     ?find@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@2@AEBH@Z @ 0x1805A4BC0 (-find@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@H@std@@U-$eq.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CShellSnapComponent::StartSnapLaunch(CShellSnapComponent *this, int a2, int a3, char a4)
{
  _QWORD *v7; // rax
  float v8; // xmm7_4
  int v9; // edi
  float v10; // xmm6_4
  int v11; // ebx
  _DWORD *v12; // rcx
  int v13; // ebx
  __int64 v14; // rax
  const char *v15; // r9
  __int64 result; // rax
  float *v17; // [rsp+20h] [rbp-78h] BYREF
  void *v18; // [rsp+28h] [rbp-70h] BYREF
  __int128 v19; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  void *v22; // [rsp+A0h] [rbp+8h] BYREF
  int v23; // [rsp+A8h] [rbp+10h] BYREF
  int v24; // [rsp+B0h] [rbp+18h] BYREF

  v24 = a3;
  v23 = a2;
  v22 = 0LL;
  v7 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::ensure_data(&v22);
  tip2::details::shared_data<0,0,0>::start(*v7 + 8LL, &v19);
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::operator->(
                (__int64)&v22,
                (__int64 *)&v17)
           + 273) = a4 != 0;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>((void **)&v17);
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v19, (RTL_SRWLOCK *)this + 175);
  std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::find(
    (char *)this + 1416,
    &v17,
    &v23);
  try
  {
    if ( v17 == *((float **)this + 178) )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::operator->(
                    (__int64)&v22,
                    (__int64 *)&v17)
               + 272) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>((void **)&v17);
      tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((__int64 *)&v22);
    }
    else
    {
      v8 = v17[6];
      v9 = (int)(float)(v8 + v17[8]);
      v10 = v17[5];
      v11 = (int)(float)(v10 + v17[7]);
      v12 = (_DWORD *)*tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::operator->(
                         (__int64)&v22,
                         (__int64 *)&v17);
      v12[69] = (int)v10;
      v12[70] = (int)v8;
      v12[71] = v11;
      v12[72] = v9;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>((void **)&v17);
      LODWORD(v17) = a2;
      tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>(
        (__int64 *)&v18,
        (__int64)&v22);
      std::_Hash<std::_Umap_traits<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>,0>>::emplace<std::pair<int,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>(
        (float *)this + 370,
        (__int64)v20,
        (__int64)&v17);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>(&v18);
      v13 = v24;
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::operator->(
                     (__int64)&v22,
                     (__int64 *)&v17)
                + 328) = v13;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>((void **)&v17);
      v14 = std::_Hash<std::_Umap_traits<int,unsigned int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,unsigned int>>,0>>::_Try_emplace<int const &,>(
              (float *)this + 402,
              (__int64)v20,
              (unsigned __int8 *)&v24);
      ++*(_DWORD *)(*(_QWORD *)v14 + 20LL);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v19);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>(&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E7,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                           v15);
  }
  return result;
}
