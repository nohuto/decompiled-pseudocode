/*
 * XREFs of RtlAddSIDToBoundaryDescriptorEx @ 0x1800CE610
 * Callers:
 *     RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800CDD20 (RtlAddIntegrityLabelToBoundaryDescriptor.c)
 *     RtlAddSIDToBoundaryDescriptor @ 0x1800CE600 (RtlAddSIDToBoundaryDescriptor.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlLengthRequiredSid @ 0x1800CE750 (RtlLengthRequiredSid.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1800CE770 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlAddSIDToBoundaryDescriptorEx(__int64 a1, _BYTE *a2, char a3)
{
  int v6; // eax
  _DWORD *v7; // rbp
  unsigned int v8; // esi
  _DWORD *Heap_0; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rbx
  unsigned int v12; // eax
  int v13; // ebx
  __int64 result; // rax

  if ( !RtlValidSid(a2) )
    return 3221225485LL;
  v6 = RtlLengthRequiredSid((unsigned __int8)a2[1]);
  v7 = *(_DWORD **)a1;
  v8 = (v6 + 15) & 0xFFFFFFF8;
  if ( v8 + *(_DWORD *)(*(_QWORD *)a1 + 8LL) < v8 )
    return 3221225843LL;
  Heap_0 = (_DWORD *)RtlAllocateHeap_0();
  v10 = Heap_0;
  if ( !Heap_0 )
    return 3221225626LL;
  memmove(Heap_0, v7, (unsigned int)v7[2]);
  v10[2] = v8 + v7[2];
  v10[1] = v7[1] + 1;
  v11 = (unsigned int)v7[2];
  *(_DWORD *)((char *)v10 + v11) = (a3 != 0) + 2;
  *(_DWORD *)((char *)v10 + v11 + 4) = v8;
  v12 = RtlLengthRequiredSid((unsigned __int8)a2[1]);
  memmove((char *)v10 + v11 + 8, a2, v12);
  v13 = RtlEnumerateBoundaryDescriptorEntries(v10);
  if ( v13 < 0 )
  {
    RtlFreeHeap_0();
    return (unsigned int)v13;
  }
  else
  {
    RtlpSysVolFree((__int64)v7);
    result = 0LL;
    *(_QWORD *)a1 = v10;
  }
  return result;
}
