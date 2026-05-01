/*
 * XREFs of ?_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PEAPEAU2@@Z @ 0x1802FB0A8
 * Callers:
 *     ?AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802F5DD0 (-AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802F9200 (-StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppViewManager::_FindAnotherGlom(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        struct IUnknown **a4)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v8; // esi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64, __int64 *); // rdi
  unsigned int v13; // eax
  unsigned int i; // r14d
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, _QWORD, GUID *, struct IUnknown **); // rdi
  struct IUnknown *v17; // rax
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  struct IUnknown *v24; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+58h] BYREF

  v25 = a3;
  *a4 = 0LL;
  v20 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_8b14e88b_5663_4caf_b196_c31479262831,
         &v20);
  if ( v8 >= 0 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v9 = v20;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 32LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
    v22 = -1LL;
    v23 = -1LL;
    v8 = v10(v9, &v21);
    if ( v8 >= 0 )
    {
      v19 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      v8 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 120))(
             *(_QWORD *)(a1 + 120),
             &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f,
             &v19);
      if ( v8 >= 0 )
      {
        v26 = 0LL;
        v11 = v19;
        v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v19 + 104LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
        v8 = v12(v11, v21, &v26);
        if ( v8 >= 0 )
        {
          v25 = 0;
          v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 24LL))(v26, &v25);
          if ( v8 >= 0 )
          {
            v8 = -2147023728;
            v13 = v25;
            if ( v25 > 1 )
            {
              for ( i = 0; i < v13; ++i )
              {
                v24 = 0LL;
                v15 = v26;
                v16 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v26 + 32LL);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
                if ( v16(v15, i, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v24) >= 0
                  && !SHIsSameObject(a2, v24)
                  && ((unsigned __int8 (__fastcall *)(struct IUnknown *))v24->lpVtbl[17].AddRef)(v24) )
                {
                  v17 = v24;
                  v24 = 0LL;
                  *a4 = v17;
                  v8 = 0;
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
                  break;
                }
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
                v13 = v25;
              }
            }
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return (unsigned int)v8;
}
