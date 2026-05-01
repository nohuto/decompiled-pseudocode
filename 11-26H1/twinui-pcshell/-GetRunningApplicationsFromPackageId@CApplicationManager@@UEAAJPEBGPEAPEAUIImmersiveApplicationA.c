/*
 * XREFs of ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1802E2290
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180159E5C (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AcquireShared@CIAMGlobals@@QEAA?AVCAutoSRWSharedLock@@XZ @ 0x18018E910 (-AcquireShared@CIAMGlobals@@QEAA-AVCAutoSRWSharedLock@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::GetRunningApplicationsFromPackageId(
        CApplicationManager *this,
        RTL_SRWLOCK *a2,
        struct IImmersiveApplicationArray **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // ebx
  void *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 i; // rdi
  __int64 v11; // r12
  int v12; // eax
  RTL_SRWLOCK *v14[3]; // [rsp+20h] [rbp-20h] BYREF
  void *v15; // [rsp+38h] [rbp-8h] BYREF
  int v16; // [rsp+90h] [rbp+50h] BYREF
  void *v17; // [rsp+98h] [rbp+58h] BYREF

  *a3 = 0LL;
  CIAMGlobals::AcquireShared((__int64)this, v14);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  v7 = CImmersiveAppArray::s_CreateInstance(v6, &v17);
  v16 = v7;
  if ( v7 >= 0 )
  {
    v14[1] = (RTL_SRWLOCK *)&v16;
    v14[2] = a2;
    v8 = v17;
    v15 = v17;
    if ( v17 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 8LL))(v17);
    v9 = *((_QWORD *)this + 59);
    for ( i = 0LL; i < v9; ++i )
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 58) + 8 * i);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD))(*(_QWORD *)v11 + 320LL))(v11, a2, 0LL) )
      {
        v12 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v8 + 64LL))(v8, v11);
        v16 = v12;
      }
      else
      {
        v12 = v16;
      }
      if ( v12 < 0 )
        break;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    v7 = v16;
    if ( v16 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v17)(
             v17,
             &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
             a3);
      v16 = v7;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v14);
  return (unsigned int)v7;
}
