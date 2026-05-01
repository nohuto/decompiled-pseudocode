/*
 * XREFs of ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1802A8C18
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800ABDC8 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x1800AD568 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x1805E4A10 (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?TryDetachString@PropVariant@wil@@QEAA_NPEAPEAG@Z @ 0x1805EAFE0 (-TryDetachString@PropVariant@wil@@QEAA_NPEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        unsigned __int16 **a3)
{
  int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+30h] [rbp-48h]
  PROPVARIANT pvar[3]; // [rsp+40h] [rbp-38h] BYREF

  *a3 = 0LL;
  LOWORD(pvar[0]) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(*(_QWORD *)*a1 + 40LL))(*a1, &v6, pvar);
  if ( v4 < 0 || LOWORD(pvar[0]) )
  {
    if ( v4 >= 0 && !wil::PropVariant::TryDetachString((wil::PropVariant *)pvar, a3) )
      v4 = -2147352571;
  }
  else
  {
    v4 = -2147023728;
  }
  PropVariantClear(pvar);
  return (unsigned int)v4;
}
