/*
 * XREFs of SmmUnlockPages @ 0x140288960
 * Callers:
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140288370 (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     SmmLockPagesForAdapter @ 0x140288708 (SmmLockPagesForAdapter.c)
 *     ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140288810 (-SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmUnlockPages(PMDL Mdl)
{
  _InterlockedAdd64(&qword_1401696F8, -(__int64)Mdl->ByteCount);
  MmUnlockPages(Mdl);
  IoFreeMdl(Mdl);
}
