/*
 * XREFs of _lambda_9cd1b560a470dbb5c6e1d5da28bd3866_::operator() @ 0x180287344
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1d6a067dbe26ab9e29e40b777c6860e1___::Run @ 0x180287330 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1d6a067dbe26ab9e29e40b777c6860e1___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x1800F71BC (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180173A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowEx.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
char *__fastcall lambda_9cd1b560a470dbb5c6e1d5da28bd3866_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r15
  volatile signed __int32 *v5; // rbx
  char *result; // rax
  void *v7; // rdi
  _QWORD *v8; // rbx
  __int64 (__fastcall *v9)(__int64, volatile signed __int32 *, _QWORD); // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, _QWORD); // rbx
  _QWORD *v13; // rax
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF
  void *v17; // [rsp+78h] [rbp+48h]

  if ( *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 232LL))(*a1) )
  {
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 128LL);
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 232LL))(*a1);
    return (char *)v12(a2, *v13);
  }
  else
  {
    v4 = *a1;
    v5 = 0LL;
    v17 = 0LL;
    result = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = result;
    if ( result )
    {
      v8 = result + 16;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(result + 16));
      *((_DWORD *)v7 + 13) = 1;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::`vftable';
      *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::`vftable'{for `IClassicWindowContainer'};
      *v8 = &CClassicWindowExternal::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v7 = &CClassicWindowExternal::`vftable';
      *((_QWORD *)v7 + 1) = &CClassicWindowExternal::`vftable'{for `IClassicWindowContainer'};
      *v8 = &CClassicWindowExternal::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_QWORD *)v7 + 7) = v4;
      result = (char *)Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v7 + 7);
      v5 = (volatile signed __int32 *)v7;
      v17 = v7;
    }
    if ( v5 )
    {
      v15 = 0LL;
      v9 = *(__int64 (__fastcall **)(__int64, volatile signed __int32 *, _QWORD))(*(_QWORD *)a2 + 112LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
      result = (char *)v9(a2, v5, &v15);
      if ( (int)result >= 0 )
        result = (char *)(*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a1 + 224LL))(
                           *a1,
                           v15);
      if ( (a1[1] & 1) == 0 )
      {
        v16 = 0LL;
        result = (char *)(**v15)(v15, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v16);
        v10 = v16;
        if ( v16 )
        {
          result = (char *)Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(&v14, v16);
          if ( v14 )
            result = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          v10 = v16;
        }
        if ( v10 )
          result = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = (__int64)v15;
      if ( v15 )
      {
        v15 = 0LL;
        result = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    if ( v5 )
      return (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::Release(v5);
  }
  return result;
}
