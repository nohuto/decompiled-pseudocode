/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800444D0
 * Callers:
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18008799C (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180087A80 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180161290 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18017C750 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x180181868 (-SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z.c)
 *     ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x1801B26C0 (-SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z.c)
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x1801BA830 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x1801D2710 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x1801D28F0 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x1801E0900 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     _lambda_4963465e0f00482d68929271c70599ba_::operator() @ 0x18030805C (_lambda_4963465e0f00482d68929271c70599ba_--operator().c)
 *     _lambda_67a01f9610c8ee33e005e0a83cb8b51b_::operator() @ 0x180308140 (_lambda_67a01f9610c8ee33e005e0a83cb8b51b_--operator().c)
 *     _lambda_90c64e6b4e677faa5e1350e6dea894c9_::operator() @ 0x1803082E4 (_lambda_90c64e6b4e677faa5e1350e6dea894c9_--operator().c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180309240 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180043DB4 (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x1800453F4 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004597C (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1800EBED4 (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 *     ??_GRefAndObject@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAPEAXI@Z @ 0x1800EBF38 (--_GRefAndObject@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflect.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 **),
        unsigned int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  int v9; // esi
  __int64 v10; // r15
  void **v11; // rax
  void **v12; // rdi
  void **v13; // rsi
  bool v14; // di
  char *v15; // rax
  int *v16; // rax
  char *v17; // rax
  __int64 v18; // rbx
  bool v19; // r13
  __int64 v20; // rsi
  void **v21; // r12
  __int64 v22; // rax
  struct IObjectArray *v23; // rcx
  __int64 v24; // rcx
  void (__fastcall ***v25)(_QWORD, GUID *, __int64 **); // rcx
  __int64 v26; // rdi
  unsigned __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r14
  struct IObjectArray *v31; // rcx
  struct IObjectArray *v32; // rcx
  __int64 v33; // rcx
  void (__fastcall ***v34)(_QWORD, GUID *, __int64 **); // rcx
  struct IObjectArray *v35; // rcx
  unsigned __int64 v37; // rsi
  char *v38; // r13
  void *v39; // rbx
  HANDLE ProcessHeap; // rax
  void *v41; // rbx
  HANDLE v42; // rax
  void *v43; // rdi
  HANDLE v44; // rax
  int (__fastcall *v45)(_QWORD, GUID *, LPMALLOC *); // rbx
  int v46; // eax
  LPMALLOC v47; // rcx
  __int64 v48; // rcx
  char *v49; // rdx
  __int64 v50; // rdx
  LPMALLOC ppMalloc; // [rsp+20h] [rbp-E0h] BYREF
  struct IObjectArray *v52; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v53; // [rsp+30h] [rbp-D0h]
  __int64 v54; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C0h] BYREF
  char v56; // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall ***v57)(_QWORD, GUID *, __int64 **); // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v58; // [rsp+58h] [rbp-A8h]
  __int64 v59; // [rsp+60h] [rbp-A0h] BYREF
  struct IObjectArray *v60; // [rsp+68h] [rbp-98h] BYREF
  void **v61; // [rsp+70h] [rbp-90h] BYREF
  int v62; // [rsp+78h] [rbp-88h] BYREF
  char v63; // [rsp+7Ch] [rbp-84h]
  __int128 v64; // [rsp+80h] [rbp-80h]
  __int128 v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  LPVOID lpMem[2]; // [rsp+B0h] [rbp-50h]
  int v69; // [rsp+C0h] [rbp-40h]
  __int128 v70; // [rsp+C8h] [rbp-38h]
  __int128 v71; // [rsp+D8h] [rbp-28h]
  __int128 v72; // [rsp+E8h] [rbp-18h]
  __int128 v73; // [rsp+F8h] [rbp-8h]
  __int128 v74; // [rsp+108h] [rbp+8h]
  __int128 v75; // [rsp+118h] [rbp+18h]
  __int128 v76; // [rsp+128h] [rbp+28h]
  __int128 v77; // [rsp+138h] [rbp+38h]
  __int128 v78; // [rsp+148h] [rbp+48h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  __int128 v80; // [rsp+160h] [rbp+60h]
  int v81; // [rsp+170h] [rbp+70h]
  __int64 v82; // [rsp+178h] [rbp+78h]
  int *v83; // [rsp+180h] [rbp+80h]
  char *v84; // [rsp+188h] [rbp+88h]
  _QWORD v85[3]; // [rsp+190h] [rbp+90h] BYREF
  int v86; // [rsp+1A8h] [rbp+A8h]
  _DWORD *v87; // [rsp+1B0h] [rbp+B0h]
  void (__fastcall ***v88)(_QWORD, GUID *, __int64 **); // [rsp+1C0h] [rbp+C0h]
  unsigned int v89; // [rsp+1C8h] [rbp+C8h]
  __int64 v90; // [rsp+1D0h] [rbp+D0h]
  struct IObjectArray *v91; // [rsp+1D8h] [rbp+D8h]
  void **v92; // [rsp+1E0h] [rbp+E0h] BYREF
  int v93; // [rsp+1E8h] [rbp+E8h] BYREF
  char v94; // [rsp+1ECh] [rbp+ECh]
  __int128 v95; // [rsp+1F0h] [rbp+F0h]
  __int128 v96; // [rsp+200h] [rbp+100h]
  unsigned int v97; // [rsp+210h] [rbp+110h]
  __int64 v98; // [rsp+218h] [rbp+118h]
  void *v99; // [rsp+220h] [rbp+120h]
  char v100; // [rsp+228h] [rbp+128h]
  int v101; // [rsp+230h] [rbp+130h]
  _OWORD v102[9]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v103; // [rsp+2C8h] [rbp+1C8h]
  __int128 v104; // [rsp+2D0h] [rbp+1D0h]
  int v105; // [rsp+2E0h] [rbp+1E0h]
  __int64 v106; // [rsp+2E8h] [rbp+1E8h]
  int *v107; // [rsp+2F0h] [rbp+1F0h]
  void *v108; // [rsp+2F8h] [rbp+1F8h] BYREF
  _QWORD v109[3]; // [rsp+300h] [rbp+200h] BYREF
  int v110; // [rsp+318h] [rbp+218h]
  _DWORD *v111; // [rsp+320h] [rbp+220h]
  void **v112; // [rsp+330h] [rbp+230h] BYREF
  int v113; // [rsp+338h] [rbp+238h] BYREF
  char v114; // [rsp+33Ch] [rbp+23Ch]
  __int128 v115; // [rsp+340h] [rbp+240h]
  __int128 v116; // [rsp+350h] [rbp+250h]
  int v117; // [rsp+360h] [rbp+260h] BYREF
  const char *v118; // [rsp+368h] [rbp+268h]
  void *v119; // [rsp+370h] [rbp+270h]
  char v120; // [rsp+378h] [rbp+278h]
  int v121; // [rsp+380h] [rbp+280h]
  _OWORD v122[9]; // [rsp+388h] [rbp+288h] BYREF
  void *v123; // [rsp+418h] [rbp+318h]
  __int128 v124; // [rsp+420h] [rbp+320h]
  int v125; // [rsp+430h] [rbp+330h]
  __int64 v126; // [rsp+438h] [rbp+338h]
  int *v127; // [rsp+440h] [rbp+340h]
  void *v128[4]; // [rsp+448h] [rbp+348h] BYREF
  int v129; // [rsp+468h] [rbp+368h]
  int *v130; // [rsp+470h] [rbp+370h]
  wil::details::in1diag3 *retaddr; // [rsp+4D8h] [rbp+3D8h]

  v113 = 0;
  v114 = 0;
  v120 = 0;
  v117 = 0;
  v118 = "RaiseApplicationViewChange";
  v119 = 0LL;
  v121 = 0;
  v124 = 0LL;
  memset_0(v122, 0, 0x98uLL);
  v125 = 1;
  v126 = 0LL;
  v127 = &v113;
  v128[0] = 0LL;
  v128[1] = 0LL;
  v128[2] = &v112;
  v128[3] = 0LL;
  v129 = 0;
  v130 = &v117;
  v112 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(
    (__int64)&v112,
    a2,
    a3,
    a4);
  v52 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(a1 + 88), &v52);
  v9 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    if ( a3 == 7 )
    {
      ppMalloc = 0LL;
      v45 = (int (__fastcall *)(_QWORD, GUID *, LPMALLOC *))**a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppMalloc);
      if ( v45(a2, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &ppMalloc) >= 0 )
      {
        v46 = ((__int64 (__fastcall *)(LPMALLOC, _QWORD))ppMalloc->lpVtbl->Free)(ppMalloc, 0LL);
        if ( v46 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x270,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v46,
            (int)ppMalloc);
      }
      v47 = ppMalloc;
      if ( ppMalloc )
      {
        ppMalloc = 0LL;
        ((void (__fastcall *)(LPMALLOC))v47->lpVtbl->Release)(v47);
      }
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 456) + 40LL))(*(_QWORD *)(a1 + 456), a2, a3);
    v10 = *(_QWORD *)(a1 + 536);
    if ( a2 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 **)))(*a2)[1])(a2);
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v88 = a2;
    v89 = a3;
    v90 = a4;
    v91 = v52;
    if ( v52 )
      ((void (__fastcall *)(struct IObjectArray *))v52->lpVtbl->AddRef)(v52);
    v92 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v93 = 0;
    v94 = 0;
    v100 = 0;
    v97 = 0;
    v98 = 0LL;
    v99 = 0LL;
    v101 = 0;
    v104 = 0LL;
    memset_0(v102, 0, 0x98uLL);
    v105 = 1;
    v106 = 0LL;
    v107 = &v93;
    v108 = 0LL;
    v109[0] = 0LL;
    v109[1] = &v92;
    v109[2] = 0LL;
    v110 = 0;
    v111 = 0LL;
    if ( v128[0] )
    {
      v107 = v127;
      wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
        &v108,
        v128);
    }
    else
    {
      v11 = (void **)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v11;
      if ( v11 )
      {
        *(_DWORD *)v11 = 1;
        *((_DWORD *)v11 + 2) = 0;
        *((_BYTE *)v11 + 12) = 0;
        *((_DWORD *)v11 + 2) = v113;
        *((_BYTE *)v11 + 12) = v114;
        *((_OWORD *)v11 + 1) = v115;
        *((_OWORD *)v11 + 2) = v116;
        v113 = 0;
        v114 = 0;
        *((_OWORD *)v11 + 3) = 0LL;
        *((_OWORD *)v11 + 4) = 0LL;
        *((_DWORD *)v11 + 12) = v117;
        v11[7] = (void *)v118;
        v13 = v11 + 8;
        if ( *((_BYTE *)v11 + 72) )
        {
          v39 = *v13;
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v39);
          *((_BYTE *)v12 + 72) = 0;
        }
        *v13 = 0LL;
        *v13 = v119;
        v119 = 0LL;
        *((_BYTE *)v12 + 72) = v120;
        v120 = 0;
        *((_DWORD *)v12 + 20) = v121;
        *(_OWORD *)(v12 + 11) = v122[0];
        *(_OWORD *)(v12 + 13) = v122[1];
        *(_OWORD *)(v12 + 15) = v122[2];
        *(_OWORD *)(v12 + 17) = v122[3];
        *(_OWORD *)(v12 + 19) = v122[4];
        *(_OWORD *)(v12 + 21) = v122[5];
        *(_OWORD *)(v12 + 23) = v122[6];
        *(_OWORD *)(v12 + 25) = v122[7];
        *(_OWORD *)(v12 + 27) = v122[8];
        v12[29] = v123;
        *((_OWORD *)v12 + 15) = v124;
        v124 = 0LL;
        *((_DWORD *)v12 + 64) = v125;
        v12[33] = 0LL;
        if ( v108 && _InterlockedExchangeAdd((volatile signed __int32 *)v108, 0xFFFFFFFF) == 1 && v108 )
          wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::`scalar deleting destructor'(v108);
        v108 = v12;
        v107 = (int *)((unsigned __int64)(v12 + 1) & -(__int64)(v12 != 0LL));
        if ( v128[0] && _InterlockedExchangeAdd((volatile signed __int32 *)v128[0], 0xFFFFFFFF) == 1 && v128[0] )
          wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::`scalar deleting destructor'(v128[0]);
        v128[0] = v108;
        if ( v108 )
          _InterlockedIncrement((volatile signed __int32 *)v108);
        v127 = v107;
        v130 = v107 + 10;
      }
    }
    v111 = v107 + 10;
    v92 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    v57 = v88;
    v88 = 0LL;
    v58 = v89;
    v59 = v90;
    v90 = 0LL;
    v60 = v91;
    v91 = 0LL;
    v14 = v110 != 0;
    v61 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v62 = v93;
    v63 = v94;
    v64 = v95;
    v65 = v96;
    v93 = 0;
    v94 = 0;
    *(_OWORD *)lpMem = 0LL;
    v66 = v97;
    v67 = v98;
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) )
    {
      v41 = lpMem[0];
      v42 = GetProcessHeap();
      HeapFree(v42, 0, v41);
    }
    lpMem[0] = v99;
    v99 = 0LL;
    LOBYTE(lpMem[1]) = v100;
    v100 = 0;
    v69 = v101;
    v70 = v102[0];
    v71 = v102[1];
    v72 = v102[2];
    v73 = v102[3];
    v74 = v102[4];
    v75 = v102[5];
    v76 = v102[6];
    v77 = v102[7];
    v78 = v102[8];
    v79 = v103;
    v80 = v104;
    v104 = 0LL;
    v81 = v105;
    v82 = 0LL;
    v15 = (char *)v108;
    v84 = (char *)v108;
    v108 = 0LL;
    v85[0] = 0LL;
    v85[1] = &v61;
    v85[2] = 0LL;
    v86 = 0;
    v87 = 0LL;
    if ( v14 )
    {
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v85);
      v15 = v84;
    }
    if ( v15 )
      v16 = (int *)(v15 + 8);
    else
      v16 = &v62;
    v83 = v16;
    v87 = v16 + 10;
    v107 = &v93;
    if ( v110 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v109);
    v61 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
    v17 = (char *)operator new(0x198uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = (__int64)v17;
    if ( v17 )
    {
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v17 + 8));
      *(_DWORD *)(v18 + 44) = 1;
      *(_QWORD *)v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
      *(_QWORD *)(v18 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)(v18 + 48) = 0LL;
      if ( (void (__fastcall ****)(_QWORD, GUID *, __int64 **))(v18 + 48) != &v57 )
      {
        *(_QWORD *)(v18 + 48) = v57;
        v57 = 0LL;
      }
      *(_DWORD *)(v18 + 56) = v58;
      *(_QWORD *)(v18 + 64) = 0LL;
      if ( (__int64 *)(v18 + 64) != &v59 )
      {
        *(_QWORD *)(v18 + 64) = v59;
        v59 = 0LL;
      }
      *(_QWORD *)(v18 + 72) = 0LL;
      if ( (struct IObjectArray **)(v18 + 72) != &v60 )
      {
        *(_QWORD *)(v18 + 72) = v60;
        v60 = 0LL;
      }
      v19 = v86 != 0;
      *(_QWORD *)(v18 + 80) = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
      v20 = v18 + 88;
      *(_DWORD *)(v18 + 88) = 0;
      *(_BYTE *)(v18 + 92) = 0;
      *(_DWORD *)(v18 + 88) = v62;
      *(_BYTE *)(v18 + 92) = v63;
      *(_OWORD *)(v18 + 96) = v64;
      *(_OWORD *)(v18 + 112) = v65;
      v62 = 0;
      v63 = 0;
      *(_OWORD *)(v18 + 128) = 0LL;
      *(_OWORD *)(v18 + 144) = 0LL;
      *(_DWORD *)(v18 + 128) = v66;
      *(_QWORD *)(v18 + 136) = v67;
      v21 = (void **)(v18 + 144);
      if ( *(_BYTE *)(v18 + 152) )
      {
        v43 = *v21;
        v44 = GetProcessHeap();
        HeapFree(v44, 0, v43);
        *(_BYTE *)(v18 + 152) = 0;
      }
      *v21 = 0LL;
      *v21 = lpMem[0];
      lpMem[0] = 0LL;
      *(_BYTE *)(v18 + 152) = lpMem[1];
      LOBYTE(lpMem[1]) = 0;
      *(_DWORD *)(v18 + 160) = v69;
      *(_OWORD *)(v18 + 168) = v70;
      *(_OWORD *)(v18 + 184) = v71;
      *(_OWORD *)(v18 + 200) = v72;
      *(_OWORD *)(v18 + 216) = v73;
      *(_OWORD *)(v18 + 232) = v74;
      *(_OWORD *)(v18 + 248) = v75;
      *(_OWORD *)(v18 + 264) = v76;
      *(_OWORD *)(v18 + 280) = v77;
      *(_OWORD *)(v18 + 296) = v78;
      *(_QWORD *)(v18 + 312) = v79;
      *(_OWORD *)(v18 + 320) = v80;
      v80 = 0LL;
      *(_DWORD *)(v18 + 336) = v81;
      *(_QWORD *)(v18 + 344) = 0LL;
      *(_QWORD *)(v18 + 360) = v84;
      v84 = 0LL;
      *(_QWORD *)(v18 + 368) = 0LL;
      *(_QWORD *)(v18 + 376) = v18 + 80;
      *(_QWORD *)(v18 + 384) = 0LL;
      *(_DWORD *)(v18 + 392) = 0;
      *(_QWORD *)(v18 + 400) = 0LL;
      if ( v19 )
        wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(v18 + 368));
      v22 = *(_QWORD *)(v18 + 360);
      if ( v22 )
        v20 = v22 + 8;
      *(_QWORD *)(v18 + 352) = v20;
      *(_QWORD *)(v18 + 400) = v20 + 40;
      v83 = &v62;
      if ( v86 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v85);
      *(_QWORD *)(v18 + 80) = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
      *(_QWORD *)v18 = off_18070CC50;
      *(_QWORD *)(v18 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    }
    else
    {
      v18 = 0LL;
    }
    v55 = v18;
    ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)&v61);
    v23 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v23->lpVtbl->Release)(v23);
    }
    v24 = v59;
    if ( v59 )
    {
      v59 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 **)))(*v25)[2])(v25);
    }
    if ( !v18 )
    {
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)0x8007000ELL);
LABEL_68:
      ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)&v92);
      v32 = v91;
      if ( v91 )
      {
        v91 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v32->lpVtbl->Release)(v32);
      }
      v33 = v90;
      if ( v90 )
      {
        v90 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v34 = v88;
      if ( v88 )
      {
        v88 = 0LL;
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 **)))(*v34)[2])(v34);
      }
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x28A,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v52);
      }
      else
      {
        v35 = v52;
        if ( v52 )
        {
          v52 = 0LL;
          ((void (__fastcall *)(struct IObjectArray *))v35->lpVtbl->Release)(v35);
        }
        v9 = 0;
      }
      goto LABEL_78;
    }
    AcquireSRWLockExclusive((PSRWLOCK)(v10 + 80));
    v54 = v10 + 80;
    if ( !*(_QWORD *)(v10 + 40) )
    {
      v9 = -2147467260;
      v50 = 105LL;
      goto LABEL_114;
    }
    v26 = v18;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v9 = 0;
    v27 = *(_QWORD *)(v10 + 72);
    v28 = *(_QWORD *)(v10 + 56);
    if ( v28 == v27 )
    {
      v29 = v28 + 1;
      v9 = -2147024774;
      if ( v29 > 0xFFFFFFFE || (v9 = 0, v29 <= v27) )
      {
        if ( v9 < 0 )
          goto LABEL_83;
      }
      else
      {
        v53 = 0LL;
        v30 = 2 * v27;
        if ( !is_mul_ok(v27, 2uLL) )
          goto LABEL_82;
        if ( v27 > 0x1000 )
          v30 = v27 + 4096;
        if ( v29 <= v30 )
        {
          if ( v30 > 0xFFFFFFFE )
            v30 = 4294967294LL;
        }
        else
        {
          v30 = v29;
        }
        v53 = 0LL;
        v37 = 8 * v30;
        if ( !is_mul_ok(v30, 8uLL) )
        {
LABEL_82:
          v9 = -2147024362;
LABEL_83:
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          if ( v9 >= 0 )
          {
            PostMessageW(*(HWND *)(v10 + 40), 0x401u, 0LL, 0LL);
            if ( v10 != -80 )
              ReleaseSRWLockExclusive((PSRWLOCK)(v10 + 80));
            v9 = 0;
            goto LABEL_66;
          }
          v50 = 106LL;
LABEL_114:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v50,
            (int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
            (const char *)(unsigned int)v9);
          Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v54);
LABEL_66:
          if ( v9 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D,
              (int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
              (const char *)(unsigned int)v9);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
          }
          else
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            v9 = 0;
          }
          goto LABEL_68;
        }
        v38 = (char *)CoTaskMemRealloc(*(LPVOID *)(v10 + 48), 8 * v30);
        if ( !v38 )
        {
          v9 = -2147024882;
          goto LABEL_83;
        }
        ppMalloc = 0LL;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v53 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v38);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          if ( v53 > v37 )
            memset_0(&v38[v37], 0, v53 - v37);
        }
        v9 = 0;
        *(_QWORD *)(v10 + 72) = v30;
        *(_QWORD *)(v10 + 48) = v38;
      }
    }
    v48 = *(_QWORD *)(v10 + 56) + 1LL;
    *(_QWORD *)(v10 + 56) = v48;
    v49 = (char *)(*(_QWORD *)(v10 + 48) - 8LL + 8 * v48);
    if ( v49 )
    {
      *(_QWORD *)v49 = 0LL;
      if ( v49 != &v56 )
      {
        *(_QWORD *)v49 = v18;
        v26 = 0LL;
      }
    }
    goto LABEL_83;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x268,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)CallbackArray);
  v31 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v31->lpVtbl->Release)(v31);
  }
LABEL_78:
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)&v112);
  return (unsigned int)v9;
}
