/*
 * XREFs of DisplayNameOfW @ 0x18068B21C
 * Callers:
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x180689890 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x1806CB960 (-GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HRESULT __fastcall DisplayNameOfW(__int64 a1, const ITEMIDLIST *a2, unsigned int a3, WCHAR *a4)
{
  HRESULT result; // eax
  STRRET pstr; // [rsp+30h] [rbp-148h] BYREF

  *a4 = 0;
  memset_0(&pstr, 0, sizeof(pstr));
  result = (*(__int64 (__fastcall **)(__int64, const ITEMIDLIST *, _QWORD, STRRET *))(*(_QWORD *)a1 + 88LL))(
             a1,
             a2,
             a3,
             &pstr);
  if ( result >= 0 )
    return StrRetToBufW(&pstr, a2, a4, 0x104u);
  return result;
}
