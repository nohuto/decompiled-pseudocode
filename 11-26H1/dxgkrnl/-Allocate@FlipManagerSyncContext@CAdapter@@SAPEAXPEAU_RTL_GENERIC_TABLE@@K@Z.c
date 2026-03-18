/*
 * XREFs of ?Allocate@FlipManagerSyncContext@CAdapter@@SAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1400A1C50
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CAdapter::FlipManagerSyncContext::Allocate(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  return operator new[](ByteSize, 0x63734D54u, 256LL);
}
