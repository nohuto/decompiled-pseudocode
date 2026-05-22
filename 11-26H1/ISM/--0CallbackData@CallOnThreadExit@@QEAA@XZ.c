/*
 * XREFs of ??0CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x180133BF0
 * Callers:
 *     ??$construct@UCallbackData@CallOnThreadExit@@$$V@?$_Default_allocator_traits@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@1@QEAUCallbackData@CallOnThreadExit@@@Z @ 0x180133BB0 (--$construct@UCallbackData@CallOnThreadExit@@$$V@-$_Default_allocator_traits@V-$allocator@U-$_Li.c)
 * Callees:
 *     ??0?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@QEAA@XZ @ 0x180133BDC (--0-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@QEAA@XZ.c)
 */

__int64 __fastcall CallOnThreadExit::CallbackData::CallbackData(CallOnThreadExit::CallbackData *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  std::function<void (enum CallOnThreadExit::CallbackReason)>::function<void (enum CallOnThreadExit::CallbackReason)>((__int64)this);
  *(_QWORD *)(v1 + 80) = 0LL;
  result = v1;
  *(_QWORD *)(v1 + 88) = 0LL;
  return result;
}
