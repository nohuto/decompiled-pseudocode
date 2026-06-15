/*
 * XREFs of sub_14000EF40 @ 0x14000EF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DA94 @ 0x14000DA94 (sub_14000DA94.c)
 *     sub_14000EF98 @ 0x14000EF98 (sub_14000EF98.c)
 *     nullsub_1 @ 0x14003AA00 (nullsub_1.c)
 */

__int64 __fastcall sub_14000EF40(__int64 a1, char a2)
{
  unsigned __int64 v4; // rax
  int v5; // r8d

  sub_14000EF98();
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      nullsub_1(a1, 296LL);
    }
    else
    {
      v4 = sub_14000DA4C();
      sub_14000DA94(a1, v4, v5);
    }
  }
  return a1;
}
