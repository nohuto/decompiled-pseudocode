/*
 * XREFs of RtlpHpSegContextInitialize @ 0x1800EAC24
 * Callers:
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

_OWORD *__fastcall RtlpHpSegContextInitialize(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        _OWORD *a9,
        char a10)
{
  __int64 v11; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // ecx
  int v17; // edx
  unsigned int v18; // ecx
  _OWORD *result; // rax

  v11 = a2;
  memset_thunk_772440563353939046(a1, 0, 0xC0uLL);
  *((_BYTE *)a1 + 11) = 7;
  v14 = v11 - 1;
  v15 = (unsigned int)v11 >> 8;
  *a1 = ~v14;
  _BitScanReverse((unsigned int *)&v14, v15);
  *((_BYTE *)a1 + 8) = v14;
  _BitScanForward(&v16, (unsigned int)v15 >> 12);
  v17 = *(_DWORD *)a1;
  *((_BYTE *)a1 + 10) = (v15 + 0x1FFF) / (unsigned __int64)(unsigned int)v15;
  *((_BYTE *)a1 + 9) = v16;
  *((_DWORD *)a1 + 4) = (((((_DWORD)v15 - 1) & (unsigned int)(v15 + 0x1FFF)) - (unsigned int)v15 + -v17 - 0x1FFF) >> 1)
                      - ((v15 - 1) & (((((_DWORD)v15 - 1) & (unsigned int)(v15 + 0x1FFF))
                                     - (unsigned int)v15
                                     + -v17
                                     - 0x1FFF) >> 1));
  v18 = RtlpHpLfhPerfFlags;
  a1[8] = 0LL;
  *((_BYTE *)a1 + 12) = 3 - ((v18 >> 10) & 3);
  *((_BYTE *)a1 + 13) = a10;
  a1[10] = (__int64)(a1 + 9);
  a1[9] = (__int64)(a1 + 9);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *((_WORD *)a1 + 10) = a8 - (_WORD)a1;
  a1[7] = a3;
  *((_WORD *)a1 + 11) = a7 - (_WORD)a1;
  a1[4] = a5;
  a1[18] = a6;
  result = a9;
  a1[3] = a4;
  *(_OWORD *)(a1 + 5) = *a9;
  return result;
}
