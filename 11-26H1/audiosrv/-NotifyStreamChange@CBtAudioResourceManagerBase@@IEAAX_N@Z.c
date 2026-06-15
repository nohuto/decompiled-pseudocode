/*
 * XREFs of ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800E496C
 * Callers:
 *     wil::details::lambda_call__lambda_bc5d985c717a129e0bdb8b1c6dfbecb2___::_lambda_call__lambda_bc5d985c717a129e0bdb8b1c6dfbecb2___ @ 0x1800E0408 (wil--details--lambda_call__lambda_bc5d985c717a129e0bdb8b1c6dfbecb2___--_lambda_call__lambda_bc5d.c)
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E1AE8 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEA.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E65D8 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180056074 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x1800C3FEC (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800DF900 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEBV21@@Z @ 0x1800DFA74 (--$_Emplace_reallocate@AEBV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CBtAudioResourceManagerBase::NotifyStreamChange(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  RTL_SRWLOCK *v14; // [rsp+70h] [rbp+30h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v4 = this + 25;
  AcquireSRWLockShared(this + 25);
  v14 = v4;
  v5 = *(_QWORD *)this[27].Ptr;
  v13 = v5;
  v6 = 0LL;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( v6 == v12 )
    {
      std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> const &>(
        (__int64 *)&v11,
        v6,
        v5 + 40);
    }
    else
    {
      std::function<void (bool)>::function<void (bool)>(v6, v5 + 40);
      *((_QWORD *)&v11 + 1) += 64LL;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
      &v13,
      v7);
    v5 = v13;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v14);
  v9 = *((_QWORD *)&v11 + 1);
  v8 = v11;
  if ( (_QWORD)v11 != *((_QWORD *)&v11 + 1) )
  {
    do
    {
      LOBYTE(v13) = a2;
      v10 = *(_QWORD *)(v8 + 56);
      if ( !v10 )
      {
        std::_Xbad_function_call();
        JUMPOUT(0x1800E4A88LL);
      }
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 16LL))(v10, &v13);
      v8 += 64LL;
    }
    while ( v8 != v9 );
    v9 = *((_QWORD *)&v11 + 1);
    v8 = v11;
  }
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>(v8, v9);
    std::_Deallocate<16>((void *)v11, (struct std::nothrow_t *)((v12 - v11) & 0xFFFFFFFFFFFFFFC0uLL));
  }
}
