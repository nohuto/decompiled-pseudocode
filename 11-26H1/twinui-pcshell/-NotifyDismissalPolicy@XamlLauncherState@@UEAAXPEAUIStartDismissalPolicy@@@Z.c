/*
 * XREFs of ?NotifyDismissalPolicy@XamlLauncherState@@UEAAXPEAUIStartDismissalPolicy@@@Z @ 0x180203590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncherState::NotifyDismissalPolicy(XamlLauncherState *this, struct IStartDismissalPolicy *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct IStartDismissalPolicy **)this + 10) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IStartDismissalPolicy *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v4);
  }
}
