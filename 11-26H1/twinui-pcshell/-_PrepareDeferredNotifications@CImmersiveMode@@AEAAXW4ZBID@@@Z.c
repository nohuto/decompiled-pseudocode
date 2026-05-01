/*
 * XREFs of ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180084AC8
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180048990 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004597C (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x180049DB8 (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x180084C60 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_PrepareDeferredNotifications(__int64 a1, int a2)
{
  __int64 v4; // r14
  signed int ApartmentId; // edi
  struct IObjectArray *v6; // rbx
  int CallbackArray; // eax
  void *v8; // rax
  void *v9; // rsi
  int v10; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IObjectArray *v12; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+38h] BYREF

  v4 = (a1 + 184) & -(__int64)(a1 != 0);
  if ( !_ShouldCheckApartments(*(_DWORD *)(v4 + 0x2C)) || *(_DWORD *)(v4 + 40) == -3 )
    goto LABEL_8;
  v13 = 0;
  ApartmentId = SHCoGetApartmentId(&v13);
  if ( ApartmentId >= 0 && v13 != *(_DWORD *)(v4 + 40) )
    ApartmentId = -2147417842;
  if ( ApartmentId >= 0 )
LABEL_8:
    ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v4) ? 0x8001010E : 0;
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC8,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
      (const char *)(unsigned int)ApartmentId);
  v6 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 280), &v12);
    v6 = v12;
    if ( CallbackArray >= 0 )
    {
      v13 = 0;
      if ( ((int (__fastcall *)(struct IObjectArray *, unsigned int *))v12->lpVtbl->GetCount)(v12, &v13) < 0 || !v13 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
        v6 = v12;
      }
    }
  }
  v8 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v12 = (struct IObjectArray *)v8;
  if ( v8 )
  {
    v10 = *(_DWORD *)(a1 + 232);
    *(_DWORD *)v8 = a2;
    *((_DWORD *)v8 + 1) = v10;
    *((_QWORD *)v8 + 1) = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v8 + 1);
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)(a1 + 336) = v9;
  if ( v6 )
    ((void (__fastcall *)(struct IObjectArray *))v6->lpVtbl->Release)(v6);
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
