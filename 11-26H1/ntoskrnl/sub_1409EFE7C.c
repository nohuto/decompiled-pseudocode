/*
 * XREFs of sub_1409EFE7C @ 0x1409EFE7C
 * Callers:
 *     sub_1409EF76C @ 0x1409EF76C (sub_1409EF76C.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     sub_1409EF970 @ 0x1409EF970 (sub_1409EF970.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EFE7C(__int64 a1, _QWORD *a2)
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
  sub_1409EF970(v5);
  return v7;
}
