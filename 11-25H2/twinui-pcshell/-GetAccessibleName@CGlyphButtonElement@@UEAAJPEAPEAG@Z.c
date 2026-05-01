/*
 * XREFs of ?GetAccessibleName@CGlyphButtonElement@@UEAAJPEAPEAG@Z @ 0x1804BDF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801E97E4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 */

__int64 __fastcall CGlyphButtonElement::GetAccessibleName(CGlyphButtonElement *this, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v5; // eax
  unsigned __int16 *v6; // rax
  unsigned __int16 *v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v3 = *((_DWORD *)this + 102);
  if ( v3 )
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
           (__int64)&v8,
           &_ImageBase,
           v3);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = v8;
      v8 = 0LL;
      v10 = 0LL;
      v9 = 0LL;
      v4 = 0;
      *a2 = v6;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\glyphbuttonelement.cpp",
        (const char *)(unsigned int)v5);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v8);
  }
  else
  {
    v4 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\glyphbuttonelement.cpp",
      (const char *)0x80070490LL);
  }
  return v4;
}
