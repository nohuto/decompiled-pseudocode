/*
 * XREFs of sub_14007922C @ 0x14007922C
 * Callers:
 *     sub_14007AC50 @ 0x14007AC50 (sub_14007AC50.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 */

__int64 __fastcall sub_14007922C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  unsigned int v8; // ebx

  v8 = -1073741637;
  if ( sub_1400215B0(a1, 8) )
  {
    return (unsigned int)sub_140021760(*(_QWORD *)(a1 + 24) + 376LL);
  }
  else if ( a7 )
  {
    *a7 = 0LL;
  }
  return v8;
}
