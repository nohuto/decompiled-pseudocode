/*
 * XREFs of RtlpInitializeUCRIndex @ 0x18006C558
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x18000C750 (RtlpPerformHeapMaintenance.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x18006CAA0 (RtlpHeapAddListEntry.c)
 *     RtlpAllocateListLookup @ 0x18006CBB0 (RtlpAllocateListLookup.c)
 */

__int64 __fastcall RtlpInitializeUCRIndex(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 i; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8

  v1 = a1 + 240;
  result = RtlpAllocateListLookup(a1, a1 + 240, *(_DWORD *)(a1 + 148) >> 8);
  v4 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 320) = result;
    for ( i = *(_QWORD *)(v1 + 8); v1 != i; i = *(_QWORD *)(i + 8) )
    {
      v7 = v4;
      v6 = *(_QWORD *)(i + 40) >> 12;
      while ( 1 )
      {
        v8 = *(unsigned int *)(v7 + 8);
        if ( v6 < v8 )
          break;
        if ( !*(_QWORD *)v7 )
        {
          LODWORD(v6) = v8 - 1;
          break;
        }
        v7 = *(_QWORD *)v7;
      }
      result = RtlpHeapAddListEntry(a1, v7, 0, i, v6, *(_QWORD *)(i + 40));
    }
  }
  return result;
}
