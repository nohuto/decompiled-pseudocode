/*
 * XREFs of ??0CShallowContainerIterator@@QEAA@PEAUIShellItem@@K@Z @ 0x1802BEA88
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806012D0 (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x180601530 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CShallowContainerIterator *__fastcall CShallowContainerIterator::CShallowContainerIterator(
        CShallowContainerIterator *this,
        struct IShellItem *a2,
        int a3)
{
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = a3;
  ((void (__fastcall *)(struct IShellItem *))a2->lpVtbl->AddRef)(a2);
  return this;
}
