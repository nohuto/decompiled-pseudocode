/*
 * XREFs of ?_ConsolidateBuffers@CAppLayoutOperation@@IEAAJPEAUIAppLayoutItem@@@Z @ 0x1806C3DB4
 * Callers:
 *     ?QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180523564 (-QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_ConsolidateBuffers(
        CAppLayoutOperation *this,
        __int64 (__fastcall ***a2)(struct IAppLayoutItem *, GUID *, __int64 *))
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, struct IAppLayoutItem *, __int64, __int64, GUID *, __int64 *); // rbx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, struct IAppLayoutItem *, __int64); // rbx
  __int64 (__fastcall **v10)(struct IAppLayoutItem *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v11)(struct IAppLayoutItem *, GUID *, __int64 *); // rbx
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 4LL);
  if ( (unsigned int)(v4 - 1) > 1 )
  {
    return (unsigned int)-2147319767;
  }
  else
  {
    v5 = 0;
    if ( v4 == 2 )
    {
      v6 = *((_QWORD *)this + 5);
      v13 = 0LL;
      v7 = *(int (__fastcall **)(__int64, struct IAppLayoutItem *, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 120LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      if ( v7(v6, (struct IAppLayoutItem *)a2, 0xFFFFFFFFLL, 4LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v13) >= 0
        || (v8 = *((_QWORD *)this + 5),
            v9 = *(__int64 (__fastcall **)(__int64, struct IAppLayoutItem *, __int64))(*(_QWORD *)v8 + 120LL),
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13),
            v5 = v9(v8, (struct IAppLayoutItem *)a2, 1LL),
            v5 >= 0) )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 288LL))(*((_QWORD *)this + 5), v13);
        if ( v5 >= 0 )
        {
          v10 = *a2;
          v14 = 0LL;
          v11 = *v10;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
          v5 = v11((struct IAppLayoutItem *)a2, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v14);
          if ( v5 >= 0 )
          {
            v15 = 0LL;
            (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v14 + 104LL))(v14, 0LL, &v15);
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    }
  }
  return (unsigned int)v5;
}
