/*
 * XREFs of ?ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x1801C3FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802A7F6C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::ViewAddedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // edi
  const WCHAR *v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rbp
  const WCHAR *v10; // rcx
  int v12; // eax
  int v13; // edi
  LPVOID lpString2[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  lpString2[0] = 0LL;
  lpString2[1] = (LPVOID)-1LL;
  lpString2[2] = (LPVOID)-1LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a2 + 136LL))(a2, lpString2);
  v6 = v5;
  if ( v5 == -2147023728 )
  {
LABEL_17:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpString2);
    return v4;
  }
  else if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v5);
    if ( lpString2[0] )
      CoTaskMemFree(lpString2[0]);
    return v6;
  }
  else
  {
    v7 = (const WCHAR *)lpString2[0];
    v8 = *((_QWORD *)this + 11);
    v9 = *((_QWORD *)this + 12);
    while ( v8 != v9 )
    {
      v10 = (const WCHAR *)v8;
      if ( *(_QWORD *)(v8 + 24) > 7uLL )
        v10 = *(const WCHAR **)v8;
      if ( CompareStringOrdinal(v10, -1, v7, -1, 1) == 2 )
      {
        v12 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x124,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v12);
          v4 = v13;
          goto LABEL_17;
        }
        break;
      }
      v8 += 32LL;
    }
    if ( lpString2[0] )
      CoTaskMemFree(lpString2[0]);
    return 0LL;
  }
}
