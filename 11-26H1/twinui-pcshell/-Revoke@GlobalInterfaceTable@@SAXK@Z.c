/*
 * XREFs of ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18016FE28
 * Callers:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x180092310 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x180170050 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ??1DesktopVisibilityChangeListener@CImmersiveMode@@QEAA@XZ @ 0x1802EB310 (--1DesktopVisibilityChangeListener@CImmersiveMode@@QEAA@XZ.c)
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180170340 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GlobalInterfaceTable::Revoke(unsigned int a1)
{
  if ( a1 )
  {
    if ( (int)GlobalInterfaceTable::s_Retrieve() >= 0 )
      ((void (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RevokeInterfaceFromGlobal)(
        GlobalInterfaceTable::s_pGlobalInterfaceTable,
        a1);
  }
}
