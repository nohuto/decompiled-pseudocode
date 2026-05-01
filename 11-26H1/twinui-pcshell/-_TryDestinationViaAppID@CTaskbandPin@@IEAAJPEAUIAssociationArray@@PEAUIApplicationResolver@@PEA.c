/*
 * XREFs of ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18068A284
 * Callers:
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180689DF4 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 * Callees:
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800BFCC8 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x18068EFC8 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTaskbandPin::_TryDestinationViaAppID(
        CTaskbandPin *this,
        struct IAssociationArray *a2,
        struct IApplicationResolver *a3,
        struct IShellItem **a4,
        unsigned __int16 **a5,
        unsigned __int16 **a6)
{
  __int64 v8; // rax
  int AppPathFromShortcut; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct IShellItem *v14; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  struct IShellLinkW *v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v17[264]; // [rsp+50h] [rbp-B0h] BYREF

  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  *a6 = 0LL;
  v8 = *(_QWORD *)a2;
  pv = 0LL;
  AppPathFromShortcut = (*(__int64 (__fastcall **)(struct IAssociationArray *, __int64, _QWORD, LPVOID *))(v8 + 24))(
                          a2,
                          67567638LL,
                          0LL,
                          &pv);
  if ( AppPathFromShortcut >= 0 )
  {
    v10 = *(_QWORD *)a3;
    v14 = 0LL;
    AppPathFromShortcut = (*(__int64 (__fastcall **)(struct IApplicationResolver *, LPVOID, struct IShellItem **))(v10 + 64))(
                            a3,
                            pv,
                            &v14);
    if ( AppPathFromShortcut >= 0 )
    {
      v16 = 0LL;
      AppPathFromShortcut = ((__int64 (__fastcall *)(struct IShellItem *, _QWORD, const GUID *, GUID *))v14->lpVtbl->BindToHandler)(
                              v14,
                              0LL,
                              &BHID_SFUIObject,
                              &GUID_000214f9_0000_0000_c000_000000000046);
      if ( AppPathFromShortcut >= 0 )
      {
        AppPathFromShortcut = CPinnedList::GetAppPathFromShortcut(v16, v14, 0x4000u, v17, (int)&v16);
        if ( AppPathFromShortcut >= 0 )
        {
          AppPathFromShortcut = _AllocString<CTCoAllocPolicy>(v12, v11, v17, a6);
          if ( AppPathFromShortcut >= 0 )
          {
            if ( a4 )
            {
              *a4 = v14;
              v14 = 0LL;
            }
            if ( a5 )
            {
              *a5 = (unsigned __int16 *)pv;
              pv = 0LL;
            }
          }
        }
        ((void (__fastcall *)(struct IShellLinkW *))v16->lpVtbl->Release)(v16);
      }
      SafeRelease<IShellItemArray>((__int64 *)&v14);
    }
    CoTaskMemFree(pv);
  }
  return (unsigned int)AppPathFromShortcut;
}
