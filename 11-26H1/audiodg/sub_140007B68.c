/*
 * XREFs of sub_140007B68 @ 0x140007B68
 * Callers:
 *     sub_1400079EC @ 0x1400079EC (sub_1400079EC.c)
 *     sub_140021ACC @ 0x140021ACC (sub_140021ACC.c)
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 *     sub_14003586C @ 0x14003586C (sub_14003586C.c)
 *     sub_1400359C4 @ 0x1400359C4 (sub_1400359C4.c)
 *     sub_14003A37C @ 0x14003A37C (sub_14003A37C.c)
 *     sub_14003A424 @ 0x14003A424 (sub_14003A424.c)
 *     sub_140050AE0 @ 0x140050AE0 (sub_140050AE0.c)
 *     sub_140051420 @ 0x140051420 (sub_140051420.c)
 *     sub_140053838 @ 0x140053838 (sub_140053838.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140007B68(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a2 = v2;
  sub_1400B6010(v2);
  return 0LL;
}
