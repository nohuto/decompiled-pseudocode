/*
 * XREFs of ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180039A1C
 * Callers:
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800C944C (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18009100C (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C9364 (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QE.c)
 *     ??$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIJsonObject@Json@Data@1@@Z @ 0x1800C93B4 (--$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPE.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801C2F60 (--$ActivateInstance@V-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIJsonValueStatics@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonValueStatics@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801C6CB8 (--$GetActivationFactory@V-$ComPtr@UIJsonValueStatics@Json@Data@Windows@@@WRL@Microsoft@@@Foundat.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1802251A4 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct Windows::Data::Json::IJsonObject **a2)
{
  int SortedAppList; // eax
  HSTRING v3; // rbx
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  int v7; // eax
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  __int64 (__fastcall *v12)(HSTRING, GUID *, __int64 *); // rdi
  int v13; // ebx
  int v14; // ecx
  __int64 v15; // r13
  __int64 (__fastcall *v16)(HSTRING, HSTRING, __int64); // r14
  HRESULT v17; // eax
  int v18; // edx
  unsigned int v19; // r8d
  int v20; // edx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(HSTRING, HSTRING, __int64 *); // r15
  __int64 *v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned int v26; // eax
  UINT32 v27; // edx
  HRESULT v28; // eax
  int v29; // edx
  unsigned int v30; // r8d
  int v31; // eax
  int v32; // edx
  unsigned int v33; // r8d
  __int64 (__fastcall *v34)(HSTRING, HSTRING, __int64); // r15
  __int64 v35; // r12
  unsigned __int64 v36; // rdi
  unsigned int v37; // eax
  UINT32 v38; // edx
  HRESULT v39; // eax
  int v40; // edx
  unsigned int v41; // r8d
  __int64 v42; // rdx
  __int64 (__fastcall *v43)(HSTRING, __int64, __int64 *); // rdi
  __int64 v44; // rcx
  int v45; // edx
  unsigned int v46; // r8d
  __int64 (__fastcall *v47)(HSTRING, HSTRING, __int64); // r15
  __int64 v48; // r12
  unsigned __int64 v49; // rdi
  unsigned int v50; // eax
  UINT32 v51; // edx
  HRESULT v52; // eax
  int v53; // edx
  unsigned int v54; // r8d
  __int64 (__fastcall *v55)(HSTRING, _QWORD, __int64 *); // rdi
  __int64 v56; // rcx
  int v57; // edx
  unsigned int v58; // r8d
  __int64 (__fastcall *v59)(HSTRING, HSTRING, __int64); // r15
  __int64 v60; // r12
  unsigned __int64 v61; // rdi
  unsigned int v62; // eax
  UINT32 v63; // edx
  HRESULT v64; // eax
  int v65; // edx
  unsigned int v66; // r8d
  __int64 (__fastcall *v67)(HSTRING, _QWORD, __int64 *); // rdi
  __int64 v68; // rcx
  int v69; // edx
  unsigned int v70; // r8d
  __int64 (__fastcall *v71)(HSTRING, HSTRING, __int64); // r15
  __int64 v72; // r12
  unsigned __int64 v73; // rdi
  unsigned int v74; // eax
  UINT32 v75; // edx
  HRESULT v76; // eax
  int v77; // edx
  unsigned int v78; // r8d
  int v79; // eax
  __int64 (__fastcall *v80)(HSTRING, __int64, __int64 *); // rdi
  __int64 v81; // rcx
  __int64 v82; // rdx
  int v83; // edx
  unsigned int v84; // r8d
  __int64 v85; // r15
  unsigned __int64 v86; // rdi
  unsigned int v87; // eax
  UINT32 v88; // edx
  HRESULT v89; // eax
  int v90; // edx
  unsigned int v91; // r8d
  __int64 (__fastcall *v92)(HSTRING, GUID *, __int64 *); // rdi
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 (__fastcall ***v95)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v96; // rcx
  __int64 (__fastcall ***v97)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v98; // rcx
  __int64 (__fastcall ***v99)(HSTRING, GUID *, __int64 *); // rcx
  HSTRING v100; // rcx
  __int64 v102; // rcx
  __int64 (__fastcall ***v103)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v104; // rcx
  __int64 (__fastcall ***v105)(HSTRING, GUID *, __int64 *); // rcx
  HSTRING v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // rdx
  struct Windows::Data::Json::IJsonObject **v110; // rsi
  struct Windows::Data::Json::IJsonObject *v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // [rsp+20h] [rbp-69h] BYREF
  __int128 v115; // [rsp+28h] [rbp-61h] BYREF
  __int64 v116; // [rsp+38h] [rbp-51h]
  HSTRING v117; // [rsp+40h] [rbp-49h] BYREF
  __int64 (__fastcall ***v118)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-41h] BYREF
  __int64 (__fastcall ***v119)(HSTRING, GUID *, __int64 *); // [rsp+50h] [rbp-39h] BYREF
  __int64 v120; // [rsp+58h] [rbp-31h] BYREF
  __int64 v121; // [rsp+60h] [rbp-29h] BYREF
  __int64 v122; // [rsp+68h] [rbp-21h] BYREF
  int v123; // [rsp+70h] [rbp-19h]
  int v124; // [rsp+74h] [rbp-15h]
  __int64 (__fastcall ***v125)(_QWORD, GUID *, _QWORD); // [rsp+78h] [rbp-11h] BYREF
  struct Windows::Data::Json::IJsonObject **v126; // [rsp+80h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-1h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v126 = a2;
  *a2 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v115);
  LODWORD(v3) = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30D,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList,
      v114);
    goto LABEL_101;
  }
  v117 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Data.Json.JsonValue", 0x1Bu, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    __debugbreak();
  }
  v7 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonValueStatics>>(
         string,
         &v117);
  LODWORD(v3) = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x310,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v7,
      v114);
LABEL_120:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v117);
    goto LABEL_101;
  }
  v119 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Windows.Data.Json.JsonArray", 0x1Bu, &hstringHeader, &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
LABEL_122:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x316,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v3,
      v114);
LABEL_125:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v120);
    goto LABEL_119;
  }
  v11 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>>(string, &v119);
  LODWORD(v3) = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x313,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v11,
      v114);
LABEL_119:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v119);
    goto LABEL_120;
  }
  v120 = 0LL;
  v3 = (HSTRING)v119;
  v12 = **v119;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v120);
  LODWORD(v3) = v12(v3, &GUID_d44662bc_dce3_59a8_9272_4b210f33908b, &v120);
  if ( (int)v3 < 0 )
    goto LABEL_122;
  v13 = 0;
  v123 = 0;
  v14 = 0;
  v15 = 0LL;
  v16 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))v115;
  while ( 1 )
  {
    v124 = v14;
    if ( v14 >= (int)((__int64)(*((_QWORD *)&v115 + 1) - (_QWORD)v16) >> 4) || v13 >= 30 )
      goto LABEL_148;
    if ( *(int *)(*(_QWORD *)((char *)v16 + v15) + 32LL) < 3 )
      goto LABEL_83;
    v118 = 0LL;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
    if ( v17 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v19);
LABEL_148:
      v122 = 0LL;
      LODWORD(v3) = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(
                      &v119,
                      &v122);
      if ( (int)v3 < 0 )
      {
        v107 = 828LL;
      }
      else
      {
        string = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"Windows.Data.Json.JsonObject",
          0x1Du,
          0x1Cu);
        v110 = v126;
        LODWORD(v3) = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(string, v126);
        if ( (int)v3 >= 0 )
        {
          v111 = *v110;
          v3 = *(HSTRING *)(*(_QWORD *)v111 + 56LL);
          v112 = v122;
          v113 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_18070D440);
          LODWORD(v3) = ((__int64 (__fastcall *)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64))v3)(
                          v111,
                          *(_QWORD *)(v113 + 24),
                          v112);
          if ( (int)v3 >= 0 )
          {
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v122);
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v120);
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v119);
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v117);
            if ( (_QWORD)v115 )
            {
              std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v115, *((_QWORD *)&v115 + 1));
              std::_Deallocate<16>(v115, (v116 - v115) & 0xFFFFFFFFFFFFFFF0uLL);
            }
            return 0LL;
          }
          v107 = 831LL;
        }
        else
        {
          v107 = 830LL;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v107,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v3,
        v114);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v122);
      goto LABEL_125;
    }
    v3 = string;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v118);
    v118 = 0LL;
    v125 = 0LL;
    LODWORD(v3) = RoActivateInstance(v3, &v125);
    if ( (int)v3 >= 0 )
    {
      v22 = *(_QWORD *)&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data1
          - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
      if ( *(_QWORD *)&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
        v22 = *(_QWORD *)GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data4
            - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
      if ( !v22 )
      {
        v118 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v125;
        goto LABEL_17;
      }
      goto LABEL_90;
    }
LABEL_17:
    if ( (int)v3 < 0 )
      goto LABEL_145;
    v114 = 0LL;
    v3 = v117;
    v23 = *(__int64 (__fastcall **)(HSTRING, HSTRING, __int64 *))(*(_QWORD *)v117 + 80LL);
    v24 = *(__int64 **)((char *)v16 + v15);
    if ( (unsigned __int64)v24[3] > 7 )
      v24 = (__int64 *)*v24;
    string = 0LL;
    v25 = -1LL;
    do
      ++v25;
    while ( *((_WORD *)v24 + v25) );
    if ( v25 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v20, v21);
      __debugbreak();
    }
    v26 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v25);
    v27 = v26 - 1;
    if ( (unsigned int)v25 < v26 )
      v27 = v25;
    v28 = WindowsCreateStringReference((PCWSTR)v24, v27, &hstringHeader, &string);
    if ( v28 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v28, v29, v30);
LABEL_145:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x322,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v3,
        v114);
      goto LABEL_146;
    }
    v31 = v23(v3, string, &v114);
    LODWORD(v3) = v31;
    if ( v31 < 0 )
      break;
    v3 = (HSTRING)v118;
    v34 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))(*v118)[7];
    v35 = v114;
    string = 0LL;
    v36 = -1LL;
    do
      ++v36;
    while ( aAppid_1[v36] );
    if ( v36 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v32, v33);
      __debugbreak();
    }
    v37 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v36);
    v38 = v37 - 1;
    if ( (unsigned int)v36 < v37 )
      v38 = v36;
    v39 = WindowsCreateStringReference(L"AppID", v38, &hstringHeader, &string);
    if ( v39 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v39, v40, v41);
      __debugbreak();
    }
    LODWORD(v3) = v34(v3, string, v35);
    if ( (int)v3 < 0 )
    {
      v109 = 806LL;
      goto LABEL_141;
    }
    v3 = v117;
    v43 = *(__int64 (__fastcall **)(HSTRING, __int64, __int64 *))(*(_QWORD *)v117 + 72LL);
    v44 = v114;
    if ( v114 )
    {
      v114 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    LODWORD(v3) = v43(v3, v42, &v114);
    if ( (int)v3 < 0 )
    {
      v109 = 808LL;
      goto LABEL_141;
    }
    v3 = (HSTRING)v118;
    v47 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))(*v118)[7];
    v48 = v114;
    string = 0LL;
    v49 = -1LL;
    do
      ++v49;
    while ( aPenusagesec[v49] );
    if ( v49 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v45, v46);
      __debugbreak();
    }
    v50 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v49);
    v51 = v50 - 1;
    if ( (unsigned int)v49 < v50 )
      v51 = v49;
    v52 = WindowsCreateStringReference(L"PenUsageSec", v51, &hstringHeader, &string);
    if ( v52 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v52, v53, v54);
      __debugbreak();
    }
    LODWORD(v3) = v47(v3, string, v48);
    if ( (int)v3 < 0 )
    {
      v109 = 809LL;
      goto LABEL_141;
    }
    v3 = v117;
    v55 = *(__int64 (__fastcall **)(HSTRING, _QWORD, __int64 *))(*(_QWORD *)v117 + 72LL);
    v56 = v114;
    if ( v114 )
    {
      v114 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
    LODWORD(v3) = v55(v3, *(unsigned int *)(*(_QWORD *)((char *)v16 + v15) + 36LL), &v114);
    if ( (int)v3 < 0 )
    {
      v109 = 811LL;
      goto LABEL_141;
    }
    v3 = (HSTRING)v118;
    v59 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))(*v118)[7];
    v60 = v114;
    string = 0LL;
    v61 = -1LL;
    do
      ++v61;
    while ( aLastswitchedlo[v61] );
    if ( v61 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v57, v58);
      __debugbreak();
    }
    v62 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v61);
    v63 = v62 - 1;
    if ( (unsigned int)v61 < v62 )
      v63 = v61;
    v64 = WindowsCreateStringReference(L"LastSwitchedLowPart", v63, &hstringHeader, &string);
    if ( v64 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v64, v65, v66);
      __debugbreak();
    }
    LODWORD(v3) = v59(v3, string, v60);
    if ( (int)v3 < 0 )
    {
      v109 = 812LL;
      goto LABEL_141;
    }
    v3 = v117;
    v67 = *(__int64 (__fastcall **)(HSTRING, _QWORD, __int64 *))(*(_QWORD *)v117 + 72LL);
    v68 = v114;
    if ( v114 )
    {
      v114 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
    }
    LODWORD(v3) = v67(v3, *(unsigned int *)(*(_QWORD *)((char *)v16 + v15) + 40LL), &v114);
    if ( (int)v3 < 0 )
    {
      v109 = 814LL;
LABEL_141:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v109,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v3,
        v114);
      goto LABEL_142;
    }
    v3 = (HSTRING)v118;
    v71 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))(*v118)[7];
    v72 = v114;
    string = 0LL;
    v73 = -1LL;
    do
      ++v73;
    while ( aLastswitchedhi[v73] );
    if ( v73 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v69, v70);
      __debugbreak();
    }
    v74 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v73);
    v75 = v74 - 1;
    if ( (unsigned int)v73 < v74 )
      v75 = v73;
    v76 = WindowsCreateStringReference(L"LastSwitchedHighPart", v75, &hstringHeader, &string);
    if ( v76 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v76, v77, v78);
      __debugbreak();
    }
    v79 = v71(v3, string, v72);
    LODWORD(v3) = v79;
    if ( v79 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32F,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v79,
        v114);
      v96 = v114;
      if ( v114 )
      {
        v114 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
      }
      v97 = v118;
      if ( v118 )
      {
        v118 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v97)[2])(v97);
      }
      v98 = v120;
      if ( v120 )
      {
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 16LL))(v98);
      }
      v99 = v119;
      if ( v119 )
      {
        v119 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *)))(*v99)[2])(v99);
      }
      v100 = v117;
      if ( v117 )
      {
        v117 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v100 + 16LL))(v100);
      }
      goto LABEL_101;
    }
    v3 = v117;
    v80 = *(__int64 (__fastcall **)(HSTRING, __int64, __int64 *))(*(_QWORD *)v117 + 64LL);
    v81 = v114;
    if ( v114 )
    {
      v114 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
    }
    v82 = *(_QWORD *)((char *)v16 + v15);
    LOBYTE(v82) = *(_BYTE *)(v82 + 44);
    LODWORD(v3) = v80(v3, v82, &v114);
    if ( (int)v3 < 0 )
    {
      v109 = 817LL;
      goto LABEL_141;
    }
    v3 = (HSTRING)v118;
    v16 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))(*v118)[7];
    v85 = v114;
    string = 0LL;
    v86 = -1LL;
    do
      ++v86;
    while ( aPrepopulated[v86] );
    if ( v86 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v83, v84);
LABEL_90:
      LODWORD(v3) = (**v125)(v125, &GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3, &v118);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v125)[2])(v125);
      goto LABEL_17;
    }
    v87 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v86);
    v88 = v87 - 1;
    if ( (unsigned int)v86 < v87 )
      v88 = v86;
    v89 = WindowsCreateStringReference(L"PrePopulated", v88, &hstringHeader, &string);
    if ( v89 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v89, v90, v91);
      __debugbreak();
    }
    LODWORD(v3) = v16(v3, string, v85);
    if ( (int)v3 < 0 )
    {
      v109 = 818LL;
      goto LABEL_141;
    }
    v121 = 0LL;
    v3 = (HSTRING)v118;
    v92 = (__int64 (__fastcall *)(HSTRING, GUID *, __int64 *))**v118;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v121);
    LODWORD(v3) = v92(v3, &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e, &v121);
    if ( (int)v3 < 0 )
    {
      v108 = 821LL;
LABEL_128:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v108,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v3,
        v114);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v121);
LABEL_142:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v114);
LABEL_146:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v118);
      goto LABEL_125;
    }
    LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v120 + 104LL))(v120, v121);
    if ( (int)v3 < 0 )
    {
      v108 = 822LL;
      goto LABEL_128;
    }
    v13 = ++v123;
    v93 = v121;
    if ( v121 )
    {
      v121 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
    }
    v94 = v114;
    if ( v114 )
    {
      v114 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
    }
    v95 = v118;
    if ( v118 )
    {
      v118 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v95)[2])(v95);
    }
    v16 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))v115;
    v14 = v124;
LABEL_83:
    ++v14;
    v15 += 16LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x325,
    (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v31,
    v114);
  v102 = v114;
  if ( v114 )
  {
    v114 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
  }
  v103 = v118;
  if ( v118 )
  {
    v118 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v103)[2])(v103);
  }
  v104 = v120;
  if ( v120 )
  {
    v120 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
  }
  v105 = v119;
  if ( v119 )
  {
    v119 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *)))(*v105)[2])(v105);
  }
  v106 = v117;
  if ( v117 )
  {
    v117 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v106 + 16LL))(v106);
  }
LABEL_101:
  if ( (_QWORD)v115 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v115, *((_QWORD *)&v115 + 1));
    std::_Deallocate<16>(v115, (v116 - v115) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return (unsigned int)v3;
}
