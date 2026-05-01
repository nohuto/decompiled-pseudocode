/*
 * XREFs of ??$?RPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@1234@@_lambda_230b9df691339023b85cd039d444a30c_@@QEBA?A_P$$QEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopProperty@2345@@Z @ 0x1801421A0
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_230b9df691339023b85cd039d444a30c_@@$0?0PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@EAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@3@W4VirtualDesktopProperty@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@789Windows@@@Z @ 0x180142160 (-Invoke@-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _lambda_230b9df691339023b85cd039d444a30c_::operator()<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = *a1;
  v6 = 0LL;
  v10 = 0LL;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &GUID_8ca0d8e6_0c78_5248_9971_76d923bfa8a7,
           &v10);
    v6 = v10;
  }
  else
  {
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, *a2, *a3);
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return (unsigned int)v7;
}
