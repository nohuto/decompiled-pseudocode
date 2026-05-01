/*
 * XREFs of ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180035E18
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28e381728a25b292addb57396d526bfd___::Run @ 0x1800353E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28e381728a25b292addb57396d526bfd___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x180034194 (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180034F30 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800373F8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180050A50 (-OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATIO.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800C708C (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 *     ??$Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp@AEAPEAXAEAPEAXAEA_NAEA_NAEA_NAEAPEBG@GameDVRTraceProvider@@SAXAEAPEAX0AEA_N11AEAPEBG@Z @ 0x1800C78F8 (--$Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp@AEAPEAXAEAPEAXAEA_NAEA_NAEA_NAEAP.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1800C8874 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18013CA24 (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18013D38C (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??$_Emplace@U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@1@@Z @ 0x1801643A0 (--$_Emplace@U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActi.c)
 *     ??1?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAA@XZ @ 0x18017E344 (--1-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActiveAppInfo@.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18017E370 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView_ea_18017E370.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@AEBU01@@Z @ 0x1801BF20C (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActiveAppIn.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801CF230 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastD_ea_1801CF230.c)
 *     ??$?4$$T$$T$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU?$pair@$$T$$T@1@@Z @ 0x1801D08A8 (--$-4$$T$$T$0A@@-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRA.c)
 *     ?GameExit@BroadcastDVRTraceProvider@@SAXXZ @ 0x1801F8DF8 (-GameExit@BroadcastDVRTraceProvider@@SAXXZ.c)
 *     ?NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1801FD880 (-NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ??$?0$0DO@@StringReference@Internal@Windows@@QEAA@AEAY0DO@$$CBG@Z @ 0x1802EEA9C (--$-0$0DO@@StringReference@Internal@Windows@@QEAA@AEAY0DO@$$CBG@Z.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
void __fastcall BroadcastDVRComponent::OnApplicationViewChangedTask(__int64 a1, HSTRING a2, unsigned int a3)
{
  unsigned int v3; // ebx
  HSTRING v4; // rdi
  __int64 *v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rcx
  volatile signed __int32 *v9; // rsi
  __int64 *v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // rcx
  HWND v13; // rsi
  HWND v14; // rbx
  char *v15; // r12
  HRESULT v16; // eax
  HSTRING v17; // rcx
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  void *v24; // rbx
  unsigned __int64 v25; // rax
  char **v26; // r8
  char *v27; // rsi
  __int64 v28; // rdi
  HSTRING StringRawBuffer; // r14
  int v30; // esi
  int v31; // edi
  __int64 v32; // rcx
  std::_Ref_count_base *v33; // rcx
  int v34; // r8d
  bool v35; // bl
  int v36; // ecx
  int v37; // edx
  int v38; // ecx
  int v39; // edx
  unsigned int v40; // r14d
  __int64 v41; // r10
  int v42; // eax
  HSTRING v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  std::_Ref_count_base *v47; // rax
  __int64 v48; // rcx
  std::_Ref_count_base *v49; // rcx
  __int64 v50; // rax
  std::_Ref_count_base *v51; // rbx
  int v52; // r10d
  int v53; // edx
  int v54; // r9d
  unsigned int v55; // ecx
  __int64 v56; // r9
  void *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rbx
  int v62; // r10d
  int v63; // ecx
  int v64; // r8d
  int v65; // edx
  unsigned int v66; // ecx
  __int64 v67; // r9
  __int64 v68; // r10
  int v69; // eax
  int v70; // r10d
  int v71; // r8d
  int v72; // edx
  unsigned int v73; // ecx
  __int64 v74; // r9
  __int64 v75; // rdi
  int v76; // edi
  BOOL dwFlags; // [rsp+20h] [rbp-978h]
  int dwFlagsa; // [rsp+20h] [rbp-978h]
  BOOL dwFlagsb; // [rsp+20h] [rbp-978h]
  __int64 v80; // [rsp+30h] [rbp-968h]
  __int64 v81; // [rsp+38h] [rbp-960h]
  __int64 v82; // [rsp+38h] [rbp-960h]
  __int64 v83; // [rsp+38h] [rbp-960h]
  char v84; // [rsp+70h] [rbp-928h] BYREF
  char v85[7]; // [rsp+71h] [rbp-927h] BYREF
  unsigned __int8 v86[8]; // [rsp+78h] [rbp-920h] BYREF
  char v87[8]; // [rsp+80h] [rbp-918h] BYREF
  unsigned __int8 v88; // [rsp+88h] [rbp-910h] BYREF
  unsigned int v89; // [rsp+90h] [rbp-908h]
  HSTRING newString; // [rsp+98h] [rbp-900h] BYREF
  DWORD dwProcessId; // [rsp+A0h] [rbp-8F8h] BYREF
  HWND hWnd; // [rsp+A8h] [rbp-8F0h] BYREF
  void *v93; // [rsp+B0h] [rbp-8E8h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp-8E0h] BYREF
  std::_Ref_count_base *v95[2]; // [rsp+C0h] [rbp-8D8h] BYREF
  __int16 v96; // [rsp+D0h] [rbp-8C8h] BYREF
  char v97; // [rsp+D2h] [rbp-8C6h]
  int v98; // [rsp+D3h] [rbp-8C5h]
  int v99; // [rsp+D8h] [rbp-8C0h]
  __int64 v100; // [rsp+E0h] [rbp-8B8h]
  __int64 v101; // [rsp+E8h] [rbp-8B0h]
  HSTRING string; // [rsp+F0h] [rbp-8A8h]
  void *Src; // [rsp+F8h] [rbp-8A0h] BYREF
  HSTRING v104; // [rsp+100h] [rbp-898h]
  HWND v105; // [rsp+108h] [rbp-890h] BYREF
  void *v106; // [rsp+110h] [rbp-888h] BYREF
  HWND v107; // [rsp+118h] [rbp-880h]
  struct _SYSTEMTIME SystemTime; // [rsp+120h] [rbp-878h] BYREF
  HSTRING v109; // [rsp+130h] [rbp-868h] BYREF
  char *v110; // [rsp+138h] [rbp-860h] BYREF
  std::_Ref_count_base *v111; // [rsp+140h] [rbp-858h]
  wchar_t pszDest[1024]; // [rsp+150h] [rbp-848h] BYREF
  STRSAFE_LPWSTR v113; // [rsp+950h] [rbp-48h] BYREF
  size_t cchDest; // [rsp+958h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+998h] [rbp+0h]

  v3 = a3;
  v89 = a3;
  v4 = a2;
  pv = a2;
  v104 = a2;
  if ( a2 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)a2 + 8LL))(a2);
  *(_OWORD *)v95 = 0LL;
  hWnd = 0LL;
  v93 = 0LL;
  v85[0] = 0;
  if ( v3 != 7 && v3 )
  {
    if ( v3 == 9 )
    {
      if ( v4 == *(HSTRING *)(a1 + 280) )
      {
        v50 = *(_QWORD *)(a1 + 296);
        if ( v50 )
          _InterlockedIncrement((volatile signed __int32 *)(v50 + 8));
        v51 = *(std::_Ref_count_base **)(a1 + 288);
        v95[0] = v51;
        v9 = *(volatile signed __int32 **)(a1 + 296);
        v95[1] = (std::_Ref_count_base *)v9;
        if ( (GetWindowLongW(*((HWND *)v51 + 1), -16) & 0x20000000) != 0 && *(_QWORD *)v51 )
        {
          v62 = *((_DWORD *)v51 + 14);
          v84 = (v62 & 2) != 0;
          v63 = (*((_BYTE *)v51 + 16) != 0) | 0x40;
          if ( !*((_BYTE *)v51 + 18) )
            v63 = *((_BYTE *)v51 + 16) != 0;
          v64 = v63 | 2;
          if ( (v62 & 8) == 0 )
            v64 = v63;
          v65 = v64 | 4;
          if ( (v62 & 0x10) == 0 )
            v65 = v64;
          v66 = v65 | 8;
          if ( (v62 & 0x20) == 0 )
            v66 = v65;
          v67 = v66 | 0x10;
          if ( (v62 & 0x40) == 0 )
            v67 = v66;
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 3LL, v51, v67, 0, &v84);
          std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>(a1 + 280);
        }
        else if ( !WindowsIsStringEmpty(*((HSTRING *)v51 + 6)) )
        {
          v68 = *((_QWORD *)v51 + 8);
          if ( v68 )
          {
            dwFlagsb = *((_BYTE *)v51 + 19) == 0;
            v69 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v68 + 48LL))(
                    v68,
                    *(_QWORD *)v51,
                    2LL,
                    *((_QWORD *)v51 + 6));
            if ( v69 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xBDA,
                (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                (const char *)(unsigned int)v69,
                dwFlagsb);
          }
        }
        BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 0);
      }
      else
      {
        v9 = (volatile signed __int32 *)v95[1];
      }
      v43 = *(HSTRING *)(a1 + 304);
      if ( v4 != v43 )
        goto LABEL_16;
      if ( *(HSTRING *)(a1 + 328) != v43 )
      {
        if ( v43 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v43 + 8LL))(*(_QWORD *)(a1 + 304));
        v44 = *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v43;
        if ( v44 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      }
      v45 = *(_QWORD *)(a1 + 320);
      if ( v45 )
        _InterlockedIncrement((volatile signed __int32 *)(v45 + 8));
      v46 = *(_QWORD *)(a1 + 320);
      *(_QWORD *)(a1 + 336) = *(_QWORD *)(a1 + 312);
      v47 = *(std::_Ref_count_base **)(a1 + 344);
      *(_QWORD *)(a1 + 344) = v46;
      if ( v47 )
        std::_Ref_count_base::_Decref(v47);
      v48 = *(_QWORD *)(a1 + 304);
      if ( v48 )
      {
        *(_QWORD *)(a1 + 304) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      }
      *(_QWORD *)(a1 + 312) = 0LL;
      v49 = *(std::_Ref_count_base **)(a1 + 320);
      *(_QWORD *)(a1 + 320) = 0LL;
    }
    else
    {
      if ( v3 != 2 )
        goto LABEL_15;
      v6 = *(__int64 **)(a1 + 264);
      v7 = (__int64 *)v6[1];
      HIDWORD(v110) = 0;
      v8 = v6;
      if ( !*((_BYTE *)v7 + 25) )
      {
        do
        {
          if ( v7[4] >= (unsigned __int64)v4 )
          {
            v6 = v7;
            v7 = (__int64 *)*v7;
          }
          else
          {
            v7 = (__int64 *)v7[2];
          }
        }
        while ( !*((_BYTE *)v7 + 25) );
        v8 = *(__int64 **)(a1 + 264);
      }
      if ( v6 == v8 || *((_BYTE *)v6 + 25) || (unsigned __int64)v4 < v6[4] )
      {
LABEL_15:
        v9 = (volatile signed __int32 *)v95[1];
LABEL_16:
        if ( v9 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
        if ( v4 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v4 + 16LL))(v4);
        return;
      }
      v59 = v6[6];
      if ( v59 )
        _InterlockedIncrement((volatile signed __int32 *)(v59 + 8));
      v60 = v6[5];
      v95[0] = (std::_Ref_count_base *)v60;
      v9 = (volatile signed __int32 *)v6[6];
      v95[1] = (std::_Ref_count_base *)v9;
      if ( *(_BYTE *)(v60 + 20) )
        --*(_DWORD *)(a1 + 460);
      v61 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Extract(a1 + 264);
      std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>(v61 + 32);
      std::_Deallocate<16>(v61, 56LL);
      if ( *(_BYTE *)(v60 + 16) )
      {
        v52 = *(_DWORD *)(v60 + 56);
        v84 = (v52 & 2) != 0;
        v53 = (*(_BYTE *)(v60 + 18) != 0 ? 65 : 1) | 2;
        if ( (v52 & 8) == 0 )
          v53 = *(_BYTE *)(v60 + 18) != 0 ? 65 : 1;
        v54 = v53 | 4;
        if ( (v52 & 0x10) == 0 )
          v54 = v53;
        v55 = v54 | 8;
        if ( (v52 & 0x20) == 0 )
          v55 = v54;
        v56 = v55 | 0x10;
        if ( (v52 & 0x40) == 0 )
          v56 = v55;
        BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 1LL, v60, v56, 0, &v84);
        BroadcastDVRTraceProvider::GameExit();
        BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 0);
      }
      if ( v4 == *(HSTRING *)(a1 + 280) )
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>(a1 + 280);
      if ( v4 != *(HSTRING *)(a1 + 304) )
        goto LABEL_16;
      std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
        a1 + 328,
        a1 + 304);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 304);
      *(_QWORD *)(a1 + 312) = 0LL;
      v49 = *(std::_Ref_count_base **)(a1 + 320);
      *(_QWORD *)(a1 + 320) = 0LL;
    }
    if ( v49 )
      std::_Ref_count_base::_Decref(v49);
    goto LABEL_16;
  }
  v10 = *(__int64 **)(a1 + 264);
  v11 = (__int64 *)v10[1];
  HIDWORD(v110) = 0;
  v12 = v10;
  if ( !*((_BYTE *)v11 + 25) )
  {
    do
    {
      if ( v11[4] >= (unsigned __int64)v4 )
      {
        v10 = v11;
        v11 = (__int64 *)*v11;
      }
      else
      {
        v11 = (__int64 *)v11[2];
      }
    }
    while ( !*((_BYTE *)v11 + 25) );
    v12 = *(__int64 **)(a1 + 264);
  }
  if ( v10 != v12 && !*((_BYTE *)v10 + 25) && (unsigned __int64)v4 >= v10[4] )
  {
    v58 = v10[6];
    if ( v58 )
      _InterlockedIncrement((volatile signed __int32 *)(v58 + 8));
    v15 = (char *)v10[5];
    v95[0] = (std::_Ref_count_base *)v15;
    v9 = (volatile signed __int32 *)v10[6];
    v95[1] = (std::_Ref_count_base *)v9;
    if ( (v15[56] & 1) == 0 && *(_QWORD *)v15 )
      goto LABEL_50;
    v84 = v15[16];
    pv = 0LL;
    BroadcastDVRComponent::EvaluateIfViewIsGame(a1, v4, (__int64)(v15 + 16), v85, &hWnd, &v93, &pv);
    *(_QWORD *)v15 = hWnd;
    *((_QWORD *)v15 + 1) = v93;
    v57 = pv;
    if ( pv )
      std::wstring::operator=(v15 + 72, pv);
    if ( !v15[16] && v84 )
    {
      v70 = *((_DWORD *)v15 + 14);
      v84 = (v70 & 2) != 0;
      v71 = (v15[18] != 0 ? 0x40 : 0) | 2;
      if ( (v70 & 8) == 0 )
        v71 = v15[18] != 0 ? 0x40 : 0;
      v72 = v71 | 4;
      if ( (v70 & 0x10) == 0 )
        v72 = v71;
      v73 = v72 | 8;
      if ( (v70 & 0x20) == 0 )
        v73 = v72;
      v15[16] = 1;
      v74 = v73 | 0x10;
      if ( (v15[56] & 0x40) == 0 )
        v74 = v73;
      LOBYTE(dwFlags) = 0;
      BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 1LL, v15, v74, dwFlags, &v84);
      v15[16] = 0;
      BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 0);
    }
    *((_DWORD *)v15 + 14) ^= (*((_DWORD *)v15 + 14) ^ (4 * (unsigned __int8)v85[0])) & 4;
    if ( v57 )
      CoTaskMemFree(v57);
LABEL_49:
    v3 = v89;
LABEL_50:
    *((_DWORD *)v15 + 14) &= ~1u;
    v109 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v109);
    if ( v9 )
      _InterlockedIncrement(v9 + 2);
    v32 = *(_QWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 304) = v4;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    *(_QWORD *)(a1 + 312) = v15;
    v33 = *(std::_Ref_count_base **)(a1 + 320);
    *(_QWORD *)(a1 + 320) = v9;
    if ( v33 )
      std::_Ref_count_base::_Decref(v33);
    if ( v15[16] )
    {
      BroadcastDVRComponent::OnApplicationViewChangedGameMode(a1, v4, v3);
      v109 = v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v109);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v110, v95);
      std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
        a1 + 280,
        &v109);
      if ( v111 )
        std::_Ref_count_base::_Decref(v111);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v109);
      if ( *(_QWORD *)v15 )
      {
        v34 = *((_DWORD *)v15 + 14);
        v84 = (v34 & 2) != 0;
        v35 = (v34 & 2) == 0;
        v36 = (v15[16] != 0) | 0x40;
        if ( !v15[18] )
          v36 = v15[16] != 0;
        v37 = v36 | 2;
        if ( (v34 & 8) == 0 )
          v37 = v36;
        v38 = v37 | 4;
        if ( (v34 & 0x10) == 0 )
          v38 = v37;
        v39 = v38 | 8;
        if ( (v34 & 0x20) == 0 )
          v39 = v38;
        v40 = v39 | 0x10;
        if ( (v34 & 0x40) == 0 )
          v40 = v39;
        if ( !WindowsIsStringEmpty(*((HSTRING *)v15 + 6)) )
        {
          v41 = *((_QWORD *)v15 + 8);
          if ( v41 )
          {
            dwFlags = v15[19] == 0;
            v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v41 + 48LL))(
                    v41,
                    *(_QWORD *)v15,
                    1LL,
                    *((_QWORD *)v15 + 6));
            if ( v42 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xDEB,
                (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                (const char *)(unsigned int)v42,
                dwFlags);
          }
        }
        LOBYTE(dwFlags) = v35;
        BroadcastDVRComponent::SendShellNotificationToDVR(a1, 2LL, *(_QWORD *)v15, v40, dwFlags, &v84, v15);
        if ( v84 )
          *((_DWORD *)v15 + 14) |= 2u;
        if ( (*((_DWORD *)v15 + 14) & 0x104) == 0 )
          BroadcastDVRComponent::AddGameToMruList((BroadcastDVRComponent *)a1, (struct BroadcastDVRActiveAppInfo *)v15);
      }
      if ( (v15[56] & 4) == 0 )
        BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 1);
    }
    goto LABEL_16;
  }
  v96 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0LL;
  v101 = 0LL;
  string = 0LL;
  Src = 0LL;
  BroadcastDVRComponent::EvaluateIfViewIsGame(a1, v4, (__int64)&v96, v85, &hWnd, &v93, &Src);
  dwProcessId = 0;
  v84 = 1;
  v13 = hWnd;
  GetWindowThreadProcessId(hWnd, &dwProcessId);
  v14 = (HWND)operator new(0x78uLL);
  v107 = v14;
  v105 = v14;
  *((_DWORD *)v14 + 2) = 1;
  *((_DWORD *)v14 + 3) = 1;
  *(_QWORD *)v14 = &std::_Ref_count_obj2<BroadcastDVRActiveAppInfo>::`vftable';
  v15 = (char *)(v14 + 4);
  memset_0(v14 + 4, 0, 0x68uLL);
  std::wstring::wstring((__int64)(v14 + 22));
  v95[0] = (std::_Ref_count_base *)(v14 + 4);
  v95[1] = (std::_Ref_count_base *)v14;
  *((_QWORD *)v14 + 2) = v13;
  *((_QWORD *)v14 + 3) = v93;
  *((_WORD *)v14 + 16) = v96;
  *((_BYTE *)v14 + 34) = v97;
  *(_WORD *)((char *)v14 + 35) = v98;
  *((_DWORD *)v14 + 10) = v99;
  *(_WORD *)((char *)v14 + 37) = HIWORD(v98);
  *((_QWORD *)v14 + 6) = v100;
  *((_QWORD *)v14 + 7) = v101;
  newString = 0LL;
  v16 = WindowsDuplicateString(string, &newString);
  if ( v16 >= 0 )
  {
    v17 = (HSTRING)*((_QWORD *)v14 + 8);
    *((_QWORD *)v14 + 8) = newString;
    WindowsDeleteString(v17);
    v18 = ((_DWORD)v14[18] & 0xFFFFFFFB ^ (4 * (v85[0] & 1))) & 0xFFFFFFFD;
    *((_DWORD *)v14 + 18) = v18;
    v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(32 * *(_BYTE *)(a1 + 451))) & 0x20;
    *((_DWORD *)v14 + 18) = v19;
    v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(*(_BYTE *)(a1 + 452) << 6)) & 0x40;
    *((_DWORD *)v14 + 18) = v20;
    v21 = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)(8 * *(_BYTE *)(a1 + 449))) & 8;
    *((_DWORD *)v14 + 18) = v21;
    *((_DWORD *)v14 + 18) = (v21 & 0xFFFFFFEF ^ (16 * (*(_BYTE *)(a1 + 450) & 1))) & 0xFFFFFE7F | 0x80;
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)a1 + 112LL))(a1, dwProcessId, &v84);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB44,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v22,
        dwFlagsa);
    v23 = v84 != 0 ? 0x80 : 0;
    *((_DWORD *)v14 + 18) &= ~0x80u;
    *((_DWORD *)v14 + 18) |= v23;
    *((_DWORD *)v14 + 19) = 0;
    if ( *((_BYTE *)v14 + 32) && !WindowsIsStringEmpty(*((HSTRING *)v14 + 8)) )
    {
      v75 = *(_QWORD *)Windows::Internal::StringReference::StringReference(
                         &v109,
                         L"Windows.Gaming.GameBar.PresenceServer.Internal.PresenceWriter");
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14 + 10);
      *((_QWORD *)v14 + 10) = 0LL;
      newString = 0LL;
      v76 = RoActivateInstance(v75, &newString);
      if ( v76 >= 0 )
      {
        if ( !memcmp_0(&GUID_782674d9_5cbb_4fca_ad72_d9ac5f7ae963, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL) )
        {
          *((_QWORD *)v14 + 10) = newString;
        }
        else
        {
          v76 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, __int64))newString)(
                  newString,
                  &GUID_782674d9_5cbb_4fca_ad72_d9ac5f7ae963,
                  (__int64)(v14 + 20));
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)newString + 16LL))(newString);
        }
      }
      if ( v76 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB4E,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v76,
          dwFlagsa);
    }
    v24 = Src;
    if ( Src )
    {
      v25 = std::_WChar_traits<wchar_t>::length((__int64)Src);
      if ( v25 > (unsigned __int64)v26[3] )
      {
        std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
          v26,
          v25,
          v26,
          v24);
      }
      else
      {
        v27 = (char *)v26;
        if ( (unsigned __int64)v26[3] > 7 )
          v27 = *v26;
        v26[2] = (char *)v25;
        v28 = 2 * v25;
        memmove_0(v27, v24, 2 * v25);
        *(_WORD *)&v27[v28] = 0;
      }
    }
    StringRawBuffer = (HSTRING)WindowsGetStringRawBuffer(*((HSTRING *)v15 + 6), 0LL);
    newString = StringRawBuffer;
    v87[0] = v85[0];
    v88 = v15[17];
    v30 = v88;
    v86[0] = v15[16];
    v31 = v86[0];
    v106 = v93;
    v105 = hWnd;
    v113 = pszDest;
    cchDest = 1024LL;
    SystemTime = 0LL;
    GetLocalTime(&SystemTime);
    LODWORD(v80) = SystemTime.wMonth;
    StringCchPrintfExW(
      pszDest,
      cchDest,
      &v113,
      &cchDest,
      0,
      L"%02d/%02d %02d:%02d:%02d.%03d [%08p] ",
      v80,
      SystemTime.wDay,
      SystemTime.wHour,
      SystemTime.wMinute,
      SystemTime.wSecond,
      SystemTime.wMilliseconds,
      NtCurrentTeb()->ClientId.UniqueThread);
    StringCchPrintfExW(
      v113,
      cchDest,
      &v113,
      &cchDest,
      0,
      L"%S: ",
      "BroadcastDVRComponent_OnApplicationViewChanged_NewApp");
    StringCchPrintfExW(v113, cchDest, &v113, &cchDest, 0, L"%S=0x%I64x ", "hWnd", hWnd);
    StringCchPrintfExW(v113, cchDest, &v113, &cchDest, 0, L"%S=0x%I64x ", "hWndRoot", v93);
    LODWORD(v81) = v31;
    StringCchPrintfExW(v113, cchDest, &v113, &cchDest, 0, L"%S=%d ", "fIsGame", v81);
    LODWORD(v82) = v30;
    StringCchPrintfExW(v113, cchDest, &v113, &cchDest, 0, L"%S=%d ", "fIsBlocked", v82);
    LODWORD(v83) = (unsigned __int8)v85[0];
    StringCchPrintfExW(v113, cchDest, &v113, &cchDest, 0, L"%S=%d ", "fIsXboxApp", v83);
    StringCchPrintfExW(v113, cchDest, &v113, &cchDest, 0, L"%S=\"%s\" ", "presenceId", StringRawBuffer);
    GameDVR_OutputDebug::OutputString(pszDest);
    GameDVRTraceProvider::Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp<void * &,void * &,bool &,bool &,bool &,unsigned short const * &>(
      (unsigned int)&v105,
      (unsigned int)&v106,
      (unsigned int)v86,
      (unsigned int)&v88,
      (__int64)v87,
      (__int64)&newString);
    if ( v15[20] )
    {
      ++*(_DWORD *)(a1 + 460);
      if ( *(_BYTE *)(a1 + 448) )
      {
        v86[0] = (*((_DWORD *)v15 + 14) & 2) != 0;
        LOBYTE(dwFlags) = 0;
        BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 32LL, v15, 0LL, dwFlags, v86);
      }
    }
    v109 = (HSTRING)pv;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v109);
    v9 = (volatile signed __int32 *)v107;
    _InterlockedIncrement((volatile signed __int32 *)v107 + 2);
    v110 = v15;
    v111 = (std::_Ref_count_base *)v9;
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>::_Emplace<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>>(
      a1 + 264,
      &SystemTime,
      &v109);
    if ( v111 )
      std::_Ref_count_base::_Decref(v111);
    if ( v109 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v109 + 16LL))(v109);
    if ( v24 )
      CoTaskMemFree(v24);
    if ( string )
      WindowsDeleteString(string);
    v4 = (HSTRING)pv;
    goto LABEL_49;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xB34,
    (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)(unsigned int)v16,
    dwFlagsa);
  if ( Src )
    CoTaskMemFree(Src);
  if ( string )
    WindowsDeleteString(string);
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
  if ( v4 )
  {
    v104 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
