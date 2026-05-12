/*
 * XREFs of sub_140178048 @ 0x140178048
 * Callers:
 *     sub_1401B34BC @ 0x1401B34BC (sub_1401B34BC.c)
 *     sub_1401B43C0 @ 0x1401B43C0 (sub_1401B43C0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_140178048(__int64 a1)
{
  unsigned int v2; // ecx
  _QWORD *v3; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL);
  if ( v2 >= 0xFFFFFFF0 )
    return 3221225495LL;
  if ( v2 + 16 < v2 )
    return 3221225495LL;
  v3 = (_QWORD *)sub_1400143E0(
                   64LL,
                   v2 + 16,
                   (*(_BYTE *)(a1 + 248) & 1) != 0 ? 1447977298 : 1162699090,
                   *(_QWORD *)(*(_QWORD *)a1 + 8LL));
  *(_QWORD *)(a1 + 240) = v3;
  if ( !v3 )
    return 3221225495LL;
  *v3 = a1;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8LL) = a1;
  return 0LL;
}
