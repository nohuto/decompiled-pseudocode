/*
 * XREFs of sub_1409E1494 @ 0x1409E1494
 * Callers:
 *     sub_1409E0F38 @ 0x1409E0F38 (sub_1409E0F38.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     sub_1409E1224 @ 0x1409E1224 (sub_1409E1224.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409E1494(__int64 a1, _QWORD *a2)
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
  v7 = Pool2 == 0 ? 0xC0000017 : 0;
  SddlpFree(0LL);
  if ( v6 )
  {
    memset_0(v5, 0, 0x50uLL);
    *v5 = 1LL;
    *((_DWORD *)v5 + 6) = *(_DWORD *)(a1 + 8);
    v5[4] = *(_QWORD *)a1;
    *a2 = v5;
    v5 = 0LL;
  }
  sub_1409E1224(v5);
  return v7;
}
