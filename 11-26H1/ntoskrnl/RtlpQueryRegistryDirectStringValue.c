/*
 * XREFs of RtlpQueryRegistryDirectStringValue @ 0x14080AAE0
 * Callers:
 *     RtlpQueryRegistryDirect @ 0x140A109F8 (RtlpQueryRegistryDirect.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpQueryRegistryDirectStringValue(_WORD *Src, unsigned int a2, __int64 a3)
{
  unsigned __int16 v4; // bx
  __int16 v7; // r12
  void *v8; // rcx
  unsigned int v9; // edi
  unsigned __int64 v10; // rbp
  __int64 Pool2; // rax

  v4 = a2;
  if ( (a2 & 1) != 0 )
    return 3221225485LL;
  if ( a2 > 0xFFFE )
    v4 = -2;
  v7 = Src[((unsigned __int64)v4 >> 1) - 1];
  v8 = *(void **)(a3 + 8);
  v9 = v4 + 2;
  if ( !v7 )
    v9 = v4;
  if ( v8 )
  {
    if ( v9 > *(unsigned __int16 *)(a3 + 2) )
      return 3221225507LL;
    v10 = v9;
  }
  else
  {
    v10 = v9;
    Pool2 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a3 + 8) = Pool2;
    v8 = (void *)Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    if ( v9 >= 0xFFFE )
      LOWORD(v9) = -2;
    *(_WORD *)(a3 + 2) = v9;
  }
  memmove(v8, Src, v4);
  *(_WORD *)(*(_QWORD *)(a3 + 8) + 2 * (v10 >> 1) - 2) = 0;
  if ( !v7 )
    v4 -= 2;
  *(_WORD *)a3 = v4;
  return 0LL;
}
