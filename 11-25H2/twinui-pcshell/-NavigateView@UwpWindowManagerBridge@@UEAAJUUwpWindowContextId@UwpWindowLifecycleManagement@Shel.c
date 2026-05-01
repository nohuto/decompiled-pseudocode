/*
 * XREFs of ?NavigateView@UwpWindowManagerBridge@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4NavigationLevel@ViewManagerInterop@456@@Z @ 0x1801B13E0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_39a728035cbc11bf105c92e6056dabb4___ @ 0x1801B1438 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_39a728035cbc11bf105c92e6056dabb4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowManagerBridge::NavigateView(__int64 a1, int a2, int a3)
{
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 224LL))(*(_QWORD *)(a1 + 296));
  v5[0] = &v6;
  v5[1] = &v7;
  v5[2] = a1;
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_39a728035cbc11bf105c92e6056dabb4___(v5);
}
