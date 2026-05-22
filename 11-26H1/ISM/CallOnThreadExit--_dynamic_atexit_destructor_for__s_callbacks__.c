/*
 * XREFs of CallOnThreadExit::_dynamic_atexit_destructor_for__s_callbacks__ @ 0x1801DDD60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@PEAU01@@Z @ 0x18008A7D0 (--$_Free_non_head@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@-$.c)
 */

void __fastcall CallOnThreadExit::_dynamic_atexit_destructor_for__s_callbacks__(__int64 a1)
{
  std::_List_node<CallOnThreadExit::CallbackData,void *>::_Free_non_head<std::allocator<std::_List_node<CallOnThreadExit::CallbackData,void *>>>(
    a1,
    qword_180253F50);
  std::_Deallocate<16>((void *)qword_180253F50, (struct std::nothrow_t *)0x70);
}
