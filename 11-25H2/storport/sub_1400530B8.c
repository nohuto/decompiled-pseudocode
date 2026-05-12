/*
 * XREFs of sub_1400530B8 @ 0x1400530B8
 * Callers:
 *     sub_1400930B8 @ 0x1400930B8 (sub_1400930B8.c)
 *     sub_14009E168 @ 0x14009E168 (sub_14009E168.c)
 * Callees:
 *     sub_1400530F8 @ 0x1400530F8 (sub_1400530F8.c)
 */

__int64 __fastcall sub_1400530B8(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx

  v1 = sub_1400530F8(a1 + 16);
  v2 = 0LL;
  if ( v1 )
  {
    v2 = v1 - 120;
    v3 = *(_QWORD *)(*(_QWORD *)(v1 - 120 + 184) + 8LL);
    if ( *(_BYTE *)(v3 + 2) != 40 )
      *(_QWORD *)(v3 + 56) = *(_QWORD *)(v3 + 40);
  }
  return v2;
}
