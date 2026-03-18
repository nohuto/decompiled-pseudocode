/*
 * XREFs of sub_14000D6D0 @ 0x14000D6D0
 * Callers:
 *     sub_140011210 @ 0x140011210 (sub_140011210.c)
 *     sub_140011670 @ 0x140011670 (sub_140011670.c)
 *     sub_140020924 @ 0x140020924 (sub_140020924.c)
 *     sub_140027E0C @ 0x140027E0C (sub_140027E0C.c)
 *     sub_14002A02C @ 0x14002A02C (sub_14002A02C.c)
 * Callees:
 *     sub_1400187E0 @ 0x1400187E0 (sub_1400187E0.c)
 */

char __fastcall sub_14000D6D0(__int64 a1)
{
  char v1; // dl
  __int64 v2; // r9

  if ( (unsigned __int8)sub_1400187E0(a1, 1LL, 4LL, *(_QWORD *)(a1 + 1560)) && v2 && (*(_DWORD *)(v2 + 96) & 0x200) != 0 )
    return v1;
  else
    return 0;
}
