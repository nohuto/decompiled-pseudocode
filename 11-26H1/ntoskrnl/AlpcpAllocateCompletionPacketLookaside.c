/*
 * XREFs of AlpcpAllocateCompletionPacketLookaside @ 0x140A925D0
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x140A918A8 (AlpcpInitializeCompletionList.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140A9232C (AlpcpAssociateIoCompletionPort.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopFreeMiniCompletionPacket @ 0x140A82540 (IopFreeMiniCompletionPacket.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall AlpcpAllocateCompletionPacketLookaside(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _DWORD *Pool2; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rax
  ULONG_PTR *v12; // rsi
  ULONG_PTR v13; // rcx
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v3 = a1;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 24 * v3 + 56);
    v8 = 0LL;
    *(_QWORD *)v7 = 0LL;
    v7[2] = v3;
    *((_QWORD *)v7 + 5) = a2;
    *((_QWORD *)v7 + 6) = a3;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= (unsigned int)v3 )
        return v7;
      v14 = 0LL;
      LOBYTE(v14) = 1;
      v9 = &v7[6 * v8 + 14];
      DWORD2(v14) = 0;
      v9[2] = v7;
      v10 = ExAllocatePool3(64LL, 80LL, 544236361LL, &v14, 1);
      if ( v10 )
      {
        *(_BYTE *)(v10 + 16) = 4;
        *(_QWORD *)(v10 + 56) = AlpcpLookasidePacketCallbackRoutine;
        *(_QWORD *)(v10 + 64) = v9;
        *(_BYTE *)(v10 + 72) = 1;
      }
      v9[1] = v10;
      if ( !v10 )
        break;
      v8 = (unsigned int)(v8 + 1);
      *v9 = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 4) = v9;
    }
    if ( (_DWORD)v8 )
    {
      v12 = (ULONG_PTR *)&v7[6 * v8 + 16];
      do
      {
        v12 -= 3;
        v13 = *v12;
        *(_QWORD *)(v13 + 56) = 0LL;
        IopFreeMiniCompletionPacket(v13);
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}
