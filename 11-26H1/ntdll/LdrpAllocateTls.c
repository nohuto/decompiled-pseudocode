/*
 * XREFs of LdrpAllocateTls @ 0x18007F910
 * Callers:
 *     LdrpInitializeTls @ 0x18009299C (LdrpInitializeTls.c)
 *     LdrpInitializeThread @ 0x1800CF3C0 (LdrpInitializeThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     LdrpGetNewTlsVector @ 0x18007FB84 (LdrpGetNewTlsVector.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 *     memmove @ 0x180164700 (memmove.c)
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
  __int64 Heap_0; // rax
  _QWORD *v9; // rcx
  _QWORD *p_ThreadLocalStoragePointer; // rax
  void **v12; // rbx
  __int64 v13; // r14
  struct _TEB *v14; // [rsp+70h] [rbp-48h]
  unsigned int v15; // [rsp+C8h] [rbp+10h]

  v0 = NtCurrentTeb();
  v14 = v0;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v15 = LdrpTlsBitmap;
  if ( LdrpTlsBitmap )
  {
    NewTlsVector = (void **)LdrpGetNewTlsVector((unsigned int)LdrpTlsBitmap);
    if ( NewTlsVector )
    {
      v2 = (_UNKNOWN **)LdrpTlsList;
      while ( 1 )
      {
        if ( v2 == &LdrpTlsList )
        {
          p_ThreadLocalStoragePointer = &v14->ThreadLocalStoragePointer;
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
        Heap_0 = RtlAllocateHeap_0();
        if ( !Heap_0 )
          break;
        v9 = (_QWORD *)(~(unsigned __int64)(v7 - 1) & (Heap_0 + v7));
        *(v9 - 1) = Heap_0;
        NewTlsVector[*((unsigned int *)v3 + 16)] = v9;
        memmove(v9, *v4, v5);
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrtls.c",
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
      v12 = NewTlsVector;
      v13 = v15;
      do
      {
        if ( *v12 )
          RtlFreeHeap_0();
        ++v12;
        --v13;
      }
      while ( v13 );
      RtlFreeHeap_0();
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
