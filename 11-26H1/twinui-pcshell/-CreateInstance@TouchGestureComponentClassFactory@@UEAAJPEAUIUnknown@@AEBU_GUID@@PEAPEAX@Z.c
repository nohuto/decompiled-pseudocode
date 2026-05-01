/*
 * XREFs of ?CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18058B790
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x1801FA5D4 (-as@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AUhresult@2@AEBUguid@2@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$make@VTouchGestureComponent@@$$V@winrt@@YA?A_PXZ @ 0x18058B450 (--$make@VTouchGestureComponent@@$$V@winrt@@YA-A_PXZ.c)
 */

__int64 __fastcall TouchGestureComponentClassFactory::CreateInstance(
        TouchGestureComponentClassFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  __int64 *v7; // rax
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // r8
  unsigned int v10; // ebx
  const char *v11; // r9
  int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h] BYREF
  unsigned int Data1; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int16 Data2; // [rsp+34h] [rbp-24h]
  unsigned __int16 Data3; // [rsp+36h] [rbp-22h]
  unsigned __int8 v17; // [rsp+38h] [rbp-20h]
  unsigned __int8 v18; // [rsp+39h] [rbp-1Fh]
  unsigned __int8 v19; // [rsp+3Ah] [rbp-1Eh]
  unsigned __int8 v20; // [rsp+3Bh] [rbp-1Dh]
  unsigned __int8 v21; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int8 v22; // [rsp+3Dh] [rbp-1Bh]
  unsigned __int8 v23; // [rsp+3Eh] [rbp-1Ah]
  unsigned __int8 v24; // [rsp+3Fh] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
    return 2147746064LL;
  try
  {
    v7 = winrt::make<TouchGestureComponent,>(&v13);
    v8 = a3->Data4[0];
    v9 = a3->Data4[1];
    Data1 = a3->Data1;
    Data2 = a3->Data2;
    Data3 = a3->Data3;
    v17 = v8;
    v18 = v9;
    v19 = a3->Data4[2];
    v20 = a3->Data4[3];
    v21 = a3->Data4[4];
    v22 = a3->Data4[5];
    v23 = a3->Data4[6];
    v24 = a3->Data4[7];
    v10 = *winrt::com_ptr<IObjectWithSite>::as(v7, &v12, (__int64)&Data1, (__int64)a4);
    if ( v13 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v13);
    result = v10;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD5,
                           (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturecomponent.cpp",
                           v11);
  }
  return result;
}
