/*
 * XREFs of ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180159780
 * Callers:
 *     ?GetAllApplicationsByAppID@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180159700 (-GetAllApplicationsByAppID@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z @ 0x1802E2800 (-HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180159D50 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetAllApplicationsByAppIDSafe(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  int ImmersiveApplicationArraySafe; // ebx
  struct IImmersiveApplicationArray *v7; // rcx
  struct IImmersiveApplicationArray *v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  ImmersiveApplicationArraySafe = CApplicationManager::GetImmersiveApplicationArraySafe(this, &v9);
  if ( ImmersiveApplicationArraySafe >= 0 )
    ImmersiveApplicationArraySafe = (*(__int64 (__fastcall **)(struct IImmersiveApplicationArray *, const unsigned __int16 *, struct IObjectArray **))(*(_QWORD *)v9 + 48LL))(
                                      v9,
                                      a2,
                                      a3);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationArray *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)ImmersiveApplicationArraySafe;
}
