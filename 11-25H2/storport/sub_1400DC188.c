/*
 * XREFs of sub_1400DC188 @ 0x1400DC188
 * Callers:
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400E08E8 @ 0x1400E08E8 (sub_1400E08E8.c)
 */

__int64 __fastcall sub_1400DC188(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = sub_1400143E0(64LL, 192LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 712) = v3;
  if ( !v3
    || (*(_QWORD *)(*(_QWORD *)(a1 + 712) + 96LL) = sub_1400143E0(
                                                      64LL,
                                                      5672LL,
                                                      1095655762LL,
                                                      *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL))) == 0LL )
  {
    v2 = -1073741801;
    sub_1400E08E8(a1);
  }
  return v2;
}
