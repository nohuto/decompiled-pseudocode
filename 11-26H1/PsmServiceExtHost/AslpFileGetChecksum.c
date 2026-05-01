/*
 * XREFs of AslpFileGetChecksum @ 0x18009B594
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x18009B668 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetChecksum(unsigned int *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  _DWORD *v6; // rcx
  unsigned __int64 i; // rdx
  unsigned int v8; // r8d
  char v9; // al

  v3 = 512;
  v4 = 4096;
  v5 = 0;
  if ( *(_QWORD *)(a2 + 16) >= 0x1000uLL )
  {
    if ( *(_QWORD *)(a2 + 16) < 0x1200uLL )
      v3 = *(_DWORD *)(a2 + 16) - 4096;
  }
  else
  {
    v3 = 0;
    v4 = *(_DWORD *)(a2 + 16);
  }
  if ( v4 >= 4 )
  {
    v6 = (_DWORD *)(*(_QWORD *)(a2 + 24) + v3);
    for ( i = 0LL; i < (unsigned __int64)v4 >> 2; ++i )
    {
      v8 = *v6++ + v5;
      v9 = v8;
      v5 = v8 >> 1;
      if ( (v9 & 1) != 0 )
        v5 |= 0x80000000;
    }
  }
  *a1 = v5;
  return 0LL;
}
