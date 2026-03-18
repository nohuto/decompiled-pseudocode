/*
 * XREFs of sub_140B0071C @ 0x140B0071C
 * Callers:
 *     sub_1408809DC @ 0x1408809DC (sub_1408809DC.c)
 *     sub_1409EBEA0 @ 0x1409EBEA0 (sub_1409EBEA0.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B0071C(void *Src, size_t Size, unsigned int a3, _QWORD *a4)
{
  void *v4; // rbx
  unsigned int v5; // esi
  __int64 Pool2; // rax
  int v7; // edi
  unsigned int v9; // r15d

  v4 = 0LL;
  v5 = a3;
  Pool2 = 0LL;
  v7 = 0;
  v9 = Size;
  if ( a3 && (Pool2 = ExAllocatePool2(0x100uLL)) == 0 )
    v7 = -1073741801;
  else
    v4 = (void *)Pool2;
  SddlpFree(0LL);
  if ( v7 >= 0 )
  {
    if ( Src && v9 )
    {
      if ( v5 >= v9 )
        v5 = v9;
      memmove(v4, Src, v5);
    }
    SddlpFree(Src);
    if ( a4 )
    {
      *a4 = v4;
      v4 = 0LL;
    }
  }
  SddlpFree(v4);
  return (unsigned int)v7;
}
