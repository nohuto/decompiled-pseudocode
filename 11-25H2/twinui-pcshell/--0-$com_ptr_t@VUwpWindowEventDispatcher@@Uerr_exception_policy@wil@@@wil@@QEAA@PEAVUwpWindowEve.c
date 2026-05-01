/*
 * XREFs of ??0?$com_ptr_t@VUwpWindowEventDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVUwpWindowEventDispatcher@@@Z @ 0x18006B604
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18006C234 (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

_QWORD *__fastcall wil::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>::com_ptr_t<UwpWindowEventDispatcher,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r9
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  *a1 = a2;
  v2 = a1;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 280);
    while ( v3 >= 0 )
    {
      if ( (_DWORD)v3 != 0x7FFFFFFF )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 280), v3 + 1, v3);
        if ( v4 != v3 )
          continue;
      }
      return v2;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v3 + 16), (volatile int *)a2);
  }
  return v2;
}
