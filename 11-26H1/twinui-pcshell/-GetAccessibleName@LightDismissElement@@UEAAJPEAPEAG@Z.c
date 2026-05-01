/*
 * XREFs of ?GetAccessibleName@LightDismissElement@@UEAAJPEAPEAG@Z @ 0x1804D9F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801DEDF4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 */

__int64 __fastcall LightDismissElement::GetAccessibleName(LightDismissElement *this, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 *v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v3 = *((_DWORD *)this + 60);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
         (__int64)&v7,
         &_ImageBase,
         v3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = 0;
    *a2 = v7;
    v7 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\lightdismisselement.cpp",
      (const char *)(unsigned int)v4);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
  return v5;
}
