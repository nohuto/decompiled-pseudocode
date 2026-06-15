/*
 * XREFs of sub_140048404 @ 0x140048404
 * Callers:
 *     sub_14004392C @ 0x14004392C (sub_14004392C.c)
 *     sub_14006B0D0 @ 0x14006B0D0 (sub_14006B0D0.c)
 *     sub_14006B300 @ 0x14006B300 (sub_14006B300.c)
 *     sub_1400B2DE1 @ 0x1400B2DE1 (sub_1400B2DE1.c)
 *     sub_1400B2E05 @ 0x1400B2E05 (sub_1400B2E05.c)
 *     sub_1400B2E17 @ 0x1400B2E17 (sub_1400B2E17.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 */

__int64 __fastcall sub_140048404(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1400031E4(v1);
  return result;
}
