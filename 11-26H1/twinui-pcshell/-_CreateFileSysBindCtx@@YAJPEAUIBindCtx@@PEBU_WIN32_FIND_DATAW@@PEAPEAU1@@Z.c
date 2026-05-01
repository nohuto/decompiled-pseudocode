/*
 * XREFs of ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x180698A04
 * Callers:
 *     ?SHSimpleIDListFromFindDataAndFlags@@YAJPEBGPEBU_WIN32_FIND_DATAW@@W4SIMPLE_IDLIST_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180696678 (-SHSimpleIDListFromFindDataAndFlags@@YAJPEBGPEBU_WIN32_FIND_DATAW@@W4SIMPLE_IDLIST_FLAGS@@PEAPEF.c)
 *     ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x1806CB7C0 (-GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z.c)
 *     ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x1806CBE48 (-SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     BindCtx_SetMode @ 0x18068D664 (BindCtx_SetMode.c)
 *     ?CreateFileSystemBindData@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18068DD10 (-CreateFileSystemBindData@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _CreateFileSysBindCtx(
        const struct _GUID *a1,
        const struct _WIN32_FIND_DATAW *a2,
        struct IBindCtx **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  LPBC v8; // rcx
  void *v10; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v11[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]

  *a3 = 0LL;
  v10 = 0LL;
  v7 = CreateFileSystemBindData(a1, &v10);
  if ( v7 >= 0 )
  {
    if ( a2 )
      (*(void (__fastcall **)(void *, const struct _WIN32_FIND_DATAW *))(*(_QWORD *)v10 + 24LL))(v10, a2);
    v7 = BindCtx_SetMode(v6, v5, a3);
    if ( v7 >= 0 )
    {
      v8 = *a3;
      v11[0] = *(_OWORD *)L"File System Bind Data";
      v13 = *(_DWORD *)L"a";
      v12 = *(_QWORD *)L" Data";
      v11[1] = *(_OWORD *)L"tem Bind Data";
      ((void (__fastcall *)(LPBC, _OWORD *, void *))v8->lpVtbl->RegisterObjectParam)(v8, v11, v10);
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v7;
}
