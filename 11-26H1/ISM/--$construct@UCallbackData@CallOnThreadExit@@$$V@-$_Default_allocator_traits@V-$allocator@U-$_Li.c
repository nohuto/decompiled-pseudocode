/*
 * XREFs of ??$construct@UCallbackData@CallOnThreadExit@@$$V@?$_Default_allocator_traits@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@QEAUCallbackData@CallOnThreadExit@@@Z @ 0x180133BB0
 * Callers:
 *     ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x180133AE0 (--$_Emplace@$$V@-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadEx.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>::construct<CallOnThreadExit::CallbackData,>(
        __int64 a1,
        void *a2)
{
  memset_0(a2, 0, 0x60uLL);
  return CallOnThreadExit::CallbackData::CallbackData((CallOnThreadExit::CallbackData *)a2);
}
