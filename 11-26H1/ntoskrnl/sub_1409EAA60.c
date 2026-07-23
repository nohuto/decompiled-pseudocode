/*
 * XREFs of sub_1409EAA60 @ 0x1409EAA60
 * Callers:
 *     sub_1409E9DA0 @ 0x1409E9DA0 (sub_1409E9DA0.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409E9D3C @ 0x1409E9D3C (sub_1409E9D3C.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EAA60(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // esi

  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = 0LL;
  v8 = Pool2;
  if ( Pool2 )
    v7 = (_QWORD *)Pool2;
  v9 = Pool2 == 0 ? 0xC0000017 : 0;
  SddlpFree(0LL);
  if ( v8 )
  {
    memset_0(v7, 0, 0x500uLL);
    ++v7[1];
    *v7 = a2;
    v7[2] = 0LL;
    v7[3] = 0LL;
    *((_DWORD *)v7 + 8) = 10;
    *a3 = v7;
    v7 = 0LL;
  }
  sub_1409E9D3C(a1, (__int64)v7);
  return v9;
}
