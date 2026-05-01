/*
 * XREFs of ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x180674830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802C068C (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1805C2B4C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x180663180 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x1806688A8 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x1806730DC (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::v_IsAcceptableTarget(
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
  unsigned int v11; // ebx
  int v12; // esi
  struct IShellItem **v13; // r8
  int TaskbarPinnableItem; // eax
  void *lpVtbl; // rcx
  BOOL v16; // edi
  int v17; // eax
  bool v18; // sf
  WCHAR *v19; // rcx
  const WCHAR *ExtensionW; // rax
  const WCHAR *v21; // rsi
  int v22; // r14d
  CPinnedList *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // ebx
  void *ppv; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *ppunk; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v30; // [rsp+40h] [rbp-C0h] BYREF
  struct IShellItem v31; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR v32[264]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR pszPath[264]; // [rsp+260h] [rbp+160h] BYREF

  v8 = a4;
  v11 = 1;
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
    v12 = (int)ppv;
    if ( ((unsigned int)ppv & 0x40000000) == 0 )
      return (v8 & 1) == 0;
    v11 = 0;
    ppv = 0LL;
    if ( SHCreateItemFromIDList(a2, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv) < 0 )
      return v11;
    v31.lpVtbl = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v31);
    TaskbarPinnableItem = TaskbarPinHelper::GetTaskbarPinnableItem((TaskbarPinHelper *)ppv, &v31, v13);
    lpVtbl = ppv;
    if ( TaskbarPinnableItem >= 0 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
      lpVtbl = v31.lpVtbl;
      v31.lpVtbl = 0LL;
      ppv = lpVtbl;
    }
    v11 = 1;
    v16 = (v12 & 0x10000) != 0;
    v32[0] = 0;
    ppunk = 0LL;
    if ( (v12 & 0x10000) == 0 )
      goto LABEL_20;
    if ( a3 )
    {
      IUnknown_Set(&ppunk, a3);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(void *, _QWORD, const GUID *, GUID *, IUnknown **))(*(_QWORD *)lpVtbl + 24LL))(
              lpVtbl,
              0LL,
              &BHID_SFUIObject,
              &GUID_000214f9_0000_0000_c000_000000000046,
              &ppunk);
      v18 = v17 < 0;
      if ( v17 < 0 )
        goto LABEL_18;
    }
    v18 = (int)CPinnedList::GetAppPathFromShortcut(
                 (struct IShellLinkW *)ppunk,
                 (struct IShellItem *)ppv,
                 0x4000u,
                 (char *)v32) < 0;
LABEL_18:
    if ( v18 )
      v16 = 0;
LABEL_20:
    if ( (v8 & 1) != 0 )
    {
      v19 = v32;
      if ( !v16 )
        v19 = pszPath;
      ExtensionW = PathFindExtensionW(v19);
      v21 = ExtensionW;
      if ( ExtensionW )
      {
        if ( StrCmpICW(ExtensionW, L".EXE") && StrCmpICW(v21, L".MSC") )
          goto LABEL_33;
      }
    }
    if ( (v8 & 2) == 0 )
      goto LABEL_48;
    if ( v32[0] != 58 || v32[1] != 58 || v32[2] != 123 || (v22 = 1, !v32[3]) )
      v22 = 0;
    if ( !(unsigned int)CPinnedList::_IsLocalHardDisk((CPinnedList *)lpVtbl, pszPath)
      || v16 && !v22 && !(unsigned int)CPinnedList::_IsLocalHardDisk(v23, v32) && !PathIsURLW(v32) )
    {
LABEL_33:
      v11 = 0;
    }
    else
    {
LABEL_48:
      if ( (v8 & 8) != 0 )
      {
        v11 = 0;
        v30 = 0LL;
        if ( CoCreateInstance(
               &CLSID_StartMenuCacheAndAppResolver,
               0LL,
               3u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               &v30) >= 0 )
        {
          v24 = *(_QWORD *)v30;
          if ( ppunk )
            v25 = (*(__int64 (__fastcall **)(LPVOID, IUnknown *, void *))(v24 + 88))(v30, ppunk, ppv);
          else
            v25 = (*(__int64 (__fastcall **)(LPVOID, void *))(v24 + 80))(v30, ppv);
          v26 = v25 >> 31;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v30 + 16LL))(v30);
          v11 = v26 ^ 1;
        }
      }
    }
    SafeRelease<IShellItemArray>((__int64 *)&ppunk);
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v31);
  }
  return v11;
}
