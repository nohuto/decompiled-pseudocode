/*
 * XREFs of TppPoolUpdateNodeRelation @ 0x18002A708
 * Callers:
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 *     TpAllocPoolInternal @ 0x1800655CC (TpAllocPoolInternal.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtQuerySystemInformationEx @ 0x180161D10 (NtQuerySystemInformationEx.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TppPoolUpdateNodeRelation(__int64 a1)
{
  unsigned __int64 Heap_0; // rbx
  unsigned int i; // esi
  int v4; // eax
  unsigned int v5; // edi
  int v6; // edi
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r11
  unsigned __int16 j; // r10
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp-18h]
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0;
  Heap_0 = 0LL;
  for ( i = 0; ; i = v13 )
  {
    v14 = 6;
    v4 = NtQuerySystemInformationEx(107LL, &v14, 4LL, Heap_0, i, &v13, v12);
    v5 = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741820 )
      goto LABEL_13;
    if ( Heap_0 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), Heap_0);
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, v13);
    if ( !Heap_0 )
      return (unsigned int)-1073741801;
  }
  v6 = TppMaximumGroups;
  memset_thunk_772440563353939046(
    *(void **)(a1 + 48),
    0,
    16 * (unsigned int)TppNumberNodes * (unsigned __int64)(unsigned int)TppMaximumGroups);
  v7 = Heap_0;
  v8 = Heap_0 + i;
  if ( Heap_0 < v8 )
  {
    do
    {
      for ( j = 0;
            j < *(_WORD *)(v7 + 30);
            *(_OWORD *)(*(_QWORD *)(a1 + 48)
                      + 16LL * (v6 * *(_DWORD *)(v7 + 8) + (unsigned int)*(unsigned __int16 *)(v7 + 16 * (v10 + 2) + 8))) = *(_OWORD *)(v7 + 16LL * (unsigned int)v10 + 32) )
      {
        v10 = j++;
      }
      v7 += *(unsigned int *)(v7 + 4);
    }
    while ( v7 < v8 );
  }
  v5 = 0;
LABEL_13:
  if ( Heap_0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), Heap_0);
  return v5;
}
