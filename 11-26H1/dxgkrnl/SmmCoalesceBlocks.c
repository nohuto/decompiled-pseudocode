/*
 * XREFs of SmmCoalesceBlocks @ 0x14009CB04
 * Callers:
 *     SmmReleaseBlock @ 0x14009CEDC (SmmReleaseBlock.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     SmmGetSiblingBlock @ 0x140069FBC (SmmGetSiblingBlock.c)
 *     SmmRemoveBlockFromPool @ 0x14009CF58 (SmmRemoveBlockFromPool.c)
 */

__int64 __fastcall SmmCoalesceBlocks(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 *v6; // r14
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 **v9; // rax
  __int64 SiblingBlock; // rax
  _QWORD *v11; // rbx
  _DWORD *v12; // rcx
  __int64 result; // rax

  do
  {
    v6 = (unsigned __int64 *)(a3 + 4);
    SmmRemoveBlockFromPool(a1 + 24 * (((unsigned __int64)a3[4] >> 53) & 0x3F), a3);
    v7 = a3[4];
    if ( (v7 & 0xFFFFFFFFFFFFFuLL) >= (a2[4] & 0xFFFFFFFFFFFFFuLL) )
      v7 = a2[4];
    *v6 = ((v7 ^ (a3[4] ^ v7) & 0xFFF0000000000000uLL) + 0x20000000000000LL) ^ (v7 ^ (a3[4] ^ v7) & 0xFFF0000000000000uLL ^ ((v7 ^ (a3[4] ^ v7) & 0xFFF0000000000000uLL) + 0x20000000000000LL)) & 0xF81FFFFFFFFFFFFFuLL;
    v8 = *a2;
    if ( *(__int64 **)(*a2 + 8) != a2 )
      goto LABEL_9;
    v9 = (__int64 **)a2[1];
    if ( *v9 != a2 )
      goto LABEL_9;
    *v9 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
    a2 = a3;
    SiblingBlock = SmmGetSiblingBlock(a1, a3);
    a3 = (__int64 *)SiblingBlock;
  }
  while ( SiblingBlock && !_bittest64((const signed __int64 *)(SiblingBlock + 32), 0x34u) );
  v11 = a2 + 2;
  v12 = (_DWORD *)(a1 + 24 * ((*v6 >> 53) & 0x3F));
  result = *(_QWORD *)v12;
  if ( *(_DWORD **)(*(_QWORD *)v12 + 8LL) != v12 )
LABEL_9:
    __fastfail(3u);
  *v11 = result;
  v11[1] = v12;
  *(_QWORD *)(result + 8) = v11;
  *(_QWORD *)v12 = v11;
  ++v12[4];
  return result;
}
