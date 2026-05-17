/*
 * XREFs of LdrpFreeLoadContextOfNode @ 0x1800C73C0
 * Callers:
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800C73C0 (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpFreeLoadContextOfNode @ 0x1800C73C0 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeLoadContext @ 0x1800C7460 (LdrpFreeLoadContext.c)
 */

void __fastcall LdrpFreeLoadContextOfNode(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx

  v2 = *(_QWORD **)a1;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v6 = v2 - 20;
  if ( v4 && *(_QWORD *)(v4 + 40) == a2 )
  {
    LdrpFreeLoadContext(v4);
    if ( a1 != *v2 )
    {
      do
      {
        v7 = (_QWORD *)v6[20];
        v6 = v7 - 20;
        LdrpFreeLoadContext(v7[2]);
      }
      while ( a1 != *v7 );
    }
    v8 = v6[19];
    v9 = *(_QWORD **)(v8 + 40);
    if ( v9 )
    {
      v10 = *(_QWORD **)(v8 + 40);
      do
      {
        v10 = (_QWORD *)*v10;
        LdrpFreeLoadContextOfNode(v10[1], a2);
      }
      while ( v10 != v9 );
    }
  }
}
