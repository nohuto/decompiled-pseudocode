/*
 * XREFs of sub_1400F045C @ 0x1400F045C
 * Callers:
 *     sub_140128E40 @ 0x140128E40 (sub_140128E40.c)
 *     sub_14012AFF8 @ 0x14012AFF8 (sub_14012AFF8.c)
 * Callees:
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 *     sub_1400EF95C @ 0x1400EF95C (sub_1400EF95C.c)
 *     sub_1400F0F5C @ 0x1400F0F5C (sub_1400F0F5C.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 *     sub_1401224B4 @ 0x1401224B4 (sub_1401224B4.c)
 */

__int64 __fastcall sub_1400F045C(_QWORD *SystemArgument2)
{
  __int64 v2; // rdx
  int v3; // edi

  SystemArgument2[121] &= ~4uLL;
  SystemArgument2[121] |= 0x2000000uLL;
  sub_1400F0F5C();
  sub_1401224B4(SystemArgument2);
  v3 = sub_1400F1D38(SystemArgument2, v2, 2LL);
  if ( v3 >= 0 )
  {
    v3 = sub_1400ED16C(SystemArgument2, 0);
    if ( v3 >= 0 )
    {
      v3 = sub_1400ED47C(SystemArgument2, 0LL, 1);
      if ( v3 >= 0 )
      {
        v3 = sub_1400ED768(SystemArgument2, 1);
        if ( v3 >= 0 )
          sub_1400EF95C(SystemArgument2);
      }
    }
  }
  SystemArgument2[121] &= ~0x2000000uLL;
  return (unsigned int)v3;
}
