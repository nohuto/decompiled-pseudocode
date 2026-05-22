/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@PEAU01@@Z @ 0x180133B84
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@PEAU01@@Z @ 0x18008A7D0 (--$_Free_non_head@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@-$.c)
 * Callees:
 *     ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x180133C48 (--1CallbackData@CallOnThreadExit@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<CallOnThreadExit::CallbackData,void *>::_Freenode<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(
        __int64 a1,
        __int64 a2)
{
  CallOnThreadExit::CallbackData::~CallbackData((CallOnThreadExit::CallbackData *)(a2 + 16));
  std::_Deallocate<16>((void *)a2, (struct std::nothrow_t *)0x70);
}
