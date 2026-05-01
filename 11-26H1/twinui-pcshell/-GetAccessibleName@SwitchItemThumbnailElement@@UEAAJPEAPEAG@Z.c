/*
 * XREFs of ?GetAccessibleName@SwitchItemThumbnailElement@@UEAAJPEAPEAG@Z @ 0x1804D34E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800EC0C0 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV12.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::GetAccessibleName(
        SwitchItemThumbnailElement *this,
        unsigned __int16 **a2)
{
  __int64 *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 *v6; // rax
  unsigned __int16 *v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v3 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 72) + 24LL))(*((_QWORD *)this + 72));
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
         (LPVOID *)&v8,
         v3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v8;
    v8 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
    *a2 = v6;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v4);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v8);
  return v5;
}
