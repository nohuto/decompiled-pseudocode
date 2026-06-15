/*
 * XREFs of ?GetApoDeviceFromFxPropStore@@YAJPEAUIPropertyStore@@U_GUID@@PEAPEAG@Z @ 0x1801619B4
 * Callers:
 *     ?GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@0U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@Z @ 0x180161A84 (-GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@0U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetApoDeviceFromFxPropStore(struct IPropertyStore *a1, struct _GUID *a2, unsigned __int16 **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a3 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v9 = 0uLL;
  v9 = (__int128)*a2;
  v10 = 100;
  v4 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))a1->lpVtbl->GetValue)(a1, &v9, pvar);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( LOWORD(pvar[0]) == 31 )
    {
      *a3 = (unsigned __int16 *)pvar[1];
      pvar[1] = 0LL;
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)(unsigned int)v4);
  }
  PropVariantClear(pvar);
  return v5;
}
