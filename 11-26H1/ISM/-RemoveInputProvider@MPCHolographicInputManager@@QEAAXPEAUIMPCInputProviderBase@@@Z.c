/*
 * XREFs of ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180093ABC
 * Callers:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007BD80 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_a8bd3f77500581b3abf4cbfc08695dab___ @ 0x1800B98D0 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IM.c)
 *     _lambda_a8bd3f77500581b3abf4cbfc08695dab_::_lambda_a8bd3f77500581b3abf4cbfc08695dab_ @ 0x1800B9990 (_lambda_a8bd3f77500581b3abf4cbfc08695dab_--_lambda_a8bd3f77500581b3abf4cbfc08695dab_.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x1800BB710 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800BBED0 (-clear@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800BBF00 (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHolographicInputManager::RemoveInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  char *v2; // r15
  __int64 *v4; // rsi
  __int64 *v6; // r12
  struct IMPCInputProviderBase *v7; // rbx
  struct IMPCInputProviderBase *v8; // rdx
  __int128 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  const char *v12; // r9
  __int64 v13; // r12
  __int64 (__fastcall *v14)(__int64, _QWORD); // rbx
  unsigned int v15; // eax
  int v16; // eax
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v18[16]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IMPCInputProviderBase *v20; // [rsp+70h] [rbp+30h] BYREF
  struct IMPCInputProviderBase *v21; // [rsp+78h] [rbp+38h] BYREF

  v21 = a2;
  v2 = (char *)this + 3304;
  v4 = (__int64 *)*((_QWORD *)this + 413);
  v6 = (__int64 *)*((_QWORD *)this + 414);
  while ( v4 != v6 )
  {
    v20 = (struct IMPCInputProviderBase *)*v4;
    v7 = v20;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    if ( a2 == v7 )
      break;
    ++v4;
  }
  if ( v4 != *((__int64 **)this + 414) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 256LL))(a2) )
    {
      if ( *((_QWORD *)this + 451) - *((_QWORD *)this + 450) == 8LL )
      {
        v8 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 418);
        if ( v8 )
          MPCHolographicInputManager::SetProviderPrimary(this, v8);
        else
          std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear((char *)this + 3600);
      }
      else
      {
        v9 = (__int128 *)lambda_a8bd3f77500581b3abf4cbfc08695dab_::_lambda_a8bd3f77500581b3abf4cbfc08695dab_(
                           v18,
                           this,
                           &v21);
        v10 = *((_QWORD *)this + 451);
        v11 = *((_QWORD *)this + 450);
        v17 = *v9;
        std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_a8bd3f77500581b3abf4cbfc08695dab___(
          &v21,
          v11,
          v10,
          &v17);
        if ( v21 == *((struct IMPCInputProviderBase **)this + 451) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xF5,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            v12);
        std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase((char *)this + 3600, &v21);
      }
    }
    v13 = *((_QWORD *)this + 422);
    if ( v13 )
    {
      v14 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 104LL);
      v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
      v16 = v14(v13, v15);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFD,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v16,
          v17);
    }
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v2, &v21);
  }
  if ( a2 == *((struct IMPCInputProviderBase **)this + 418) )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 418);
}
