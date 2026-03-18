/*
 * XREFs of RtlFindFirstRunClear @ 0x14048F1D0
 * Callers:
 *     PnprMirrorMarkedPages @ 0x140BF1F18 (PnprMirrorMarkedPages.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  unsigned int SizeOfBitMap; // r11d
  ULONG v3; // r8d
  unsigned int *Buffer; // rdi
  ULONG v6; // r10d
  unsigned int *v7; // rdx
  unsigned int v8; // ebx
  unsigned int *v9; // rax
  unsigned __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  ULONG v13; // r9d
  int v14; // eax
  unsigned __int64 i; // rax
  unsigned int *v16; // rax
  unsigned int v17; // r10d
  unsigned int v18; // edx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v3 = 0;
  if ( BitMapHeader->SizeOfBitMap )
  {
    Buffer = BitMapHeader->Buffer;
    v6 = 0;
    v7 = Buffer;
    v8 = *Buffer;
    v9 = Buffer + 1;
    v10 = (unsigned __int64)&Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
    while ( 1 )
    {
      v11 = ~v8;
      if ( v11 )
        break;
      if ( (unsigned __int64)v9 > v10 )
        goto LABEL_17;
      ++v7;
      ++v9;
      v8 = *v7;
    }
    _BitScanForward64((unsigned __int64 *)&v12, v11);
    v13 = v12 + 32 * (v7 - Buffer);
    if ( v13 > SizeOfBitMap )
    {
LABEL_17:
      v13 = SizeOfBitMap;
      goto LABEL_15;
    }
    v14 = 1 << v12;
    LODWORD(v12) = 32;
    for ( i = ~(v11 | (v14 - 1)); !(_DWORD)i; i = *v16 )
    {
      v6 += 32;
      v16 = v7 + 1;
      if ( (unsigned __int64)(v7 + 1) > v10 )
        goto LABEL_12;
      ++v7;
    }
    _BitScanForward64((unsigned __int64 *)&v12, i);
LABEL_12:
    v17 = SizeOfBitMap;
    v18 = v12 + 32 * (v7 - Buffer);
    if ( v18 <= SizeOfBitMap )
      v17 = v18;
    v6 = v17 - v13;
LABEL_15:
    v3 = v6;
  }
  else
  {
    v13 = 0;
  }
  *StartingIndex = v13;
  return v3;
}
