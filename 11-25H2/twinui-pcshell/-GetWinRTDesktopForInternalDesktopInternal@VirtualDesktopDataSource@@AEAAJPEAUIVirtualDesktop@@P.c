/*
 * XREFs of ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18047F8C8
 * Callers:
 *     ?GetCurrentVirtualDesktop@VirtualDesktopDataSource@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18047EF90 (-GetCurrentVirtualDesktop@VirtualDesktopDataSource@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@Com.c)
 *     ?GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18047F244 (-GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 *     ?GetWinRTDesktopForInternalDesktop@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18047F830 (-GetWinRTDesktopForInternalDesktop@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@PEAPEAU2M.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIVirtualDesktopCollectionInternal@@@?$ComPtr@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopCollectionInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18047EA70 (--$As@UIVirtualDesktopCollectionInternal@@@-$ComPtr@UIVirtualDesktopCollection@Multitasking@Comp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
        VirtualDesktopDataSource *this,
        struct IVirtualDesktop *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v5 = Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection>::As<IVirtualDesktopCollectionInternal>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 34,
         &v9);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, struct IVirtualDesktop *, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **))(*(_QWORD *)v9 + 24LL))(
           v9,
           a2,
           a3);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  return v6;
}
