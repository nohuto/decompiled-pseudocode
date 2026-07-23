/*
 * XREFs of LdrpFreeLoadContextOfNode @ 0x1800C4B80
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003C630 (LdrpLoadDllInternal.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800C4B80 (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpFreeLoadContextOfNode @ 0x1800C4B80 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeLoadContext @ 0x1800C4C20 (LdrpFreeLoadContext.c)
 */

void __fastcall LdrpFreeLoadContextOfNode(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx

  v2 = *(_QWORD **)a1;
  v4 = *(_QWORD **)(*(_QWORD *)a1 + 16LL);
  v6 = v2 - 20;
  if ( v4 && v4[5] == a2 )
  {
    LdrpFreeLoadContext(v4);
    if ( a1 != *v2 )
    {
      do
      {
        v7 = v6[20];
        v6 = (_QWORD *)(v7 - 160);
        LdrpFreeLoadContext(*(PVOID *)(v7 + 16));
      }
      while ( a1 != *(_QWORD *)v7 );
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
