/*
 * XREFs of ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x180613E78
 * Callers:
 *     wistd::__function::__func__lambda_51ba67eea9e80e77fb7b287e3585ad78__void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)_::operator() @ 0x180612B80 (wistd--__function--__func__lambda_51ba67eea9e80e77fb7b287e3585ad78__void___cdecl(enum_wil--Folde.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x1801BBE68 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BBE68.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x1801F31AC (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801F31AC.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180201B54 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180613528 (-BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x180615198 (-JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_N.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        const enum wil::FolderChangeEvent *a2,
        const unsigned __int16 *a3)
{
  char v6; // bl
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  _QWORD *v9; // rax
  const unsigned __int16 *v10; // rdx
  char v11; // si
  void *v12; // rax
  __int64 *v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp-B8h] BYREF
  const unsigned __int16 *v17; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int16 *v18[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-98h]
  _QWORD v20[2]; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-78h]
  unsigned __int64 v22; // [rsp+78h] [rbp-70h]
  _QWORD v23[2]; // [rsp+80h] [rbp-68h] BYREF
  int cchCount2[4]; // [rsp+90h] [rbp-58h]
  _QWORD v25[4]; // [rsp+A0h] [rbp-48h] BYREF

  v17 = a3;
  v6 = 0;
  v16 = 0;
  try
  {
    std::wstring::wstring((__int64)v20, (__int64)a3);
    std::wstring::wstring((__int64)v23, (__int64)L"Backup");
    if ( CompareStringOrdinal(a3, cchCount2[0], L"Backup", cchCount2[0], 1) != 2 || v21 <= *(_QWORD *)cchCount2 )
      goto LABEL_14;
    v7 = *(_QWORD *)cchCount2 + 1LL;
    *(_OWORD *)v18 = 0LL;
    v19 = 0LL;
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)v20, *(_QWORD *)cchCount2 + 1LL);
    v8 = -1LL;
    if ( v21 - v7 != -1LL )
      v8 = v21 - v7;
    v9 = v20;
    if ( v22 > 7 )
      v9 = (_QWORD *)v20[0];
    std::wstring::_Construct<1,unsigned short const *>((char **)v18, (char *)v9 + 2 * v7, v8);
    v6 = 3;
    v16 = 3;
    v10 = (const unsigned __int16 *)v18;
    if ( *((_QWORD *)&v19 + 1) > 7uLL )
      v10 = v18[0];
    if ( winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser(this, v10)
      && (*(_DWORD *)a2 == 1 || *(_DWORD *)a2 == 3) )
    {
      v11 = 1;
    }
    else
    {
LABEL_14:
      v11 = 0;
    }
    if ( (v6 & 1) != 0 )
      std::wstring::_Tidy_deallocate(v18);
    if ( v11 )
    {
      v12 = std::operator+<unsigned short>(v25, (__int64)this + 480, (__int64)L"\\");
      std::operator+<unsigned short>((__int64)v18, (__int64)v12, (__int64)a3);
      std::wstring::_Tidy_deallocate(v25);
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync(v13, (__int64 *)v18);
      std::wstring::_Tidy_deallocate(v18);
    }
    std::wstring::_Tidy_deallocate(v23);
    std::wstring::_Tidy_deallocate(v20);
  }
  catch ( ... )
  {
    v14 = winrt::to_hresult(&v16);
    CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[46],winrt::hresult,unsigned short const * &>(
      v15,
      v14,
      (__int64 *)&v17);
  }
}
