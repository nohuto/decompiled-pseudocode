/*
 * XREFs of sub_14007B400 @ 0x14007B400
 * Callers:
 *     <none>
 * Callees:
 *     sub_140079184 @ 0x140079184 (sub_140079184.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007B400(__int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = sub_1400B6010(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    sub_140079184(v1);
  return v2;
}
