/*
 * XREFs of _lambda_fad069bbea6c73c856a21cdaadf497a4_::operator() @ 0x1801011CC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_fad069bbea6c73c856a21cdaadf497a4__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1801026C0 (std--_Func_impl_no_alloc__lambda_fad069bbea6c73c856a21cdaadf497a4__long_wil--com_pt_ea_1801026C0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$emplace@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800A93B8 (--$emplace@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Use.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800ABD68 (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_fad069bbea6c73c856a21cdaadf497a4_::operator()(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *i; // rsi
  int v8; // eax
  _QWORD *j; // rbx
  __int64 *k; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // r14
  _BYTE v13[16]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int128 v16; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v21; // [rsp+B8h] [rbp+38h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*(_QWORD *)a2 + 104LL) + 96LL))(
         *(_QWORD *)(*(_QWORD *)a2 + 104LL),
         &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    for ( i = (_QWORD *)v16; i != *((_QWORD **)&v16 + 1); ++i )
    {
      v14 = 0LL;
      v15 = 0LL;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(*(_QWORD *)a2 + 104LL) + 120LL))(
             *(_QWORD *)(*(_QWORD *)a2 + 104LL),
             *i,
             &v14);
      v5 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x347,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v8);
        if ( (_QWORD)v14 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            (__int64 *)v14,
            *((__int64 **)&v14 + 1));
          std::_Deallocate<16>((void *)v14, (struct std::nothrow_t *)((v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL));
          v14 = 0LL;
          v15 = 0LL;
        }
        goto LABEL_3;
      }
      for ( j = (_QWORD *)v14; j != *((_QWORD **)&v14 + 1); ++j )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 184LL))(*j)
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 264LL))(*j) )
        {
          v18 = 0LL;
          v19 = 0LL;
          LODWORD(k) = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*j + 360LL))(*j, &v18);
          if ( (int)k < 0 )
          {
LABEL_27:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x347,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
              (const char *)(unsigned int)k);
            if ( (_QWORD)v18 )
            {
              std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                (__int64 *)v18,
                *((__int64 **)&v18 + 1));
              std::_Deallocate<16>((void *)v18, (struct std::nothrow_t *)((v19 - v18) & 0xFFFFFFFFFFFFFFF8uLL));
              v18 = 0LL;
              v19 = 0LL;
            }
            if ( (_QWORD)v14 )
            {
              std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                (__int64 *)v14,
                *((__int64 **)&v14 + 1));
              std::_Deallocate<16>((void *)v14, (struct std::nothrow_t *)((v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL));
              v14 = 0LL;
              v15 = 0LL;
            }
            if ( (_QWORD)v16 )
            {
              std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                (__int64 *)v16,
                *((__int64 **)&v16 + 1));
              std::_Deallocate<16>((void *)v16, (struct std::nothrow_t *)((v17 - v16) & 0xFFFFFFFFFFFFFFF8uLL));
            }
            return (unsigned int)k;
          }
          for ( k = (__int64 *)v18; k != *((__int64 **)&v18 + 1); ++k )
          {
            v11 = *(_QWORD *)(*a1 + 56LL);
            if ( !v11 )
            {
              std::_Xbad_function_call();
              __debugbreak();
              goto LABEL_27;
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 16LL))(v11, k) )
            {
              v12 = (_QWORD *)a1[1];
              wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
                &v21,
                *k);
              std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::emplace<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
                v12,
                (__int64)v13,
                &v21);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
            }
          }
          if ( (_QWORD)v18 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
              (__int64 *)v18,
              *((__int64 **)&v18 + 1));
            std::_Deallocate<16>((void *)v18, (struct std::nothrow_t *)((v19 - v18) & 0xFFFFFFFFFFFFFFF8uLL));
          }
        }
      }
      if ( (_QWORD)v14 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v14,
          *((__int64 **)&v14 + 1));
        std::_Deallocate<16>((void *)v14, (struct std::nothrow_t *)((v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
    if ( (_QWORD)v16 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v16,
        *((__int64 **)&v16 + 1));
      std::_Deallocate<16>((void *)v16, (struct std::nothrow_t *)((v17 - v16) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x347,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
      (const char *)(unsigned int)v4);
LABEL_3:
    if ( (_QWORD)v16 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v16,
        *((__int64 **)&v16 + 1));
      std::_Deallocate<16>((void *)v16, (struct std::nothrow_t *)((v17 - v16) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return v5;
  }
}
