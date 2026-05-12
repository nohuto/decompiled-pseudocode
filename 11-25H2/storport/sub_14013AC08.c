/*
 * XREFs of sub_14013AC08 @ 0x14013AC08
 * Callers:
 *     sub_1401363F0 @ 0x1401363F0 (sub_1401363F0.c)
 *     sub_140136540 @ 0x140136540 (sub_140136540.c)
 *     sub_1401366F0 @ 0x1401366F0 (sub_1401366F0.c)
 *     sub_1401375E4 @ 0x1401375E4 (sub_1401375E4.c)
 *     sub_140137980 @ 0x140137980 (sub_140137980.c)
 *     sub_140139CC0 @ 0x140139CC0 (sub_140139CC0.c)
 *     sub_140139E20 @ 0x140139E20 (sub_140139E20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14013AC08(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 7) <= 0xA )
  {
    v1 = a1 + 16;
    if ( *(_DWORD *)(a1 + 12) > 8u )
      return *(_QWORD *)v1;
  }
  return v1;
}
