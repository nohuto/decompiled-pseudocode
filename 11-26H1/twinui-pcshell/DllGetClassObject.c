/*
 * XREFs of DllGetClassObject @ 0x1801421D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  HRESULT v11; // ebx
  PVOID v12; // rbx
  RTL_SRWLOCK *v13; // rsi
  void *v14; // rcx
  RTL_SRWLOCK *v16; // rsi
  void *v17; // rcx
  int v18; // [rsp+60h] [rbp+18h] BYREF
  PVOID Ptr; // [rsp+68h] [rbp+20h] BYREF

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  byte_1808DDE38 = 1;
  *ppv = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                            + 32))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)
     + 8;
  v7 = (*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                            + 40))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
  while ( 1 )
  {
    if ( v6 >= v7 )
      return -2147221231;
    if ( *(_QWORD *)v6 )
    {
      v8 = *(_QWORD **)(*(_QWORD *)v6 + 8LL);
      v9 = *v8 - *(_QWORD *)&rclsid->Data1;
      if ( *v8 == *(_QWORD *)&rclsid->Data1 )
        v9 = v8[1] - *(_QWORD *)rclsid->Data4;
      if ( !v9 )
        break;
    }
    v6 += 8LL;
  }
  _mm_lfence();
  v18 = 1;
  v10 = *(_QWORD *)v6;
  *ppv = 0LL;
  Ptr = 0LL;
  if ( !**(_QWORD **)(v10 + 24) )
    goto LABEL_9;
  v16 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                            + 56))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
  AcquireSRWLockShared(v16);
  v17 = **(void ***)(v10 + 24);
  if ( !v17 )
  {
    if ( v16 )
      ReleaseSRWLockShared(v16);
LABEL_9:
    v11 = (*(__int64 (__fastcall **)(int *, __int64, const IID *const, PVOID *))v10)(&v18, v10, riid, &Ptr);
    if ( v11 >= 0 )
    {
      if ( (v18 & 4) != 0 )
        goto LABEL_16;
      v12 = 0LL;
      v13 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                                + 56))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
      AcquireSRWLockExclusive(v13);
      v14 = **(void ***)(v10 + 24);
      if ( v14 )
      {
        v12 = DecodePointer(v14);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 8LL))(v12);
      }
      else
      {
        **(_QWORD **)(v10 + 24) = EncodePointer(Ptr);
      }
      if ( v13 )
        ReleaseSRWLockExclusive(v13);
      if ( v12 )
      {
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      else
      {
LABEL_16:
        v12 = Ptr;
      }
      *ppv = v12;
      return 0;
    }
    return v11;
  }
  Ptr = DecodePointer(v17);
  v11 = (**(__int64 (__fastcall ***)(PVOID, const IID *const, LPVOID *))Ptr)(Ptr, riid, ppv);
  if ( v16 )
    ReleaseSRWLockShared(v16);
  return v11;
}
