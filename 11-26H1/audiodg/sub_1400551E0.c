/*
 * XREFs of sub_1400551E0 @ 0x1400551E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140036470 @ 0x140036470 (sub_140036470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400551E0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  sub_140036470(&v3, *(_QWORD *)(a1 + 96));
  if ( v3 )
    v1 = sub_1400B6010(v3);
  else
    v1 = -2147467262;
  sub_140003238(&v3);
  return v1;
}
