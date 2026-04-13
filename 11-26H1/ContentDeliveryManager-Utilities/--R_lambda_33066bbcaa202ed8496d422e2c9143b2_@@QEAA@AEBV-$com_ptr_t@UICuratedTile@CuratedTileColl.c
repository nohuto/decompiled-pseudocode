/*
 * XREFs of ??R_lambda_33066bbcaa202ed8496d422e2c9143b2_@@QEAA@AEBV?$com_ptr_t@UICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180095C90
 * Callers:
 *     CreativeFramework::Actions::EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___ @ 0x180094B10 (CreativeFramework--Actions--EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall _lambda_33066bbcaa202ed8496d422e2c9143b2_::operator()(__int64 a1, __int64 **a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rdi
  int v9; // eax
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-50h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-50h]
  HSTRING string; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v19 = 0LL;
  v4 = *a2;
  v5 = **a2;
  v19 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 48))(v4, &v19);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      575LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6,
      bIgnoreCase);
  string = 0LL;
  v7 = v19;
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v19 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = v8(v7, &string);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      578LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9,
      bIgnoreCase);
  StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  v11 = WindowsGetStringRawBuffer(string, 0LL);
  if ( CompareStringOrdinal(v11, -1, StringRawBuffer, -1, 1) == 2 )
  {
    v21 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(**a2 + 56))(*a2, &v21);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        582LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v12,
        bIgnoreCasea);
    v13 = **(_QWORD **)(a1 + 8);
    v20 = v21;
    v14 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 208LL))(v13, &v20);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        583LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v14,
        bIgnoreCasea);
    **(_BYTE **)(a1 + 16) = 1;
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v19);
    return 0;
  }
  else
  {
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v19);
    return 1;
  }
}
