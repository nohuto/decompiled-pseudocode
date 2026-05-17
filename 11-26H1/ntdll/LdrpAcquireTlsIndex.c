/*
 * XREFs of LdrpAcquireTlsIndex @ 0x180093AEC
 * Callers:
 *     LdrpAllocateTlsEntry @ 0x180081D90 (LdrpAllocateTlsEntry.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlFindClearBitsAndSet @ 0x180093C70 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x1800941F0 (RtlClearBits.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpAcquireTlsIndex(_DWORD *a1, _BYTE *a2)
{
  unsigned __int64 v2; // rbx
  int ClearBitsAndSet; // eax
  void *Heap_0; // rax
  void *v8; // r14

  v2 = (unsigned int)LdrpTlsBitmap;
  if ( !LdrpTlsBitmap )
  {
    LdrpTlsBitmap = 8;
    qword_1801CB6C8 = &LdrpStaticTlsBitmapVector;
    LdrpActualBitmapSize = 1LL;
    goto LABEL_7;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&LdrpTlsBitmap, 1LL);
  if ( ClearBitsAndSet != -1 )
  {
    *a1 = ClearBitsAndSet;
    *a2 = 0;
    return 0LL;
  }
  if ( ((unsigned __int64)(unsigned int)(LdrpTlsBitmap + 8) + 31) >> 5 <= LdrpActualBitmapSize )
  {
    LdrpTlsBitmap += 8;
LABEL_7:
    RtlClearBits(&LdrpTlsBitmap, (unsigned int)(v2 + 1), 7LL);
    *((_BYTE *)qword_1801CB6C8 + (v2 >> 3)) |= 1 << (v2 & 7);
    *a1 = v2;
    *a2 = 1;
    return 0LL;
  }
  Heap_0 = (void *)RtlAllocateHeap_0();
  v8 = Heap_0;
  if ( Heap_0 )
  {
    LdrpActualBitmapSize = ((unsigned __int64)(unsigned int)(v2 + 8) + 31) >> 5;
    memmove(Heap_0, qword_1801CB6C8, (unsigned __int64)(unsigned int)(v2 + 7) >> 3);
    if ( qword_1801CB6C8 != &LdrpStaticTlsBitmapVector )
      RtlFreeHeap_0();
    LdrpTlsBitmap = v2 + 8;
    qword_1801CB6C8 = v8;
    goto LABEL_7;
  }
  return 3221225495LL;
}
