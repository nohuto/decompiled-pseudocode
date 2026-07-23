/*
 * XREFs of LdrpAllocateTls @ 0x180076CB0
 * Callers:
 *     LdrpInitializeTls @ 0x180073B08 (LdrpInitializeTls.c)
 *     LdrpInitializeThread @ 0x1800CCB30 (LdrpInitializeThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     LdrpGetNewTlsVector @ 0x180076F24 (LdrpGetNewTlsVector.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 LdrpAllocateTls()
{
  struct _TEB *v0; // rsi
  void **NewTlsVector; // rsi
  _UNKNOWN **v2; // r13
  _UNKNOWN **v3; // r15
  const void **v4; // r14
  size_t v5; // r12
  char v6; // cl
  unsigned int v7; // edi
  __int64 v8; // rbx
  PVOID Heap_0; // rax
  _QWORD *v10; // rcx
  _QWORD *p_ThreadLocalStoragePointer; // rax
  void **v13; // rbx
  __int64 v14; // r14
  struct _TEB *v15; // [rsp+70h] [rbp-48h]
  unsigned int SizeOfBitMap; // [rsp+C8h] [rbp+10h]

  v0 = NtCurrentTeb();
  v15 = v0;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  if ( LdrpTlsBitmap.SizeOfBitMap )
  {
    NewTlsVector = (void **)LdrpGetNewTlsVector(LdrpTlsBitmap.SizeOfBitMap);
    if ( NewTlsVector )
    {
      v2 = (_UNKNOWN **)LdrpTlsList;
      while ( 1 )
      {
        if ( v2 == &LdrpTlsList )
        {
          p_ThreadLocalStoragePointer = &v15->ThreadLocalStoragePointer;
          goto LABEL_12;
        }
        v3 = v2;
        v2 = (_UNKNOWN **)*v2;
        v4 = (const void **)(v3 + 2);
        v5 = v3[3] - v3[2];
        v6 = ((*((_DWORD *)v3 + 13) >> 20) & 0xF) - 1;
        if ( (*((_DWORD *)v3 + 13) & 0xF00000) == 0 )
          v6 = (*((_DWORD *)v3 + 13) >> 20) & 0xF;
        v7 = 1 << v6;
        if ( (unsigned int)(1 << v6) < 0x10 )
          v7 = 16;
        v8 = v7 - 1;
        Heap_0 = RtlAllocateHeap_0(LdrpTlsHeap, NtdllBaseTag + 786432, v8 + v5 + 1);
        if ( !Heap_0 )
          break;
        v10 = (_QWORD *)(~v8 & ((unsigned __int64)Heap_0 + v7));
        *(v10 - 1) = Heap_0;
        NewTlsVector[*((unsigned int *)v3 + 16)] = v10;
        memmove(v10, *v4, v5);
        LdrpLogInternal(
          "minkernel\\ldr\\ldrtls.c",
          963,
          (__int64)"LdrpAllocateTls",
          2,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          NewTlsVector,
          *((_DWORD *)v3 + 16),
          *((_DWORD *)v3 + 6) - (unsigned int)*v4,
          *v4,
          NewTlsVector[*((unsigned int *)v3 + 16)]);
      }
      RtlReleaseSRWLockShared(&LdrpTlsLock);
      v13 = NewTlsVector;
      v14 = SizeOfBitMap;
      do
      {
        if ( *v13 )
          RtlFreeHeap_0(LdrpTlsHeap, 0, *((PVOID *)*v13 - 1));
        ++v13;
        --v14;
      }
      while ( v14 );
      RtlFreeHeap_0(LdrpTlsHeap, 0, NewTlsVector - 2);
      return 3221225495LL;
    }
    else
    {
      RtlReleaseSRWLockShared(&LdrpTlsLock);
      return 3221225495LL;
    }
  }
  else
  {
    NewTlsVector = &v0->ThreadLocalStoragePointer;
    p_ThreadLocalStoragePointer = NewTlsVector;
LABEL_12:
    *p_ThreadLocalStoragePointer = NewTlsVector;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
}
