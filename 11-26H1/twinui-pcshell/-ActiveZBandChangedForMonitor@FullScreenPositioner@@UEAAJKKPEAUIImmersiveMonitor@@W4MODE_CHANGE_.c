/*
 * XREFs of ?ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801A25E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803209CC (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320B80 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180321648 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall FullScreenPositioner::ActiveZBandChangedForMonitor(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5)
{
  HWND ForegroundWindow; // r14
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, HWND, struct IUnknown **); // rbx
  struct IUnknown *v10; // rbx
  struct IApplicationView *v11; // rdx
  __int64 v12; // rcx
  struct IUnknown *v13; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  struct IUnknown *v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h] BYREF
  int v18; // [rsp+50h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 184) )
  {
    v18 = 0;
    if ( a4 )
    {
      if ( (*(int (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(a1 + 80) + 96LL))(
             *(_QWORD *)(a1 + 80),
             a4,
             &v18) >= 0
        && a3 == 1
        && v18 )
      {
        v16 = 0LL;
        ForegroundWindow = GetForegroundWindow();
        if ( ForegroundWindow )
        {
          v8 = *(_QWORD *)(a1 + 64);
          v9 = *(void (__fastcall **)(__int64, HWND, struct IUnknown **))(*(_QWORD *)v8 + 48LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
          v9(v8, ForegroundWindow, &v16);
        }
        v17 = 0LL;
        v10 = v16;
        if ( !v16
          || (QueryInterface = v16->lpVtbl[11].QueryInterface,
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17),
              ((int (__fastcall *)(struct IUnknown *, __int64 *))QueryInterface)(v10, &v17) < 0)
          || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17) != 4 )
        {
          if ( a5 != 2 || !SHIsSameObject(v16, *(struct IUnknown **)(a1 + 88)) )
          {
            v11 = *(struct IApplicationView **)(a1 - 136 + 224);
            if ( v11 )
            {
              if ( !FullScreenPositioner::IsLightweightFullScreen((FullScreenPositioner *)(a1 - 136), v11) )
                FullScreenPositioner::PositionView(a1 - 136, *(_QWORD *)(a1 - 136 + 224), 2LL);
              FullScreenPositioner::SetVisibleView((FullScreenPositioner *)(a1 - 136), 0LL);
            }
          }
        }
        v12 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v13 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
        }
      }
    }
  }
  return 0LL;
}
