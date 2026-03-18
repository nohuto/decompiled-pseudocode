/*
 * XREFs of ?UninitializeWin32SiloGlobals@@YAXXZ @ 0x140195AD8
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void UninitializeWin32SiloGlobals(void)
{
  __int64 SiloSessionState; // rax
  PVOID *v1; // rax
  __int64 v2; // rax

  if ( *(_QWORD *)(W32GetSiloSessionState() + 16) )
  {
    SiloSessionState = W32GetSiloSessionState();
    MmUnmapViewInSystemSpace(*(PVOID *)(SiloSessionState + 16));
    *(_QWORD *)(W32GetSiloSessionState() + 16) = 0LL;
  }
  if ( *(_QWORD *)W32GetSiloSessionState() )
  {
    v1 = (PVOID *)W32GetSiloSessionState();
    ObfDereferenceObject(*v1);
    *(_QWORD *)W32GetSiloSessionState() = 0LL;
  }
  if ( *(_QWORD *)(W32GetSiloSessionState() + 8) )
  {
    v2 = W32GetSiloSessionState();
    ZwClose(*(HANDLE *)(v2 + 8));
    *(_QWORD *)(W32GetSiloSessionState() + 8) = 0LL;
  }
}
