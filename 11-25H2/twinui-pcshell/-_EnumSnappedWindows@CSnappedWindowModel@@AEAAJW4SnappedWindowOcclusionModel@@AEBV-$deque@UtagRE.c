/*
 * XREFs of ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800560EC
 * Callers:
 *     ?RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800BCEE8 (-RuntimeClassInitialize@CSnappedWindowModel@@QEAAJPEAUIApplicationView@@PEAUIApplic_ea_1800BCEE8.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18002A100 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ProcessView@CSnapComponentTelemetry@@QEAA@XZ @ 0x180048098 (--1ProcessView@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800480C4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ @ 0x180048260 (--1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180048A9C (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180048B08 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180048D58 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StartActivity@EnumSnappedWindows@CSnapComponentTelemetry@@QEAAXXZ @ 0x18004AAF0 (-StartActivity@EnumSnappedWindows@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180054DFC (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180056C00 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?IsTopMostView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180056CA0 (-IsTopMostView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ProcessView@CSnapComponentTelemetry@@QEAAXXZ @ 0x180056D64 (-StartActivity@ProcessView@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005737C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x180057798 (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180088FA8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C860 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008F5F8 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008F638 (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1800D973C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DAFDC (-s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEA.c)
 *     ?IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z @ 0x18012CAC8 (-IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z.c)
 *     ?IntersectsWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x1801E314C (-IntersectsWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8C48 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z @ 0x1805812DC (-InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z.c)
 *     ?IsEqualWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x18058D46C (-IsEqualWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CSnappedWindowModel::_EnumSnappedWindows(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  int v4; // r15d
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  const struct _GUID *v9; // rdx
  int v10; // ecx
  int Instance; // eax
  __int64 v12; // rbx
  int v13; // eax
  struct IApplicationView *v14; // rdx
  ApplicationViewHelpers *v15; // rbx
  ApplicationViewHelpers *v16; // rdi
  int v17; // edi
  int v18; // eax
  struct IApplicationView *v19; // rdx
  int v20; // eax
  int (__fastcall *v21)(ApplicationViewHelpers *, SnapRectHelpers **); // rdi
  struct IApplicationView *v22; // rdx
  bool IsSnappedWindow; // r13
  struct IImmersiveMonitor *v24; // rdx
  __int64 v25; // r9
  unsigned int v26; // r15d
  int v27; // eax
  unsigned int v28; // edi
  SnapRectHelpers *v29; // rcx
  _QWORD *v30; // rdi
  int IsUnoccluded; // eax
  char v32; // si
  const struct _GUID *v33; // r8
  int v34; // eax
  struct IApplicationViewPosition *v35; // rcx
  SnapRectHelpers *v36; // rcx
  struct IApplicationView *v37; // rcx
  __int64 v38; // rcx
  SnapRectHelpers *v40; // rcx
  struct IApplicationView *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  struct IApplicationViewPosition *v45; // rcx
  SnapRectHelpers *v46; // rcx
  __int64 v47; // rcx
  struct IApplicationViewPosition **v48; // rdx
  int (__fastcall *v49)(ApplicationViewHelpers *, unsigned __int16 **); // rdi
  int (__fastcall *v50)(ApplicationViewHelpers *, GUID *, struct IApplicationViewPosition **); // rdi
  unsigned __int64 v51; // rdx
  unsigned __int8 v52; // cl
  struct IApplicationViewPosition *v53; // rbx
  __int64 v54; // rcx
  CSnapComponentTelemetry *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int128 *v59; // rcx
  __int128 v60; // xmm6
  __int64 v61; // rax
  __int64 v62; // rax
  bool *v63; // [rsp+28h] [rbp-E0h]
  __int64 v64; // [rsp+48h] [rbp-C0h] BYREF
  struct IApplicationViewPosition *v65; // [rsp+50h] [rbp-B8h] BYREF
  SnapRectHelpers *v66; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A8h] BYREF
  struct IApplicationView *v68; // [rsp+68h] [rbp-A0h] BYREF
  int v69[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v70; // [rsp+78h] [rbp-90h]
  unsigned __int16 *v71[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v72; // [rsp+98h] [rbp-70h]
  __int64 v73; // [rsp+A8h] [rbp-60h] BYREF
  int v74; // [rsp+B0h] [rbp-58h] BYREF
  int v75; // [rsp+B8h] [rbp-50h] BYREF
  struct IUnknown *v76; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v77; // [rsp+C8h] [rbp-40h]
  __int64 v78; // [rsp+D0h] [rbp-38h]
  struct IUnknown *v79; // [rsp+D8h] [rbp-30h] BYREF
  int v80; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v82; // [rsp+F0h] [rbp-18h]
  RECT rcSrc2; // [rsp+F8h] [rbp-10h] BYREF
  RECT rcSrc1; // [rsp+108h] [rbp+0h] BYREF
  void **v85; // [rsp+118h] [rbp+10h] BYREF
  int v86; // [rsp+120h] [rbp+18h] BYREF
  char v87; // [rsp+124h] [rbp+1Ch]
  int v88; // [rsp+148h] [rbp+40h] BYREF
  const char *v89; // [rsp+150h] [rbp+48h]
  __int64 v90; // [rsp+158h] [rbp+50h]
  char v91; // [rsp+160h] [rbp+58h]
  int v92; // [rsp+168h] [rbp+60h]
  char v93[152]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v94; // [rsp+208h] [rbp+100h]
  __int64 v95; // [rsp+210h] [rbp+108h]
  int v96; // [rsp+218h] [rbp+110h]
  __int64 v97; // [rsp+220h] [rbp+118h]
  int *v98; // [rsp+228h] [rbp+120h]
  volatile signed __int32 *v99; // [rsp+230h] [rbp+128h] BYREF
  _QWORD v100[3]; // [rsp+238h] [rbp+130h] BYREF
  int v101; // [rsp+250h] [rbp+148h]
  int *v102; // [rsp+258h] [rbp+150h]
  void **v103; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v104[272]; // [rsp+270h] [rbp+168h] BYREF
  volatile signed __int32 *v105; // [rsp+380h] [rbp+278h] BYREF
  _BYTE v106[48]; // [rsp+388h] [rbp+280h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+400h] [rbp+2F8h]

  v78 = a3;
  v69[1] = a2;
  v3 = a1;
  v70 = a1;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v103,
    (__int64)"EnumSnappedWindows");
  v103 = &CSnapComponentTelemetry::EnumSnappedWindows::`vftable';
  CSnapComponentTelemetry::EnumSnappedWindows::StartActivity((CSnapComponentTelemetry::EnumSnappedWindows *)&v103);
  v4 = 0;
  v67 = 0LL;
  v5 = *(_QWORD *)(v3 + 24);
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v67);
  v7 = v6(v5, &v67);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
      (const char *)(unsigned int)v7);
    v43 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v103 = &CSnapComponentTelemetry::EnumSnappedWindows::`vftable';
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v103);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v106);
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v105);
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v104);
    return v8;
  }
  v68 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v68);
  Instance = CEnumerableObjectCollection::CreateInstance(v10, v9, (void **)&v68);
  v8 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
      (const char *)(unsigned int)Instance);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v68);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v67);
    CSnapComponentTelemetry::EnumSnappedWindows::~EnumSnappedWindows((CSnapComponentTelemetry::EnumSnappedWindows *)&v103);
    return v8;
  }
  v12 = v67;
  v73 = v67;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v73);
  v74 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 24LL))(v12, &v74);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v13);
  v75 = 0;
  v76 = 0LL;
  v77 = &v73;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v75);
  v80 = v74;
  v81 = 0LL;
  v82 = &v73;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v80);
  while ( 1 )
  {
    if ( v75 == v80 && v77 == v82 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v81);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v76);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v103);
      v37 = v68;
      if ( v68 )
      {
        v68 = 0LL;
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = v67;
      if ( v67 )
      {
        v67 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v103 = &CSnapComponentTelemetry::EnumSnappedWindows::`vftable';
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v103);
      wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v106);
      wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v105);
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v104);
      return 0LL;
    }
    v15 = (ApplicationViewHelpers *)v76;
    v79 = v76;
    if ( v76 )
      ((void (__fastcall *)(struct IUnknown *))v76->lpVtbl->AddRef)(v76);
    v69[0] = 0;
    v16 = *(ApplicationViewHelpers **)(v3 + 32);
    if ( v15 && v16 )
    {
      if ( v15 == v16 )
        goto LABEL_32;
      v71[0] = 0LL;
      v65 = 0LL;
      if ( (**(int (__fastcall ***)(ApplicationViewHelpers *, GUID *, unsigned __int16 **))v15)(
             v15,
             &GUID_00000000_0000_0000_c000_000000000046,
             v71) < 0 )
        goto LABEL_17;
      v17 = (**(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, struct IApplicationViewPosition **))v16)(
              v16,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v65);
      if ( v17 >= 0 )
        (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)v65 + 16LL))(v65);
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v71[0] + 16LL))(v71[0]);
      if ( v17 < 0 || (v18 = 1, (struct IApplicationViewPosition *)v71[0] != v65) )
LABEL_17:
        v18 = 0;
      if ( v18 )
        goto LABEL_32;
    }
    if ( !ApplicationViewHelpers::CanMaximizeView(v15, v14) || ApplicationViewHelpers::IsTopMostView(v15, v19) )
      goto LABEL_32;
    v20 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, int *))(*(_QWORD *)v15 + 216LL))(v15, v69);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x71,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
        (const char *)(unsigned int)v20);
LABEL_32:
      if ( v15 )
        (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v15 + 16LL))(v15);
      goto LABEL_34;
    }
    if ( !v69[0] )
      goto LABEL_32;
    v86 = 0;
    v87 = 0;
    v91 = 0;
    v88 = 0;
    v89 = "ProcessView";
    v90 = 0LL;
    v92 = 0;
    v94 = 0LL;
    v95 = 0LL;
    memset_0(v93, 0, sizeof(v93));
    v96 = 1;
    v97 = 0LL;
    v98 = &v86;
    v99 = 0LL;
    v100[0] = 0LL;
    v100[1] = &v85;
    v100[2] = 0LL;
    v101 = 0;
    v102 = &v88;
    v85 = &CSnapComponentTelemetry::ProcessView::`vftable';
    CSnapComponentTelemetry::ProcessView::StartActivity((CSnapComponentTelemetry::ProcessView *)&v85);
    v66 = 0LL;
    v21 = *(int (__fastcall **)(ApplicationViewHelpers *, SnapRectHelpers **))(*(_QWORD *)v15 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v66);
    if ( v21(v15, &v66) >= 0 )
      break;
    v65 = 0LL;
    v71[0] = 0LL;
    v71[1] = 0LL;
    v72 = 0LL;
    v49 = *(int (__fastcall **)(ApplicationViewHelpers *, unsigned __int16 **))(*(_QWORD *)v15 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v71);
    v71[1] = (unsigned __int16 *)-1LL;
    v72 = -1LL;
    if ( v49(v15, v71) >= 0 )
    {
      v50 = *(int (__fastcall **)(ApplicationViewHelpers *, GUID *, struct IApplicationViewPosition **))(*(_QWORD *)v15 + 104LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v65);
      if ( v50(v15, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v65) >= 0 )
      {
        v53 = v65;
        if ( CSnapComponentTelemetry::IsEnabled(v52, v51) )
        {
          wil::details::static_lazy<CSnapComponentTelemetry>::get(
            v54,
            _lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
          CSnapComponentTelemetry::InvalidAppInEnumeration_(v55, v71[0], v53);
        }
      }
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v71);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v65);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v66);
    CSnapComponentTelemetry::ProcessView::~ProcessView((CSnapComponentTelemetry::ProcessView *)&v85);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v79);
LABEL_35:
    ++v75;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v75);
  }
  IsSnappedWindow = SnapLayoutHelpers::IsSnappedWindow(v15, v22);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl);
  if ( !IsSnappedWindow )
    goto LABEL_27;
  v26 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(v66, v24);
  rcSrc1 = 0LL;
  if ( (*(int (__fastcall **)(ApplicationViewHelpers *, RECT *))(*(_QWORD *)v15 + 128LL))(v15, &rcSrc1) >= 0 )
  {
    v56 = v78;
    v57 = *(_QWORD *)(v78 + 24);
    v58 = v57 + *(_QWORD *)(v78 + 32);
    while ( v57 != v58 )
    {
      v59 = *(__int128 **)(*(_QWORD *)(v56 + 8) + 8 * (v57 & (*(_QWORD *)(v56 + 16) - 1LL)));
      v60 = *v59;
      v61 = *(_QWORD *)v59;
      rcSrc2.left = *v59;
      rcSrc2.top = HIDWORD(v61);
      v62 = *((_QWORD *)v59 + 1);
      *(_QWORD *)&rcSrc2.right = v62;
      if ( SnapRectHelpers::IntersectsWithErrorThreshold(&rcSrc1, &rcSrc2, (const struct Geometry::CRect *)v26, v25) )
      {
        *(_OWORD *)v71 = v60;
        if ( !SnapRectHelpers::IsEqualWithErrorThreshold(
                (SnapRectHelpers *)&rcSrc1,
                (const struct Geometry::CRect *)v71,
                (const struct Geometry::CRect *)v26,
                v25) )
        {
          v4 = 0;
          goto LABEL_28;
        }
      }
      ++v57;
      v56 = v78;
    }
    v4 = 0;
    LOBYTE(v64) = 0;
    goto LABEL_36;
  }
  v4 = 0;
LABEL_27:
  LOBYTE(v64) = 0;
  if ( IsSnappedWindow )
  {
LABEL_36:
    v30 = (_QWORD *)v70;
    if ( v69[1] == 1 )
    {
      IsUnoccluded = SnapLayoutHelpers::IsUnoccluded(
                       (struct IUnknown *)v15,
                       v68,
                       *(struct IObjectArray **)(v70 + 32),
                       (struct IApplicationView *)&v64,
                       v63);
      if ( IsUnoccluded < 0 )
      {
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x9D,
          (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
          (const char *)(unsigned int)IsUnoccluded,
          (int)v63);
        v46 = v66;
        if ( v66 )
        {
          v66 = 0LL;
          (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v46 + 16LL))(v46);
        }
        goto LABEL_31;
      }
      v32 = v64;
    }
    else
    {
      v32 = 1;
    }
    if ( !v32 )
      goto LABEL_28;
    v65 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v65);
    v34 = CSnappedWindow::s_CreateInstance(v66, v15, v33, (void **)&v65);
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xA7,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
        (const char *)(unsigned int)v34,
        (int)v63);
      v35 = v65;
      if ( v65 )
      {
        v65 = 0LL;
        (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v36 = v66;
      if ( v66 )
      {
        v66 = 0LL;
        (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v36 + 16LL))(v36);
      }
LABEL_31:
      v85 = &CSnapComponentTelemetry::ProcessView::`vftable';
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v85);
      wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v100);
      wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v99);
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)&v86);
      goto LABEL_32;
    }
    v44 = v30[6];
    if ( v44 == v30[8]
      && (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 v30 + 5,
                 v44 + 1),
          v4 < 0) )
    {
      v45 = v65;
    }
    else
    {
      v47 = v30[6];
      v30[6] = v47 + 1;
      v48 = (struct IApplicationViewPosition **)(v30[5] + 8 * v47);
      if ( !v48 )
      {
        v45 = v65;
        goto LABEL_70;
      }
      *v48 = v65;
      v45 = v65;
      if ( v65 )
      {
        (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)v65 + 8LL))(v65);
        v45 = v65;
      }
    }
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xA8,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
        (const char *)(unsigned int)v4,
        (int)v63);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v65);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v66);
      CSnapComponentTelemetry::ProcessView::~ProcessView((CSnapComponentTelemetry::ProcessView *)&v85);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v79);
      v4 = 0;
LABEL_34:
      v3 = v70;
      goto LABEL_35;
    }
LABEL_70:
    v4 = 0;
    if ( v45 )
    {
      v65 = 0LL;
      (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)v45 + 16LL))(v45);
    }
  }
LABEL_28:
  LODWORD(v63) = v69[1];
  LOBYTE(v25) = IsSnappedWindow;
  CSnapComponentTelemetry::ProcessView::Stop(&v85, v15, v66, v25);
  v27 = (*(__int64 (__fastcall **)(struct IApplicationView *, ApplicationViewHelpers *))(*(_QWORD *)v68 + 40LL))(
          v68,
          v15);
  v28 = v27;
  if ( v27 >= 0 )
  {
    v29 = v66;
    if ( v66 )
    {
      v66 = 0LL;
      (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAC,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindowmodel.cpp",
    (const char *)(unsigned int)v27);
  v40 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v85 = &CSnapComponentTelemetry::ProcessView::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v85);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v100);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v99);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)&v86);
  if ( v15 )
    (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v15 + 16LL))(v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v81);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v76);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
  v41 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v42 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  v103 = &CSnapComponentTelemetry::EnumSnappedWindows::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v103);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v106);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v105);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v104);
  return v28;
}
