/*
 * XREFs of sub_140030D48 @ 0x140030D48
 * Callers:
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_140033368 @ 0x140033368 (sub_140033368.c)
 *     sub_14006AC50 @ 0x14006AC50 (sub_14006AC50.c)
 *     sub_14006ADA0 @ 0x14006ADA0 (sub_14006ADA0.c)
 *     sub_14006AEEC @ 0x14006AEEC (sub_14006AEEC.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140030D48(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx

  v3 = *a2;
  if ( *a1 == *a2 )
    return *a1;
  if ( v3 )
    sub_1400B6010(*a2);
  if ( *a1 )
    sub_1400B6010(*a1);
  *a1 = v3;
  return v3;
}
