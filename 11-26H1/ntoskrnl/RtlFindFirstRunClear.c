/*
 * XREFs of RtlFindFirstRunClear @ 0x1404895E0
 * Callers:
 *     PnprMirrorMarkedPages @ 0x140BF7F18 (PnprMirrorMarkedPages.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  unsigned int SizeOfBitMap; // r10d
  ULONG v3; // r8d
  unsigned int *Buffer; // rdi
  unsigned int *v6; // rdx
  unsigned int v7; // r11d
  unsigned int *v8; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // r11d
  __int64 v11; // rcx
  ULONG v12; // r9d
  unsigned __int64 i; // rax
  unsigned int *v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // edx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v3 = 0;
  if ( BitMapHeader->SizeOfBitMap )
  {
    Buffer = BitMapHeader->Buffer;
    v6 = Buffer;
    v7 = *Buffer;
    v8 = Buffer + 1;
    v9 = (unsigned __int64)&Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
    while ( 1 )
    {
      v10 = ~v7;
      if ( v10 )
        break;
      if ( (unsigned __int64)v8 > v9 )
        goto LABEL_17;
      ++v6;
      ++v8;
      v7 = *v6;
    }
    _BitScanForward64((unsigned __int64 *)&v11, v10);
    v12 = v11 + 32 * (v6 - Buffer);
    if ( v12 > SizeOfBitMap )
    {
LABEL_17:
      v12 = SizeOfBitMap;
      goto LABEL_15;
    }
    for ( i = ~(v10 | ((1 << v11) - 1)); ; i = *v14 )
    {
      if ( (_DWORD)i )
      {
        _BitScanForward64(&i, i);
        goto LABEL_12;
      }
      v14 = v6 + 1;
      if ( (unsigned __int64)(v6 + 1) > v9 )
        break;
      ++v6;
    }
    LODWORD(i) = 32;
LABEL_12:
    v15 = SizeOfBitMap;
    v16 = i + 32 * (v6 - Buffer);
    if ( v16 <= SizeOfBitMap )
      v15 = v16;
    v3 = v15 - v12;
  }
  else
  {
    v12 = 0;
  }
LABEL_15:
  *StartingIndex = v12;
  return v3;
}
