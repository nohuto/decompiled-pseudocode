/*
 * XREFs of ExpPartitionCreatePool @ 0x14077511C
 * Callers:
 *     ExAllocatePrivateWorkerPool @ 0x140775100 (ExAllocatePrivateWorkerPool.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     KeGetCurrentNode @ 0x1405F12E8 (KeGetCurrentNode.c)
 *     ExpPartitionCreatePoolInternal @ 0x140B6F508 (ExpPartitionCreatePoolInternal.c)
 */

__int64 __fastcall ExpPartitionCreatePool(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int *v4; // r13
  unsigned int v7; // edi
  unsigned __int16 *CurrentNode; // rax
  bool IsNodeInitialized; // al
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned __int16 *v12; // r14
  unsigned int v13; // ecx
  __int64 result; // rax
  unsigned __int16 v15; // bp
  unsigned int i; // r12d
  unsigned __int16 *v17; // rax
  __int64 v18; // [rsp+70h] [rbp+8h]

  v4 = a4;
  while ( _BitScanForward(&v7, *(_DWORD *)(a1 + 24)) )
  {
    if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 24), v7) )
    {
      CurrentNode = (unsigned __int16 *)KeGetCurrentNode();
      IsNodeInitialized = KeIsNodeInitialized(*CurrentNode);
      v10 = 0;
      v12 = (unsigned __int16 *)(v11 & -(__int64)IsNodeInitialized);
      while ( 1 )
      {
        v13 = *((_DWORD *)v12 + 30);
        if ( v10 >= v13 )
          break;
        result = ExpPartitionCreatePoolInternal(a1, 1, 16, (_DWORD)v12, v7, v10);
        if ( (int)result < 0 )
          goto LABEL_20;
        ++v10;
      }
      v15 = 0;
      if ( KeNumberNodes )
      {
        v18 = (2 * (*v12 & 0x7Fu)) | 1LL;
        do
        {
          if ( v15 != *v12 )
          {
            for ( i = 0; i < v13; ++i )
            {
              if ( KeIsNodeInitialized(v15) )
                v17 = (unsigned __int16 *)KeNodeBlock[v15];
              else
                v17 = 0LL;
              *(_QWORD *)(*(_QWORD *)(a1 + 8)
                        + 8LL * (i + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] * (v7 + 8 * *v17))) = v18;
              KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v15) + 16LL), 0, 0);
              v13 = *((_DWORD *)v12 + 30);
            }
          }
          ++v15;
        }
        while ( v15 < (unsigned __int16)KeNumberNodes );
        v4 = a4;
      }
      *v4 = v7;
      return 0LL;
    }
  }
  v7 = 8;
  result = 3221225495LL;
LABEL_20:
  if ( v7 != 8 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 24), v7);
  return result;
}
