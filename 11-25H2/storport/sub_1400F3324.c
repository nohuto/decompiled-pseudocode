/*
 * XREFs of sub_1400F3324 @ 0x1400F3324
 * Callers:
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 * Callees:
 *     sub_1400F37C8 @ 0x1400F37C8 (sub_1400F37C8.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void *__fastcall sub_1400F3324(__int64 a1)
{
  __int64 v1; // r8
  signed __int16 v3; // dx

  v1 = *(_QWORD *)(a1 + 88);
  v3 = _InterlockedIncrement16((volatile signed __int16 *)(v1 + 1680));
  if ( !v3 )
    v3 = _InterlockedIncrement16((volatile signed __int16 *)(v1 + 1680));
  **(_WORD **)(a1 + 96) = v3;
  *(_BYTE *)(*(_QWORD *)(a1 + 96) + 3LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 96) + 4LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 96) + 5LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 96) + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 96) + 12LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 96) + 2LL) = 0;
  sub_1400F37C8(a1);
  memset_0((void *)(*(_QWORD *)(a1 + 96) + 40LL), 0, 0x400uLL);
  memset_0((void *)(*(_QWORD *)(a1 + 96) + 1064LL), 0, 0x100uLL);
  return memset_0((void *)(*(_QWORD *)(a1 + 96) + 1320LL), 0, 0x100uLL);
}
