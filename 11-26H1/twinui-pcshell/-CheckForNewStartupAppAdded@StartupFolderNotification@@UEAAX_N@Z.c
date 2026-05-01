/*
 * XREFs of ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031D64 (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180032474 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1800327E0 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800334F0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Take_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEAV12@@Z @ 0x1800336B0 (-_Take_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXAEAV12@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x1800E16FC (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x1800E1E34 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800E363C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x1802917C8 (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180294F0C (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 *     ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x1802B03F8 (-_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAV-.c)
 *     ??0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z @ 0x1802B4EF4 (--0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180315134 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180336D74 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x180586E50 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall StartupFolderNotification::CheckForNewStartupAppAdded(StartupFolderNotification *this, char a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // eax
  volatile signed __int32 *v7; // rdi
  unsigned __int64 *v8; // r15
  unsigned __int64 v9; // rax
  const unsigned __int16 *v10; // r8
  _OWORD *v11; // rsi
  std::filesystem *v12; // rcx
  const unsigned __int16 *filename; // rax
  __int64 v14; // r11
  LPCWSTR *v15; // rcx
  unsigned __int64 v16; // rax
  void *v17; // rcx
  const unsigned __int16 *v18; // r8
  std::filesystem *v19; // rcx
  const unsigned __int16 *v20; // rax
  __int64 v21; // r11
  const WCHAR *v22; // rdx
  LSTATUS Value; // ebx
  __int64 v24; // rax
  unsigned int v25; // eax
  const WCHAR *v26; // rdx
  unsigned int v27; // eax
  const WCHAR *v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rax
  _OWORD *v32; // rdx
  __int64 v33; // rax
  int updated; // eax
  const WCHAR *v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int lpData; // [rsp+28h] [rbp-E0h]
  unsigned int lpDataa; // [rsp+28h] [rbp-E0h]
  int lpDatab; // [rsp+28h] [rbp-E0h]
  unsigned int lpDatac; // [rsp+28h] [rbp-E0h]
  BYTE v43[8]; // [rsp+38h] [rbp-D0h] BYREF
  int Data; // [rsp+40h] [rbp-C8h] BYREF
  BYTE Data_8[16]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v46[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v47[192]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v48; // [rsp+138h] [rbp+30h] BYREF
  __int128 v49; // [rsp+140h] [rbp+38h] BYREF
  __int64 v50; // [rsp+150h] [rbp+48h]
  __int64 v51; // [rsp+158h] [rbp+50h]
  __int128 v52; // [rsp+160h] [rbp+58h] BYREF
  __int64 v53; // [rsp+170h] [rbp+68h]
  __int64 v54; // [rsp+178h] [rbp+70h]
  __int128 v55; // [rsp+180h] [rbp+78h] BYREF
  __int64 v56; // [rsp+190h] [rbp+88h]
  __int64 v57; // [rsp+198h] [rbp+90h]
  __int128 v58; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v59; // [rsp+1B0h] [rbp+A8h]
  __int64 v60; // [rsp+1B8h] [rbp+B0h]
  int v61; // [rsp+1C0h] [rbp+B8h]
  int v62; // [rsp+1C4h] [rbp+BCh]
  _BYTE v63[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v64; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v65; // [rsp+1E0h] [rbp+D8h]
  __int64 v66; // [rsp+1E8h] [rbp+E0h]
  LPCWSTR lpValueName[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int128 v68; // [rsp+208h] [rbp+100h]
  LPCWSTR Src[2]; // [rsp+218h] [rbp+110h] BYREF
  __int128 v70; // [rsp+228h] [rbp+120h]
  _OWORD v71[2]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v72[4]; // [rsp+258h] [rbp+150h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B0h] [rbp+1A8h]

  v4 = (_QWORD *)((char *)this + 64);
  v5 = *((_QWORD *)this + 10);
  if ( v4[3] > 7uLL )
    v4 = (_QWORD *)*v4;
  *(_QWORD *)Data_8 = v4;
  *(_QWORD *)&Data_8[8] = v5;
  std::wstring::wstring((__int64)lpValueName, (__int64)Data_8);
  v46[0] = 0LL;
  v6 = std::filesystem::_Dir_enum_impl::_Initialize_dir_enum<std::filesystem::_Dir_enum_impl>(v46, (__int64)lpValueName);
  if ( v6 )
    std::filesystem::_Throw_fs_error("directory_iterator::directory_iterator", v6, lpValueName);
  std::wstring::_Tidy_deallocate(lpValueName);
  v7 = (volatile signed __int32 *)*((_QWORD *)&v46[0] + 1);
  if ( *((_QWORD *)&v46[0] + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v46[0] + 1) + 8LL));
  *(_OWORD *)Data_8 = v46[0];
  if ( v7 )
    _InterlockedIncrement(v7 + 2);
  v46[1] = 0LL;
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  while ( 1 )
  {
    v8 = *(unsigned __int64 **)Data_8;
    if ( !*(_QWORD *)Data_8 )
      break;
    *(_OWORD *)Src = 0LL;
    v70 = 0LL;
    v9 = std::_WChar_traits<wchar_t>::length((__int64)L"StartupTNoti");
    std::wstring::_Construct<1,unsigned short const *>((char **)Src, L"StartupTNoti", v9);
    v11 = v8 + 4;
    v12 = (std::filesystem *)(v8 + 4);
    if ( v8[7] > 7 )
      v12 = *(std::filesystem **)v11;
    filename = std::filesystem::_Find_filename(v12, (const unsigned __int16 *)v12 + v8[6], v10);
    *(_OWORD *)lpValueName = 0LL;
    v68 = 0uLL;
    std::wstring::_Construct<1,unsigned short const *>((char **)lpValueName, filename, (v14 - (__int64)filename) >> 1);
    v15 = lpValueName;
    if ( *((_QWORD *)&v68 + 1) > 7uLL )
      v15 = (LPCWSTR *)lpValueName[0];
    v16 = std::_WChar_traits<wchar_t>::length((__int64)v15);
    std::wstring::append(Src, v17, v16);
    std::wstring::_Tidy_deallocate(lpValueName);
    v19 = (std::filesystem *)(v8 + 4);
    if ( v8[7] > 7 )
      v19 = *(std::filesystem **)v11;
    v20 = std::filesystem::_Find_filename(v19, (const unsigned __int16 *)v19 + v8[6], v18);
    *(_OWORD *)lpValueName = 0LL;
    v68 = 0uLL;
    std::wstring::_Construct<1,unsigned short const *>((char **)lpValueName, v20, (v21 - (__int64)v20) >> 1);
    v22 = (const WCHAR *)lpValueName;
    if ( *((_QWORD *)&v68 + 1) > 7uLL )
      v22 = lpValueName[0];
    Value = RegQueryValueExW(*((HKEY *)this + 1), v22, 0LL, 0LL, 0LL, 0LL);
    std::wstring::_Tidy_deallocate(lpValueName);
    if ( !Value )
    {
      v24 = std::filesystem::path::filename(v8 + 4, v71);
      if ( *(_QWORD *)(v24 + 24) > 7uLL )
        v24 = *(_QWORD *)v24;
      v25 = RegDeleteValueW(*((HKEY *)this + 1), (LPCWSTR)v24);
      if ( v25 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0x148,
          (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v25,
          lpData);
      std::wstring::_Tidy_deallocate(v71);
      Data = *((_DWORD *)this + 14);
      v26 = (const WCHAR *)Src;
      if ( *((_QWORD *)&v70 + 1) > 7uLL )
        v26 = Src[0];
      v27 = RegSetValueExW(*((HKEY *)this + 1), v26, 0, 4u, (const BYTE *)&Data, 4u);
      if ( v27 )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          (void *)0x14B,
          (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v27,
          lpDataa);
    }
    v28 = (const WCHAR *)Src;
    if ( *((_QWORD *)&v70 + 1) > 7uLL )
      v28 = Src[0];
    if ( RegQueryValueExW(*((HKEY *)this + 1), v28, 0LL, 0LL, 0LL, 0LL) == 2
      && StartupFolderNotification::IsValidStartupAppFile((const struct std::filesystem::directory_entry *)v8) )
    {
      if ( a2 )
      {
        v29 = std::filesystem::path::filename(v8 + 4, v72);
        memset(v71, 0, sizeof(v71));
        v30 = *(_QWORD *)(v29 + 16);
        if ( *(_QWORD *)(v29 + 24) > 7uLL )
          v29 = *(_QWORD *)v29;
        std::wstring::_Construct<2,unsigned short const *>(v71, (_OWORD *)v29, v30);
        std::wstring::_Tidy_deallocate(v72);
        *(_OWORD *)lpValueName = 0LL;
        v68 = 0LL;
        if ( v8[7] > 7 )
          v11 = *(_OWORD **)v11;
        std::wstring::_Construct<2,unsigned short const *>(lpValueName, v11, v8[6]);
        v48 = *((_QWORD *)this + 12);
        v49 = 0LL;
        v50 = 0LL;
        v51 = 0LL;
        v31 = std::_WChar_traits<wchar_t>::length((__int64)&pvData);
        std::wstring::_Construct<1,unsigned short const *>((char **)&v49, &pvData, v31);
        v52 = 0LL;
        v53 = 0LL;
        v54 = 0LL;
        std::wstring::_Take_contents(&v52, (__int64)v71);
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        std::wstring::_Take_contents(&v55, (__int64)Src);
        v58 = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        std::wstring::_Take_contents(&v58, (__int64)lpValueName);
        v61 = *((_DWORD *)this + 14);
        v62 = 0;
        std::chrono::steady_clock::now(v63);
        v32 = (_OWORD *)((char *)this + 24);
        v64 = 0LL;
        v65 = 0LL;
        v66 = 0LL;
        if ( *((_QWORD *)this + 6) > 7uLL )
          v32 = *(_OWORD **)v32;
        std::wstring::_Construct<2,unsigned short const *>(&v64, v32, *((_QWORD *)this + 5));
        v33 = STARTUPAPPINFO::STARTUPAPPINFO(v47, &v48);
        updated = StartupAppMonitor::UpdateNotificationMap(v33);
        if ( updated < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x159,
            (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
            (const char *)(unsigned int)updated,
            lpDatab);
        std::wstring::_Tidy_deallocate(&v64);
        std::wstring::_Tidy_deallocate(&v58);
        std::wstring::_Tidy_deallocate(&v55);
        std::wstring::_Tidy_deallocate(&v52);
        std::wstring::_Tidy_deallocate(&v49);
        std::wstring::_Tidy_deallocate(lpValueName);
        std::wstring::_Tidy_deallocate(v71);
      }
      else
      {
        *(_DWORD *)v43 = *((_DWORD *)this + 14);
        v35 = (const WCHAR *)Src;
        if ( *((_QWORD *)&v70 + 1) > 7uLL )
          v35 = Src[0];
        v36 = RegSetValueExW(*((HKEY *)this + 1), v35, 0, 4u, v43, 4u);
        if ( v36 )
          wil::details::in1diag3::_Throw_Win32(
            retaddr,
            (void *)0x161,
            (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
            (const char *)v36,
            lpDatac);
      }
    }
    std::wstring::_Tidy_deallocate(Src);
    v37 = std::filesystem::_Dir_enum_impl::_Advance_and_reset_if_no_more_files(Data_8);
    if ( v37 )
      std::filesystem::_Throw_fs_error(v38, v37);
  }
  if ( *(_QWORD *)&Data_8[8] )
    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&Data_8[8]);
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
}
