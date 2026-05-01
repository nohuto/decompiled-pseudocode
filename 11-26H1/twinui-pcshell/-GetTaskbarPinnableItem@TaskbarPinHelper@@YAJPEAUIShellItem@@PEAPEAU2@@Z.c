/*
 * XREFs of ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1805E688C
 * Callers:
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x1805E4A10 (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18068A610 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 *     ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x18069A0AC (-_ShouldAddMenu@CPinnedList@@IEAAJI@Z.c)
 *     ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18069B560 (-v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1800AD488 (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801F781C (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ??$GetUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x1802A83BC (--$GetUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z @ 0x1805E5BF4 (-GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarPinHelper::GetTaskbarPinnableItem(
        TaskbarPinHelper *this,
        struct IShellItem *a2,
        struct IShellItem **a3)
{
  int FailIf; // ebx
  struct IShellItem **v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  PROPVARIANT *v9; // rcx
  PROPVARIANT *v10; // rcx
  struct IShellItem **v11; // r8
  int AsShellItem; // eax
  _DWORD v14[4]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v15; // [rsp+40h] [rbp-19h] BYREF
  int v16; // [rsp+50h] [rbp-9h]
  __int64 v17; // [rsp+60h] [rbp+7h] BYREF
  _WORD pvar[12]; // [rsp+68h] [rbp+Fh] BYREF
  _WORD v19[12]; // [rsp+80h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  a2->lpVtbl = 0LL;
  v17 = 0LL;
  FailIf = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
             &v17,
             (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this,
             0,
             (__int64)&`TaskbarPinHelper::GetTaskbarPinnableItem'::`2'::propKeys,
             3u);
  if ( FailIf >= 0 )
  {
    v14[0] = 0;
    v15 = PKEY_AppUserModel_HostEnvironment;
    v16 = 14;
    if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetUInt32<_tagpropertykey>(&v17, &v15, v14) < 0
      || (unsigned int)(v14[0] - 1) > 1 )
    {
      v19[0] = 0;
      v15 = PKEY_AppUserModel_BestShortcut;
      v16 = 10;
      FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(&v17, (__int64)&v15, v19);
      v9 = (PROPVARIANT *)v19;
      if ( FailIf < 0 )
        goto LABEL_8;
      AsShellItem = TaskbarPinHelper::Impl::GetAsShellItem((TaskbarPinHelper::Impl *)v19, (void **)&a2->lpVtbl, v11);
      FailIf = AsShellItem;
      if ( AsShellItem < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x58,
          (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarPinHelper.h",
          (const char *)(unsigned int)AsShellItem);
        v9 = (PROPVARIANT *)v19;
        goto LABEL_8;
      }
      v10 = (PROPVARIANT *)v19;
    }
    else
    {
      pvar[0] = 0;
      v15 = PKEY_DelegateIDList;
      v16 = 32;
      if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(&v17, (__int64)&v15, pvar) < 0 )
      {
        v7 = (**(__int64 (__fastcall ***)(TaskbarPinHelper *, GUID *, struct IShellItem *))this)(
               this,
               &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
               a2);
        FailIf = v7;
        if ( v7 < 0 )
        {
          v8 = 81LL;
          goto LABEL_7;
        }
      }
      else
      {
        v7 = TaskbarPinHelper::Impl::GetAsShellItem((TaskbarPinHelper::Impl *)pvar, (void **)&a2->lpVtbl, v6);
        FailIf = v7;
        if ( v7 < 0 )
        {
          v8 = 76LL;
LABEL_7:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v8,
            (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarPinHelper.h",
            (const char *)(unsigned int)v7);
          v9 = (PROPVARIANT *)pvar;
LABEL_8:
          PropVariantClear(v9);
          goto LABEL_17;
        }
      }
      v10 = (PROPVARIANT *)pvar;
    }
    PropVariantClear(v10);
    FailIf = 0;
  }
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v17);
  return (unsigned int)FailIf;
}
