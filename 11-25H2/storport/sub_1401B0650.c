/*
 * XREFs of sub_1401B0650 @ 0x1401B0650
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1401B0650(__int64 a1, int a2, const void *a3, unsigned int a4, int a5, __int64 a6)
{
  size_t v7; // rbp
  unsigned int v8; // ebx
  void *Pool2; // rdi
  unsigned int v10; // eax

  v7 = a4;
  if ( a2 == a5 )
  {
    v8 = 0;
    Pool2 = *(void **)a6;
    v10 = *(_DWORD *)(a6 + 8);
    if ( (*(_QWORD *)a6 || (Pool2 = (void *)ExAllocatePool2(256LL, a4, 1733454928LL), v10 = v7, Pool2))
      && (unsigned int)v7 <= v10 )
    {
      memmove(Pool2, a3, v7);
    }
    else
    {
      v8 = -1073741670;
    }
    *(_QWORD *)a6 = Pool2;
    *(_DWORD *)(a6 + 8) = v7;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
