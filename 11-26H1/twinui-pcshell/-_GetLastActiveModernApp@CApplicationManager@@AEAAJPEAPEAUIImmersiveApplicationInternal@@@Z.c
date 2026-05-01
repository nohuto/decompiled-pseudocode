/*
 * XREFs of ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18008F7A0
 * Callers:
 *     ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x180221518 (-_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x1802B16BC (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _lambda_00a99e92ff34f3b9a38e1d2a681d0525_::operator() @ 0x18008F854 (_lambda_00a99e92ff34f3b9a38e1d2a681d0525_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_GetLastActiveModernApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 i; // rbx
  struct IImmersiveApplicationInternal *v7; // rax
  struct IImmersiveApplicationInternal **v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF
  struct IImmersiveApplicationInternal *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v9 = &v11;
  v4 = *((_QWORD *)this + 97);
  v10 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 80);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !(unsigned __int8)lambda_00a99e92ff34f3b9a38e1d2a681d0525_::operator()(
                             &v9,
                             *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i)) )
      break;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  v7 = v11;
  *a2 = v11;
  return v7 == 0LL ? 0x80070490 : 0;
}
