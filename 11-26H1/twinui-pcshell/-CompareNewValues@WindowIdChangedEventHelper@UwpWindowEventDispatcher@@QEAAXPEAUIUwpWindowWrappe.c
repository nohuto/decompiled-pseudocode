/*
 * XREFs of ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801C0C40
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180068F74 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800EDA70 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     _lambda_a4d545b91c9e09961ecfadb7c1e91fee_::operator() @ 0x18042243C (_lambda_a4d545b91c9e09961ecfadb7c1e91fee_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806851D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::CompareNewValues(
        UwpWindowEventDispatcher::WindowIdChangedEventHelper *this,
        struct IUwpWindowWrapperInternal *a2)
{
  int v4; // ebx
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]

  if ( !*(_BYTE *)this )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  v4 = *((_DWORD *)this + 6);
  if ( v4 != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2) )
  {
    *((_BYTE *)this + 28) = 1;
    *((_BYTE *)this + 36) = *((_DWORD *)this + 8) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 424LL))(a2);
    *((_BYTE *)this + 44) = *((_DWORD *)this + 10) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 432LL))(a2);
    *((_BYTE *)this + 52) = *((_DWORD *)this + 12) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 440LL))(a2);
    *((_BYTE *)this + 60) = *((_DWORD *)this + 14) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 448LL))(a2);
    v5 = (__int64 *)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, _BYTE *))(*(_QWORD *)a2 + 264LL))(
                      a2,
                      v9);
    v6 = *v5;
    v7 = v5[1];
    *v5 = 0LL;
    v5[1] = 0LL;
    *((_QWORD *)this + 1) = v6;
    v8 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v7;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
}
