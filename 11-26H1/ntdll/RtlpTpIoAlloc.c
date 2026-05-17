/*
 * XREFs of RtlpTpIoAlloc @ 0x1800B833C
 * Callers:
 *     RtlpTpIoLookup @ 0x1800B74E0 (RtlpTpIoLookup.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 *     TpBindFileToDirect @ 0x1800654D4 (TpBindFileToDirect.c)
 *     TppGetCurrentThreadNumaNode @ 0x1800668B0 (TppGetCurrentThreadNumaNode.c)
 *     TpDereferenceGlobalPool @ 0x180067320 (TpDereferenceGlobalPool.c)
 */

__int64 __fastcall RtlpTpIoAlloc(__int64 *a1, __int64 a2, _PEB_LDR_DATA *a3)
{
  volatile signed __int32 *v6; // rsi
  __int64 v7; // rdx
  __int64 Heap_0; // rdi
  __int64 v9; // r8
  int v10; // ebx
  _DWORD *v11; // r14
  _BYTE *v12; // r15
  volatile signed __int32 *v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v14 = 0LL;
  Heap_0 = RtlAllocateHeap_0();
  if ( Heap_0 )
  {
    v10 = TppPoolpReferenceGlobalPool((volatile signed __int32 **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock, &v14);
    if ( v10 < 0 )
    {
      v6 = v14;
    }
    else
    {
      *(_QWORD *)Heap_0 = a2;
      *(_QWORD *)(Heap_0 + 64) = RtlpTpIoCallback;
      v11 = (_DWORD *)(Heap_0 + 72);
      v12 = (_BYTE *)(Heap_0 + 76);
      v6 = v14;
      if ( v14 )
      {
        TppGetCurrentThreadNumaNode((__int64)v14, (int *)(Heap_0 + 72), (_BYTE *)(Heap_0 + 76), 0LL);
      }
      else
      {
        *v11 = 0;
        *v12 = 0;
      }
      *(_QWORD *)(Heap_0 + 40) = 0LL;
      *(_QWORD *)(Heap_0 + 56) = Heap_0 + 48;
      *(_QWORD *)(Heap_0 + 48) = Heap_0 + 48;
      *(_QWORD *)(Heap_0 + 8) = TppDirectTaskVFuncs;
      *(_DWORD *)(Heap_0 + 16) = *v11;
      *(_BYTE *)(Heap_0 + 20) = *v12;
      *(_QWORD *)(Heap_0 + 80) = v6;
      v10 = TpBindFileToDirect(a3, Heap_0 + 8, (__int64)v6);
      if ( v10 >= 0 )
      {
        ++*(_DWORD *)(Heap_0 + 88);
        *(_QWORD *)(Heap_0 + 96) = Heap_0 + 96;
        *(_QWORD *)(Heap_0 + 104) = 0LL;
        *(_QWORD *)(Heap_0 + 112) = 0LL;
        *a1 = Heap_0;
        v10 = 0;
      }
    }
  }
  else
  {
    v10 = -1073741801;
  }
  if ( v10 < 0 )
  {
    if ( v6 )
      TpDereferenceGlobalPool((__int64)v6, v7, v9);
    if ( Heap_0 )
      RtlFreeHeap_0();
  }
  return (unsigned int)v10;
}
