/*
 * XREFs of sub_14002C694 @ 0x14002C694
 * Callers:
 *     sub_140080A8C @ 0x140080A8C (sub_140080A8C.c)
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_1400837C0 @ 0x1400837C0 (sub_1400837C0.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_14002C694(__int64 ***a1, _QWORD **a2)
{
  __int64 **i; // r9

  for ( i = *a1; ; i = (__int64 **)*i )
  {
    if ( !i )
      return 0LL;
    if ( *i[2] == **a2 )
      break;
  }
  return i;
}
