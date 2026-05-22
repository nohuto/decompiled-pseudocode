/*
 * XREFs of ??$_Emplace@AEBQEAUIDWMSupportedInputTarget@@@?$list@PEAUIDWMSupportedInputTarget@@V?$allocator@PEAUIDWMSupportedInputTarget@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIDWMSupportedInputTarget@@PEAX@1@QEAU21@AEBQEAUIDWMSupportedInputTarget@@@Z @ 0x1801BCAF0
 * Callers:
 *     ?SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z @ 0x1801BD740 (-SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18004FA00 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@_KPEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008A564 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@_KPEAX@std@@@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<IDWMSupportedInputTarget *>::_Emplace<IDWMSupportedInputTarget * const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 size_of; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  v10 = a1;
  v11 = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7[2] = *a3;
  ++*(_QWORD *)(a1 + 8);
  v8 = *(_QWORD **)(a2 + 8);
  *v7 = a2;
  v7[1] = v8;
  v11 = 0LL;
  *(_QWORD *)(a2 + 8) = v7;
  *v8 = v7;
  std::_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>((__int64)&v10);
  return v7;
}
