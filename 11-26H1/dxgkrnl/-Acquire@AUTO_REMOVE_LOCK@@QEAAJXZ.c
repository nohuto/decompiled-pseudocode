/*
 * XREFs of ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1400569DC
 * Callers:
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x140093840 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x140250AE0 (DxgkHandleIndirectEscape.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1403E7724 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x140426148 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AUTO_REMOVE_LOCK::Acquire(struct _IO_REMOVE_LOCK **this)
{
  NTSTATUS result; // eax

  if ( !*this )
    return -1073741637;
  if ( *((_BYTE *)this + 8) )
    return 0;
  result = IoAcquireRemoveLockEx(*this + 2, *this, File, 1u, 0x20u);
  if ( result >= 0 )
    *((_BYTE *)this + 8) = 1;
  return result;
}
