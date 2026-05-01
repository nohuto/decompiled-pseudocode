/*
 * XREFs of ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x18003C118
 * Callers:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003C030 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003C9F0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800E8DB4 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@-$vec.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801360A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VF.c)
 *     ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x18028DA28 (--$_Reallocate@$0A@@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall Microsoft::WRL::Details::Make<AgileRegistrationList::AgileCallbackArray,std::vector<AgileRegistrationList::Item> &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 *v7; // rdx
  __int64 *v8; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v14; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v15; // [rsp+88h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v15 = v4;
  if ( v4 )
  {
    v6 = v4 + 1;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 1));
    v5[11] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObjectArray,Microsoft::WRL::FtmBase>::`vftable'{for `IObjectArray'};
    *v6 = &AgileRegistrationList::AgileCallbackArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = &AgileRegistrationList::AgileCallbackArray::`vftable'{for `IObjectArray'};
    *v6 = &AgileRegistrationList::AgileCallbackArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 8) = 0LL;
    v9 = (a2[1] - *a2) >> 4;
    v14 = v9;
    if ( v9 )
    {
      if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
        std::_Xlength_error("vector too long");
      std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Reallocate<0>(v5 + 12, &v14);
    }
    v10 = *a2;
    v11 = a2[1];
    while ( v10 != v11 )
    {
      v7 = (__int64 *)*((_QWORD *)v5 + 7);
      v8 = (__int64 *)(v10 + 8);
      if ( v7 == *((__int64 **)v5 + 8) )
      {
        std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> const &>(
          v5 + 12,
          v7,
          v8);
      }
      else
      {
        v12 = *v8;
        *v7 = *v8;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        *((_QWORD *)v5 + 7) += 8LL;
      }
      v10 += 16LL;
    }
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObjectArray,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v7,
        v8);
    *a1 = v5;
    v5 = 0LL;
  }
  if ( v5 )
    operator delete(v5, (const struct std::nothrow_t *)1);
  return a1;
}
