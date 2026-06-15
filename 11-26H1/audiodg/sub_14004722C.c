/*
 * XREFs of sub_14004722C @ 0x14004722C
 * Callers:
 *     sub_1400AECB4 @ 0x1400AECB4 (sub_1400AECB4.c)
 *     sub_1400AECD8 @ 0x1400AECD8 (sub_1400AECD8.c)
 *     sub_1400AECEA @ 0x1400AECEA (sub_1400AECEA.c)
 *     sub_1400AFB74 @ 0x1400AFB74 (sub_1400AFB74.c)
 *     sub_1400AFCE4 @ 0x1400AFCE4 (sub_1400AFCE4.c)
 *     sub_1400AFD08 @ 0x1400AFD08 (sub_1400AFD08.c)
 *     sub_1400AFE00 @ 0x1400AFE00 (sub_1400AFE00.c)
 *     sub_1400AFE12 @ 0x1400AFE12 (sub_1400AFE12.c)
 *     sub_1400B2889 @ 0x1400B2889 (sub_1400B2889.c)
 *     sub_1400B289B @ 0x1400B289B (sub_1400B289B.c)
 *     sub_1400B2A8D @ 0x1400B2A8D (sub_1400B2A8D.c)
 *     sub_1400B2A9F @ 0x1400B2A9F (sub_1400B2A9F.c)
 *     sub_1400B2AB1 @ 0x1400B2AB1 (sub_1400B2AB1.c)
 *     sub_1400B2B80 @ 0x1400B2B80 (sub_1400B2B80.c)
 *     sub_1400B2C28 @ 0x1400B2C28 (sub_1400B2C28.c)
 *     sub_1400B2C3A @ 0x1400B2C3A (sub_1400B2C3A.c)
 *     sub_1400B2D33 @ 0x1400B2D33 (sub_1400B2D33.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004722C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = sub_1400B6010(v2);
  *a1 = 0LL;
  return result;
}
