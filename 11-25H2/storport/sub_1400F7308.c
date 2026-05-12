/*
 * XREFs of sub_1400F7308 @ 0x1400F7308
 * Callers:
 *     sub_1400F73A0 @ 0x1400F73A0 (sub_1400F73A0.c)
 *     sub_140128094 @ 0x140128094 (sub_140128094.c)
 *     sub_14012BD90 @ 0x14012BD90 (sub_14012BD90.c)
 *     sub_14012BFD4 @ 0x14012BFD4 (sub_14012BFD4.c)
 *     sub_14012C1B0 @ 0x14012C1B0 (sub_14012C1B0.c)
 *     sub_14012C230 @ 0x14012C230 (sub_14012C230.c)
 *     sub_14012C500 @ 0x14012C500 (sub_14012C500.c)
 *     sub_14012C594 @ 0x14012C594 (sub_14012C594.c)
 *     sub_14012C740 @ 0x14012C740 (sub_14012C740.c)
 *     sub_14012C7A0 @ 0x14012C7A0 (sub_14012C7A0.c)
 *     sub_14012C9C0 @ 0x14012C9C0 (sub_14012C9C0.c)
 *     sub_14012CAD0 @ 0x14012CAD0 (sub_14012CAD0.c)
 *     sub_14012CC80 @ 0x14012CC80 (sub_14012CC80.c)
 *     sub_14012CFC0 @ 0x14012CFC0 (sub_14012CFC0.c)
 *     sub_14012D2A0 @ 0x14012D2A0 (sub_14012D2A0.c)
 *     sub_14012D318 @ 0x14012D318 (sub_14012D318.c)
 *     sub_14012D7EC @ 0x14012D7EC (sub_14012D7EC.c)
 *     sub_14012DC60 @ 0x14012DC60 (sub_14012DC60.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_1400F7308(__int64 a1)
{
  __int64 v1; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 && *(_QWORD *)(v1 + 8) && (v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v1 + 40)) != 0LL )
    return ExAcquireRundownProtectionCacheAware(v2);
  else
    return 0;
}
