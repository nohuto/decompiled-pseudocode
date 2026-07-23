/*
 * XREFs of TppPoolUpdateNodeRelation @ 0x180015808
 * Callers:
 *     TppAdjustRunningThreadGoalWithLock @ 0x18002A1C8 (TppAdjustRunningThreadGoalWithLock.c)
 *     TpAllocPoolInternal @ 0x180085A1C (TpAllocPoolInternal.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtQuerySystemInformationEx @ 0x180161C10 (NtQuerySystemInformationEx.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TppPoolUpdateNodeRelation(__int64 a1)
{
  char *Heap_0; // rbx
  ULONG SystemInformationLength; // esi
  NTSTATUS v4; // eax
  unsigned __int32 v5; // edi
  int v6; // edi
  char *v7; // r9
  char *v8; // r11
  unsigned __int16 i; // r10
  __int64 v10; // rax
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF
  int InputBuffer; // [rsp+60h] [rbp+18h] BYREF

  ReturnLength = 0;
  Heap_0 = 0LL;
  for ( SystemInformationLength = 0; ; SystemInformationLength = ReturnLength )
  {
    InputBuffer = 6;
    v4 = NtQuerySystemInformationEx(
           SystemLogicalProcessorAndGroupInformation,
           &InputBuffer,
           4u,
           Heap_0,
           SystemInformationLength,
           &ReturnLength);
    v5 = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741820 )
      goto LABEL_13;
    if ( Heap_0 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap_0);
    Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, ReturnLength);
    if ( !Heap_0 )
      return (unsigned __int32)-1073741801;
  }
  v6 = TppMaximumGroups;
  memset_thunk_772440563353939046(
    *(void **)(a1 + 48),
    0,
    16 * (unsigned int)TppNumberNodes * (unsigned __int64)(unsigned int)TppMaximumGroups);
  v7 = Heap_0;
  v8 = &Heap_0[SystemInformationLength];
  if ( Heap_0 < v8 )
  {
    do
    {
      for ( i = 0;
            i < *((_WORD *)v7 + 15);
            *(_OWORD *)(*(_QWORD *)(a1 + 48)
                      + 16LL * (v6 * *((_DWORD *)v7 + 2) + (unsigned int)*(unsigned __int16 *)&v7[16 * v10 + 40])) = *(_OWORD *)&v7[16 * (unsigned int)v10 + 32] )
      {
        v10 = i++;
      }
      v7 += *((unsigned int *)v7 + 1);
    }
    while ( v7 < v8 );
  }
  v5 = 0;
LABEL_13:
  if ( Heap_0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap_0);
  return v5;
}
