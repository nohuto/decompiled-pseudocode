/*
 * XREFs of ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x18068EFC8
 * Callers:
 *     ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18068A284 (-_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEA.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18068A610 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 *     ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18069B560 (-v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAG_K@Z @ 0x1806850D8 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAG_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPinnedList::GetAppPathFromShortcut(
        struct IShellLinkW *a1,
        struct IShellItem *a2,
        unsigned int a3,
        char *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  LPVOID v11; // rbx
  __int64 (__fastcall *v12)(LPVOID, struct IShellLinkW *, struct IShellItem *, _QWORD, int *, _QWORD, _QWORD); // rdi
  int v13; // eax
  LPVOID ppv; // [rsp+40h] [rbp-30h] BYREF
  int v16[4]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v8 = CoCreateInstance(&stru_1807D6240, 0LL, 3u, &GUID_6c6c33ee_f1d4_1bdd_601d_0fa334303bc2, &ppv);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 4283LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_9;
  }
  v11 = ppv;
  v12 = *(__int64 (__fastcall **)(LPVOID, struct IShellLinkW *, struct IShellItem *, _QWORD, int *, _QWORD, _QWORD))(*(_QWORD *)ppv + 32LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
  *(_QWORD *)&v16[2] = -1LL;
  v17 = -1LL;
  v13 = v12(v11, a1, a2, a3, v16, 0LL, 0LL);
  if ( v13 >= 0 )
  {
    v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo((char **)v16, a4);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      goto LABEL_9;
    }
    v10 = 4285LL;
    goto LABEL_7;
  }
  v9 = v13;
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
  return v9;
}
