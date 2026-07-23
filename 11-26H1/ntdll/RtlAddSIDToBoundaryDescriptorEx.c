/*
 * XREFs of RtlAddSIDToBoundaryDescriptorEx @ 0x1800CBD80
 * Callers:
 *     RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800CB490 (RtlAddIntegrityLabelToBoundaryDescriptor.c)
 *     RtlAddSIDToBoundaryDescriptor @ 0x1800CBD70 (RtlAddSIDToBoundaryDescriptor.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlLengthRequiredSid @ 0x1800CBEC0 (RtlLengthRequiredSid.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1800CBEE0 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlAddSIDToBoundaryDescriptorEx(__int64 a1, unsigned __int8 *a2, char a3)
{
  ULONG v6; // eax
  _DWORD *v7; // rbp
  unsigned int v8; // esi
  unsigned int v9; // eax
  _DWORD *Heap_0; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rbx
  ULONG v13; // eax
  int v14; // ebx
  __int64 result; // rax

  if ( !RtlValidSid(a2) )
    return 3221225485LL;
  v6 = RtlLengthRequiredSid(a2[1]);
  v7 = *(_DWORD **)a1;
  v8 = (v6 + 15) & 0xFFFFFFF8;
  v9 = v8 + *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v9 < v8 )
    return 3221225843LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v9);
  v11 = Heap_0;
  if ( !Heap_0 )
    return 3221225626LL;
  memmove(Heap_0, v7, (unsigned int)v7[2]);
  v11[2] = v8 + v7[2];
  v11[1] = v7[1] + 1;
  v12 = (unsigned int)v7[2];
  *(_DWORD *)((char *)v11 + v12) = (a3 != 0) + 2;
  *(_DWORD *)((char *)v11 + v12 + 4) = v8;
  v13 = RtlLengthRequiredSid(a2[1]);
  memmove((char *)v11 + v12 + 8, a2, v13);
  v14 = RtlEnumerateBoundaryDescriptorEntries(v11);
  if ( v14 < 0 )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v11);
    return (unsigned int)v14;
  }
  else
  {
    RtlpSysVolFree(v7);
    result = 0LL;
    *(_QWORD *)a1 = v11;
  }
  return result;
}
