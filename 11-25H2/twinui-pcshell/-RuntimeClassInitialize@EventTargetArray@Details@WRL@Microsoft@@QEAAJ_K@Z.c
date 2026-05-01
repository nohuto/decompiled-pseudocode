/*
 * XREFs of ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800527D4
 * Callers:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18004FD60 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Intern.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180050814 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience_ea_180050814.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180051DBC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180052260 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@S_ea_180052260.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18017EC70 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18017EFAC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801AF374 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience_ea_1801AF374.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1801D6E04 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18020542C (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@W.c)
 * Callees:
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1801C7340 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1802D5A14 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D5A88 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
        Microsoft::WRL::Details::EventTargetArray *this,
        unsigned __int64 a2)
{
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rax
  void *v10; // rax
  const struct std::nothrow_t *v11; // rdx
  __int64 v12; // rcx

  v4 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (unsigned __int64 *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = a2;
    v8 = v7 + 1;
    `eh vector constructor iterator'(
      v7 + 1,
      8uLL,
      a2,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 2) = v8;
  v9 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 4) = v10;
  v12 = *((_QWORD *)this + 2);
  if ( v12 )
  {
    if ( v10 )
    {
      *((_QWORD *)this + 3) = v12;
      return 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'();
  }
  operator delete(*((void **)this + 4), v11);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  return 2147942414LL;
}
