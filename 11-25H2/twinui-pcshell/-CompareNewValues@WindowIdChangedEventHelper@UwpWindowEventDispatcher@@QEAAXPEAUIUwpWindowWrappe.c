/*
 * XREFs of ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801CC4A0
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x18006E85C (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180145A10 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     _lambda_56bc88237345be46eea563c70201c1d4_::operator() @ 0x1804175D4 (_lambda_56bc88237345be46eea563c70201c1d4_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::CompareNewValues(
        std::_Ref_count_base **this,
        struct IUwpWindowWrapperInternal *a2,
        __int64 a3,
        __int64 a4)
{
  std::_Ref_count_base **v6; // rax
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rdx
  std::_Ref_count_base *v9; // rcx
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-10h]

  if ( !*(_BYTE *)this )
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2, a3, a4);
  if ( *((_DWORD *)this + 6) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2) )
  {
    *((_BYTE *)this + 28) = 1;
    *((_BYTE *)this + 36) = *((_DWORD *)this + 8) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 424LL))(a2);
    *((_BYTE *)this + 44) = *((_DWORD *)this + 10) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 432LL))(a2);
    *((_BYTE *)this + 52) = *((_DWORD *)this + 12) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 440LL))(a2);
    *((_BYTE *)this + 60) = *((_DWORD *)this + 14) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 448LL))(a2);
    v6 = (std::_Ref_count_base **)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, _BYTE *))(*(_QWORD *)a2 + 264LL))(
                                    a2,
                                    v10);
    v7 = *v6;
    *v6 = 0LL;
    v8 = v6[1];
    v6[1] = 0LL;
    this[1] = v7;
    v9 = this[2];
    this[2] = v8;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
}
