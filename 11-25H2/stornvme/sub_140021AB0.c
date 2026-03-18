/*
 * XREFs of sub_140021AB0 @ 0x140021AB0
 * Callers:
 *     sub_1400020E0 @ 0x1400020E0 (sub_1400020E0.c)
 *     sub_14000CC70 @ 0x14000CC70 (sub_14000CC70.c)
 *     sub_140021288 @ 0x140021288 (sub_140021288.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140021AB0(__int64 a1)
{
  int v1; // ecx

  v1 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1560) + 319LL);
  if ( (_BYTE)v1 == 0xFF )
    return 4LL;
  else
    return (unsigned int)(v1 << 12);
}
