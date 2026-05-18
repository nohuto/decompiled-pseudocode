/*
 * XREFs of sub_18000C450 @ 0x18000C450
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C534 @ 0x18001C534 (sub_18001C534.c)
 */

_QWORD *__fastcall sub_18000C450(_QWORD *a1, char a2)
{
  *a1 = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18001C534(a1);
  return a1;
}
