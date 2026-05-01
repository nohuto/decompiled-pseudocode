/*
 * XREFs of ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800EDA70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180068F1C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ??1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ @ 0x18006A1A4 (--1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ.c)
 *     ??$WindowEventDispatcher_OnWindowAdded@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18006A7DC (--$WindowEventDispatcher_OnWindowAdded@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UIUAPViewWrapper@@UIUwpWindowWrapperUniversalInternal@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EC030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperB.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EC510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VUwpW_ea_1800EC510.c)
 *     ?GetEventRegistration@UwpWindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x1800ED254 (-GetEventRegistration@UwpWindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std.c)
 *     ??$MakeOrThrow@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@AEAY0DF@$$CBGAEAW4WindowCreatedType@@H@wil@@YA?AV?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@AEAY0DF@$$CBGAEAW4WindowCreatedType@@$$QEAH@Z @ 0x1800ED764 (--$MakeOrThrow@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowL.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800EE720 (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1800EE834 (-FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrappe.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800EF554 (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?CacheWindowWrapper@UwpWindowEventDispatcher@@AEAAXV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1800EF9A0 (-CacheWindowWrapper@UwpWindowEventDispatcher@@AEAAXV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800F05D8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@w.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801C0C40 (-CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrappe.c)
 *     ?CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801D767C (-CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowW.c)
 *     ??$MakeOrThrow@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@AEAY0DF@$$CBGAEAW4WindowCreatedType@@H@wil@@YA?AV?$ComPtr@VLegacyUwpWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEAW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@AEAY0DF@$$CBGAEAW4WindowCreatedType@@$$QEAH@Z @ 0x18029BE98 (--$MakeOrThrow@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpW.c)
 *     ??$com_query@UINtUserViewWrapper@@AEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UINtUserViewWrapper@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@0@@Z @ 0x180411894 (--$com_query@UINtUserViewWrapper@@AEAV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=36
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowAdded(RTL_SRWLOCK *a1, unsigned int a2, int a3)
{
  RTL_SRWLOCK *v5; // rcx
  __int64 Uwlm; // rax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64 *); // rsi
  int v9; // eax
  const char *v10; // r9
  int v11; // eax
  __int64 result; // rax
  RTL_SRWLOCK *Ptr; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, _QWORD, RTL_SRWLOCK **); // r14
  RTL_SRWLOCK *v17; // rcx
  int v18; // eax
  RTL_SRWLOCK v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // r13d
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // r14
  RTL_SRWLOCK *v24; // rsi
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // rbx
  HSTRING *v26; // r15
  HSTRING *v27; // r12
  HSTRING v28; // rcx
  bool v29; // r15
  int v30; // eax
  int v31; // eax
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 (__fastcall ***v34)(_QWORD, GUID *, _QWORD *); // rdi
  __int64 v35; // rcx
  unsigned int v36; // r13d
  volatile signed __int32 *v37; // r12
  char v38; // di
  int v39; // eax
  unsigned int v40; // r9d
  RTL_SRWLOCK *v41; // rcx
  _DWORD *v42; // rdi
  const WCHAR *v43; // r15
  const WCHAR *v44; // rax
  struct UwpWindowEventDispatcher *v45; // rdi
  std::_Ref_count_base **EventRegistration; // rax
  std::_Ref_count_base *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 (__fastcall *v50)(__int64, _QWORD, HSTRING *); // r15
  HSTRING v51; // rcx
  int v52; // eax
  _QWORD *v53; // rax
  int v54; // edi
  RTL_SRWLOCK *v55; // rdi
  __int64 *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // eax
  PVOID v60; // rdi
  __int64 (__fastcall *v61)(PVOID, _QWORD, _QWORD); // rsi
  unsigned int *v62; // rax
  int v63; // eax
  int v64; // [rsp+20h] [rbp-168h]
  int v65; // [rsp+40h] [rbp-148h]
  unsigned int v66; // [rsp+60h] [rbp-128h] BYREF
  __int64 (__fastcall ***v67)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp-120h] BYREF
  int v68; // [rsp+70h] [rbp-118h] BYREF
  HSTRING v69; // [rsp+78h] [rbp-110h] BYREF
  __int64 v70; // [rsp+80h] [rbp-108h] BYREF
  RTL_SRWLOCK *v71; // [rsp+88h] [rbp-100h] BYREF
  __int64 v72; // [rsp+90h] [rbp-F8h] BYREF
  RTL_SRWLOCK *v73; // [rsp+98h] [rbp-F0h] BYREF
  std::_Ref_count_base *v74; // [rsp+A0h] [rbp-E8h]
  int v75; // [rsp+A8h] [rbp-E0h] BYREF
  struct UwpWindowEventDispatcher *v76; // [rsp+B0h] [rbp-D8h]
  HSTRING string; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-C8h] BYREF
  struct UwpWindowEventDispatcher *v79; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v80[2]; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v81; // [rsp+E0h] [rbp-A8h] BYREF
  std::_Ref_count_base *v82[2]; // [rsp+F0h] [rbp-98h]
  char v83[8]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v84; // [rsp+108h] [rbp-80h]
  __int64 v85; // [rsp+110h] [rbp-78h]
  int v86; // [rsp+118h] [rbp-70h]
  char v87; // [rsp+11Ch] [rbp-6Ch]
  int v88; // [rsp+120h] [rbp-68h]
  char v89; // [rsp+124h] [rbp-64h]
  int v90; // [rsp+128h] [rbp-60h]
  char v91; // [rsp+12Ch] [rbp-5Ch]
  int v92; // [rsp+130h] [rbp-58h]
  char v93; // [rsp+134h] [rbp-54h]
  int v94; // [rsp+138h] [rbp-50h]
  char v95; // [rsp+13Ch] [rbp-4Ch]
  __int64 (__fastcall ***v96)(_QWORD, GUID *, _QWORD *); // [rsp+140h] [rbp-48h]
  RTL_SRWLOCK *v97; // [rsp+148h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]
  RTL_SRWLOCK *v99; // [rsp+190h] [rbp+8h] BYREF
  unsigned int v100; // [rsp+198h] [rbp+10h] BYREF
  unsigned int v101; // [rsp+1A0h] [rbp+18h] BYREF
  RTL_SRWLOCK *v102; // [rsp+1A8h] [rbp+20h] BYREF

  v101 = a3;
  v100 = a2;
  v99 = a1;
  LODWORD(v72) = 0;
  v70 = 0LL;
  v76 = (struct UwpWindowEventDispatcher *)&a1[-2];
  v5 = a1 - 2;
  try
  {
    Uwlm = UwpWindowEventDispatcher::GetUwlm(v5, &v102);
    v7 = *(_QWORD *)Uwlm;
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)Uwlm + 104LL);
    v70 = 0LL;
    v9 = v8(v7, a2, &v70);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v64);
    if ( v102 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v102->Ptr + 2))(v102);
    if ( v70 )
    {
      v66 = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v70 + 56LL))(v70, &v66);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x274,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v11,
          v64);
      if ( v66 )
      {
        v71 = 0LL;
        Ptr = (RTL_SRWLOCK *)a1[38].Ptr;
        v73 = Ptr;
        if ( Ptr )
          (*((void (__fastcall **)(RTL_SRWLOCK *))Ptr->Ptr + 1))(Ptr);
        v14 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, RTL_SRWLOCK **))Ptr->Ptr + 6))(Ptr, &v102);
        v15 = *(_QWORD *)v14;
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD, RTL_SRWLOCK **))(**(_QWORD **)v14 + 80LL);
        v17 = v71;
        v71 = 0LL;
        if ( v17 )
          (*((void (__fastcall **)(RTL_SRWLOCK *, PVOID))v17->Ptr + 2))(v17, v17->Ptr);
        v18 = v16(v15, v66, &v71);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x27D,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v18,
            v64);
        if ( v102 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v102->Ptr + 2))(v102);
        (*((void (__fastcall **)(RTL_SRWLOCK *))Ptr->Ptr + 2))(Ptr);
        v96 = 0LL;
        v19.Ptr = v71->Ptr;
        v67 = 0LL;
        v20 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))v19.Ptr + 6))(
                v71,
                &v67);
        if ( v20 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1C6,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
            (const char *)(unsigned int)v20,
            v64);
        LODWORD(v102) = 0;
        v21 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), RTL_SRWLOCK **))(*v67)[7])(
                v67,
                &v102);
        if ( v21 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1CC,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
            (const char *)(unsigned int)v21,
            v64);
        v22 = (int)v102;
        v68 = (int)v102;
        v23 = v67;
        v96 = v67;
        *(_OWORD *)v82 = 0LL;
        v83[0] = 0;
        v84 = 0LL;
        v85 = 0LL;
        v86 = 0;
        v87 = 0;
        v88 = 0;
        v89 = 0;
        v90 = 6;
        v91 = 0;
        v92 = 0;
        v93 = 0;
        v94 = 0;
        v95 = 0;
        LOBYTE(v102) = 0;
        v67 = 0LL;
        v24 = a1 + 59;
        AcquireSRWLockExclusive(a1 + 59);
        v97 = a1 + 59;
        v25 = 0LL;
        string = 0LL;
        LODWORD(v72) = 4;
        v26 = (HSTRING *)a1[46].Ptr;
        v27 = (HSTRING *)a1[47].Ptr;
        while ( 1 )
        {
          if ( v26 == v27 )
          {
            v29 = 0;
            goto LABEL_27;
          }
          if ( *(_DWORD *)(*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)*v26 + 288LL))(*v26, &v69) == a2 )
            break;
          ++v26;
        }
        v28 = *v26;
        v25 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v28;
        string = *v26;
        v29 = 0;
        if ( v28 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v28 + 8LL))(v28);
LABEL_27:
        v67 = v25;
        if ( v25 )
        {
          v37 = (volatile signed __int32 *)v82[1];
          v38 = (char)v102;
          v36 = v101;
        }
        else
        {
          v69 = 0LL;
          v30 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HSTRING *))(*v23)[6])(
                  v23,
                  &v69);
          if ( v30 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x294,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v30,
              v64);
          string = 0LL;
          v31 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v70 + 64LL))(v70, &string);
          if ( v31 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x297,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v31,
              v64);
          LODWORD(v102) = 0;
          if ( v22 )
          {
            v73 = v71;
            *(_QWORD *)&v81 = v69;
            v80[0] = v70;
            v79 = v76;
            v32 = wil::MakeOrThrow<UwpWindowWrapper,UwpWindowEventDispatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *,HSTRING__ *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const (&)[53],enum WindowCreatedType &,int>(
                    &v72,
                    &v79,
                    v80,
                    (__int64 *)&v81,
                    &v68,
                    (int *)&v100,
                    (HSTRING *)&v73,
                    (int *)&v66,
                    v65,
                    (int *)&v101,
                    (int *)&v102);
            v33 = *v32;
            *v32 = 0LL;
            v34 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))((v33 + 24) & -(__int64)(v33 != 0));
            v25 = v34;
            v67 = v34;
            v35 = v72;
            if ( v72 )
            {
              v72 = 0LL;
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,IUAPViewWrapper,IUwpWindowWrapperUniversalInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v35);
            }
          }
          else
          {
            v79 = (struct UwpWindowEventDispatcher *)v71;
            v80[0] = (__int64)v69;
            *(_QWORD *)&v81 = v70;
            v73 = (RTL_SRWLOCK *)v76;
            v56 = (__int64 *)wil::MakeOrThrow<LegacyUwpWindowWrapper,UwpWindowEventDispatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *,HSTRING__ *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const (&)[53],enum WindowCreatedType &,int>(
                               (unsigned int)&v72,
                               (unsigned int)&v73,
                               (unsigned int)&v81,
                               (unsigned int)v80,
                               (__int64)&v68,
                               (__int64)&v100,
                               (__int64)&v79,
                               (__int64)&v66);
            v57 = *v56;
            *v56 = 0LL;
            v34 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))((v57 + 24) & -(__int64)(v57 != 0));
            v25 = v34;
            v67 = v34;
            v58 = v72;
            if ( v72 )
            {
              v72 = 0LL;
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::Release(v58);
            }
          }
          v36 = v101;
          if ( v101 )
          {
            v37 = (volatile signed __int32 *)v82[1];
          }
          else
          {
            v43 = (const WCHAR *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v34)[35])(v34);
            v44 = (const WCHAR *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v34)[34])(v34);
            v45 = v76;
            EventRegistration = (std::_Ref_count_base **)UwpWindowEventDispatcher::GetEventRegistration(
                                                           (__int64)v76,
                                                           &v73,
                                                           v44,
                                                           v43);
            v47 = *EventRegistration;
            v37 = (volatile signed __int32 *)EventRegistration[1];
            v29 = 0;
            *EventRegistration = 0LL;
            EventRegistration[1] = 0LL;
            v82[0] = v47;
            v82[1] = (std::_Ref_count_base *)v37;
            if ( v74 )
              std::_Ref_count_base::_Decref(v74);
            v81 = 0LL;
            if ( v37 )
              _InterlockedIncrement(v37 + 2);
            v81 = *(_OWORD *)v82;
            wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
              &v102,
              (__int64)v25);
            UwpWindowEventDispatcher::CacheWindowWrapper(v45, &v102, &v81, 0LL);
          }
          v38 = 1;
          LOBYTE(v102) = 1;
          if ( string )
            WindowsDeleteString(string);
          if ( v69 )
            WindowsDeleteString(v69);
        }
        if ( v24 )
          ReleaseSRWLockExclusive(v24);
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
          &v67,
          &v78);
        v75 = 0;
        v39 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v78 + 352LL))(v78, &v75);
        if ( v39 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x2B4,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v39,
            v64);
        if ( v75 )
        {
          if ( !v38 )
          {
            wil::AcquireSRWLockExclusive(&v102, v24);
            UwpWindowEventDispatcher::WindowIdChangedEventHelper::CollectOriginalValues(
              (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v83,
              (struct IUwpWindowWrapperInternal *)v25);
            v59 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), RTL_SRWLOCK *, _QWORD, _QWORD))(*v25)[25])(
                    v25,
                    v71,
                    v66,
                    v36);
            if ( v59 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x2C2,
                (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)(unsigned int)v59,
                v64);
            UwpWindowEventDispatcher::WindowIdChangedEventHelper::CompareNewValues(
              (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v83,
              (struct IUwpWindowWrapperInternal *)v25);
            CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v102);
          }
        }
        else
        {
          v69 = 0LL;
          v48 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK **))(*(_QWORD *)v99[38].Ptr + 48LL))(v99[38].Ptr, &v73);
          v49 = *(_QWORD *)v48;
          v50 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(**(_QWORD **)v48 + 56LL);
          v51 = v69;
          v69 = 0LL;
          if ( v51 )
            (*(void (__fastcall **)(HSTRING, _QWORD))(*(_QWORD *)v51 + 16LL))(v51, *(_QWORD *)v51);
          v52 = v50(v49, v66, &v69);
          v29 = 0;
          if ( v52 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2BA,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v52);
          if ( v73 )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v73->Ptr + 2))(v73);
          if ( v69 )
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v69 + 16LL))(v69);
          v38 = (char)v102;
        }
        if ( v36 )
        {
          if ( v36 == 1 )
          {
            v68 = 0;
            SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
              L"DisableAppRecoveryAfterShellRestart",
              v40,
              &v68);
            if ( v38 )
            {
              LODWORD(v102) = 0;
              v53 = (_QWORD *)wil::com_query<INtUserViewWrapper,wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> &>(
                                &v73,
                                &v67);
              v54 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, RTL_SRWLOCK **))(*(_QWORD *)*v53 + 88LL))(
                      *v53,
                      L"ExperienceId",
                      &v102);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v73);
              if ( v54 >= 0 )
                v29 = (_DWORD)v102 != 0;
              wil::AcquireSRWLockExclusive(&v73, v24);
              if ( v68 || !v29 )
              {
                v60 = v99[38].Ptr;
                v61 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)v60 + 64LL);
                v62 = (unsigned int *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), RTL_SRWLOCK **))(*v25)[36])(
                                        v25,
                                        &v99);
                v63 = v61(v60, *v62, 0LL);
                if ( v63 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x2E8,
                    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                    (const char *)(unsigned int)v63);
              }
              else
              {
                v55 = v99;
                if ( v99[50].Ptr == v99[51].Ptr )
                {
                  std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy> const &>(
                    &v99[49],
                    v99[50].Ptr,
                    &v67);
                  v25 = v67;
                }
                else
                {
                  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
                    (__int64 *)v99[50].Ptr,
                    (__int64 *)&v67);
                  v55[50].Ptr = (char *)v55[50].Ptr + 8;
                }
              }
              CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v73);
            }
          }
        }
        else if ( v38 )
        {
          v41 = (RTL_SRWLOCK *)*((_QWORD *)v82[0] + 3);
          v99 = v41;
          if ( v41 )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v41->Ptr + 1))(v41);
          UwpWindowEventDispatcher::RaiseViewEventWithPropertySet(v76, v78, 0LL, 0LL);
        }
        else if ( v83[0] )
        {
          UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents(
            (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v83,
            v76,
            (struct IUwpWindowWrapperInternal *)v25);
        }
        v42 = (_DWORD *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), RTL_SRWLOCK **))(*v25)[36])(
                          v25,
                          &v99);
        v102 = (RTL_SRWLOCK *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v25)[34])(v25);
        ViewManagerInteropTraceLogging::WindowEventDispatcher_OnWindowAdded<unsigned short const *,unsigned int>(
          (const WCHAR **)&v102,
          v42);
        if ( v78 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
        if ( v25 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v25)[2])(v25);
        UwpWindowEventDispatcher::WindowIdChangedEventHelper::~WindowIdChangedEventHelper((UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v83);
        if ( v37 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v37);
        if ( v23 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v23)[2])(v23);
        if ( v71 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v71->Ptr + 2))(v71);
        if ( v70 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
        result = 0LL;
      }
      else
      {
        if ( v70 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
        result = 0LL;
      }
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v99) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x2F5,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                     v10);
    return (unsigned int)v99;
  }
  return result;
}
