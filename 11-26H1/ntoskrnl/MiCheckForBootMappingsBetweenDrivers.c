/*
 * XREFs of MiCheckForBootMappingsBetweenDrivers @ 0x140CFA720
 * Callers:
 *     MiInitializeDriverPtes @ 0x140CFAA44 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 */

int __fastcall MiCheckForBootMappingsBetweenDrivers(__int64 a1)
{
  ULONG v1; // ebx
  _RTL_BITMAP *v2; // rsi
  __int64 v4; // rax
  int v5; // r9d
  ULONG v6; // ebp
  int v7; // edx
  int v8; // r11d
  ULONG v9; // r10d
  __int64 v10; // r14
  ULONG v11; // r15d
  _QWORD *v12; // rdx
  __int64 i; // r8
  unsigned __int64 v14; // rbx
  unsigned int SizeOfBitMap; // edx
  ULONG v16; // r8d
  __int64 *v17; // rdx
  unsigned int j; // ecx

  v1 = 0;
  v2 = (_RTL_BITMAP *)(a1 + 16);
  while ( 2 )
  {
    LODWORD(v4) = RtlFindClearBits(v2, 1u, v1);
    v5 = v4;
    if ( (unsigned int)v4 < v1 || (_DWORD)v4 == -1 )
      return v4;
    v6 = v4 + 1;
    v7 = v2->SizeOfBitMap - 1;
    v8 = ((__int64)v2->Buffer & 4) != 0LL ? 0x20 : 0;
    v9 = v6 < v2->SizeOfBitMap ? v6 : 0;
    v10 = (__int64)v2->Buffer - (((__int64)v2->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v11 = v8 + v7;
      if ( v7 - v9 == -1 )
        goto LABEL_6;
      v12 = (_QWORD *)(v10 + 8 * ((unsigned __int64)(v8 + v9) >> 6));
      for ( i = ~*v12 | ((1LL << ((unsigned __int8)v8 + (unsigned __int8)v9)) - 1); i == -1; i = ~*v12 )
      {
        if ( (unsigned __int64)++v12 > v10 + 8 * ((unsigned __int64)v11 >> 6) )
          goto LABEL_6;
      }
      _BitScanForward64(&v14, ~i);
      v1 = ((unsigned int)(((__int64)v12 - v10) >> 3) << 6) + v14;
      if ( v1 > v11 )
      {
LABEL_6:
        v1 = -1;
        goto LABEL_13;
      }
      if ( v1 != -1 )
        break;
LABEL_13:
      if ( !v9 )
        goto LABEL_18;
      SizeOfBitMap = v4 + 2;
      if ( (unsigned int)(v4 + 2) > v2->SizeOfBitMap )
        SizeOfBitMap = v2->SizeOfBitMap;
      v7 = SizeOfBitMap - 1;
      v9 = 0;
    }
    v1 -= v8;
LABEL_18:
    if ( v1 < v6 || v1 == -1 )
      v1 = v2->SizeOfBitMap;
    v4 = *(_QWORD *)(a1 + 8);
    v16 = v1 - v5;
    v17 = (__int64 *)(v4 + 8LL * (unsigned int)(16 * v5));
LABEL_22:
    if ( !v16 )
    {
      if ( v1 >= v2->SizeOfBitMap )
        return v4;
      continue;
    }
    break;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= 0x10 )
    {
      v17 = (__int64 *)((unsigned __int64)(v17 + 15) & 0xFFFFFFFFFFFFFF80uLL);
      --v16;
      goto LABEL_22;
    }
    v4 = *v17;
    if ( *v17 )
      break;
    ++v17;
  }
  *(_DWORD *)(a1 + 36) |= 2u;
  return v4;
}
