/*
 * XREFs of LdrpAcquireTlsIndex @ 0x180072CBC
 * Callers:
 *     LdrpAllocateTlsEntry @ 0x180079130 (LdrpAllocateTlsEntry.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlFindClearBitsAndSet @ 0x180072E40 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x1800733C0 (RtlClearBits.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpAcquireTlsIndex(ULONG *a1, _BYTE *a2)
{
  unsigned __int64 SizeOfBitMap; // rbx
  ULONG ClearBitsAndSet; // eax
  unsigned int *Heap_0; // rax
  unsigned int *v8; // r14

  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  if ( !LdrpTlsBitmap.SizeOfBitMap )
  {
    LdrpTlsBitmap.SizeOfBitMap = 8;
    LdrpTlsBitmap.Buffer = (unsigned int *)&LdrpStaticTlsBitmapVector;
    LdrpActualBitmapSize = 1LL;
    goto LABEL_7;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&LdrpTlsBitmap, 1u, 0);
  if ( ClearBitsAndSet != -1 )
  {
    *a1 = ClearBitsAndSet;
    *a2 = 0;
    return 0LL;
  }
  if ( ((unsigned __int64)(LdrpTlsBitmap.SizeOfBitMap + 8) + 31) >> 5 <= LdrpActualBitmapSize )
  {
    LdrpTlsBitmap.SizeOfBitMap += 8;
LABEL_7:
    RtlClearBits(&LdrpTlsBitmap, SizeOfBitMap + 1, 7u);
    *((_BYTE *)LdrpTlsBitmap.Buffer + (SizeOfBitMap >> 3)) |= 1 << (SizeOfBitMap & 7);
    *a1 = SizeOfBitMap;
    *a2 = 1;
    return 0LL;
  }
  Heap_0 = (unsigned int *)RtlAllocateHeap_0(
                             LdrpTlsHeap,
                             NtdllBaseTag + 786432,
                             4 * (((unsigned __int64)(unsigned int)(SizeOfBitMap + 8) + 31) >> 5));
  v8 = Heap_0;
  if ( Heap_0 )
  {
    LdrpActualBitmapSize = ((unsigned __int64)(unsigned int)(SizeOfBitMap + 8) + 31) >> 5;
    memmove(Heap_0, LdrpTlsBitmap.Buffer, (unsigned __int64)(unsigned int)(SizeOfBitMap + 7) >> 3);
    if ( (_UNKNOWN *)LdrpTlsBitmap.Buffer != &LdrpStaticTlsBitmapVector )
      RtlFreeHeap_0(LdrpTlsHeap, 0, LdrpTlsBitmap.Buffer);
    LdrpTlsBitmap.SizeOfBitMap = SizeOfBitMap + 8;
    LdrpTlsBitmap.Buffer = v8;
    goto LABEL_7;
  }
  return 3221225495LL;
}
