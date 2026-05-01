/*
 * XREFs of ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18017DAF0
 * Callers:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18017D964 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x18017DC40 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ??1DesktopVisibilityChangeListener@CImmersiveMode@@QEAA@XZ @ 0x1802F076C (--1DesktopVisibilityChangeListener@CImmersiveMode@@QEAA@XZ.c)
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x18017DF14 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
