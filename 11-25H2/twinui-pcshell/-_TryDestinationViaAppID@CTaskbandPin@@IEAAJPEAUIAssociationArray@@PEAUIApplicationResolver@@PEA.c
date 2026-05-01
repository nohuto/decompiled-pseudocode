/*
 * XREFs of ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180663B58
 * Callers:
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1806636C8 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 * Callees:
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x18001FF50 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802C068C (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x1806688A8 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  struct IShellItem *v13; // rax
  unsigned __int16 *v14; // rax
  struct IShellItem *v16; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  struct IShellLinkW *v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v19[264]; // [rsp+50h] [rbp-B0h] BYREF

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
    v16 = 0LL;
    AppPathFromShortcut = (*(__int64 (__fastcall **)(struct IApplicationResolver *, LPVOID, struct IShellItem **))(v10 + 64))(
                            a3,
                            pv,
                            &v16);
    if ( AppPathFromShortcut >= 0 )
    {
      v18 = 0LL;
      AppPathFromShortcut = ((__int64 (__fastcall *)(struct IShellItem *, _QWORD, const GUID *, GUID *))v16->lpVtbl->BindToHandler)(
                              v16,
                              0LL,
                              &BHID_SFUIObject,
                              &GUID_000214f9_0000_0000_c000_000000000046);
      if ( AppPathFromShortcut >= 0 )
      {
        AppPathFromShortcut = CPinnedList::GetAppPathFromShortcut(v18, v16, 0x4000u, v19, (int)&v18);
        if ( AppPathFromShortcut >= 0 )
        {
          AppPathFromShortcut = _AllocString<CTCoAllocPolicy>(v12, v11, v19, a6);
          if ( AppPathFromShortcut >= 0 )
          {
            if ( a4 )
            {
              v13 = v16;
              v16 = 0LL;
              *a4 = v13;
            }
            if ( a5 )
            {
              v14 = (unsigned __int16 *)pv;
              pv = 0LL;
              *a5 = v14;
            }
          }
        }
        ((void (__fastcall *)(struct IShellLinkW *))v18->lpVtbl->Release)(v18);
      }
      SafeRelease<IShellItemArray>((__int64 *)&v16);
    }
    CoTaskMemFree(pv);
  }
  return (unsigned int)AppPathFromShortcut;
}
