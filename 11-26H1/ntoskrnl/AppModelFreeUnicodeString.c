/*
 * XREFs of AppModelFreeUnicodeString @ 0x1404E0F44
 * Callers:
 *     KIsSideloadingEnabled @ 0x14085100C (KIsSideloadingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AppModelFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4D707041u);
    *(_OWORD *)a1 = 0LL;
  }
}
