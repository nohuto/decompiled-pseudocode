/*
 * XREFs of ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x140104E78
 * Callers:
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x140104C9C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 * Callees:
 *     ?FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z @ 0x140104E98 (-FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall FreeVadAvl(struct _RTL_BALANCED_NODE *a1, CVirtualAddressAllocator *a2)
{
  CVirtualAddressAllocator::FreeVad(a2, (struct VIDMM_VAD *)a1);
}
