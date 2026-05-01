/*
 * XREFs of ?GetAccessibleName@CVirtualDesktopContainerElement@@UEAAJPEAPEAG@Z @ 0x1804CB0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801E97E4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::GetAccessibleName(
        CVirtualDesktopContainerElement *this,
        unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned __int16 *v5; // rax
  unsigned __int16 *v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
         (__int64)&v7,
         &_ImageBase,
         0x32D8u);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v7;
    v7 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    v4 = 0;
    *a2 = v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
      (const char *)(unsigned int)v3);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
  return v4;
}
