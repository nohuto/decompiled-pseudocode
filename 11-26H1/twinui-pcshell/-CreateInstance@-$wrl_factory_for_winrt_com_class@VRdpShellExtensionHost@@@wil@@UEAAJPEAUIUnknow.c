/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@VRdpShellExtensionHost@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180673E00
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x1801FA5D4 (-as@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AUhresult@2@AEBUguid@2@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$make@V?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18067354C (--$make@V-$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@$$V@winrt@@YA-A_PXZ.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<RdpShellExtensionHost>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  char v8; // dl
  char v9; // r8
  char v10; // r10
  char v11; // r11
  char v12; // bl
  char v13; // di
  char v14; // si
  char v15; // r14
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h] BYREF
  int v19; // [rsp+30h] [rbp-48h] BYREF
  __int16 v20; // [rsp+34h] [rbp-44h]
  __int16 v21; // [rsp+36h] [rbp-42h]
  char v22; // [rsp+38h] [rbp-40h]
  char v23; // [rsp+39h] [rbp-3Fh]
  char v24; // [rsp+3Ah] [rbp-3Eh]
  char v25; // [rsp+3Bh] [rbp-3Dh]
  char v26; // [rsp+3Ch] [rbp-3Ch]
  char v27; // [rsp+3Dh] [rbp-3Bh]
  char v28; // [rsp+3Eh] [rbp-3Ah]
  char v29; // [rsp+3Fh] [rbp-39h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v7 = winrt::make<wil::details::module_count_wrapper<RdpShellExtensionHost>,>(&v18);
    v8 = *((_BYTE *)a3 + 8);
    v9 = *((_BYTE *)a3 + 9);
    v10 = *((_BYTE *)a3 + 10);
    v11 = *((_BYTE *)a3 + 11);
    v12 = *((_BYTE *)a3 + 12);
    v13 = *((_BYTE *)a3 + 13);
    v14 = *((_BYTE *)a3 + 14);
    v15 = *((_BYTE *)a3 + 15);
    v19 = *a3;
    v20 = *((_WORD *)a3 + 2);
    v21 = *((_WORD *)a3 + 3);
    v22 = v8;
    v23 = v9;
    v24 = v10;
    v25 = v11;
    v26 = v12;
    v27 = v13;
    v28 = v14;
    v29 = v15;
    v16 = *winrt::com_ptr<IObjectWithSite>::as(v7, &v17, (__int64)&v19, (__int64)a4);
    if ( v18 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
    return v16;
  }
}
