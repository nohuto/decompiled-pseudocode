/*
 * XREFs of TpCallbackSendAlpcMessageOnCompletion @ 0x1800437A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall TpCallbackSendAlpcMessageOnCompletion(__int64 a1, __int64 a2, int a3, unsigned __int16 *a4)
{
  __int64 v8; // rax
  unsigned int v9; // r14d
  void *Heap_0; // rax

  if ( a1 && (v8 = *(_QWORD *)(a1 + 136)) != 0 && *(_QWORD *)(v8 + 272) == a2 && (*(_BYTE *)(a1 + 228) & 1) == 0 )
  {
    v9 = a4[1];
    Heap_0 = (void *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x80000), a4[1]);
    *(_QWORD *)(a1 + 208) = Heap_0;
    if ( Heap_0 )
    {
      memmove(Heap_0, a4, v9);
      *(_QWORD *)(a1 + 216) = a2;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 136) + 280LL));
      *(_DWORD *)(a1 + 228) |= 1u;
      *(_DWORD *)(a1 + 224) = a3 | 0x40000;
      return 0LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
}
