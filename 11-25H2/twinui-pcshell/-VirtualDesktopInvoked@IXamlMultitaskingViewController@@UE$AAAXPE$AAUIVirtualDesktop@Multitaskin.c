/*
 * XREFs of ?VirtualDesktopInvoked@IXamlMultitaskingViewController@@UE$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x1802C66B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall IXamlMultitaskingViewController::VirtualDesktopInvoked(__int64 a1)
{
  int v1; // eax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  __abi_ThrowIfFailed(v1);
}
