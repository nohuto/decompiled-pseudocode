/*
 * XREFs of ?NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E4868
 * Callers:
 *     ?DecrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E1C90 (-DecrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     ?IncrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E4510 (-IncrementBidirectionalSaDeviceCount@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18001C994 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180056074 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV?$function@$$A6AXXZ@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x1800DF8C8 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV-$function@$$A6AXXZ@.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAPEAV?$function@$$A6AXXZ@1@QEAV21@AEBV21@@Z @ 0x1800DF938 (--$_Emplace_reallocate@AEBV-$function@$$A6AXXZ@std@@@-$vector@V-$function@$$A6AXXZ@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CBtAudioResourceManagerBase::NotifyBidirectionalModeChanged(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int128 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+18h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v2 = this + 25;
  AcquireSRWLockShared(this + 25);
  v11 = v2;
  v3 = *(_QWORD *)this[30].Ptr;
  v10 = v3;
  v4 = 0LL;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    if ( v4 == v9 )
    {
      std::vector<std::function<void (void)>>::_Emplace_reallocate<std::function<void (void)> const &>(
        (__int64 *)&v8,
        v4,
        v3 + 40);
    }
    else
    {
      std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v4, v3 + 40);
      *((_QWORD *)&v8 + 1) += 64LL;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
      &v10,
      v5);
    v3 = v10;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  v7 = *((_QWORD *)&v8 + 1);
  v6 = v8;
  if ( (_QWORD)v8 != *((_QWORD *)&v8 + 1) )
  {
    do
    {
      std::_Func_class<void,>::operator()(v6);
      v6 += 64LL;
    }
    while ( v6 != v7 );
    v7 = *((_QWORD *)&v8 + 1);
    v6 = v8;
  }
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::function<void (void)>>>(v6, v7);
    std::_Deallocate<16>((void *)v8, (struct std::nothrow_t *)((v9 - v8) & 0xFFFFFFFFFFFFFFC0uLL));
  }
}
