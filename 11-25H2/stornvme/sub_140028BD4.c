/*
 * XREFs of sub_140028BD4 @ 0x140028BD4
 * Callers:
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 *     sub_140028860 @ 0x140028860 (sub_140028860.c)
 * Callees:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 *     sub_14000C910 @ 0x14000C910 (sub_14000C910.c)
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 *     sub_14001FB24 @ 0x14001FB24 (sub_14001FB24.c)
 */

char __fastcall sub_140028BD4(__int64 a1)
{
  int v2; // esi
  char v3; // bl
  unsigned int v4; // eax
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = v2 & 0xFFFFFFEF;
  v5 = v2 & 0x800000;
  *(_DWORD *)(a1 + 24) = v4;
  sub_14000C910(a1);
  if ( !(unsigned int)sub_14001E95C(a1, 0) )
  {
    LOBYTE(v7) = 1;
    LOBYTE(v6) = v5 != 0;
    if ( !(unsigned int)sub_1400073E0(a1, v6, v7, v8)
      && sub_14000FB60(a1, 1u)
      && (!v5 || !(unsigned int)sub_14001FB24(a1)) )
    {
      return 1;
    }
  }
  return v3;
}
