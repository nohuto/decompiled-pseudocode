/*
 * XREFs of ?UnLock@CEResourceLock@@QEAAXXZ @ 0x140273C8C
 * Callers:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1400608E0 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEResourceLock::UnLock(PERESOURCE *this)
{
  ExReleaseResourceAndLeaveCriticalRegion(*this);
}
