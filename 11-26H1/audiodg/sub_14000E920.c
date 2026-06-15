/*
 * XREFs of sub_14000E920 @ 0x14000E920
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DA94 @ 0x14000DA94 (sub_14000DA94.c)
 *     sub_14000E978 @ 0x14000E978 (sub_14000E978.c)
 *     nullsub_1 @ 0x14003AA00 (nullsub_1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14000E920(__int64 a1, char a2)
{
  unsigned __int64 v4; // rax
  int v5; // r8d

  sub_14000E978();
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      nullsub_1(a1, 104LL);
    }
    else
    {
      v4 = sub_14000DA4C();
      sub_14000DA94(a1, v4, v5);
    }
  }
  return a1;
}
