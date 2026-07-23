/*
 * XREFs of sub_1409ED7B4 @ 0x1409ED7B4
 * Callers:
 *     sub_1409EB860 @ 0x1409EB860 (sub_1409EB860.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409EBBA4 @ 0x1409EBBA4 (sub_1409EBBA4.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409ED7B4(__int64 a1, _QWORD *a2)
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
    v5[5] = sub_140A88720;
    *((_DWORD *)v5 + 8) = 10;
    *((_DWORD *)v5 + 2) = 8;
    v5[10] = 0LL;
    v5[9] = v5 + 8;
    v5[8] = v5 + 8;
    v5[27] = sub_140AE2730;
    v5[23] = 8LL;
    *((_DWORD *)v5 + 48) = 0;
    v5[25] = 0LL;
    *((_DWORD *)v5 + 52) = 10;
    v5[28] = 0LL;
    v5[15] = sub_140A7CAF0;
    v5[11] = 8LL;
    *((_DWORD *)v5 + 24) = 0;
    v5[13] = 0LL;
    *((_DWORD *)v5 + 28) = 10;
    v5[16] = 0LL;
    v5[21] = sub_140B1C0F0;
    v5[17] = 8LL;
    *((_DWORD *)v5 + 36) = 0;
    v5[19] = 0LL;
    *((_DWORD *)v5 + 40) = 10;
    v5[22] = 0LL;
    *a2 = v5;
    v5 = 0LL;
  }
  sub_1409EBBA4((__int64)v5);
  return v7;
}
