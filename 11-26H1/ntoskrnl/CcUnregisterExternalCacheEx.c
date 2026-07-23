/*
 * XREFs of CcUnregisterExternalCacheEx @ 0x1405B3CC0
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x1404D6DC0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCacheEx @ 0x1405B3BA8 (CcRemoveExternalCacheEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCacheEx(_QWORD *P)
{
  CcRemoveExternalCacheEx(P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
