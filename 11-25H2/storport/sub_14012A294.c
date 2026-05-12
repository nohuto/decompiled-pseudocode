/*
 * XREFs of sub_14012A294 @ 0x14012A294
 * Callers:
 *     sub_140126C00 @ 0x140126C00 (sub_140126C00.c)
 *     sub_140126ECC @ 0x140126ECC (sub_140126ECC.c)
 *     sub_1401271C0 @ 0x1401271C0 (sub_1401271C0.c)
 *     sub_1401276A0 @ 0x1401276A0 (sub_1401276A0.c)
 *     sub_140127EF0 @ 0x140127EF0 (sub_140127EF0.c)
 *     sub_140127FB0 @ 0x140127FB0 (sub_140127FB0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14012A294(__int64 a1)
{
  __int64 v1; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  v1 = *(_QWORD *)(a1 + 160);
  if ( v1 && *(_QWORD *)(v1 + 8) )
  {
    v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v1 + 80);
    if ( v2 )
      ExReleaseRundownProtectionCacheAware(v2);
  }
}
