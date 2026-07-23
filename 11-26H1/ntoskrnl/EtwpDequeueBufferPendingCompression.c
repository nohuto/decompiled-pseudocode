/*
 * XREFs of EtwpDequeueBufferPendingCompression @ 0x1406CBFA4
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x1406CBD3C (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x14021A2DC (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14021B348 (EtwpLockBufferList.c)
 *     EtwpDequeueBufferPendingCompressionFromQueue @ 0x1406CC0A8 (EtwpDequeueBufferPendingCompressionFromQueue.c)
 *     EtwpDisableCompression @ 0x1406CC118 (EtwpDisableCompression.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpDequeueBufferPendingCompression(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rdi
  ULONG_PTR v5; // rcx
  __int64 Pool2; // rax
  __int64 v7; // rsi
  unsigned __int8 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 1448);
  v8 = 0;
  if ( v1 )
  {
    *(_QWORD *)(a1 + 1448) = *v1;
    v3 = v1 - 4;
    if ( !v3 )
    {
LABEL_3:
      EtwpDisableCompression(a1);
      return 0LL;
    }
  }
  else
  {
    v5 = 256LL;
    if ( *(_DWORD *)(a1 + 300) != 1 )
      v5 = 64LL;
    Pool2 = ExAllocatePool2(v5);
    v3 = (_QWORD *)Pool2;
    if ( !Pool2 )
      goto LABEL_3;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 44) = 6;
  }
  EtwpLockBufferList(a1, &v8);
  v7 = EtwpDequeueBufferPendingCompressionFromQueue(a1 + 64, a1 + 228, v3);
  if ( !v7 )
    v7 = EtwpDequeueBufferPendingCompressionFromQueue(a1 + 48, a1 + 228, v3);
  EtwpUnlockBufferList(a1, &v8);
  if ( !v7 )
  {
    v3[4] = *(_QWORD *)(a1 + 1448);
    *(_QWORD *)(a1 + 1448) = v3 + 4;
  }
  return v7;
}
