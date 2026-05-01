/*
 * XREFs of ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180088920
 * Callers:
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801F9510 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1802224F0 (-GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180088A24 (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArraySafe(
        CApplicationManager *this,
        struct IImmersiveApplicationArray **a2)
{
  const struct _GUID *v4; // rcx
  int v5; // ebx
  void *v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 i; // rdi
  void *v9; // rcx
  void *v11; // [rsp+28h] [rbp-8h] BYREF
  int v12; // [rsp+68h] [rbp+38h]
  void *v13; // [rsp+70h] [rbp+40h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v5 = CImmersiveAppArray::s_CreateInstance(v4, &v13);
  v12 = v5;
  if ( v5 >= 0 )
  {
    v6 = v13;
    v11 = v13;
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    v7 = *((_QWORD *)this + 49);
    for ( i = 0LL; i < v7; ++i )
    {
      v12 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v6 + 64LL))(
              v6,
              *(_QWORD *)(*((_QWORD *)this + 48) + 8 * i));
      if ( v12 < 0 )
        break;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    v5 = v12;
    if ( v12 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v13)(
             v13,
             &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
             a2);
  }
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v5;
}
