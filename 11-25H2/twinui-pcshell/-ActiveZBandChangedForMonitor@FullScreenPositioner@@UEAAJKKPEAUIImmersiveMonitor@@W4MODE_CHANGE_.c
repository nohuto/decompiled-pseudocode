/*
 * XREFs of ?ActiveZBandChangedForMonitor@FullScreenPositioner@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801A7CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180324124 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1803242D0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180324D68 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall FullScreenPositioner::ActiveZBandChangedForMonitor(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5)
{
  char v7; // si
  HWND ForegroundWindow; // r15
  __int64 v9; // rdi
  void (__fastcall *v10)(__int64, HWND, struct IUnknown **); // rbx
  struct IUnknown *v11; // rbx
  struct IApplicationView *v12; // rdx
  __int64 v13; // rcx
  struct IUnknown *v14; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  struct IUnknown *v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h] BYREF
  int v19; // [rsp+50h] [rbp+20h] BYREF

  if ( !*(_DWORD *)(a1 + 184) )
    return 0LL;
  v19 = 0;
  if ( !a4 )
    return 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(a1 + 80) + 96LL))(*(_QWORD *)(a1 + 80), a4, &v19) < 0 )
    return 0LL;
  if ( !v19 )
    return 0LL;
  v7 = 1;
  if ( a3 != 1 )
    return 0LL;
  v17 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v10 = *(void (__fastcall **)(__int64, HWND, struct IUnknown **))(*(_QWORD *)v9 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    v10(v9, ForegroundWindow, &v17);
  }
  v18 = 0LL;
  v11 = v17;
  if ( !v17
    || (QueryInterface = v17->lpVtbl[11].QueryInterface,
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18),
        ((int (__fastcall *)(struct IUnknown *, __int64 *))QueryInterface)(v11, &v18) < 0)
    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18) != 4 )
  {
    v7 = 0;
  }
  if ( a5 == 2 )
  {
    if ( !v7 && !SHIsSameObject(v17, *(struct IUnknown **)(a1 + 88)) )
    {
LABEL_12:
      v12 = *(struct IApplicationView **)(a1 - 136 + 224);
      if ( v12 )
      {
        if ( !FullScreenPositioner::IsLightweightFullScreen((FullScreenPositioner *)(a1 - 136), v12) )
          FullScreenPositioner::PositionView(a1 - 136, *(_QWORD *)(a1 - 136 + 224), 2LL);
        FullScreenPositioner::SetVisibleView((FullScreenPositioner *)(a1 - 136), 0LL);
      }
    }
  }
  else if ( !v7 )
  {
    goto LABEL_12;
  }
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
  }
  return 0LL;
}
