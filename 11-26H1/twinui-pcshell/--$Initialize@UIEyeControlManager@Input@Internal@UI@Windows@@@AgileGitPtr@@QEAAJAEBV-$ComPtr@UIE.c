/*
 * XREFs of ??$Initialize@UIEyeControlManager@Input@Internal@UI@Windows@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UIEyeControlManager@Input@Internal@UI@Windows@@@WRL@Microsoft@@@Z @ 0x1800D6ED8
 * Callers:
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1800D6AD4 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileGitPtr::Initialize<Windows::UI::Internal::Input::IEyeControlManager>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int AgileReference; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v4 = 0LL;
  v9 = 0LL;
  AgileReference = 0;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    AgileReference = RoGetAgileReference(0LL, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, v3, &v9);
    v4 = v9;
  }
  v6 = 0LL;
  v9 = 0LL;
  v7 = *a1;
  *a1 = v4;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v6 = v9;
  }
  if ( v6 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return AgileReference;
}
