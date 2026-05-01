/*
 * XREFs of ?CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18021A010
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     XamlLauncher_CreateInstance @ 0x18045E034 (XamlLauncher_CreateInstance.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherFactory::CreateInstance(
        XamlLauncherFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, const struct _GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( !a2 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    v7 = XamlLauncher_CreateInstance(&v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v7 = (**v11)(v11, a3, a4);
      v6 = v7;
      if ( v7 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
        return v6;
      }
      v8 = 234LL;
    }
    else
    {
      v8 = 233LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\XamlLauncher.h",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  v6 = -2147221232;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE6,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\XamlLauncher.h",
    (const char *)0x80040110LL);
  return v6;
}
