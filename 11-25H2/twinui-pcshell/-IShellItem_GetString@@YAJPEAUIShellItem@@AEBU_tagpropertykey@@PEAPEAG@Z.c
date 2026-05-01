/*
 * XREFs of ?IShellItem_GetString@@YAJPEAUIShellItem@@AEBU_tagpropertykey@@PEAPEAG@Z @ 0x180662AF0
 * Callers:
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x180663E60 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IShellItem_GetString(struct IShellItem *a1, const struct _tagpropertykey *a2, unsigned __int16 **a3)
{
  struct IShellItemVtbl *lpVtbl; // rax
  int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  lpVtbl = a1->lpVtbl;
  v7 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IShellItem *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a1,
         &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
         &v7);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, unsigned __int16 **))(*(_QWORD *)v7 + 136LL))(
           v7,
           &PKEY_AppUserModel_ID,
           a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
