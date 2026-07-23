/*
 * XREFs of KiPopulateSubNodes @ 0x140CD0EC4
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140CD0A5C (KiPerformGroupConfiguration.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

ULONG_PTR KiPopulateSubNodes()
{
  __int64 *v0; // rdi
  unsigned __int16 v1; // bx
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  ULONG_PTR Pool2; // r14
  ULONG_PTR result; // rax
  bool v7; // cf
  unsigned __int16 v8; // r10
  _QWORD *v9; // rcx
  unsigned __int16 v10; // r9
  unsigned __int16 i; // r8
  __int16 v12; // dx
  __int64 v13; // rcx

  v0 = KeNodeBlock;
  v1 = 0;
  if ( KeNumberNodes )
  {
    v2 = KeNodeBlock;
    v3 = (unsigned __int16)KeNumberNodes;
    do
    {
      v4 = *v2++;
      v1 += *(_WORD *)(v4 + 40);
      --v3;
    }
    while ( v3 );
  }
  Pool2 = ExAllocatePool2(72LL, 24LL * v1, 0x414E534Bu);
  if ( !Pool2 || (result = ExAllocatePool2(72LL, 8LL * v1, 0x414E534Bu)) == 0 )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  v7 = KeNumberNodes != 0;
  v8 = 0;
  v9 = (_QWORD *)KiSubNodes;
  v10 = 0;
  KiSubNodes = result;
  KiSubNodeConfigBlock = Pool2;
  *(_QWORD *)result = *v9;
  if ( v7 )
  {
    do
    {
      result = *v0;
      for ( i = *(_WORD *)(*v0 + 8); i; i -= v12 )
      {
        v12 = i;
        result = v8;
        if ( i > (unsigned __int16)KiMaximumSubNodeSize )
          v12 = KiMaximumSubNodeSize;
        v13 = 3LL * v8;
        *(_WORD *)(Pool2 + 8 * v13) = v8++;
        *(_WORD *)(Pool2 + 8 * v13 + 2) = v10;
        *(_BYTE *)(Pool2 + 8 * v13 + 4) = v12;
      }
      ++v10;
      ++v0;
    }
    while ( v10 < (unsigned __int16)KeNumberNodes );
  }
  KiSubNodeCount = v1;
  return result;
}
