/*
 * XREFs of sub_14005BC28 @ 0x14005BC28
 * Callers:
 *     sub_14005C478 @ 0x14005C478 (sub_14005C478.c)
 *     sub_1400B4510 @ 0x1400B4510 (sub_1400B4510.c)
 * Callees:
 *     sub_14005C2EC @ 0x14005C2EC (sub_14005C2EC.c)
 */

void __fastcall sub_14005BC28(struct _RTL_CRITICAL_SECTION *a1)
{
  sub_14005C2EC(&a1[1]);
  DeleteCriticalSection(a1);
}
