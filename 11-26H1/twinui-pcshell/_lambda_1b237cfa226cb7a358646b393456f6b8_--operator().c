/*
 * XREFs of _lambda_1b237cfa226cb7a358646b393456f6b8_::operator() @ 0x180165060
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__&_::Run @ 0x180165050 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__-_--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x180165384 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_1b237cfa226cb7a358646b393456f6b8_::operator()(__int64 a1)
{
  __int64 result; // rax
  IStream **v3; // rbx
  HRESULT v4; // edi
  bool v5; // zf
  IStream *v6; // rcx
  HRESULT InterfaceAndReleaseStream; // r14d
  __int64 v8; // rbx
  __int64 v9; // rcx
  LPVOID v10; // rcx
  LPVOID v11; // rcx
  IStream *v12; // rcx
  IStream *v13; // rcx
  LPVOID v14; // [rsp+50h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp+38h] BYREF
  __int64 v16; // [rsp+60h] [rbp+40h] BYREF

  ppv = 0LL;
  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  ppv = 0LL;
  v3 = *(IStream ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v14 = 0LL;
    if ( *((_DWORD *)v3 + 6) == 2 )
    {
      (*((void (__fastcall **)(IStream **))*v3 + 1))(v3);
    }
    else
    {
      *(_QWORD *)a1 = 0LL;
      Microsoft::WRL::ComPtr<PositionerPriority>::Attach(&v14, v3);
      v3 = (IStream **)v14;
    }
    ppv = 0LL;
    v4 = -2147024809;
    if ( *((_DWORD *)v3 + 6) == 2 )
    {
      v5 = v3[4] == 0LL;
      ppv = 0LL;
      if ( v5 )
      {
        InterfaceAndReleaseStream = -2147024809;
      }
      else
      {
        v6 = v3[4];
        InterfaceAndReleaseStream = v6
                                  ? (*(__int64 (__fastcall **)(IStream *, GUID *, LPVOID *))(*(_QWORD *)v6 + 24LL))(
                                      v6,
                                      &GUID_0d1b8579_c52e_4207_89b3_9726ce949410,
                                      &ppv)
                                  : 0;
      }
    }
    else
    {
      v12 = v3[2];
      v3[2] = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v12, &GUID_0d1b8579_c52e_4207_89b3_9726ce949410, &ppv);
    }
    result = (*((__int64 (__fastcall **)(IStream **))*v3 + 2))(v3);
    if ( InterfaceAndReleaseStream >= 0 )
    {
      v14 = 0LL;
      result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      v14 = 0LL;
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 )
      {
        v16 = 0LL;
        if ( *(_DWORD *)(v8 + 24) == 2 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0LL;
          Microsoft::WRL::ComPtr<PositionerPriority>::Attach(&v16, v8);
          v8 = v16;
        }
        v14 = 0LL;
        if ( *(_DWORD *)(v8 + 24) == 2 )
        {
          v5 = *(_QWORD *)(v8 + 32) == 0LL;
          v14 = 0LL;
          if ( !v5 )
          {
            v9 = *(_QWORD *)(v8 + 32);
            if ( v9 )
              v4 = (*(__int64 (__fastcall **)(__int64, GUID *, LPVOID *))(*(_QWORD *)v9 + 24LL))(
                     v9,
                     &GUID_537b455d_1240_433b_82af_10929138b8be,
                     &v14);
            else
              v4 = 0;
          }
        }
        else
        {
          v13 = *(IStream **)(v8 + 16);
          *(_QWORD *)(v8 + 16) = 0LL;
          v4 = CoGetInterfaceAndReleaseStream(v13, &GUID_537b455d_1240_433b_82af_10929138b8be, &v14);
        }
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        if ( v4 >= 0 )
          result = (*(__int64 (__fastcall **)(LPVOID, LPVOID))(*(_QWORD *)ppv + 24LL))(ppv, v14);
      }
      v10 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        result = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
  }
  v11 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    return (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return result;
}
