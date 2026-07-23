/*
 * XREFs of RtlpTpIoAlloc @ 0x1800B585C
 * Callers:
 *     RtlpTpIoLookup @ 0x1800B4A00 (RtlpTpIoLookup.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800389D0 (TppPoolpReferenceGlobalPool.c)
 *     TpBindFileToDirect @ 0x180085924 (TpBindFileToDirect.c)
 *     TppGetCurrentThreadNumaNode @ 0x180086D00 (TppGetCurrentThreadNumaNode.c)
 *     TpDereferenceGlobalPool @ 0x180087770 (TpDereferenceGlobalPool.c)
 */

__int64 __fastcall RtlpTpIoAlloc(_QWORD *a1, __int64 a2, _PEB_LDR_DATA *a3)
{
  volatile signed __int32 *v6; // rsi
  __int64 v7; // rdx
  char *Heap_0; // rdi
  int v9; // ebx
  _DWORD *v10; // r14
  char *v11; // r15
  volatile signed __int32 *v13; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( Heap_0 )
  {
    v9 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock, &v13);
    if ( v9 < 0 )
    {
      v6 = v13;
    }
    else
    {
      *(_QWORD *)Heap_0 = a2;
      *((_QWORD *)Heap_0 + 8) = RtlpTpIoCallback;
      v10 = Heap_0 + 72;
      v11 = Heap_0 + 76;
      v6 = v13;
      if ( v13 )
      {
        TppGetCurrentThreadNumaNode((__int64)v13, (int *)Heap_0 + 18, Heap_0 + 76, 0LL);
      }
      else
      {
        *v10 = 0;
        *v11 = 0;
      }
      *((_QWORD *)Heap_0 + 5) = 0LL;
      *((_QWORD *)Heap_0 + 7) = Heap_0 + 48;
      *((_QWORD *)Heap_0 + 6) = Heap_0 + 48;
      *((_QWORD *)Heap_0 + 1) = TppDirectTaskVFuncs;
      *((_DWORD *)Heap_0 + 4) = *v10;
      Heap_0[20] = *v11;
      *((_QWORD *)Heap_0 + 10) = v6;
      v9 = TpBindFileToDirect(a3, (__int64)(Heap_0 + 8), (__int64)v6);
      if ( v9 >= 0 )
      {
        ++*((_DWORD *)Heap_0 + 22);
        *((_QWORD *)Heap_0 + 12) = Heap_0 + 96;
        *((_QWORD *)Heap_0 + 13) = 0LL;
        *((_QWORD *)Heap_0 + 14) = 0LL;
        *a1 = Heap_0;
        v9 = 0;
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  if ( v9 < 0 )
  {
    if ( v6 )
      TpDereferenceGlobalPool((__int64)v6, v7);
    if ( Heap_0 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  }
  return (unsigned int)v9;
}
