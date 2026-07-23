/*
 * XREFs of RtlpQueryMemoryUsageInformation @ 0x18011E5A4
 * Callers:
 *     RtlQueryHeapInformation @ 0x180076310 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092130 (RtlpQueryExtendedHeapInformation.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryMemoryUsageInformation(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  SIZE_T v7; // rbx
  _QWORD *Heap_0; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rsi
  _BYTE BaseAddress[96]; // [rsp+20h] [rbp-88h] BYREF
  SIZE_T Size; // [rsp+B8h] [rbp+10h] BYREF

  Size = 0LL;
  v7 = 88LL;
  memset_thunk_772440563353939046(BaseAddress, 0, 0x58uLL);
  Heap_0 = BaseAddress;
  if ( a2 && a3 >= 0x28 && *(_WORD *)a2 == 1 )
  {
    while ( 1 )
    {
      memset_thunk_772440563353939046(Heap_0, 0, v7);
      *Heap_0 = -1LL;
      Heap_0[1] = a1;
      *((_DWORD *)Heap_0 + 4) = 2;
      v10 = RtlpQueryExtendedHeapInformation((__int64)Heap_0, v7, &Size);
      v11 = v10;
      if ( v10 >= 0 )
        break;
      if ( v10 != -1073741789 )
        goto LABEL_21;
      if ( Heap_0 != (_QWORD *)BaseAddress )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
      v7 = Size;
      Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, Size);
      if ( !Heap_0 )
      {
        v11 = -1073741670;
        goto LABEL_21;
      }
    }
    if ( a1 )
    {
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_QWORD *)(a2 + 16) = Heap_0[5];
      *(_QWORD *)(a2 + 24) = Heap_0[8];
      *(_QWORD *)(a2 + 32) = Heap_0[7];
      *(_QWORD *)(a2 + 8) = 1LL;
      if ( a4 )
        *a4 = 40LL;
    }
    else
    {
      v12 = *((unsigned int *)Heap_0 + 14);
      v13 = (unsigned int)(24 * v12 + 16);
      if ( a4 )
        *a4 = v13;
      if ( a3 >= v13 )
      {
        *(_QWORD *)(a2 + 8) = v12;
        v14 = v12;
        v15 = Heap_0[8];
        if ( (_DWORD)v12 )
        {
          v16 = (_QWORD *)(a2 + 24);
          v17 = a2 + 16;
          do
          {
            *(_OWORD *)v17 = 0LL;
            *(_QWORD *)(v17 + 16) = 0LL;
            v17 += 24LL;
            *(v16 - 1) = *(_QWORD *)((char *)Heap_0 + v15);
            *v16 = *(_QWORD *)((char *)Heap_0 + v15 + 24);
            v16 += 3;
            *(v16 - 2) = *(_QWORD *)((char *)Heap_0 + v15 + 16);
            v15 = *(_QWORD *)((char *)Heap_0 + v15 + 40);
            --v14;
          }
          while ( v14 );
        }
        v11 = 0;
      }
      else
      {
        v11 = -1073741789;
      }
    }
LABEL_21:
    if ( Heap_0 != (_QWORD *)BaseAddress )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}
