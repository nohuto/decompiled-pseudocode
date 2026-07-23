/*
 * XREFs of RtlNumberOfSetBitsInRange @ 0x1404F6BA0
 * Callers:
 *     RtlNumberOfClearBitsInRange @ 0x14061BBD0 (RtlNumberOfClearBitsInRange.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1407BF3D8 (KiTpIsExcludedKernelTracepointLocation.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBitsInRange(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  ULONG v4; // r9d
  char *v5; // r8
  ULONG v6; // r11d
  __int64 v7; // rdi
  ULONG v8; // esi
  ULONG v9; // r10d
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char v13; // dl
  int v14; // edx
  unsigned __int8 v15; // cl
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // cl

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return -1;
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return -1;
  v4 = 0;
  if ( !Length )
    return -1;
  v5 = (char *)BitMapHeader->Buffer + (StartingIndex >> 3);
  v6 = (Length + StartingIndex - 1) >> 3;
  v7 = StartingIndex & 7;
  v8 = (Length + StartingIndex - 1) & 7;
  v9 = StartingIndex >> 3;
  if ( StartingIndex >> 3 == v6 )
    return *((unsigned __int8 *)RtlpBitsClearTotal
           + (unsigned __int8)~(*v5 & byte_140018470[v7] & byte_1400327C0[v8 + 1]));
  if ( (((unsigned __int8)Length | (unsigned __int8)StartingIndex) & 0x3F) != 0 )
  {
    if ( (StartingIndex & 7) != 0 )
    {
      v13 = *v5++;
      ++v9;
      v4 = *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(v13 & byte_140018470[v7]));
    }
    v14 = 8 - (v9 & 7);
    if ( (v14 & 0xFFFFFFF7) != 0 )
    {
      do
      {
        if ( v9 >= v6 )
          break;
        ++v9;
        v15 = ~*v5++;
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + v15);
        --v14;
      }
      while ( v14 );
    }
    while ( (unsigned __int64)v9 + 8 <= v6 )
    {
      v16 = *(_QWORD *)v5;
      v5 += 8;
      v4 += __popcnt(v16);
      v9 += 8;
    }
    if ( v9 < v6 )
    {
      v17 = v6 - v9;
      do
      {
        v18 = *v5++;
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v18);
        --v17;
      }
      while ( v17 );
    }
    return v4 + *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(*v5 & byte_1400327C0[v8 + 1]));
  }
  else
  {
    v11 = ((Length - 1) >> 6) + 1;
    do
    {
      v12 = *(_QWORD *)v5;
      v5 += 8;
      v4 += __popcnt(v12);
      --v11;
    }
    while ( v11 );
    return v4;
  }
}
