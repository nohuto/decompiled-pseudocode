/*
 * XREFs of EtwpQueueReply @ 0x140A86C10
 * Callers:
 *     EtwpSendNoReplyReply @ 0x1408288A4 (EtwpSendNoReplyReply.c)
 *     EtwpSendReplyDataBlock @ 0x140A86AC0 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     KiInsertQueue @ 0x140267CA0 (KiInsertQueue.c)
 *     EtwpUnreferenceDataBlock @ 0x140939064 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x140939088 (EtwpAllocDataBlock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpQueueReply(__int64 a1, unsigned int *a2)
{
  int v3; // edi
  _QWORD *Pool2; // rax
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v3 = EtwpAllocDataBlock(a2[1], a2, &v7);
  if ( v3 < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    v5 = v7;
    if ( Pool2 )
    {
      Pool2[2] = v7;
      KiInsertQueue(a1, Pool2, 0LL, 0);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
      EtwpUnreferenceDataBlock(v5);
    }
  }
  return (unsigned int)v3;
}
