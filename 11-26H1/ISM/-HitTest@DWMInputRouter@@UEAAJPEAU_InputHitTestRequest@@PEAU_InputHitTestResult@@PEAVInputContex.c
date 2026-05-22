/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180085470 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x180013C00 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x1800156F0 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180015E20 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800169C0 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Insert_or_assign@KAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x18002AB84 (--$_Insert_or_assign@KAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$unordered_map@KV-$ComPtr@UI.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180043588 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ??R?$default_delete@UHitTestResult@@@std@@QEBAXPEAUHitTestResult@@@Z @ 0x1800484C0 (--R-$default_delete@UHitTestResult@@@std@@QEBAXPEAUHitTestResult@@@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004AFA0 (--1HitTestResult@@QEAA@XZ.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180054E20 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ?CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUVPTP_ID@@@Z @ 0x180079258 (-CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV-$vector@V-$ComPtr@VInputSit.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180088FE0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x180132A9C (-Create@InputSiteHierarchyManager@@SA-AV-$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ.c)
 *     ?BuildRequestForInputHitTestRequest@HitTestHelper@@SA?AUHitTestRequest@1@PEBU_InputHitTestRequest@@K@Z @ 0x1801A1EB4 (-BuildRequestForInputHitTestRequest@HitTestHelper@@SA-AUHitTestRequest@1@PEBU_InputHitTestReques.c)
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1801A3728 (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3,
        struct InputContext *a4,
        struct IInputBuffer *a5,
        struct IInputTarget **a6)
{
  struct _InputHitTestResult *v6; // rsi
  struct _InputHitTestRequest *v7; // r15
  int v9; // r14d
  struct IInputSiteHierarchyManager *v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  int v13; // r12d
  __int64 v14; // rbx
  char **v15; // rdi
  __int64 v16; // rcx
  int v17; // ebx
  char *v18; // rdx
  char *v19; // r8
  int v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // r14d
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  struct InputContext *v26; // rcx
  HANDLE v27; // r14
  __int64 v28; // rbx
  _QWORD *v29; // r10
  char v30; // di
  int (__fastcall *v31)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 **v32; // r14
  __int64 **v33; // rax
  struct InputContext *v34; // rbx
  __int64 v35; // rdx
  int v36; // ebx
  char *v37; // r15
  unsigned int v38; // r13d
  __int64 **v39; // r12
  __int64 **v40; // rbx
  __int64 *v41; // rdi
  __int64 *k; // rsi
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // r15
  int (__fastcall ***v48)(_QWORD, _QWORD, _QWORD); // r14
  int (__fastcall *v49)(_QWORD, _QWORD, _QWORD); // rax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  HANDLE v54; // rax
  HANDLE v55; // rax
  int v56; // eax
  struct InputSystemServerConnection **v57; // rax
  struct InputSystemServerConnection *v58; // rcx
  Microsoft::Bamo::BaseBamoConnection *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // r14
  char ***v64; // r15
  char *v65; // rax
  struct _InputHitTestResult *v66; // rdi
  struct _InputHitTestResult *v67; // rax
  char *v68; // rbx
  char *v69; // rax
  HANDLE CurrentProcess; // rdi
  HANDLE v71; // rax
  const char *v72; // r9
  char *InitialTargetFromHitTestResult; // rax
  __int64 v74; // rdx
  struct InputContext *v75; // rdi
  __int64 v76; // rcx
  __int64 v77; // rcx
  struct IInputSiteHierarchyManager **v78; // rax
  struct IInputSiteHierarchyManager *v79; // rcx
  unsigned int v80; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int dwDesiredAccess; // [rsp+20h] [rbp-E0h]
  __int64 v83; // [rsp+40h] [rbp-C0h] BYREF
  int v84; // [rsp+48h] [rbp-B8h]
  unsigned int v85; // [rsp+4Ch] [rbp-B4h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v86[2]; // [rsp+50h] [rbp-B0h] BYREF
  char *v87; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+68h] [rbp-98h] BYREF
  struct InputContext *v89; // [rsp+70h] [rbp-90h]
  int (__fastcall *v90)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp-88h]
  struct _InputHitTestResult *j; // [rsp+80h] [rbp-80h]
  char *i; // [rsp+88h] [rbp-78h] BYREF
  struct _InputHitTestRequest *v93; // [rsp+98h] [rbp-68h]
  DWMInputRouter *v94; // [rsp+A0h] [rbp-60h]
  struct IInputTarget **v95; // [rsp+A8h] [rbp-58h]
  struct IInputBuffer *v96; // [rsp+B0h] [rbp-50h]
  char v97; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v98[144]; // [rsp+C0h] [rbp-40h] BYREF
  char v99[8]; // [rsp+150h] [rbp+50h] BYREF
  HANDLE hSourceHandle; // [rsp+158h] [rbp+58h]
  __int128 v101; // [rsp+160h] [rbp+60h]
  __int128 v102; // [rsp+170h] [rbp+70h]
  __int128 v103; // [rsp+180h] [rbp+80h]
  __int128 v104; // [rsp+190h] [rbp+90h]
  __int64 v105; // [rsp+1A0h] [rbp+A0h]
  char v106; // [rsp+1A8h] [rbp+A8h]
  int v107; // [rsp+1ACh] [rbp+ACh]
  __int64 **v108; // [rsp+1B0h] [rbp+B0h]
  __int64 v109; // [rsp+1B8h] [rbp+B8h]
  int (__fastcall *v110)(_QWORD, _QWORD, _QWORD); // [rsp+1C0h] [rbp+C0h]
  int v111[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v112; // [rsp+1E0h] [rbp+E0h]
  int v113; // [rsp+1E8h] [rbp+E8h]
  int v114; // [rsp+1ECh] [rbp+ECh]
  int v115; // [rsp+1F0h] [rbp+F0h]
  __int16 v116; // [rsp+1F4h] [rbp+F4h]
  __int16 v117; // [rsp+1F6h] [rbp+F6h]
  int v118; // [rsp+1F8h] [rbp+F8h]
  __int64 v119; // [rsp+1FCh] [rbp+FCh]
  int v120; // [rsp+204h] [rbp+104h]
  __int64 v121; // [rsp+208h] [rbp+108h]
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  v89 = a4;
  v6 = a3;
  j = a3;
  v7 = a2;
  v93 = a2;
  v94 = this;
  v96 = a5;
  v95 = a6;
  v9 = 0;
  HitTestHelper::BuildRequestForInputHitTestRequest(v98);
  v10 = ISMStatics::s_inputSiteHierarchyManager;
  if ( !ISMStatics::s_inputSiteHierarchyManager )
  {
    v78 = (struct IInputSiteHierarchyManager **)InputSiteHierarchyManager::Create(&v88);
    v79 = *v78;
    *v78 = 0LL;
    ISMStatics::s_inputSiteHierarchyManager = v79;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v88);
    v10 = ISMStatics::s_inputSiteHierarchyManager;
  }
  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v83 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v83);
    v56 = CoreUICreate(&v83);
    if ( v56 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v56,
        dwDesiredAccess);
    v57 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((unsigned int)v86);
    v58 = *v57;
    *v57 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v58;
    v59 = v86[0];
    if ( v86[0] )
    {
      v86[0] = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v59);
    }
    v60 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
    }
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)ISMStatics::s_inputSystemBamoConnection + 31) + 8LL)
                                           + 152LL))(*((_QWORD *)ISMStatics::s_inputSystemBamoConnection + 31) + 8LL);
  HitTestHelper::HitTestRequestWithRetry(&v99, v98, *((_QWORD *)this + 23), v11, v10);
  if ( v99 )
  {
    v12 = *(_DWORD *)v7;
    v13 = 2;
    v14 = v109;
    v88 = v109;
    if ( v12 == 4 )
    {
      v84 = 2;
    }
    else
    {
      v50 = v12 - 2;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          if ( v51 == 2 )
            v84 = 32;
          else
            v84 = 0;
        }
        else
        {
          v84 = 16;
        }
      }
      else
      {
        v84 = 8;
        v85 = 0;
        if ( (unsigned __int8)DWMInputRouter::CheckForVirtualTouchpadFromInputSiteList(32LL, v109 - 24, &v85) )
        {
          *((_DWORD *)v6 + 26) = v85;
          *((_DWORD *)v6 + 25) = 0;
          v54 = hSourceHandle;
          hSourceHandle = 0LL;
          *((_QWORD *)v6 + 1) = v54;
          HitTestResult::~HitTestResult((HitTestResult *)&v99);
          return 0LL;
        }
      }
    }
    *(_QWORD *)v6 = v105;
    *((_OWORD *)v6 + 1) = v101;
    *((_OWORD *)v6 + 2) = v102;
    *((_OWORD *)v6 + 3) = v103;
    *((_OWORD *)v6 + 4) = v104;
    *((_DWORD *)v6 + 20) = v107;
    v85 = 0;
    v15 = (char **)(v14 - 24);
    InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(&v83, v14 - 24);
    v16 = v83;
    if ( v83 )
    {
      if ( !*(_BYTE *)(v83 + 480) )
        std::_Throw_bad_optional_access();
      v85 = *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(v83 + 48));
      v16 = v83;
    }
    if ( v16 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = 0;
    LODWORD(v86[0]) = 0;
    v18 = *v15;
    v19 = v15[1];
    for ( i = v19; ; v19 = i )
    {
      v87 = v18;
      if ( v18 == v19 )
      {
        if ( !v17 )
          v17 = 1;
        if ( !v9 )
          v9 = 2;
        goto LABEL_16;
      }
      v45 = 0LL;
      v83 = 0LL;
      v46 = *(_QWORD *)(*(_QWORD *)v18 + 488LL);
      if ( v46 != *(_QWORD *)(*(_QWORD *)v18 + 496LL) )
      {
        v47 = *(_QWORD *)(*(_QWORD *)v18 + 496LL);
        while ( 1 )
        {
          v48 = *(int (__fastcall ****)(_QWORD, _QWORD, _QWORD))(v46 + 8);
          v49 = **v48;
          v90 = v49;
          if ( v45 )
          {
            v83 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
            v49 = v90;
          }
          if ( v49(v48, &GUID_4753c172_9138_4064_8603_1556e98a010f, &v83) >= 0 )
            break;
          v46 += 16LL;
          if ( v46 == v47 )
            break;
          v45 = v83;
        }
        v45 = v83;
        v6 = j;
        v7 = v93;
        v9 = (int)v86[0];
      }
      if ( v45 )
      {
        if ( !v17 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 24LL))(v45);
          v45 = v83;
        }
        if ( !v9 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
          LODWORD(v86[0]) = v9;
          v45 = v83;
        }
        if ( v17 && v9 )
          break;
      }
      if ( v45 )
      {
        v83 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      v18 = v87 + 8;
    }
    if ( v45 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
LABEL_16:
    if ( v17 == 2 )
    {
      v20 = 1;
    }
    else
    {
      v20 = 0;
      if ( v17 == 3 )
        v20 = 2;
    }
    v21 = v20 | 4;
    if ( v9 != 1 )
      v21 = v20;
    if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
      __fastfail(7u);
    if ( ((1LL << gdwDeviceFamily) & 0x1C000) != 0 && (v21 & 2) != 0 )
    {
      v80 = v21 & 0xFFFFFFFD;
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      v22 = v85;
      v21 = v21 & 0xFFFFFFFC | 1;
      if ( !ViewHelper::IsViewPartOfForegroundApplication(ViewHierarchy, v85) )
        v21 = v80;
    }
    else
    {
      v22 = v85;
    }
    *((_QWORD *)v6 + 11) = v22;
    *((_DWORD *)v6 + 24) = v21;
    if ( !v84 )
    {
      *((_DWORD *)v6 + 25) = 0;
      v55 = hSourceHandle;
      hSourceHandle = 0LL;
      *((_QWORD *)v6 + 1) = v55;
      HitTestResult::~HitTestResult((HitTestResult *)&v99);
      return 0LL;
    }
    v111[3] = 0;
    v113 = 0;
    v117 = 0;
    v121 = 0LL;
    v23 = *(_DWORD *)v7;
    v114 = v23;
    if ( v23 == 4 )
    {
      v24 = 2;
    }
    else
    {
      v52 = v23 - 2;
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( v53 )
        {
          if ( v53 == 2 )
          {
            v24 = 0x1000000;
            if ( !*((_DWORD *)v7 + 4) )
              v24 = 32;
          }
          else
          {
            v24 = 0;
          }
        }
        else
        {
          v24 = 16;
        }
      }
      else
      {
        v24 = 8;
      }
    }
    v111[0] = v24;
    v111[1] = *((_DWORD *)v7 + 8);
    v111[2] = *((_DWORD *)v7 + 10);
    v112 = *((_QWORD *)v7 + 6);
    v119 = *(_QWORD *)((char *)v7 + 20);
    v115 = *((_DWORD *)v7 + 1);
    v116 = *((_WORD *)v7 + 4);
    v25 = *((_DWORD *)v7 + 3);
    v120 = *((_DWORD *)v7 + 14);
    if ( v24 == 2 )
      v25 = 1;
    v118 = v25;
    v26 = v89;
    *((_DWORD *)v89 + 24) = v21;
    *((_QWORD *)v26 + 11) = *((_QWORD *)v6 + 11);
    v27 = hSourceHandle;
    v28 = v88;
    if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v66 = *(struct _InputHitTestResult **)(v88 - 24);
      v67 = *(struct _InputHitTestResult **)(v88 - 16);
      for ( j = v67; ; v67 = j )
      {
        if ( v66 == v67 )
        {
          v68 = 0LL;
          v87 = 0LL;
          v69 = 0LL;
          goto LABEL_124;
        }
        v61 = 0LL;
        v83 = 0LL;
        v62 = *(_QWORD *)(*(_QWORD *)v66 + 488LL);
        v63 = *(_QWORD *)(*(_QWORD *)v66 + 496LL);
        if ( v62 != v63 )
        {
          while ( 1 )
          {
            v64 = *(char ****)(v62 + 8);
            v65 = **v64;
            i = v65;
            if ( v61 )
            {
              v83 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
              v65 = i;
            }
            if ( ((int (__fastcall *)(char ***, GUID *, __int64 *))v65)(
                   v64,
                   &GUID_8ddffe9c_458e_6d51_c227_1374408f672c,
                   &v83) >= 0 )
              break;
            v62 += 16LL;
            if ( v62 == v63 )
              break;
            v61 = v83;
          }
          v13 = 2;
          if ( v83 )
            break;
        }
        v66 = (struct _InputHitTestResult *)((char *)v66 + 8);
      }
      v87 = *(char **)v66;
      v68 = v87;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v87);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v83);
      v69 = v68;
LABEL_124:
      if ( v69 )
      {
        v106 = 0;
        v107 = 0;
        *((_DWORD *)v6 + 20) = 0;
      }
      CurrentProcess = GetCurrentProcess();
      v71 = GetCurrentProcess();
      if ( !DuplicateHandle(v71, hSourceHandle, CurrentProcess, (LPHANDLE)v6 + 1, 0, 0, 2u) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x645,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          v72);
      InitialTargetFromHitTestResult = (char *)DWMInputRouter::GetInitialTargetFromHitTestResult(
                                                 (int)v94,
                                                 &v83,
                                                 v111[0],
                                                 (__int64)&v99,
                                                 0LL);
      v74 = 0LL;
      if ( &v97 != InitialTargetFromHitTestResult )
      {
        v74 = *(_QWORD *)InitialTargetFromHitTestResult;
        *(_QWORD *)InitialTargetFromHitTestResult = 0LL;
      }
      v75 = v89;
      v76 = *((_QWORD *)v89 + 2);
      *((_QWORD *)v89 + 2) = v74;
      if ( v76 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      v77 = v83;
      if ( v83 )
      {
        v83 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
      }
      if ( v84 != 2 && v84 != 32 )
      {
        LODWORD(v86[0]) = v118;
        std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Insert_or_assign<unsigned long,Microsoft::WRL::ComPtr<IInputTarget> &>(
          (char *)v75 + 24,
          &i,
          v86,
          (char *)v75 + 16);
      }
      if ( v68 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v68 + 16LL))(v68);
      v28 = v109;
      v7 = v93;
      v27 = hSourceHandle;
    }
    v29 = operator new(0x78uLL);
    *(_BYTE *)v29 = v99;
    v29[1] = v27;
    hSourceHandle = 0LL;
    *((_OWORD *)v29 + 1) = v101;
    *((_OWORD *)v29 + 2) = v102;
    *((_OWORD *)v29 + 3) = v103;
    *((_OWORD *)v29 + 4) = v104;
    v29[10] = v105;
    v30 = v106;
    *((_BYTE *)v29 + 88) = v106;
    *((_DWORD *)v29 + 23) = v107;
    v31 = v110;
    i = 0LL;
    v110 = 0LL;
    v32 = 0LL;
    v109 = 0LL;
    v33 = v108;
    v108 = 0LL;
    v29[12] = v33;
    v29[13] = v28;
    v29[14] = v31;
    v34 = v89;
    v35 = *((_QWORD *)v89 + 22);
    *((_QWORD *)v89 + 22) = v29;
    if ( v35 )
      std::default_delete<HitTestResult>::operator()();
    LODWORD(v86[0]) = 0;
    if ( (int)ContextualProcessorManager::OnHitTest(
                *((ContextualProcessorManager **)v94 + 32),
                (struct HitTestInfo *)v111,
                v34,
                v96,
                v95,
                (enum ContextualProcessorState *)v86) >= 0 )
      v36 = (int)v86[0];
    else
      v36 = 0;
    if ( v30 && (*(_DWORD *)v7 != 4 || (*((_BYTE *)v7 + 64) & 1) != 0) )
    {
      v13 = 3;
    }
    else
    {
      if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
        __fastfail(7u);
      if ( ((1LL << gdwDeviceFamily) & 0x1820) == 0 || *(_DWORD *)v7 != 4 )
      {
        v13 = 0;
        if ( v36 )
        {
          LOBYTE(v13) = v36 != 3;
          ++v13;
        }
      }
    }
    *((_DWORD *)v6 + 25) = v13;
    v37 = i;
    v38 = 0;
  }
  else
  {
    v38 = -2147467259;
    v37 = (char *)v110;
    v32 = (__int64 **)v109;
  }
  v39 = v108;
  if ( v108 )
  {
    v40 = v108;
    if ( v108 != v32 )
    {
      do
      {
        v41 = *v40;
        if ( *v40 )
        {
          for ( k = v40[1]; v41 != k; ++v41 )
          {
            v44 = *v41;
            if ( *v41 )
            {
              *v41 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
            }
          }
          std::_Deallocate<16>(*v40, ((char *)v40[2] - (char *)*v40) & 0xFFFFFFFFFFFFFFF8uLL);
          *v40 = 0LL;
          v40[1] = 0LL;
          v40[2] = 0LL;
        }
        v40 += 3;
      }
      while ( v40 != v32 );
      v39 = v108;
    }
    std::_Deallocate<16>(v39, 8 * ((v37 - (char *)v39) >> 3));
  }
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    NtCloseCompositionInputSink();
  return v38;
}
