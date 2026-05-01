/*
 * XREFs of ?ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x18022F200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z @ 0x1801F0844 (-IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802A7F6C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualPinnedAppsHandler::ViewAppIdChangedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  LPVOID pv[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a2 + 136LL))(a2, pv) >= 0
    && (unsigned __int8)VirtualPinnedAppsHandler::IsAppIdPinnedInternal(this, (const unsigned __int16 *)pv[0]) )
  {
    v4 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v4);
LABEL_13:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)pv);
      return v5;
    }
  }
  else
  {
    v13 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, char *))(**((_QWORD **)this + 8) + 120LL))(
           *((_QWORD *)this + 8),
           a2,
           &v13)
      && v13 )
    {
      v14 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 440LL))(*((_QWORD *)this + 6))
        || (v6 = *((_QWORD *)this + 6),
            v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 368LL),
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14),
            v8 = v7(v6, &v14),
            v5 = v8,
            v8 >= 0) )
      {
        v8 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
               this,
               a2,
               v14);
        v5 = v8;
        if ( v8 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
          goto LABEL_15;
        }
        v9 = 315LL;
      }
      else
      {
        v9 = 313LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      goto LABEL_13;
    }
  }
LABEL_15:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return 0LL;
}
