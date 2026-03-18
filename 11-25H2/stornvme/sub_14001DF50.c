/*
 * XREFs of sub_14001DF50 @ 0x14001DF50
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 *     sub_140028860 @ 0x140028860 (sub_140028860.c)
 * Callees:
 *     sub_1400189CC @ 0x1400189CC (sub_1400189CC.c)
 *     sub_14001D940 @ 0x14001D940 (sub_14001D940.c)
 *     sub_140020820 @ 0x140020820 (sub_140020820.c)
 */

__int64 __fastcall sub_14001DF50(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int i; // edi

  StorPortExtendedFunction(81LL, a1, 10000LL, a4);
  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 330);
        sub_14001D940(a1, *(_QWORD *)(a1 + 936) + 208LL * i++, *(unsigned __int16 *)(a1 + 328), 0, 1, 0, a2) )
  {
    ;
  }
  if ( !(unsigned __int8)sub_140020820(a1) || *(_WORD *)(a1 + 976) )
    *(_DWORD *)(a1 + 4056) |= 0x2000u;
  if ( *(_QWORD *)(a1 + 368) )
    sub_14001D940(a1, a1 + 336, *(unsigned __int16 *)(a1 + 324), 0, 1, 0, a2);
  return sub_1400189CC(a1);
}
