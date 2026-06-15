/*
 * XREFs of sub_14003826C @ 0x14003826C
 * Callers:
 *     sub_1400566C0 @ 0x1400566C0 (sub_1400566C0.c)
 *     sub_14005C820 @ 0x14005C820 (sub_14005C820.c)
 *     sub_140068234 @ 0x140068234 (sub_140068234.c)
 *     sub_1400801B0 @ 0x1400801B0 (sub_1400801B0.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003826C(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    sub_1400B6010(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
