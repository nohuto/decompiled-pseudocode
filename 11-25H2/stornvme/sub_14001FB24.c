/*
 * XREFs of sub_14001FB24 @ 0x14001FB24
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140028BD4 @ 0x140028BD4 (sub_140028BD4.c)
 * Callees:
 *     sub_140004670 @ 0x140004670 (sub_140004670.c)
 *     sub_14002079C @ 0x14002079C (sub_14002079C.c)
 */

__int64 __fastcall sub_14001FB24(__int64 a1)
{
  unsigned int i; // esi
  int v4; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_WORD *)(a1 + 272) )
    return 1LL;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 234); ++i )
  {
    v4 = 0;
    if ( !(unsigned int)StorPortExtendedFunction(116LL, a1, *(unsigned int *)(*(_QWORD *)(a1 + 264) + 72LL * i), &v4)
      && (*(_WORD *)(a1 + 272) == 1 || v4) )
    {
      sub_140004670(a1, *(_DWORD *)(*(_QWORD *)(a1 + 264) + 72LL * i), v4, 0);
      sub_14002079C(a1, *(unsigned int *)(*(_QWORD *)(a1 + 264) + 72LL * i), (unsigned __int16)v4);
    }
  }
  return 0LL;
}
