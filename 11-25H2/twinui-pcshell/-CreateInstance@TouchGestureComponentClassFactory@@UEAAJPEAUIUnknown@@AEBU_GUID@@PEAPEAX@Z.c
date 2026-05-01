/*
 * XREFs of ?CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180567530
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x1802065E4 (-as@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AUhresult@2@AEBUguid@2@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$make@VTouchGestureComponent@@$$V@winrt@@YA?A_PXZ @ 0x1805671FC (--$make@VTouchGestureComponent@@$$V@winrt@@YA-A_PXZ.c)
 */

__int64 __fastcall TouchGestureComponentClassFactory::CreateInstance(
        TouchGestureComponentClassFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  __int64 *v7; // rax
  unsigned __int8 v8; // r9
  unsigned __int16 Data3; // r8
  unsigned __int16 Data2; // dx
  unsigned int v11; // ebx
  const char *v12; // r9
  int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  unsigned int Data1; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int16 v16; // [rsp+34h] [rbp-24h]
  unsigned __int16 v17; // [rsp+36h] [rbp-22h]
  unsigned __int8 v18; // [rsp+38h] [rbp-20h]
  unsigned __int8 v19; // [rsp+39h] [rbp-1Fh]
  unsigned __int8 v20; // [rsp+3Ah] [rbp-1Eh]
  unsigned __int8 v21; // [rsp+3Bh] [rbp-1Dh]
  unsigned __int8 v22; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int8 v23; // [rsp+3Dh] [rbp-1Bh]
  unsigned __int8 v24; // [rsp+3Eh] [rbp-1Ah]
  unsigned __int8 v25; // [rsp+3Fh] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
    return 2147746064LL;
  try
  {
    v7 = winrt::make<TouchGestureComponent,>(&v14);
    v8 = a3->Data4[0];
    Data3 = a3->Data3;
    Data2 = a3->Data2;
    Data1 = a3->Data1;
    v16 = Data2;
    v17 = Data3;
    v18 = v8;
    v19 = a3->Data4[1];
    v20 = a3->Data4[2];
    v21 = a3->Data4[3];
    v22 = a3->Data4[4];
    v23 = a3->Data4[5];
    v24 = a3->Data4[6];
    v25 = a3->Data4[7];
    v11 = *winrt::com_ptr<IObjectWithSite>::as(v7, &v13, (__int64)&Data1, (__int64)a4);
    if ( v14 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v14);
    result = v11;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE0,
                           (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturecomponent.cpp",
                           v12);
  }
  return result;
}
