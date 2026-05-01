/*
 * XREFs of DllGetActivationFactory @ 0x18000BE50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DllGetActivationFactory(HSTRING string, _QWORD *a2)
{
  PCWSTR StringRawBuffer; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rbx
  RTL_SRWLOCK *v13; // rdi
  void *v14; // rcx
  int v15; // esi
  PVOID v17; // rdi
  RTL_SRWLOCK *v18; // rsi
  void *v19; // rcx
  PVOID Ptr; // [rsp+30h] [rbp-68h] BYREF
  BOOL hasEmbedNull; // [rsp+38h] [rbp-60h] BYREF
  int v22; // [rsp+3Ch] [rbp-5Ch] BYREF
  _OWORD v23[2]; // [rsp+40h] [rbp-58h] BYREF
  int v24; // [rsp+60h] [rbp-38h]
  wchar_t v25; // [rsp+64h] [rbp-34h]

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  byte_18002DCE0 = 1;
  *a2 = 0LL;
  hasEmbedNull = 0;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v24 = *(_DWORD *)L"Id";
    v23[0] = *(_OWORD *)L"activatibleClassId";
    v25 = aActivatiblecla[18];
    v23[1] = *(_OWORD *)L"bleClassId";
    RoOriginateErrorW(2147942487LL, 18LL, v23);
    return 2147942487LL;
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v5 = (*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                              + 40))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)
       + 8;
    v6 = (*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                              + 48))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
    while ( v5 < v6 )
    {
      if ( *(_QWORD *)v5 )
      {
        v7 = (*(__int64 (**)(void))(*(_QWORD *)v5 + 8LL))();
        v8 = (unsigned __int16 *)StringRawBuffer;
        v9 = v7 - (_QWORD)StringRawBuffer;
        do
        {
          v10 = *(unsigned __int16 *)((char *)v8 + v9);
          v11 = *v8 - v10;
          if ( v11 )
            break;
          ++v8;
        }
        while ( v10 );
        if ( !v11 )
        {
          _mm_lfence();
          v12 = *(_QWORD *)v5;
          v22 = 1;
          *a2 = 0LL;
          Ptr = 0LL;
          if ( **(_QWORD **)(v12 + 24) )
          {
            v13 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                                      + 56))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
            AcquireSRWLockShared(v13);
            v14 = **(void ***)(v12 + 24);
            if ( v14 )
            {
              Ptr = DecodePointer(v14);
              v15 = (**(__int64 (__fastcall ***)(PVOID, GUID *, _QWORD *))Ptr)(
                      Ptr,
                      &GUID_00000035_0000_0000_c000_000000000046,
                      a2);
              if ( v13 )
                ReleaseSRWLockShared(v13);
              return (unsigned int)v15;
            }
            if ( v13 )
              ReleaseSRWLockShared(v13);
          }
          v15 = (*(__int64 (__fastcall **)(int *, __int64, GUID *, PVOID *))v12)(
                  &v22,
                  v12,
                  &GUID_00000035_0000_0000_c000_000000000046,
                  &Ptr);
          if ( v15 >= 0 )
          {
            if ( (v22 & 4) != 0 )
              goto LABEL_26;
            v17 = 0LL;
            v18 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                                      + 56))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
            AcquireSRWLockExclusive(v18);
            v19 = **(void ***)(v12 + 24);
            if ( v19 )
            {
              v17 = DecodePointer(v19);
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)v17 + 8LL))(v17);
            }
            else
            {
              **(_QWORD **)(v12 + 24) = EncodePointer(Ptr);
            }
            if ( v18 )
              ReleaseSRWLockExclusive(v18);
            if ( v17 )
            {
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
            }
            else
            {
LABEL_26:
              v17 = Ptr;
            }
            *a2 = v17;
            return 0;
          }
          return (unsigned int)v15;
        }
      }
      v5 += 8LL;
    }
    RoOriginateError(2147746065LL, string);
    return 2147746065LL;
  }
}
