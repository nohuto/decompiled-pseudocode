/*
 * XREFs of sub_14006C720 @ 0x14006C720
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_140059910 @ 0x140059910 (sub_140059910.c)
 */

__int64 __fastcall sub_14006C720(__int64 a1, _QWORD *a2)
{
  int v3; // ebx

  v3 = sub_140059910();
  if ( v3 >= 0 )
  {
    sub_140007CC0();
    *a2 = qword_1400E8940;
  }
  return (unsigned int)v3;
}
