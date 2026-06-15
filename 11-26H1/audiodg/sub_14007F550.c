/*
 * XREFs of sub_14007F550 @ 0x14007F550
 * Callers:
 *     <none>
 * Callees:
 *     sub_140078EFC @ 0x140078EFC (sub_140078EFC.c)
 *     sub_1400792AC @ 0x1400792AC (sub_1400792AC.c)
 */

__int64 __fastcall sub_14007F550(__int64 a1, volatile signed __int32 *a2)
{
  int v4; // ebx

  v4 = sub_140078EFC(a1);
  if ( v4 < 0 )
    *a2 = v4;
  else
    sub_1400792AC(a1, a2);
  return (unsigned int)v4;
}
