/*
 * XREFs of ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180689B10
 * Callers:
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180689DF4 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18068A610 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800BFCC8 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     BindCtx_CreateWithObjectParam_0 @ 0x1806889E0 (BindCtx_CreateWithObjectParam_0.c)
 *     ?GenerateAppID@CPinnedList@@SAJPEBG00PEAPEAG@Z @ 0x18068EEB0 (-GenerateAppID@CPinnedList@@SAJPEBG00PEAPEAG@Z.c)
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x180699DB0 (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTaskbandPin::_GetApplication(
        CTaskbandPin *this,
        struct IApplicationResolver *a2,
        char *a3,
        struct IShellItem **a4,
        unsigned __int16 **a5,
        unsigned __int16 **a6)
{
  int AppID; // edi
  DWORD v10; // r11d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  const unsigned __int16 *v14; // rdx
  __int64 v15; // rcx
  IBindCtx *v17; // rbx
  const unsigned __int16 *v18; // r8
  IBindCtx *pbc; // [rsp+30h] [rbp-D0h] BYREF
  void *ppv; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR szShortPath[264]; // [rsp+40h] [rbp-C0h] BYREF

  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  AppID = -2147467259;
  if ( CPinnedList::_IsLocalHardDisk(this, (const unsigned __int16 *)a3) )
  {
    AppID = StringCchCopyW((char *)szShortPath, 260LL, a3);
    if ( AppID >= 0 )
    {
      if ( a6 && !GetLongPathNameW(szShortPath, szShortPath, v10) )
        ResultFromKnownLastError();
      v11 = *(_QWORD *)a2;
      ppv = 0LL;
      AppID = (*(__int64 (__fastcall **)(struct IApplicationResolver *, WCHAR *, void **, unsigned __int16 **))(v11 + 72))(
                a2,
                szShortPath,
                &ppv,
                a5);
      if ( AppID >= 0 )
      {
        if ( a4 )
        {
          *a4 = (struct IShellItem *)ppv;
          ppv = 0LL;
        }
        SafeRelease<IShellItemArray>((__int64 *)&ppv);
        goto LABEL_16;
      }
      ppv = 0LL;
      pbc = 0LL;
      AppID = BindCtx_CreateWithObjectParam_0(v13, v12, &pbc);
      if ( AppID >= 0 )
      {
        v17 = pbc;
        AppID = SHCreateItemFromParsingName(szShortPath, pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
        ((void (__fastcall *)(IBindCtx *))v17->lpVtbl->Release)(v17);
      }
      if ( AppID >= 0 )
      {
        AppID = (*(__int64 (__fastcall **)(struct IApplicationResolver *, void *))(*(_QWORD *)a2 + 80LL))(a2, ppv);
        if ( AppID >= 0 && a4 )
        {
          *a4 = (struct IShellItem *)ppv;
          ppv = 0LL;
        }
        SafeRelease<IShellItemArray>((__int64 *)&ppv);
        if ( AppID >= 0 )
        {
          if ( !a5 || (AppID = CPinnedList::GenerateAppID(szShortPath, v14, v18, a5), AppID >= 0) )
          {
LABEL_16:
            if ( a6 )
              return (unsigned int)_AllocString<CTCoAllocPolicy>(v15, (__int64)v14, szShortPath, a6);
            return (unsigned int)AppID;
          }
          if ( a4 )
            SafeRelease<IShellItemArray>((__int64 *)a4);
        }
      }
    }
  }
  return (unsigned int)AppID;
}
