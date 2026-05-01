/*
 * XREFs of ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18069B560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1805E688C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x180689890 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x18068EFC8 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x180699DB0 (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CPinnedList::v_IsAcceptableTarget(
        __int64 a1,
        const ITEMIDLIST *a2,
        IUnknown *a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  char v8; // r15
  int v11; // r14d
  BOOL v12; // ebx
  int v13; // esi
  struct IShellItem **v14; // r8
  int TaskbarPinnableItem; // eax
  void *lpVtbl; // rcx
  BOOL v17; // edi
  int v18; // eax
  bool v19; // sf
  WCHAR *v20; // rcx
  const WCHAR *ExtensionW; // rax
  const WCHAR *v22; // rsi
  CPinnedList *v23; // rcx
  __int64 v24; // rax
  void *ppv; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *ppunk; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v28; // [rsp+40h] [rbp-C0h] BYREF
  struct IShellItem v29; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR v30[264]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR pszPath[264]; // [rsp+260h] [rbp+160h] BYREF

  v8 = a4;
  v11 = 1;
  v12 = 1;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  *a7 = 0LL;
  LODWORD(ppv) = 1073807360;
  if ( (int)SHGetNameAndFlagsW(a2, 0x8000u, pszPath, a4, (unsigned int *)&ppv) >= 0 )
  {
    v13 = (int)ppv;
    if ( ((unsigned int)ppv & 0x40000000) == 0 )
      return (v8 & 1) == 0;
    v12 = 0;
    ppv = 0LL;
    if ( SHCreateItemFromIDList(a2, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv) < 0 )
      return v12;
    v29.lpVtbl = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v29);
    TaskbarPinnableItem = TaskbarPinHelper::GetTaskbarPinnableItem((TaskbarPinHelper *)ppv, &v29, v14);
    lpVtbl = ppv;
    if ( TaskbarPinnableItem >= 0 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
      lpVtbl = v29.lpVtbl;
      v29.lpVtbl = 0LL;
      ppv = lpVtbl;
    }
    v12 = 1;
    v17 = (v13 & 0x10000) != 0;
    v30[0] = 0;
    ppunk = 0LL;
    if ( (v13 & 0x10000) == 0 )
      goto LABEL_20;
    if ( a3 )
    {
      IUnknown_Set(&ppunk, a3);
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(void *, _QWORD, const GUID *, GUID *, IUnknown **))(*(_QWORD *)lpVtbl + 24LL))(
              lpVtbl,
              0LL,
              &BHID_SFUIObject,
              &GUID_000214f9_0000_0000_c000_000000000046,
              &ppunk);
      v19 = v18 < 0;
      if ( v18 < 0 )
        goto LABEL_18;
    }
    v19 = (int)CPinnedList::GetAppPathFromShortcut(
                 (struct IShellLinkW *)ppunk,
                 (struct IShellItem *)ppv,
                 0x4000u,
                 (char *)v30) < 0;
LABEL_18:
    if ( v19 )
      v17 = 0;
LABEL_20:
    if ( (v8 & 1) != 0 )
    {
      v20 = v30;
      if ( !v17 )
        v20 = pszPath;
      ExtensionW = PathFindExtensionW(v20);
      v22 = ExtensionW;
      if ( ExtensionW )
      {
        if ( StrCmpICW(ExtensionW, L".EXE") && StrCmpICW(v22, L".MSC") )
          goto LABEL_37;
      }
    }
    if ( (v8 & 2) == 0 )
      goto LABEL_48;
    if ( v30[0] != 58 || v30[1] != 58 || v30[2] != 123 || !v30[3] )
      v11 = 0;
    if ( !(unsigned int)CPinnedList::_IsLocalHardDisk((CPinnedList *)lpVtbl, pszPath)
      || v17 && !v11 && !(unsigned int)CPinnedList::_IsLocalHardDisk(v23, v30) && !PathIsURLW(v30) )
    {
LABEL_37:
      v12 = 0;
    }
    else
    {
LABEL_48:
      if ( (v8 & 8) != 0 )
      {
        v12 = 0;
        v28 = 0LL;
        if ( CoCreateInstance(
               &CLSID_StartMenuCacheAndAppResolver,
               0LL,
               3u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               &v28) >= 0 )
        {
          v24 = *(_QWORD *)v28;
          if ( ppunk )
            v12 = (*(int (__fastcall **)(LPVOID, IUnknown *, void *))(v24 + 88))(v28, ppunk, ppv) >= 0;
          else
            v12 = (*(int (__fastcall **)(LPVOID, void *))(v24 + 80))(v28, ppv) >= 0;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    SafeRelease<IShellItemArray>((__int64 *)&ppunk);
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v29);
  }
  return v12;
}
