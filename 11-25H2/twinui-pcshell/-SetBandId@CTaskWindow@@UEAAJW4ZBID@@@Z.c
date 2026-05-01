/*
 * XREFs of ?SetBandId@CTaskWindow@@UEAAJW4ZBID@@@Z @ 0x1801F3D70
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x180041480 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?_SetAssociatedWindowBandId@CTaskWindow@@AEAAXW4ZBID@@PEBG@Z @ 0x1801F3E0C (-_SetAssociatedWindowBandId@CTaskWindow@@AEAAXW4ZBID@@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTaskWindow::SetBandId(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 48),
    &v6);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 40LL))(v6, a2);
  CTaskWindow::_SetAssociatedWindowBandId(a1 - 8, a2, L"{1CADE38A-8C26-4D73-A0D7-3ADE69F02A94}");
  CTaskWindow::_SetAssociatedWindowBandId(a1 - 8, a2, L"{A086F28F-D579-49B1-9117-F2A3AC324349}");
  *(_DWORD *)(a1 + 44) = a2 - 8;
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
