/*
 * XREFs of ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x180133AE0
 * Callers:
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_K@Z @ 0x180133D94 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$construct@UCallbackData@CallOnThreadExit@@$$V@?$_Default_allocator_traits@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@QEAUCallbackData@CallOnThreadExit@@@Z @ 0x180133BB0 (--$construct@UCallbackData@CallOnThreadExit@@$$V@-$_Default_allocator_traits@V-$allocator@U-$_Li.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180133C18 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<CallOnThreadExit::CallbackData>::_Emplace<>(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  __int64 *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( qword_180253F58 == 0x249249249249249LL )
    std::_Xlength_error("list too long");
  v7 = &qword_180253F50;
  v8 = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x70uLL);
  std::_Default_allocator_traits<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::construct<CallOnThreadExit::CallbackData,>(
    v4,
    v3 + 2);
  ++qword_180253F58;
  v5 = *(_QWORD **)(a2 + 8);
  *v3 = a2;
  v3[1] = v5;
  v8 = 0LL;
  *(_QWORD *)(a2 + 8) = v3;
  *v5 = v3;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(&v7);
  return v3;
}
