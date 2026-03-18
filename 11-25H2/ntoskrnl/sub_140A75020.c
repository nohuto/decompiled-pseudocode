/*
 * XREFs of sub_140A75020 @ 0x140A75020
 * Callers:
 *     sub_140908DF4 @ 0x140908DF4 (sub_140908DF4.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     sub_140909DB8 @ 0x140909DB8 (sub_140909DB8.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A75020(__int64 a1, _QWORD *a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // esi

  Pool2 = ExAllocatePool2(0x100uLL);
  v5 = 0LL;
  v6 = Pool2;
  if ( Pool2 )
    v5 = (_QWORD *)Pool2;
  SddlpFree(0LL);
  v7 = v6 == 0 ? 0xC0000017 : 0;
  if ( v6 )
  {
    memset_0(v5, 0, 0xF0uLL);
    ++v5[29];
    *v5 = a1;
    *((_DWORD *)v5 + 14) = 60;
    v7 = 0;
    v5[5] = sub_140909250;
    v5[1] = 8LL;
    *((_DWORD *)v5 + 4) = 0;
    v5[3] = 0LL;
    *((_DWORD *)v5 + 8) = 10;
    v5[6] = 0LL;
    v5[10] = 0LL;
    v5[9] = v5 + 8;
    v5[8] = v5 + 8;
    v5[27] = sub_140A4B160;
    v5[23] = 8LL;
    *((_DWORD *)v5 + 48) = 0;
    v5[25] = 0LL;
    *((_DWORD *)v5 + 52) = 10;
    v5[28] = 0LL;
    v5[15] = sub_140909280;
    v5[11] = 8LL;
    *((_DWORD *)v5 + 24) = 0;
    v5[13] = 0LL;
    *((_DWORD *)v5 + 28) = 10;
    v5[16] = 0LL;
    v5[21] = sub_140A7A540;
    v5[17] = 8LL;
    *((_DWORD *)v5 + 36) = 0;
    v5[19] = 0LL;
    *((_DWORD *)v5 + 40) = 10;
    v5[22] = 0LL;
    *a2 = v5;
    v5 = 0LL;
  }
  sub_140909DB8((__int64)v5);
  return v7;
}
