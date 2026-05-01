/*
 * XREFs of ?CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801E30BC
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x18006E85C (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180145A10 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     _lambda_56bc88237345be46eea563c70201c1d4_::operator() @ 0x1804175D4 (_lambda_56bc88237345be46eea563c70201c1d4_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::CollectOriginalValues(
        UwpWindowEventDispatcher::WindowIdChangedEventHelper *this,
        struct IUwpWindowWrapperInternal *a2)
{
  *((_DWORD *)this + 6) = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2);
  *((_DWORD *)this + 8) = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 424LL))(a2);
  *((_DWORD *)this + 10) = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 432LL))(a2);
  *((_DWORD *)this + 12) = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 440LL))(a2);
  *((_DWORD *)this + 14) = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 448LL))(a2);
  *(_BYTE *)this = 1;
}
