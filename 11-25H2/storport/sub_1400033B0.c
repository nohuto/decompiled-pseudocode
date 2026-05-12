/*
 * XREFs of sub_1400033B0 @ 0x1400033B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003B58 @ 0x140003B58 (sub_140003B58.c)
 *     sub_140003FEC @ 0x140003FEC (sub_140003FEC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_1400033B0(__int64 a1, _DWORD *a2, unsigned int a3)
{
  if ( a3 >= 8 )
  {
    memset_0(a2, 0, a3);
    *a2 = sub_140003FEC(a1 + 720);
    a2[1] = sub_140003B58();
  }
}
