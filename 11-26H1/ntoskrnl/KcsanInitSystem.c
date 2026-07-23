/*
 * XREFs of KcsanInitSystem @ 0x1405E59E0
 * Callers:
 *     KasanInitSystem @ 0x140CCDE10 (KasanInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     MiKcsanPopulateHierarchy @ 0x1406FA224 (MiKcsanPopulateHierarchy.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall KcsanInitSystem(int a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 *Pool2; // rax
  unsigned __int64 *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  char *v9; // rbp

  if ( a1 == 2 && (_DWORD)KeNumberProcessors_0 != 1 )
  {
    v1 = 9LL;
    Pool2 = (unsigned __int64 *)ExAllocatePool2(0x48uLL);
    v3 = Pool2;
    if ( !Pool2 )
    {
      qword_140FC8BE0 = 0LL;
      KeBugCheckEx(0x1F1u, 4uLL, 9uLL, 1uLL, 0LL);
    }
    *Pool2 = 9LL;
    MiKcsanPopulateHierarchy(Pool2 + 1, 0LL, 0xFFFF7FFFFFFFFFFFuLL);
    v4 = qword_140E37D80;
    v5 = qword_140E37D80 + qword_140E37D88 - 1;
    v3[9] = qword_140E37D80;
    v3[10] = v5;
    MiKcsanPopulateHierarchy(v3 + 11, v4, v5);
    qsort(v3 + 1, 9uLL, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiKcsanIgnoredRangeSort);
    v6 = 1LL;
    v7 = v3 + 2;
    v8 = v3 + 3;
    v9 = (char *)(v3 + 5);
    do
    {
      if ( *v7 == *v8 )
      {
        *v7 = v8[1];
        memmove(v8, v9, v1 - v6 - 1);
        --v1;
        --v6;
        v7 -= 2;
        v8 -= 2;
        v9 -= 16;
      }
      ++v6;
      v7 += 2;
      v8 += 2;
      v9 += 16;
    }
    while ( v6 < v1 );
    *v3 = v1;
    qword_140FC8BE0 = (__int64)v3;
    KcsaniValidationEnabled = 1;
  }
}
