/*
 * XREFs of ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1805648C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800482C8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800781E4 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802099B8 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802A7F6C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualPinnedAppsHandler::SetViewCollectionInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationViewCollection *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  const char *v6; // r9
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, int *); // rbx
  int v10; // eax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  int v14; // eax
  char v15; // al
  __int64 v16; // rcx
  bool v17; // zf
  unsigned __int8 (__fastcall *v18)(__int64, struct IApplicationView *, int *); // rax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  int v22[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h] BYREF
  int v24; // [rsp+30h] [rbp-58h]
  unsigned int v25; // [rsp+38h] [rbp-50h] BYREF
  __int64 v26[2]; // [rsp+40h] [rbp-48h] BYREF
  int v27; // [rsp+50h] [rbp-38h] BYREF
  __int64 v28[6]; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v30; // [rsp+90h] [rbp+8h] BYREF
  struct IApplicationView *v31; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+20h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, (__int64)a2);
  v3 = *((_QWORD *)this + 10);
  if ( !v3 )
    return 0LL;
  v32 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  try
  {
    v5 = v4(v3, &v32);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF3,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v5,
        v22[0]);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v23,
      v32);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v25,
      (__int64)&v23,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v27,
      (__int64)&v23,
      v24);
    while ( 1 )
    {
      if ( v25 == v27 && v26[1] == v28[1] )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v28);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        return 0LL;
      }
      v31 = (struct IApplicationView *)v26[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
      *(_QWORD *)v22 = 0LL;
      v8 = *((_QWORD *)this + 6);
      v9 = *(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 368LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
      v10 = v9(v8, v22);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xF7,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v10,
          v22[0]);
      v11 = (_QWORD *)*((_QWORD *)this + 11);
      v12 = (_QWORD *)*((_QWORD *)this + 12);
      while ( v11 != v12 )
      {
        v30 = 0;
        v13 = v11;
        if ( v11[3] > 7uLL )
          v13 = (_QWORD *)*v11;
        v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *, int *))(*(_QWORD *)v31 + 152LL))(
                v31,
                v13,
                &v30);
        if ( v14 >= 0 )
        {
          if ( v30 )
          {
            v15 = 1;
            goto LABEL_22;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFE,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v14);
        }
        v11 += 4;
      }
      v15 = 0;
LABEL_22:
      v16 = *((_QWORD *)this + 8);
      LOBYTE(v30) = 0;
      v17 = v15 == 0;
      v18 = *(unsigned __int8 (__fastcall **)(__int64, struct IApplicationView *, int *))(*(_QWORD *)v16 + 120LL);
      if ( v17 )
      {
        if ( v18(v16, v31, &v30) )
        {
          if ( (_BYTE)v30 )
          {
            v19 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, _QWORD))(*(_QWORD *)this + 104LL))(
                    this,
                    v31,
                    *(_QWORD *)v22);
            v20 = retaddr;
            if ( v19 < 0 )
            {
              v21 = 268LL;
              goto LABEL_31;
            }
          }
        }
      }
      else if ( !v18(v16, v31, &v30) || !(_BYTE)v30 )
      {
        v19 = VirtualPinnedAppsHandler::PinViewInternal(this, v31, 1);
        v20 = retaddr;
        if ( v19 < 0 )
        {
          v21 = 260LL;
LABEL_31:
          wil::details::in1diag3::_Log_Hr(
            v20,
            (void *)v21,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v19);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v22);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
      ++v25;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x114,
                           (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                           v6);
  }
  return 0LL;
}
