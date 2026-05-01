/*
 * XREFs of ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800589A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180029F78 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x18005A178 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005A364 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18005A388 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18005A3E4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18005A4BC (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x18005A6C4 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x18005B0F0 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180127670 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x1801985AC (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801E2D2C (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ??$_Emplace_reallocate@PEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAPEAPEAXQEAPEAX$$QEAPEAX@Z @ 0x1801F6830 (--$_Emplace_reallocate@PEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAPEAPEAXQEAPEAX$$QEAPEA.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180295F8C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A3B28 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1802B6688 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$list@V-$basic_st.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802D0044 (-_Xlen_string@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802DEA4C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803372F4 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18055FADC (--$_Eqrange@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trai.c)
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x1805608A0 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x180560EB0 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@US.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180562920 (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=22 #try_helpers=1
void __fastcall StartupAppMonitor::StartupToastNotifier(void **a1)
{
  HKEY *v2; // rax
  unsigned int v3; // eax
  HANDLE *v4; // r12
  HANDLE *v5; // rbx
  HANDLE *v6; // rbx
  __int64 v7; // rdi
  const char *v8; // r9
  bool v9; // cf
  HANDLE *v10; // rdi
  DWORD v11; // eax
  const char *v12; // r9
  _QWORD **v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // r15
  _OWORD *v16; // r12
  _QWORD *v17; // r12
  unsigned __int64 v18; // r15
  _QWORD *v19; // r12
  unsigned __int64 v20; // r15
  _QWORD *v21; // r12
  unsigned __int64 v22; // r15
  _QWORD *v23; // r12
  unsigned __int64 v24; // r15
  _QWORD *v25; // r12
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r15
  void **v28; // r12
  unsigned __int64 v29; // r15
  void **v30; // r12
  unsigned __int64 v31; // r15
  void **v32; // r12
  unsigned __int64 v33; // r15
  void **v34; // r12
  __int64 v35; // rax
  unsigned __int64 v36; // r15
  void **v37; // r12
  const WCHAR *v38; // rdx
  LSTATUS Value; // eax
  LPCWSTR *v40; // r8
  LPCWSTR *i; // rcx
  __int64 v42; // rax
  LPCWSTR *v43; // rdx
  LPCWSTR *v44; // rcx
  __int64 v45; // rdi
  const wchar_t *j; // rdx
  __int64 v47; // rcx
  const WCHAR *v48; // rdx
  unsigned int v49; // eax
  const WCHAR *v50; // rdx
  LSTATUS v51; // eax
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 n; // rax
  _QWORD *v57; // rdi
  _QWORD *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rcx
  void *v61; // rdx
  HKEY v62; // rcx
  unsigned __int64 v63; // rdi
  size_t v64; // rcx
  void *v65; // rax
  unsigned __int64 v66; // rdi
  size_t size_of; // rax
  unsigned __int64 v68; // rdi
  size_t v69; // rax
  unsigned __int64 v70; // rdi
  size_t v71; // rax
  unsigned __int64 v72; // rdi
  size_t v73; // rax
  unsigned __int64 v74; // rdi
  size_t v75; // rax
  unsigned __int64 v76; // rdi
  size_t v77; // rcx
  WCHAR *v78; // rax
  unsigned __int64 v79; // rdi
  size_t v80; // rcx
  WCHAR *v81; // rax
  unsigned __int64 v82; // rdi
  size_t v83; // rcx
  WCHAR *v84; // rax
  unsigned __int64 v85; // rdi
  size_t v86; // rcx
  void *v87; // rax
  unsigned __int64 v88; // rdi
  size_t v89; // rcx
  void *v90; // rax
  unsigned __int64 v91; // r15
  __int64 v92; // rdi
  size_t v93; // rax
  BYTE *v94; // rdx
  BYTE *v95; // rdi
  unsigned __int64 m; // rcx
  BYTE *v97; // rax
  const WCHAR *v98; // rdx
  LPBYTE *v99; // rdx
  __int128 v100; // xmm3
  __m128i v101; // xmm2
  unsigned __int64 v102; // xmm2_8
  const struct std::nothrow_t *v103; // rdx
  void *v104; // rcx
  void *v105; // rdx
  LPBYTE v106; // rcx
  _QWORD *v107; // rdx
  void *v108; // rdx
  const struct std::nothrow_t *v109; // rcx
  __int128 *v110; // rax
  int v111; // r15d
  const struct std::filesystem::path *v112; // rdx
  LPBYTE *v113; // rdi
  unsigned __int64 k; // rcx
  _QWORD *v115; // rdi
  const WCHAR *v116; // rax
  unsigned int v117; // eax
  const unsigned __int16 *v118; // rax
  const unsigned __int16 *v119; // r8
  const unsigned __int16 *v120; // rax
  const unsigned __int16 *v121; // rdx
  bool v122; // r8
  const WCHAR *v123; // rax
  unsigned int v124; // eax
  const unsigned __int16 *v125; // rax
  const unsigned __int16 *v126; // r8
  const unsigned __int16 *v127; // rax
  const unsigned __int16 *v128; // rdx
  bool v129; // r8
  unsigned int phkResult; // [rsp+20h] [rbp-338h]
  unsigned int phkResulta; // [rsp+20h] [rbp-338h]
  unsigned int phkResultb; // [rsp+20h] [rbp-338h]
  unsigned int phkResultc; // [rsp+20h] [rbp-338h]
  BYTE Data[8]; // [rsp+50h] [rbp-308h] BYREF
  void *v135[2]; // [rsp+60h] [rbp-2F8h] BYREF
  HKEY v136; // [rsp+70h] [rbp-2E8h] BYREF
  void *v137[2]; // [rsp+78h] [rbp-2E0h] BYREF
  DWORD cbData; // [rsp+88h] [rbp-2D0h] BYREF
  int v139; // [rsp+8Ch] [rbp-2CCh]
  DWORD Type; // [rsp+90h] [rbp-2C8h] BYREF
  HKEY hKey; // [rsp+98h] [rbp-2C0h] BYREF
  HANDLE *lpHandles[2]; // [rsp+A0h] [rbp-2B8h] BYREF
  HANDLE *v143; // [rsp+B0h] [rbp-2A8h]
  HANDLE *v144; // [rsp+B8h] [rbp-2A0h]
  __int64 v145; // [rsp+C0h] [rbp-298h] BYREF
  _QWORD v146[3]; // [rsp+D0h] [rbp-288h] BYREF
  char v147[24]; // [rsp+E8h] [rbp-270h] BYREF
  HKEY v148; // [rsp+100h] [rbp-258h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+108h] [rbp-250h] BYREF
  unsigned __int64 v150; // [rsp+118h] [rbp-240h]
  unsigned __int64 v151; // [rsp+120h] [rbp-238h]
  LPCWSTR v152[2]; // [rsp+128h] [rbp-230h] BYREF
  unsigned __int64 v153; // [rsp+138h] [rbp-220h]
  unsigned __int64 v154; // [rsp+140h] [rbp-218h]
  LPCWSTR lpValueName[2]; // [rsp+148h] [rbp-210h] BYREF
  unsigned __int64 v156; // [rsp+158h] [rbp-200h]
  unsigned __int64 v157; // [rsp+160h] [rbp-1F8h]
  __int128 v158; // [rsp+168h] [rbp-1F0h] BYREF
  unsigned __int64 v159; // [rsp+178h] [rbp-1E0h]
  unsigned __int64 v160; // [rsp+180h] [rbp-1D8h]
  int v161; // [rsp+188h] [rbp-1D0h]
  __int64 v162; // [rsp+190h] [rbp-1C8h]
  __int128 v163; // [rsp+198h] [rbp-1C0h] BYREF
  unsigned __int64 v164; // [rsp+1A8h] [rbp-1B0h]
  __int64 v165; // [rsp+1B0h] [rbp-1A8h]
  LPBYTE lpData[2]; // [rsp+1C0h] [rbp-198h] BYREF
  __m128i v167; // [rsp+1D0h] [rbp-188h]
  void *v168[2]; // [rsp+1E0h] [rbp-178h]
  unsigned __int64 v169; // [rsp+1F0h] [rbp-168h]
  unsigned __int64 v170; // [rsp+1F8h] [rbp-160h]
  HKEY v171; // [rsp+200h] [rbp-158h] BYREF
  void *Src[2]; // [rsp+208h] [rbp-150h] BYREF
  unsigned __int64 v173; // [rsp+218h] [rbp-140h]
  unsigned __int64 v174; // [rsp+220h] [rbp-138h]
  void *v175[2]; // [rsp+228h] [rbp-130h] BYREF
  unsigned __int64 v176; // [rsp+238h] [rbp-120h]
  unsigned __int64 v177; // [rsp+240h] [rbp-118h]
  void *v178[2]; // [rsp+248h] [rbp-110h] BYREF
  unsigned __int64 v179; // [rsp+258h] [rbp-100h]
  unsigned __int64 v180; // [rsp+260h] [rbp-F8h]
  void *v181[2]; // [rsp+268h] [rbp-F0h] BYREF
  unsigned __int64 v182; // [rsp+278h] [rbp-E0h]
  unsigned __int64 v183; // [rsp+280h] [rbp-D8h]
  int v184; // [rsp+288h] [rbp-D0h]
  __int64 v185; // [rsp+290h] [rbp-C8h]
  void *v186[2]; // [rsp+298h] [rbp-C0h] BYREF
  unsigned __int64 v187; // [rsp+2A8h] [rbp-B0h]
  unsigned __int64 v188; // [rsp+2B0h] [rbp-A8h]
  void *v189[3]; // [rsp+2C0h] [rbp-98h] BYREF
  unsigned __int64 v190; // [rsp+2D8h] [rbp-80h]
  __int128 v191; // [rsp+2E0h] [rbp-78h] BYREF
  __m128i v192; // [rsp+2F0h] [rbp-68h]
  void *v193[4]; // [rsp+300h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+0h]

  v139 = 0;
  hKey = 0LL;
  v2 = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v3 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\RunNotification",
         0,
         0x2011Bu,
         v2);
  try
  {
    if ( v3 )
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        (void *)0xC3,
        (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
        (const char *)v3,
        phkResult);
    *(_OWORD *)lpHandles = 0LL;
    v143 = 0LL;
    v4 = a1 + 22;
    v144 = a1 + 22;
    v135[0] = a1[22];
    std::vector<void *>::_Emplace_reallocate<void *>(lpHandles, 0LL, v135);
    v135[0] = StartupAppMonitor::s_showNotificationMapUpdateEvent;
    v5 = lpHandles[1];
    if ( lpHandles[1] == v143 )
    {
      std::vector<void *>::_Emplace_reallocate<void *>(lpHandles, lpHandles[1], v135);
      v6 = lpHandles[1];
    }
    else
    {
      *lpHandles[1] = StartupAppMonitor::s_showNotificationMapUpdateEvent;
      v6 = v5 + 1;
      lpHandles[1] = v6;
    }
LABEL_5:
    std::_Mutex_base::lock((std::_Mutex_base *)&StartupAppMonitor::s_showNotificationMapMutex);
    v7 = qword_18089A0D0;
    if ( !ResetEvent(StartupAppMonitor::s_showNotificationMapUpdateEvent) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x9C8,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v8);
    _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
    v9 = v7 == 0;
    v10 = lpHandles[0];
    if ( v9 && !WaitForMultipleObjects(v6 - lpHandles[0], lpHandles[0], 0, 0xFFFFFFFF) )
      goto LABEL_209;
    v11 = WaitForSingleObjectEx(*v4, 0x2710u, 0);
    if ( v11 != 258 )
    {
      if ( v11 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xAD4,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v12);
LABEL_209:
      if ( v10 )
        std::_Deallocate<16,0>(
          v10,
          (const struct std::nothrow_t *)(((char *)v143 - (char *)v10) & 0xFFFFFFFFFFFFFFF8uLL));
      if ( hKey )
        RegCloseKey(hKey);
      return;
    }
    std::chrono::steady_clock::now(&v145);
    v146[2] = &StartupAppMonitor::s_showNotificationMapMutex;
    std::_Mutex_base::lock((std::_Mutex_base *)&StartupAppMonitor::s_showNotificationMapMutex);
    v137[0] = 0LL;
    v137[1] = 0LL;
    v13 = (_QWORD **)std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    *v13 = v13;
    v13[1] = v13;
    v137[0] = v13;
    v14 = *(_QWORD *)StartupAppMonitor::s_showNotificationMap;
    while ( 1 )
    {
      if ( *(_BYTE *)(v14 + 25) )
      {
        v57 = *v13;
        v58 = v13;
        while ( v57 != v58 )
        {
          std::wstring::wstring(v193, v57 + 2);
          *(_OWORD *)v135 = *(_OWORD *)std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Eqrange<std::wstring>(
                                         v59,
                                         v147,
                                         v193);
          std::_Tree<std::_Tmap_traits<std::wstring,STARTUPAPPINFO,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,STARTUPAPPINFO>>,0>>::_Erase(
            v60,
            v135);
          std::wstring::_Tidy_deallocate(v193);
          v57 = (_QWORD *)*v57;
          v13 = (_QWORD **)v137[0];
        }
        *v13[1] = 0LL;
        v107 = *v13;
        if ( *v13 )
        {
          do
          {
            v115 = (_QWORD *)*v107;
            std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>();
            v107 = v115;
          }
          while ( v115 );
        }
        operator delete(v137[0], (const struct std::nothrow_t *)0x30);
        _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
        v6 = lpHandles[1];
        v4 = v144;
        goto LABEL_5;
      }
      *(_OWORD *)v168 = 0LL;
      v169 = 0LL;
      v170 = 0LL;
      v15 = *(_QWORD *)(v14 + 48);
      v16 = (_OWORD *)(v14 + 32);
      if ( *(_QWORD *)(v14 + 56) > 7uLL )
        v16 = *(_OWORD **)(v14 + 32);
      if ( v15 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v170 = 7LL;
      if ( v15 <= 7 )
      {
        v169 = v15;
        *(_OWORD *)v168 = *v16;
        goto LABEL_15;
      }
      v63 = v15 | 7;
      if ( (v15 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v63 = 0x7FFFFFFFFFFFFFFELL;
        v64 = -2LL;
      }
      else
      {
        if ( v63 < 0xA )
          v63 = 10LL;
        if ( v63 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v64 = 2 * (v63 + 1);
        if ( v64 < 0x1000 )
        {
          if ( v64 )
            v65 = operator new(v64);
          else
            v65 = 0LL;
          goto LABEL_113;
        }
      }
      v65 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v64);
LABEL_113:
      v168[0] = v65;
      v169 = v15;
      v170 = v63;
      memcpy_0(v65, v16, 2 * v15 + 2);
LABEL_15:
      v135[0] = &v171;
      v171 = *(HKEY *)(v14 + 64);
      v17 = (_QWORD *)(v14 + 72);
      *(_OWORD *)Src = 0LL;
      v173 = 0LL;
      v174 = 0LL;
      v18 = *(_QWORD *)(v14 + 88);
      if ( *(_QWORD *)(v14 + 96) > 7uLL )
        v17 = (_QWORD *)*v17;
      if ( v18 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v174 = 7LL;
      if ( v18 > 7 )
      {
        v66 = v18 | 7;
        if ( (v18 | 7) > 0x7FFFFFFFFFFFFFFELL )
        {
          v66 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v66 < 0xA )
        {
          v66 = 10LL;
        }
        size_of = std::_Get_size_of_n<2>(v66 + 1);
        Src[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
        v173 = v18;
        v174 = v66;
        memcpy_0(Src[0], v17, 2 * v18 + 2);
      }
      else
      {
        v173 = v18;
        *(_OWORD *)Src = *(_OWORD *)v17;
      }
      v19 = (_QWORD *)(v14 + 104);
      *(_OWORD *)v175 = 0LL;
      v176 = 0LL;
      v177 = 0LL;
      v20 = *(_QWORD *)(v14 + 120);
      if ( *(_QWORD *)(v14 + 128) > 7uLL )
        v19 = (_QWORD *)*v19;
      if ( v20 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v177 = 7LL;
      if ( v20 > 7 )
      {
        v68 = v20 | 7;
        if ( (v20 | 7) > 0x7FFFFFFFFFFFFFFELL )
        {
          v68 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v68 < 0xA )
        {
          v68 = 10LL;
        }
        v69 = std::_Get_size_of_n<2>(v68 + 1);
        v175[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(v69);
        v176 = v20;
        v177 = v68;
        memcpy_0(v175[0], v19, 2 * v20 + 2);
      }
      else
      {
        v176 = v20;
        *(_OWORD *)v175 = *(_OWORD *)v19;
      }
      v21 = (_QWORD *)(v14 + 136);
      *(_OWORD *)v178 = 0LL;
      v179 = 0LL;
      v180 = 0LL;
      v22 = *(_QWORD *)(v14 + 152);
      if ( *(_QWORD *)(v14 + 160) > 7uLL )
        v21 = (_QWORD *)*v21;
      if ( v22 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v180 = 7LL;
      if ( v22 > 7 )
      {
        v70 = v22 | 7;
        if ( (v22 | 7) > 0x7FFFFFFFFFFFFFFELL )
        {
          v70 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v70 < 0xA )
        {
          v70 = 10LL;
        }
        v71 = std::_Get_size_of_n<2>(v70 + 1);
        v178[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(v71);
        v179 = v22;
        v180 = v70;
        memcpy_0(v178[0], v21, 2 * v22 + 2);
      }
      else
      {
        v179 = v22;
        *(_OWORD *)v178 = *(_OWORD *)v21;
      }
      v23 = (_QWORD *)(v14 + 168);
      *(_OWORD *)v181 = 0LL;
      v182 = 0LL;
      v183 = 0LL;
      v24 = *(_QWORD *)(v14 + 184);
      if ( *(_QWORD *)(v14 + 192) > 7uLL )
        v23 = (_QWORD *)*v23;
      if ( v24 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v183 = 7LL;
      if ( v24 > 7 )
      {
        v72 = v24 | 7;
        if ( (v24 | 7) > 0x7FFFFFFFFFFFFFFELL )
        {
          v72 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v72 < 0xA )
        {
          v72 = 10LL;
        }
        v73 = std::_Get_size_of_n<2>(v72 + 1);
        v181[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(v73);
        v182 = v24;
        v183 = v72;
        memcpy_0(v181[0], v23, 2 * v24 + 2);
      }
      else
      {
        v182 = v24;
        *(_OWORD *)v181 = *(_OWORD *)v23;
      }
      v184 = *(_DWORD *)(v14 + 200);
      v185 = *(_QWORD *)(v14 + 208);
      v25 = (_QWORD *)(v14 + 216);
      *(_OWORD *)v186 = 0LL;
      v187 = 0LL;
      v188 = 0LL;
      v26 = *(_QWORD *)(v14 + 232);
      if ( *(_QWORD *)(v14 + 240) > 7uLL )
        v25 = (_QWORD *)*v25;
      if ( v26 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v188 = 7LL;
      if ( v26 > 7 )
      {
        v74 = v26 | 7;
        if ( (v26 | 7) > 0x7FFFFFFFFFFFFFFELL )
        {
          v74 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v74 < 0xA )
        {
          v74 = 10LL;
        }
        v75 = std::_Get_size_of_n<2>(v74 + 1);
        v186[0] = std::_Allocate<16,std::_Default_allocate_traits,0>(v75);
        v187 = v26;
        v188 = v74;
        memcpy_0(v186[0], v25, 2 * v26 + 2);
      }
      else
      {
        v187 = v26;
        *(_OWORD *)v186 = *(_OWORD *)v25;
      }
      v148 = v171;
      *(_OWORD *)lpSubKey = 0LL;
      v150 = 0LL;
      v151 = 0LL;
      v27 = v173;
      v28 = Src;
      if ( v174 > 7 )
        v28 = (void **)Src[0];
      if ( v173 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v151 = 7LL;
      if ( v173 <= 7 )
      {
        v150 = v173;
        *(_OWORD *)lpSubKey = *(_OWORD *)v28;
        goto LABEL_45;
      }
      v76 = v173 | 7;
      if ( (v173 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v76 = 0x7FFFFFFFFFFFFFFELL;
        v77 = -2LL;
      }
      else
      {
        if ( v76 < 0xA )
          v76 = 10LL;
        if ( v76 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v77 = 2 * (v76 + 1);
        if ( v77 < 0x1000 )
        {
          if ( v77 )
            v78 = (WCHAR *)operator new(v77);
          else
            v78 = 0LL;
          goto LABEL_141;
        }
      }
      v78 = (WCHAR *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v77);
LABEL_141:
      lpSubKey[0] = v78;
      v150 = v27;
      v151 = v76;
      memcpy_0(v78, v28, 2 * v27 + 2);
LABEL_45:
      *(_OWORD *)v152 = 0LL;
      v153 = 0LL;
      v154 = 0LL;
      v29 = v176;
      v30 = v175;
      if ( v177 > 7 )
        v30 = (void **)v175[0];
      if ( v176 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v154 = 7LL;
      if ( v176 <= 7 )
      {
        v153 = v176;
        *(_OWORD *)v152 = *(_OWORD *)v30;
        goto LABEL_50;
      }
      v79 = v176 | 7;
      if ( (v176 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v79 = 0x7FFFFFFFFFFFFFFELL;
        v80 = -2LL;
      }
      else
      {
        if ( v79 < 0xA )
          v79 = 10LL;
        if ( v79 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v80 = 2 * (v79 + 1);
        if ( v80 < 0x1000 )
        {
          if ( v80 )
            v81 = (WCHAR *)operator new(v80);
          else
            v81 = 0LL;
          goto LABEL_149;
        }
      }
      v81 = (WCHAR *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v80);
LABEL_149:
      v152[0] = v81;
      v153 = v29;
      v154 = v79;
      memcpy_0(v81, v30, 2 * v29 + 2);
LABEL_50:
      *(_OWORD *)lpValueName = 0LL;
      v156 = 0LL;
      v157 = 0LL;
      v31 = v179;
      v32 = v178;
      if ( v180 > 7 )
        v32 = (void **)v178[0];
      if ( v179 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v157 = 7LL;
      if ( v179 <= 7 )
      {
        v156 = v179;
        *(_OWORD *)lpValueName = *(_OWORD *)v32;
        goto LABEL_55;
      }
      v82 = v179 | 7;
      if ( (v179 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v82 = 0x7FFFFFFFFFFFFFFELL;
        v83 = -2LL;
      }
      else
      {
        if ( v82 < 0xA )
          v82 = 10LL;
        if ( v82 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v83 = 2 * (v82 + 1);
        if ( v83 < 0x1000 )
        {
          if ( v83 )
            v84 = (WCHAR *)operator new(v83);
          else
            v84 = 0LL;
          goto LABEL_157;
        }
      }
      v84 = (WCHAR *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v83);
LABEL_157:
      lpValueName[0] = v84;
      v156 = v31;
      v157 = v82;
      memcpy_0(v84, v32, 2 * v31 + 2);
LABEL_55:
      v158 = 0LL;
      v159 = 0LL;
      v160 = 0LL;
      v33 = v182;
      v34 = v181;
      if ( v183 > 7 )
        v34 = (void **)v181[0];
      if ( v182 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v160 = 7LL;
      if ( v182 <= 7 )
      {
        v159 = v182;
        v158 = *(_OWORD *)v34;
        goto LABEL_60;
      }
      v85 = v182 | 7;
      if ( (v182 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v85 = 0x7FFFFFFFFFFFFFFELL;
        v86 = -2LL;
      }
      else
      {
        if ( v85 < 0xA )
          v85 = 10LL;
        if ( v85 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v86 = 2 * (v85 + 1);
        if ( v86 < 0x1000 )
        {
          if ( v86 )
            v87 = operator new(v86);
          else
            v87 = 0LL;
          goto LABEL_165;
        }
      }
      v87 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v86);
LABEL_165:
      *(_QWORD *)&v158 = v87;
      v159 = v33;
      v160 = v85;
      memcpy_0(v87, v34, 2 * v33 + 2);
LABEL_60:
      v161 = v184;
      v35 = v185;
      v162 = v185;
      v163 = 0LL;
      v164 = 0LL;
      v165 = 0LL;
      v36 = v187;
      v37 = v186;
      if ( v188 > 7 )
        v37 = (void **)v186[0];
      if ( v187 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v165 = 7LL;
      if ( v187 <= 7 )
      {
        v164 = v187;
        v163 = *(_OWORD *)v37;
        goto LABEL_65;
      }
      v88 = v187 | 7;
      if ( (v187 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v88 = 0x7FFFFFFFFFFFFFFELL;
        v89 = -2LL;
      }
      else
      {
        if ( v88 < 0xA )
          v88 = 10LL;
        if ( v88 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v89 = 2 * (v88 + 1);
        if ( v89 < 0x1000 )
        {
          if ( v89 )
            v90 = operator new(v89);
          else
            v90 = 0LL;
          goto LABEL_173;
        }
      }
      v90 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v89);
LABEL_173:
      *(_QWORD *)&v163 = v90;
      v164 = v36;
      v165 = v88;
      memcpy_0(v90, v37, 2 * v36 + 2);
      v35 = v162;
LABEL_65:
      if ( v145 - v35 >= 10000000000LL )
      {
        v38 = (const WCHAR *)lpValueName;
        if ( v157 > 7 )
          v38 = lpValueName[0];
        Value = RegQueryValueExW(hKey, v38, 0LL, 0LL, 0LL, 0LL);
        if ( Value == 2 )
        {
          if ( (unsigned int)(v161 - 3) <= 1 )
          {
            v110 = &v158;
            if ( v160 > 7 )
              v110 = (__int128 *)v158;
            v146[0] = v110;
            v146[1] = v159;
            std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v189, v146);
            v111 = v139 | 1;
            v139 |= 1u;
            if ( std::filesystem::exists((std::filesystem *)v189, v112) )
            {
              std::wstring::wstring(lpData, v189);
              v139 = v111 | 2;
              StartupNotification::GetFileDescription(&v191, lpData);
              std::wstring::_Tidy_deallocate((void **)lpData);
              if ( v192.m128i_i64[0] )
              {
                *(_DWORD *)Data = v161;
                v123 = (const WCHAR *)std::wstring::c_str(lpValueName);
                v124 = RegSetValueExW(hKey, v123, 0, 4u, Data, 4u);
                if ( v124 )
                  wil::details::in1diag3::_Throw_Win32(
                    retaddr,
                    (void *)0xFB,
                    (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                    (const char *)v124,
                    phkResultc);
                std::list<std::wstring>::_Emplace<std::wstring const &>(v137, v137[0], v152);
                std::wstring::c_str(v152);
                v125 = (const unsigned __int16 *)std::wstring::c_str(&v163);
                if ( StartupAppMonitor::IsStartupAppEnabled(v148, v125, v126) )
                {
                  std::wstring::c_str(lpValueName);
                  v127 = (const unsigned __int16 *)std::wstring::c_str(&v191);
                  StartupNotification::ShowStartupAppNotification(v127, v128, v129);
                }
              }
              std::wstring::_Tidy_deallocate((void **)&v191);
            }
            else
            {
              std::list<std::wstring>::_Emplace<std::wstring const &>(v137, v137[0], v152);
            }
            std::wstring::_Tidy_deallocate(v189);
          }
          else
          {
            v136 = 0LL;
            v40 = lpSubKey;
            if ( v151 > 7 )
              v40 = (LPCWSTR *)lpSubKey[0];
            if ( v150 >= 0x39 )
            {
              for ( i = v40; ; i = (LPCWSTR *)((char *)v44 + 2) )
              {
                v42 = ((char *)v40 + 2 * v150 - 112 - (char *)i) >> 1;
                v43 = i;
                v44 = 0LL;
                if ( v42 )
                {
                  while ( *(_WORD *)v43 != 83 )
                  {
                    if ( v42 == 1 )
                      goto LABEL_77;
                    --v42;
                    v43 = (LPCWSTR *)((char *)v43 + 2);
                  }
                  v44 = v43;
                }
LABEL_77:
                if ( !v44 )
                  break;
                v45 = 57LL;
                for ( j = L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run"; ; ++j )
                {
                  if ( !v45 )
                  {
                    v47 = ((char *)v44 - (char *)v40) >> 1;
                    goto LABEL_83;
                  }
                  if ( *(const wchar_t *)((char *)j
                                        + (char *)v44
                                        - (char *)L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run") != *j )
                    break;
                  --v45;
                }
              }
            }
            v47 = -1LL;
LABEL_83:
            v136 = 0LL;
            v48 = (const WCHAR *)lpSubKey;
            if ( v151 > 7 )
              v48 = lpSubKey[0];
            v49 = RegCreateKeyExW(v148, v48, 0, 0LL, 0, v47 != 0 ? 281 : 537, 0LL, &v136, 0LL);
            if ( v49 )
              wil::details::in1diag3::_Throw_Win32(
                retaddr,
                (void *)0x10F,
                (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                (const char *)v49,
                phkResulta);
            cbData = 0;
            v50 = (const WCHAR *)v152;
            if ( v154 > 7 )
              v50 = v152[0];
            v51 = RegQueryValueExW(v136, v50, 0LL, 0LL, 0LL, &cbData);
            if ( v51 )
            {
              if ( v51 == 2 )
                std::list<std::wstring>::_Emplace<std::wstring const &>(v137, v137[0], v152);
            }
            else
            {
              Type = 0;
              v91 = (unsigned __int64)cbData >> 1;
              *(_OWORD *)lpData = 0LL;
              v167.m128i_i64[0] = 0LL;
              v167.m128i_i64[1] = 7LL;
              if ( v91 <= 7 )
              {
                v167.m128i_i64[0] = (unsigned __int64)cbData >> 1;
                if ( v91 )
                {
                  v113 = lpData;
                  for ( k = (unsigned __int64)cbData >> 1; k; --k )
                  {
                    *(_WORD *)v113 = 0;
                    v113 = (LPBYTE *)((char *)v113 + 2);
                  }
                }
                *((_WORD *)lpData + v91) = 0;
              }
              else
              {
                v92 = v91 | 7;
                if ( (v91 | 7) < 0xA )
                  v92 = 10LL;
                v93 = std::_Get_size_of_n<2>(v92 + 1);
                v94 = (BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v93);
                lpData[0] = v94;
                v167.m128i_i64[0] = v91;
                v167.m128i_i64[1] = v92;
                v95 = v94;
                for ( m = v91; m; --m )
                {
                  *(_WORD *)v95 = 0;
                  v95 += 2;
                }
                *(_WORD *)&v94[2 * v91] = 0;
              }
              v97 = (BYTE *)lpData;
              if ( v167.m128i_i64[1] > 7uLL )
                v97 = lpData[0];
              v98 = (const WCHAR *)v152;
              if ( v154 > 7 )
                v98 = v152[0];
              if ( !RegQueryValueExW(v136, v98, 0LL, &Type, v97, &cbData) && Type - 1 <= 1 )
              {
                if ( Type == 2 )
                {
                  v99 = lpData;
                  if ( v167.m128i_i64[1] > 7uLL )
                    v99 = (LPBYTE *)lpData[0];
                  wil::ExpandEnvironmentStringsW<std::wstring,256>(&v191, v99);
                  v100 = *(_OWORD *)lpData;
                  v101 = v167;
                  *(_OWORD *)lpData = v191;
                  v167 = v192;
                  v191 = v100;
                  v192 = v101;
                  v102 = _mm_srli_si128(v101, 8).m128i_u64[0];
                  if ( v102 > 7 )
                  {
                    v103 = (const struct std::nothrow_t *)(2 * v102 + 2);
                    *(_QWORD *)Data = v103;
                    v104 = (void *)v100;
                    v135[0] = (void *)v100;
                    if ( (unsigned __int64)v103 >= 0x1000 )
                    {
                      std::_Adjust_manually_vector_aligned(v135, (unsigned __int64 *)Data);
                      v103 = *(const struct std::nothrow_t **)Data;
                      v104 = v135[0];
                    }
                    operator delete(v104, v103);
                  }
                }
                StartupNotification::GetFileDescription(v189, lpData);
                if ( v189[2] )
                {
                  *(_DWORD *)Data = v161;
                  v116 = (const WCHAR *)std::wstring::c_str(lpValueName);
                  v117 = RegSetValueExW(hKey, v116, 0, 4u, Data, 4u);
                  if ( v117 )
                    wil::details::in1diag3::_Throw_Win32(
                      retaddr,
                      (void *)0x129,
                      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
                      (const char *)v117,
                      phkResultb);
                  std::list<std::wstring>::_Emplace<std::wstring const &>(v137, v137[0], v152);
                  std::wstring::c_str(v152);
                  v118 = (const unsigned __int16 *)std::wstring::c_str(&v163);
                  if ( StartupAppMonitor::IsStartupAppEnabled(v148, v118, v119) )
                  {
                    std::wstring::c_str(lpValueName);
                    v120 = (const unsigned __int16 *)std::wstring::c_str(v189);
                    StartupNotification::ShowStartupAppNotification(v120, v121, v122);
                  }
                }
                if ( v190 > 7 )
                {
                  v108 = (void *)(2 * v190 + 2);
                  v135[0] = v108;
                  v109 = (const struct std::nothrow_t *)v189[0];
                  *(void **)Data = v189[0];
                  if ( (unsigned __int64)v108 >= 0x1000 )
                  {
                    std::_Adjust_manually_vector_aligned((void **)Data, (unsigned __int64 *)v135);
                    v108 = v135[0];
                    v109 = *(const struct std::nothrow_t **)Data;
                  }
                  operator delete(v109, (const struct std::nothrow_t *)v108);
                }
              }
              if ( v167.m128i_i64[1] > 7uLL )
              {
                v105 = (void *)(2 * v167.m128i_i64[1] + 2);
                v135[0] = v105;
                v106 = lpData[0];
                *(LPBYTE *)Data = lpData[0];
                if ( (unsigned __int64)v105 >= 0x1000 )
                {
                  std::_Adjust_manually_vector_aligned((void **)Data, (unsigned __int64 *)v135);
                  v105 = v135[0];
                  v106 = *(LPBYTE *)Data;
                }
                operator delete(v106, (const struct std::nothrow_t *)v105);
              }
            }
            if ( v136 )
              RegCloseKey(v136);
          }
        }
        else if ( !Value )
        {
          std::list<std::wstring>::_Emplace<std::wstring const &>(v137, v137[0], v152);
        }
      }
      STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v148);
      STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v171);
      v54 = v170;
      if ( v170 > 7 )
      {
        v61 = (void *)(2 * v170 + 2);
        v135[0] = v61;
        v62 = (HKEY)v168[0];
        v136 = (HKEY)v168[0];
        if ( (unsigned __int64)v61 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned((void **)&v136, (unsigned __int64 *)v135);
          v61 = v135[0];
          v62 = v136;
        }
        operator delete(v62, (const struct std::nothrow_t *)v61);
      }
      v55 = *(_QWORD *)(v14 + 16);
      if ( *(_BYTE *)(v55 + 25) )
      {
        for ( n = *(_QWORD *)(v14 + 8); !*(_BYTE *)(n + 25) && v14 == *(_QWORD *)(n + 16); n = *(_QWORD *)(n + 8) )
          v14 = n;
      }
      else
      {
        n = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(
              v55,
              v54,
              v52,
              v53);
      }
      v14 = n;
      v13 = (_QWORD **)v137[0];
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x147,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
      v12);
  }
}
