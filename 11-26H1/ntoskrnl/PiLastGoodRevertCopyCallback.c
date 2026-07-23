/*
 * XREFs of PiLastGoodRevertCopyCallback @ 0x140CCAAC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     IopFileUtilRename @ 0x140CCDA20 (IopFileUtilRename.c)
 */

__int64 __fastcall PiLastGoodRevertCopyCallback(unsigned __int16 *a1, __int64 a2, __int64 a3, _WORD *a4)
{
  ULONG_PTR v5; // rdx
  unsigned __int64 v6; // rsi
  _QWORD *Pool2; // rdi
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a1;
  v6 = (unsigned __int16)(*a4 + 2);
  v13 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, v5, 0x674C7050u);
  if ( !Pool2 )
    return 3221225626LL;
  v9 = *((_QWORD *)a1 + 1);
  *(_OWORD *)Pool2 = *(_OWORD *)v9;
  Pool2[2] = *(_QWORD *)(v9 + 16);
  memmove(Pool2 + 3, (const void *)(*((_QWORD *)a1 + 1) + 2 * (v6 >> 1)), *a1 - v6);
  v10 = *a1 - v6;
  *((_QWORD *)&v13 + 1) = Pool2;
  LOBYTE(v11) = 1;
  LOWORD(v13) = v10 + 24;
  WORD1(v13) = v10 + 24;
  v12 = IopFileUtilRename(a1, &v13, v11);
  ExFreePoolWithTag(Pool2, 0);
  return v12;
}
