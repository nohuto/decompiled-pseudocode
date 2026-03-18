/*
 * XREFs of ?SetDeviceContext@AUTO_REMOVE_LOCK@@QEAAXPEAU_COMMON_CONTEXT@@@Z @ 0x140093960
 * Callers:
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x140093840 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1400577A0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 */

void __fastcall AUTO_REMOVE_LOCK::SetDeviceContext(PVOID *this, struct _COMMON_CONTEXT *a2)
{
  if ( *this )
    AUTO_REMOVE_LOCK::Release(this);
  *this = a2;
}
